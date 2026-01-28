#include "tree_sitter/parser.h"

enum TokenType { _CONTENT_LINE, _PYTHON_EXPR };

void *tree_sitter_npf_external_scanner_create() { return NULL; }
void tree_sitter_npf_external_scanner_destroy(void *p) {}
void tree_sitter_npf_external_scanner_reset(void *p) {}
unsigned tree_sitter_npf_external_scanner_serialize(void *p, char *buffer) {
  return 0;
}

void tree_sitter_npf_external_scanner_deserialize(void *p, const char *b,
                                                  unsigned n) {}

// Check if character is alphanumeric or underscore/hyphen (valid in identifiers)
static bool is_identifier_char(int32_t c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
         (c >= '0' && c <= '9') || c == '_' || c == '-';
}

// Check if character starts an identifier (must be alphanumeric)
static bool is_identifier_start(int32_t c) {
  return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ||
         (c >= '0' && c <= '9');
}

// Check if the line starts with a tag pattern: identifier[,|identifier]*:
// This DOES consume characters - only call when you're prepared for that
// Returns true if tag pattern found (and characters consumed up to and including :)
// Returns false if not a tag (characters still consumed!)
static bool scan_and_check_tag(TSLexer *lexer, bool *found_tag) {
  *found_tag = false;

  // Must start with alphanumeric
  if (!is_identifier_start(lexer->lookahead)) {
    return false; // Not a tag, didn't consume anything
  }

  // Scan identifier
  while (is_identifier_char(lexer->lookahead)) {
    lexer->advance(lexer, false);
  }

  // After identifier, check for : or , or |
  while (true) {
    if (lexer->lookahead == ':') {
      *found_tag = true;
      return true;
    }
    if (lexer->lookahead == ',' || lexer->lookahead == '|') {
      lexer->advance(lexer, false);
      // Expect another identifier
      if (!is_identifier_start(lexer->lookahead)) {
        return true; // Consumed some chars but not a valid tag
      }
      while (is_identifier_char(lexer->lookahead)) {
        lexer->advance(lexer, false);
      }
      continue;
    }
    // Not : or , or | - not a tag pattern
    return true; // Consumed some chars but not a tag
  }
}

// Try to scan a $(( ... )) Python expression
// Returns true if found, false otherwise
static bool scan_python_expr(TSLexer *lexer) {
  // Check for $((
  if (lexer->lookahead != '$') return false;
  lexer->advance(lexer, false);

  if (lexer->lookahead != '(') return false;
  lexer->advance(lexer, false);

  if (lexer->lookahead != '(') return false;
  lexer->advance(lexer, false);

  // Now consume until we find ))
  int paren_depth = 2;
  while (!lexer->eof(lexer) && lexer->lookahead != 0) {
    if (lexer->lookahead == '(') {
      paren_depth++;
    } else if (lexer->lookahead == ')') {
      paren_depth--;
      if (paren_depth == 0) {
        lexer->advance(lexer, false); // consume final )
        return true;
      }
    } else if (lexer->lookahead == '\n') {
      // Python expr shouldn't span lines in NPF
      return false;
    }
    lexer->advance(lexer, false);
  }
  return false;
}

bool tree_sitter_npf_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  // Check if we should try to scan a Python expression
  if (valid_symbols[_PYTHON_EXPR] && lexer->lookahead == '$') {
    lexer->mark_end(lexer);
    if (scan_python_expr(lexer)) {
      lexer->result_symbol = _PYTHON_EXPR;
      lexer->mark_end(lexer);
      return true;
    }
    // Reset if not a valid Python expr - we'll try content line instead
  }

  // Only proceed with content line if valid
  if (!valid_symbols[_CONTENT_LINE]) {
    return false;
  }

  // Skip blank lines (newlines only)
  while (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    lexer->advance(lexer, true);
  }

  // Check for EOF
  if (lexer->eof(lexer) || lexer->lookahead == 0) {
    return false;
  }

  // Track if line has leading whitespace
  bool has_leading_whitespace = false;
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    has_leading_whitespace = true;
    lexer->advance(lexer, true);
  }

  // Check for EOF after whitespace
  if (lexer->eof(lexer) || lexer->lookahead == 0) {
    return false;
  }

  // Check for another newline (empty line with just whitespace)
  if (lexer->lookahead == '\n' || lexer->lookahead == '\r') {
    // This was a blank line, recurse
    return tree_sitter_npf_external_scanner_scan(payload, lexer, valid_symbols);
  }

  // Check if this is a section header (starts with '%' at column 0)
  // Only treat '%' as section start if there's NO leading whitespace
  if (lexer->lookahead == '%' && !has_leading_whitespace) {
    return false;
  }

  // Check if this is a comment line (starts with //)
  // Let the grammar handle it as line_comment
  if (lexer->lookahead == '/') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == '/') {
      // This is a comment line - don't consume it, let grammar match line_comment
      return false;
    }
    // Not a comment, but we already consumed one '/', so continue as content
    // Mark that we have content
    lexer->result_symbol = _CONTENT_LINE;
    while (lexer->lookahead != '\n' && lexer->lookahead != 0 &&
           !lexer->eof(lexer)) {
      lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);
    return true;
  }

  // Check if this line starts with a tag pattern (identifier[,|identifier]*:)
  // If so, return false to let grammar parse it as tagged_line
  if (is_identifier_start(lexer->lookahead)) {
    bool found_tag = false;
    // Scan ahead to check for tag pattern
    // We consume chars but track if we find a tag
    while (is_identifier_char(lexer->lookahead)) {
      lexer->advance(lexer, false);
    }

    // Check for : or tag separators
    while (lexer->lookahead == ',' || lexer->lookahead == '|') {
      lexer->advance(lexer, false);
      // Skip optional - for negative tags
      if (lexer->lookahead == '-') {
        lexer->advance(lexer, false);
      }
      if (!is_identifier_start(lexer->lookahead)) break;
      while (is_identifier_char(lexer->lookahead)) {
        lexer->advance(lexer, false);
      }
    }

    if (lexer->lookahead == ':') {
      // This is a tag! Return false to let grammar handle it
      return false;
    }

    // Not a tag - we've consumed some chars, continue as content line
    lexer->result_symbol = _CONTENT_LINE;
    while (lexer->lookahead != '\n' && lexer->lookahead != 0 &&
           !lexer->eof(lexer)) {
      // Check for $((
      if (valid_symbols[_PYTHON_EXPR] && lexer->lookahead == '$') {
        lexer->mark_end(lexer);
        lexer->advance(lexer, false);
        if (lexer->lookahead == '(') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == '(') {
            return true;
          }
        }
      } else {
        lexer->advance(lexer, false);
      }
    }
    lexer->mark_end(lexer);
    return true;
  }

  // This is a content line - consume until newline, EOF, or $((
  lexer->result_symbol = _CONTENT_LINE;

  // Consume the rest of the line, but stop before $(( if Python expr is valid
  while (lexer->lookahead != '\n' && lexer->lookahead != 0 &&
         !lexer->eof(lexer)) {
    // Check for potential Python expression start
    if (valid_symbols[_PYTHON_EXPR] && lexer->lookahead == '$') {
      // Mark current position as end of content
      lexer->mark_end(lexer);
      // Peek ahead to see if this is $((
      lexer->advance(lexer, false);
      if (lexer->lookahead == '(') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '(') {
          // This is $(( - stop content line here, let next scan get the Python expr
          return true;
        }
      }
      // Not $(( - continue with content line but we've already advanced
      // Keep going
    } else {
      lexer->advance(lexer, false);
    }
  }

  lexer->mark_end(lexer);
  return true;
}
