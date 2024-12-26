#include <tree_sitter/parser.h>

enum TokenType { BASH };

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
  if (valid_symbols[BASH]) {
    lexer->advance(lexer, false);
    lexer->result_symbol = BASH;
    return true;
  }
  return false;
}
