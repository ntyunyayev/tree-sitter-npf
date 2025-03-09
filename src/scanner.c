#include <tree_sitter/parser.h>
#include <stdio.h>

enum TokenType { _CONTENT_LINE };

void *tree_sitter_npf_external_scanner_create() { return NULL; }
void tree_sitter_npf_external_scanner_destroy(void *p) {}
void tree_sitter_npf_external_scanner_reset(void *p) {}
unsigned tree_sitter_npf_external_scanner_serialize(void *p, char *buffer) {
  return 0;
}
void tree_sitter_npf_external_scanner_deserialize(void *p, const char *b,
                                                  unsigned n) {}

bool tree_sitter_npf_external_scanner_scan(void *payload, TSLexer *lexer,
                                           const bool *valid_symbols) {
  printf("tree_sitter_npf_external_scanner_scan\n");
  if (!valid_symbols[_CONTENT_LINE])
    return false;

  // Check if the first character is '%'
  if (lexer->lookahead == '%')
    return false;

  lexer->result_symbol = _CONTENT_LINE;
  bool advanced = false;
  lexer->advance(lexer, false); // consume '%'

  // consume characters until '\n' or EOF
  while (lexer->lookahead != '\n' && lexer->lookahead != 0) {
    lexer->advance(lexer, false);
    advanced = true;
  }
  return advanced;
}
