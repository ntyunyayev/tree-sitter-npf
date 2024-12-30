#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 2
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_PIPE = 2,
  sym_role = 3,
  sym_options = 4,
  anon_sym_PERCENTscript = 5,
  anon_sym_PERCENTpyexit = 6,
  anon_sym_PERCENTvariables = 7,
  anon_sym_PERCENTlate_variables = 8,
  anon_sym_PERCENTconfig = 9,
  anon_sym_PERCENTinfo = 10,
  anon_sym_LF = 11,
  aux_sym_raw_content_token1 = 12,
  sym_alpha_numeric = 13,
  sym_document = 14,
  sym_section = 15,
  sym_bash_section = 16,
  sym_txt_section = 17,
  sym_python_section = 18,
  sym_tag = 19,
  sym_tags = 20,
  sym_bash_section_names = 21,
  sym_python_section_names = 22,
  sym_txt_section_names = 23,
  sym_bash_section_header = 24,
  sym_txt_section_header = 25,
  sym_python_section_header = 26,
  sym_raw_content = 27,
  aux_sym_document_repeat1 = 28,
  aux_sym_tags_repeat1 = 29,
  aux_sym_raw_content_repeat1 = 30,
  alias_sym_python_content = 31,
  alias_sym_txt_content = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [sym_role] = "role",
  [sym_options] = "options",
  [anon_sym_PERCENTscript] = "%script",
  [anon_sym_PERCENTpyexit] = "%pyexit",
  [anon_sym_PERCENTvariables] = "%variables",
  [anon_sym_PERCENTlate_variables] = "%late_variables",
  [anon_sym_PERCENTconfig] = "%config",
  [anon_sym_PERCENTinfo] = "%info",
  [anon_sym_LF] = "\n",
  [aux_sym_raw_content_token1] = "raw_content_token1",
  [sym_alpha_numeric] = "alpha_numeric",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_bash_section] = "bash_section",
  [sym_txt_section] = "txt_section",
  [sym_python_section] = "python_section",
  [sym_tag] = "tag",
  [sym_tags] = "tags",
  [sym_bash_section_names] = "section_name",
  [sym_python_section_names] = "section_name",
  [sym_txt_section_names] = "section_name",
  [sym_bash_section_header] = "bash_section_header",
  [sym_txt_section_header] = "txt_section_header",
  [sym_python_section_header] = "python_section_header",
  [sym_raw_content] = "bash_content",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
  [aux_sym_raw_content_repeat1] = "raw_content_repeat1",
  [alias_sym_python_content] = "python_content",
  [alias_sym_txt_content] = "txt_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_role] = sym_role,
  [sym_options] = sym_options,
  [anon_sym_PERCENTscript] = anon_sym_PERCENTscript,
  [anon_sym_PERCENTpyexit] = anon_sym_PERCENTpyexit,
  [anon_sym_PERCENTvariables] = anon_sym_PERCENTvariables,
  [anon_sym_PERCENTlate_variables] = anon_sym_PERCENTlate_variables,
  [anon_sym_PERCENTconfig] = anon_sym_PERCENTconfig,
  [anon_sym_PERCENTinfo] = anon_sym_PERCENTinfo,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_raw_content_token1] = aux_sym_raw_content_token1,
  [sym_alpha_numeric] = sym_alpha_numeric,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_bash_section] = sym_bash_section,
  [sym_txt_section] = sym_txt_section,
  [sym_python_section] = sym_python_section,
  [sym_tag] = sym_tag,
  [sym_tags] = sym_tags,
  [sym_bash_section_names] = sym_bash_section_names,
  [sym_python_section_names] = sym_bash_section_names,
  [sym_txt_section_names] = sym_bash_section_names,
  [sym_bash_section_header] = sym_bash_section_header,
  [sym_txt_section_header] = sym_txt_section_header,
  [sym_python_section_header] = sym_python_section_header,
  [sym_raw_content] = sym_raw_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
  [aux_sym_raw_content_repeat1] = aux_sym_raw_content_repeat1,
  [alias_sym_python_content] = alias_sym_python_content,
  [alias_sym_txt_content] = alias_sym_txt_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTscript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTpyexit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTvariables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTlate_variables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTconfig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENTinfo] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_raw_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_alpha_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_bash_section] = {
    .visible = true,
    .named = true,
  },
  [sym_txt_section] = {
    .visible = true,
    .named = true,
  },
  [sym_python_section] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_bash_section_names] = {
    .visible = true,
    .named = true,
  },
  [sym_python_section_names] = {
    .visible = true,
    .named = true,
  },
  [sym_txt_section_names] = {
    .visible = true,
    .named = true,
  },
  [sym_bash_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_txt_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_python_section_header] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tags_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_raw_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_python_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_txt_content] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_txt_content,
  },
  [2] = {
    [1] = alias_sym_python_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_raw_content, 3,
    sym_raw_content,
    alias_sym_python_content,
    alias_sym_txt_content,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(47);
      if (lookahead == '%') ADVANCE(14);
      if (lookahead == ',') ADVANCE(48);
      if (lookahead == '|') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '%') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(61);
      if (lookahead == '@') ADVANCE(51);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(54);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'g') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(60);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(16);
      END_STATE();
    case 46:
      if (eof) ADVANCE(47);
      if (lookahead == '\n') ADVANCE(65);
      if (lookahead == '%') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_role);
      if (lookahead == '@') ADVANCE(51);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_role);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(50);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_options);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PERCENTscript);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_PERCENTpyexit);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PERCENTvariables);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PERCENTlate_variables);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_PERCENTconfig);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_PERCENTinfo);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_raw_content_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_raw_content_token1);
      if (lookahead == '\n') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 46},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 46},
  [18] = {.lex_state = 46},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 46},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 46},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 46},
  [41] = {.lex_state = 4},
  [42] = {.lex_state = 4},
  [43] = {.lex_state = 46},
  [44] = {.lex_state = 46},
  [45] = {.lex_state = 4},
  [46] = {.lex_state = 46},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 46},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 46},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 46},
  [56] = {.lex_state = 46},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PERCENTscript] = ACTIONS(1),
    [anon_sym_PERCENTpyexit] = ACTIONS(1),
    [anon_sym_PERCENTvariables] = ACTIONS(1),
    [anon_sym_PERCENTlate_variables] = ACTIONS(1),
    [anon_sym_PERCENTconfig] = ACTIONS(1),
    [anon_sym_PERCENTinfo] = ACTIONS(1),
    [sym_alpha_numeric] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(38),
    [sym_section] = STATE(3),
    [sym_bash_section] = STATE(10),
    [sym_txt_section] = STATE(10),
    [sym_python_section] = STATE(10),
    [sym_tag] = STATE(6),
    [sym_tags] = STATE(9),
    [sym_bash_section_names] = STATE(22),
    [sym_python_section_names] = STATE(27),
    [sym_txt_section_names] = STATE(25),
    [sym_bash_section_header] = STATE(24),
    [sym_txt_section_header] = STATE(17),
    [sym_python_section_header] = STATE(18),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_PERCENTscript] = ACTIONS(3),
    [anon_sym_PERCENTpyexit] = ACTIONS(5),
    [anon_sym_PERCENTvariables] = ACTIONS(5),
    [anon_sym_PERCENTlate_variables] = ACTIONS(5),
    [anon_sym_PERCENTconfig] = ACTIONS(5),
    [anon_sym_PERCENTinfo] = ACTIONS(7),
    [sym_alpha_numeric] = ACTIONS(9),
  },
  [2] = {
    [sym_section] = STATE(2),
    [sym_bash_section] = STATE(10),
    [sym_txt_section] = STATE(10),
    [sym_python_section] = STATE(10),
    [sym_tag] = STATE(6),
    [sym_tags] = STATE(9),
    [sym_bash_section_names] = STATE(22),
    [sym_python_section_names] = STATE(27),
    [sym_txt_section_names] = STATE(25),
    [sym_bash_section_header] = STATE(24),
    [sym_txt_section_header] = STATE(17),
    [sym_python_section_header] = STATE(18),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_PERCENTscript] = ACTIONS(13),
    [anon_sym_PERCENTpyexit] = ACTIONS(16),
    [anon_sym_PERCENTvariables] = ACTIONS(16),
    [anon_sym_PERCENTlate_variables] = ACTIONS(16),
    [anon_sym_PERCENTconfig] = ACTIONS(16),
    [anon_sym_PERCENTinfo] = ACTIONS(19),
    [sym_alpha_numeric] = ACTIONS(22),
  },
  [3] = {
    [sym_section] = STATE(2),
    [sym_bash_section] = STATE(10),
    [sym_txt_section] = STATE(10),
    [sym_python_section] = STATE(10),
    [sym_tag] = STATE(6),
    [sym_tags] = STATE(9),
    [sym_bash_section_names] = STATE(22),
    [sym_python_section_names] = STATE(27),
    [sym_txt_section_names] = STATE(25),
    [sym_bash_section_header] = STATE(24),
    [sym_txt_section_header] = STATE(17),
    [sym_python_section_header] = STATE(18),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_PERCENTscript] = ACTIONS(3),
    [anon_sym_PERCENTpyexit] = ACTIONS(5),
    [anon_sym_PERCENTvariables] = ACTIONS(5),
    [anon_sym_PERCENTlate_variables] = ACTIONS(5),
    [anon_sym_PERCENTconfig] = ACTIONS(5),
    [anon_sym_PERCENTinfo] = ACTIONS(7),
    [sym_alpha_numeric] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_raw_content_token1,
    STATE(4), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(29), 7,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
      sym_alpha_numeric,
  [19] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym_raw_content_token1,
    STATE(4), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(36), 7,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
      sym_alpha_numeric,
  [38] = 3,
    STATE(7), 1,
      aux_sym_tags_repeat1,
    ACTIONS(40), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(42), 6,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
  [54] = 3,
    STATE(8), 1,
      aux_sym_tags_repeat1,
    ACTIONS(40), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(44), 6,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
  [70] = 3,
    STATE(8), 1,
      aux_sym_tags_repeat1,
    ACTIONS(46), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
    ACTIONS(49), 6,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
  [86] = 6,
    ACTIONS(3), 1,
      anon_sym_PERCENTscript,
    ACTIONS(7), 1,
      anon_sym_PERCENTinfo,
    STATE(16), 1,
      sym_txt_section_names,
    STATE(19), 1,
      sym_bash_section_names,
    STATE(20), 1,
      sym_python_section_names,
    ACTIONS(5), 4,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
  [108] = 1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
      sym_alpha_numeric,
  [119] = 1,
    ACTIONS(49), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
  [130] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
      sym_alpha_numeric,
  [141] = 1,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
      sym_alpha_numeric,
  [152] = 1,
    ACTIONS(57), 8,
      ts_builtin_sym_end,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
      sym_alpha_numeric,
  [163] = 1,
    ACTIONS(59), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_PERCENTscript,
      anon_sym_PERCENTpyexit,
      anon_sym_PERCENTvariables,
      anon_sym_PERCENTlate_variables,
      anon_sym_PERCENTconfig,
      anon_sym_PERCENTinfo,
  [174] = 3,
    ACTIONS(61), 1,
      sym_role,
    ACTIONS(63), 1,
      sym_options,
    ACTIONS(65), 1,
      anon_sym_LF,
  [184] = 3,
    ACTIONS(67), 1,
      aux_sym_raw_content_token1,
    STATE(5), 1,
      aux_sym_raw_content_repeat1,
    STATE(13), 1,
      sym_raw_content,
  [194] = 3,
    ACTIONS(67), 1,
      aux_sym_raw_content_token1,
    STATE(5), 1,
      aux_sym_raw_content_repeat1,
    STATE(12), 1,
      sym_raw_content,
  [204] = 3,
    ACTIONS(69), 1,
      sym_role,
    ACTIONS(71), 1,
      sym_options,
    ACTIONS(73), 1,
      anon_sym_LF,
  [214] = 3,
    ACTIONS(75), 1,
      sym_role,
    ACTIONS(77), 1,
      sym_options,
    ACTIONS(79), 1,
      anon_sym_LF,
  [224] = 1,
    ACTIONS(81), 3,
      sym_role,
      sym_options,
      anon_sym_LF,
  [230] = 3,
    ACTIONS(83), 1,
      sym_role,
    ACTIONS(85), 1,
      sym_options,
    ACTIONS(87), 1,
      anon_sym_LF,
  [240] = 1,
    ACTIONS(89), 3,
      sym_role,
      sym_options,
      anon_sym_LF,
  [246] = 3,
    ACTIONS(67), 1,
      aux_sym_raw_content_token1,
    STATE(5), 1,
      aux_sym_raw_content_repeat1,
    STATE(14), 1,
      sym_raw_content,
  [256] = 3,
    ACTIONS(91), 1,
      sym_role,
    ACTIONS(93), 1,
      sym_options,
    ACTIONS(95), 1,
      anon_sym_LF,
  [266] = 1,
    ACTIONS(97), 3,
      sym_role,
      sym_options,
      anon_sym_LF,
  [272] = 3,
    ACTIONS(99), 1,
      sym_role,
    ACTIONS(101), 1,
      sym_options,
    ACTIONS(103), 1,
      anon_sym_LF,
  [282] = 2,
    ACTIONS(9), 1,
      sym_alpha_numeric,
    STATE(11), 1,
      sym_tag,
  [289] = 2,
    ACTIONS(71), 1,
      sym_options,
    ACTIONS(73), 1,
      anon_sym_LF,
  [296] = 2,
    ACTIONS(105), 1,
      sym_options,
    ACTIONS(107), 1,
      anon_sym_LF,
  [303] = 2,
    ACTIONS(109), 1,
      sym_options,
    ACTIONS(111), 1,
      anon_sym_LF,
  [310] = 2,
    ACTIONS(77), 1,
      sym_options,
    ACTIONS(79), 1,
      anon_sym_LF,
  [317] = 2,
    ACTIONS(113), 1,
      sym_options,
    ACTIONS(115), 1,
      anon_sym_LF,
  [324] = 2,
    ACTIONS(63), 1,
      sym_options,
    ACTIONS(65), 1,
      anon_sym_LF,
  [331] = 1,
    ACTIONS(117), 1,
      aux_sym_raw_content_token1,
  [335] = 1,
    ACTIONS(119), 1,
      aux_sym_raw_content_token1,
  [339] = 1,
    ACTIONS(121), 1,
      anon_sym_LF,
  [343] = 1,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
  [347] = 1,
    ACTIONS(125), 1,
      anon_sym_LF,
  [351] = 1,
    ACTIONS(127), 1,
      aux_sym_raw_content_token1,
  [355] = 1,
    ACTIONS(129), 1,
      anon_sym_LF,
  [359] = 1,
    ACTIONS(131), 1,
      anon_sym_LF,
  [363] = 1,
    ACTIONS(133), 1,
      aux_sym_raw_content_token1,
  [367] = 1,
    ACTIONS(135), 1,
      aux_sym_raw_content_token1,
  [371] = 1,
    ACTIONS(137), 1,
      anon_sym_LF,
  [375] = 1,
    ACTIONS(139), 1,
      aux_sym_raw_content_token1,
  [379] = 1,
    ACTIONS(141), 1,
      anon_sym_LF,
  [383] = 1,
    ACTIONS(143), 1,
      anon_sym_LF,
  [387] = 1,
    ACTIONS(145), 1,
      aux_sym_raw_content_token1,
  [391] = 1,
    ACTIONS(147), 1,
      anon_sym_LF,
  [395] = 1,
    ACTIONS(149), 1,
      aux_sym_raw_content_token1,
  [399] = 1,
    ACTIONS(151), 1,
      anon_sym_LF,
  [403] = 1,
    ACTIONS(153), 1,
      aux_sym_raw_content_token1,
  [407] = 1,
    ACTIONS(155), 1,
      aux_sym_raw_content_token1,
  [411] = 1,
    ACTIONS(157), 1,
      aux_sym_raw_content_token1,
  [415] = 1,
    ACTIONS(159), 1,
      aux_sym_raw_content_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 19,
  [SMALL_STATE(6)] = 38,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 70,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 108,
  [SMALL_STATE(11)] = 119,
  [SMALL_STATE(12)] = 130,
  [SMALL_STATE(13)] = 141,
  [SMALL_STATE(14)] = 152,
  [SMALL_STATE(15)] = 163,
  [SMALL_STATE(16)] = 174,
  [SMALL_STATE(17)] = 184,
  [SMALL_STATE(18)] = 194,
  [SMALL_STATE(19)] = 204,
  [SMALL_STATE(20)] = 214,
  [SMALL_STATE(21)] = 224,
  [SMALL_STATE(22)] = 230,
  [SMALL_STATE(23)] = 240,
  [SMALL_STATE(24)] = 246,
  [SMALL_STATE(25)] = 256,
  [SMALL_STATE(26)] = 266,
  [SMALL_STATE(27)] = 272,
  [SMALL_STATE(28)] = 282,
  [SMALL_STATE(29)] = 289,
  [SMALL_STATE(30)] = 296,
  [SMALL_STATE(31)] = 303,
  [SMALL_STATE(32)] = 310,
  [SMALL_STATE(33)] = 317,
  [SMALL_STATE(34)] = 324,
  [SMALL_STATE(35)] = 331,
  [SMALL_STATE(36)] = 335,
  [SMALL_STATE(37)] = 339,
  [SMALL_STATE(38)] = 343,
  [SMALL_STATE(39)] = 347,
  [SMALL_STATE(40)] = 351,
  [SMALL_STATE(41)] = 355,
  [SMALL_STATE(42)] = 359,
  [SMALL_STATE(43)] = 363,
  [SMALL_STATE(44)] = 367,
  [SMALL_STATE(45)] = 371,
  [SMALL_STATE(46)] = 375,
  [SMALL_STATE(47)] = 379,
  [SMALL_STATE(48)] = 383,
  [SMALL_STATE(49)] = 387,
  [SMALL_STATE(50)] = 391,
  [SMALL_STATE(51)] = 395,
  [SMALL_STATE(52)] = 399,
  [SMALL_STATE(53)] = 403,
  [SMALL_STATE(54)] = 407,
  [SMALL_STATE(55)] = 411,
  [SMALL_STATE(56)] = 415,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1, 0, 0),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_content, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section, 2, 0, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_section_names, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txt_section_names, 1, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_section_names, 1, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [123] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 3, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 2, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 3, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 4, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 4, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 4, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 5, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 5, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 5, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_npf(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
