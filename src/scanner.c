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
