#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_PIPE = 2,
  sym_options = 3,
  anon_sym_script = 4,
  anon_sym_PERCENT = 5,
  anon_sym_AT = 6,
  anon_sym_LF = 7,
  anon_sym_info = 8,
  anon_sym_pyexit = 9,
  anon_sym_variables = 10,
  anon_sym_late_variables = 11,
  anon_sym_config = 12,
  aux_sym__non_percent_line_token1 = 13,
  aux_sym__non_percent_line_token2 = 14,
  sym_alpha_numeric = 15,
  sym_document = 16,
  sym_section = 17,
  sym_bash_section = 18,
  sym_txt_section = 19,
  sym_python_section = 20,
  sym_tags = 21,
  sym_role = 22,
  sym_tag = 23,
  sym_bash_section_names = 24,
  sym_bash_section_header = 25,
  sym_txt_section_header = 26,
  sym_python_section_header = 27,
  sym_txt_content = 28,
  sym_python_content = 29,
  sym_bash_content = 30,
  sym__non_percent_line = 31,
  aux_sym_document_repeat1 = 32,
  aux_sym_tags_repeat1 = 33,
  aux_sym_txt_content_repeat1 = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [sym_options] = "options",
  [anon_sym_script] = "script",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AT] = "@",
  [anon_sym_LF] = "\n",
  [anon_sym_info] = "info",
  [anon_sym_pyexit] = "pyexit",
  [anon_sym_variables] = "variables",
  [anon_sym_late_variables] = "late_variables",
  [anon_sym_config] = "config",
  [aux_sym__non_percent_line_token1] = "_non_percent_line_token1",
  [aux_sym__non_percent_line_token2] = "_non_percent_line_token2",
  [sym_alpha_numeric] = "alpha_numeric",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_bash_section] = "bash_section",
  [sym_txt_section] = "txt_section",
  [sym_python_section] = "python_section",
  [sym_tags] = "tags",
  [sym_role] = "role",
  [sym_tag] = "tag",
  [sym_bash_section_names] = "bash_section_names",
  [sym_bash_section_header] = "bash_section_header",
  [sym_txt_section_header] = "txt_section_header",
  [sym_python_section_header] = "python_section_header",
  [sym_txt_content] = "txt_content",
  [sym_python_content] = "python_content",
  [sym_bash_content] = "bash_content",
  [sym__non_percent_line] = "_non_percent_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
  [aux_sym_txt_content_repeat1] = "txt_content_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_options] = sym_options,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_pyexit] = anon_sym_pyexit,
  [anon_sym_variables] = anon_sym_variables,
  [anon_sym_late_variables] = anon_sym_late_variables,
  [anon_sym_config] = anon_sym_config,
  [aux_sym__non_percent_line_token1] = aux_sym__non_percent_line_token1,
  [aux_sym__non_percent_line_token2] = aux_sym__non_percent_line_token2,
  [sym_alpha_numeric] = sym_alpha_numeric,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_bash_section] = sym_bash_section,
  [sym_txt_section] = sym_txt_section,
  [sym_python_section] = sym_python_section,
  [sym_tags] = sym_tags,
  [sym_role] = sym_role,
  [sym_tag] = sym_tag,
  [sym_bash_section_names] = sym_bash_section_names,
  [sym_bash_section_header] = sym_bash_section_header,
  [sym_txt_section_header] = sym_txt_section_header,
  [sym_python_section_header] = sym_python_section_header,
  [sym_txt_content] = sym_txt_content,
  [sym_python_content] = sym_python_content,
  [sym_bash_content] = sym_bash_content,
  [sym__non_percent_line] = sym__non_percent_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
  [aux_sym_txt_content_repeat1] = aux_sym_txt_content_repeat1,
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
  [sym_options] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_script] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pyexit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_late_variables] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_config] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__non_percent_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__non_percent_line_token2] = {
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
  [sym_tags] = {
    .visible = true,
    .named = true,
  },
  [sym_role] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_bash_section_names] = {
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
  [sym_txt_content] = {
    .visible = true,
    .named = true,
  },
  [sym_python_content] = {
    .visible = true,
    .named = true,
  },
  [sym_bash_content] = {
    .visible = true,
    .named = true,
  },
  [sym__non_percent_line] = {
    .visible = false,
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
  [aux_sym_txt_content_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
  [45] = 31,
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
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(46);
      ADVANCE_MAP(
        '%', 53,
        ',', 47,
        '@', 54,
        'c', 31,
        'i', 28,
        'l', 6,
        'p', 43,
        's', 13,
        'v', 8,
        '|', 48,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '@') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(57);
      if (lookahead == '@') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(27);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(5);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(59);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'p') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 41:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 42:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 44:
      if (eof) ADVANCE(46);
      if (lookahead == '\n') SKIP(44);
      if (lookahead == '%') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 45:
      if (eof) ADVANCE(46);
      if (lookahead == '%') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '@') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_options);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_pyexit);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_late_variables);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym__non_percent_line_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym__non_percent_line_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '%') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym__non_percent_line_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '%') ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym__non_percent_line_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym__non_percent_line_token2);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(68);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym__non_percent_line_token2);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(70);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 45},
  [2] = {.lex_state = 45},
  [3] = {.lex_state = 45},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 44},
  [7] = {.lex_state = 44},
  [8] = {.lex_state = 44},
  [9] = {.lex_state = 44},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 44},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 45},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 45},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 45},
  [34] = {.lex_state = 4},
  [35] = {.lex_state = 45},
  [36] = {.lex_state = 45},
  [37] = {.lex_state = 45},
  [38] = {.lex_state = 45},
  [39] = {.lex_state = 45},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 68},
  [58] = {.lex_state = 3},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 3},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_pyexit] = ACTIONS(1),
    [anon_sym_variables] = ACTIONS(1),
    [anon_sym_late_variables] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(61),
    [sym_section] = STATE(2),
    [sym_bash_section] = STATE(26),
    [sym_txt_section] = STATE(26),
    [sym_python_section] = STATE(26),
    [sym_tags] = STATE(54),
    [sym_tag] = STATE(10),
    [sym_bash_section_header] = STATE(15),
    [sym_txt_section_header] = STATE(14),
    [sym_python_section_header] = STATE(11),
    [aux_sym_document_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PERCENT] = ACTIONS(5),
    [sym_alpha_numeric] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_PERCENT,
    ACTIONS(7), 1,
      sym_alpha_numeric,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_tag,
    STATE(11), 1,
      sym_python_section_header,
    STATE(14), 1,
      sym_txt_section_header,
    STATE(15), 1,
      sym_bash_section_header,
    STATE(54), 1,
      sym_tags,
    STATE(3), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(26), 3,
      sym_bash_section,
      sym_txt_section,
      sym_python_section,
  [34] = 10,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(13), 1,
      anon_sym_PERCENT,
    ACTIONS(16), 1,
      sym_alpha_numeric,
    STATE(10), 1,
      sym_tag,
    STATE(11), 1,
      sym_python_section_header,
    STATE(14), 1,
      sym_txt_section_header,
    STATE(15), 1,
      sym_bash_section_header,
    STATE(54), 1,
      sym_tags,
    STATE(3), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(26), 3,
      sym_bash_section,
      sym_txt_section,
      sym_python_section,
  [68] = 4,
    ACTIONS(19), 1,
      anon_sym_script,
    ACTIONS(21), 1,
      anon_sym_info,
    STATE(19), 1,
      sym_bash_section_names,
    ACTIONS(23), 4,
      anon_sym_pyexit,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [84] = 4,
    ACTIONS(19), 1,
      anon_sym_script,
    ACTIONS(25), 1,
      anon_sym_info,
    STATE(22), 1,
      sym_bash_section_names,
    ACTIONS(27), 4,
      anon_sym_pyexit,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [100] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      aux_sym__non_percent_line_token1,
    ACTIONS(31), 2,
      anon_sym_PERCENT,
      sym_alpha_numeric,
    STATE(8), 2,
      sym__non_percent_line,
      aux_sym_txt_content_repeat1,
  [115] = 4,
    ACTIONS(33), 1,
      aux_sym__non_percent_line_token1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 2,
      anon_sym_PERCENT,
      sym_alpha_numeric,
    STATE(8), 2,
      sym__non_percent_line,
      aux_sym_txt_content_repeat1,
  [130] = 4,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      aux_sym__non_percent_line_token1,
    ACTIONS(41), 2,
      anon_sym_PERCENT,
      sym_alpha_numeric,
    STATE(8), 2,
      sym__non_percent_line,
      aux_sym_txt_content_repeat1,
  [145] = 4,
    ACTIONS(33), 1,
      aux_sym__non_percent_line_token1,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 2,
      anon_sym_PERCENT,
      sym_alpha_numeric,
    STATE(8), 2,
      sym__non_percent_line,
      aux_sym_txt_content_repeat1,
  [160] = 3,
    ACTIONS(52), 1,
      anon_sym_PERCENT,
    STATE(13), 1,
      aux_sym_tags_repeat1,
    ACTIONS(50), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [171] = 3,
    ACTIONS(54), 1,
      aux_sym__non_percent_line_token1,
    STATE(25), 1,
      sym_python_content,
    STATE(6), 2,
      sym__non_percent_line,
      aux_sym_txt_content_repeat1,
  [182] = 3,
    ACTIONS(59), 1,
      anon_sym_PERCENT,
    STATE(12), 1,
      aux_sym_tags_repeat1,
    ACTIONS(56), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [193] = 3,
    ACTIONS(61), 1,
      anon_sym_PERCENT,
    STATE(12), 1,
      aux_sym_tags_repeat1,
    ACTIONS(50), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [204] = 3,
    ACTIONS(54), 1,
      aux_sym__non_percent_line_token1,
    STATE(24), 1,
      sym_txt_content,
    STATE(7), 2,
      sym__non_percent_line,
      aux_sym_txt_content_repeat1,
  [215] = 3,
    ACTIONS(54), 1,
      aux_sym__non_percent_line_token1,
    STATE(23), 1,
      sym_bash_content,
    STATE(9), 2,
      sym__non_percent_line,
      aux_sym_txt_content_repeat1,
  [226] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 3,
      anon_sym_PERCENT,
      aux_sym__non_percent_line_token1,
      sym_alpha_numeric,
  [235] = 1,
    ACTIONS(67), 3,
      sym_options,
      anon_sym_AT,
      anon_sym_LF,
  [241] = 3,
    ACTIONS(69), 1,
      sym_options,
    ACTIONS(71), 1,
      anon_sym_AT,
    ACTIONS(73), 1,
      anon_sym_LF,
  [251] = 3,
    ACTIONS(75), 1,
      sym_options,
    ACTIONS(77), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      anon_sym_LF,
  [261] = 1,
    ACTIONS(81), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_PERCENT,
  [267] = 1,
    ACTIONS(59), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_PERCENT,
  [273] = 3,
    ACTIONS(83), 1,
      sym_options,
    ACTIONS(85), 1,
      anon_sym_AT,
    ACTIONS(87), 1,
      anon_sym_LF,
  [283] = 1,
    ACTIONS(89), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [289] = 1,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [295] = 1,
    ACTIONS(93), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [301] = 1,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [307] = 3,
    ACTIONS(97), 1,
      sym_options,
    ACTIONS(99), 1,
      anon_sym_AT,
    ACTIONS(101), 1,
      anon_sym_LF,
  [317] = 2,
    ACTIONS(103), 1,
      anon_sym_AT,
    ACTIONS(105), 1,
      anon_sym_LF,
  [324] = 2,
    ACTIONS(107), 1,
      sym_options,
    ACTIONS(109), 1,
      anon_sym_LF,
  [331] = 2,
    ACTIONS(111), 1,
      sym_alpha_numeric,
    STATE(29), 1,
      sym_role,
  [338] = 1,
    ACTIONS(113), 2,
      sym_options,
      anon_sym_LF,
  [343] = 2,
    ACTIONS(115), 1,
      sym_options,
    ACTIONS(117), 1,
      anon_sym_LF,
  [350] = 2,
    ACTIONS(111), 1,
      sym_alpha_numeric,
    STATE(40), 1,
      sym_role,
  [357] = 2,
    ACTIONS(119), 1,
      sym_options,
    ACTIONS(121), 1,
      anon_sym_LF,
  [364] = 2,
    ACTIONS(111), 1,
      sym_alpha_numeric,
    STATE(32), 1,
      sym_role,
  [371] = 2,
    ACTIONS(111), 1,
      sym_alpha_numeric,
    STATE(34), 1,
      sym_role,
  [378] = 2,
    ACTIONS(123), 1,
      sym_alpha_numeric,
    STATE(46), 1,
      sym_role,
  [385] = 2,
    ACTIONS(123), 1,
      sym_alpha_numeric,
    STATE(60), 1,
      sym_role,
  [392] = 2,
    ACTIONS(7), 1,
      sym_alpha_numeric,
    STATE(21), 1,
      sym_tag,
  [399] = 2,
    ACTIONS(125), 1,
      sym_options,
    ACTIONS(127), 1,
      anon_sym_LF,
  [406] = 2,
    ACTIONS(129), 1,
      anon_sym_AT,
    ACTIONS(131), 1,
      anon_sym_LF,
  [413] = 1,
    ACTIONS(133), 1,
      aux_sym__non_percent_line_token1,
  [417] = 1,
    ACTIONS(135), 1,
      aux_sym__non_percent_line_token1,
  [421] = 1,
    ACTIONS(137), 1,
      anon_sym_LF,
  [425] = 1,
    ACTIONS(139), 1,
      anon_sym_LF,
  [429] = 1,
    ACTIONS(141), 1,
      anon_sym_LF,
  [433] = 1,
    ACTIONS(143), 1,
      aux_sym__non_percent_line_token1,
  [437] = 1,
    ACTIONS(145), 1,
      aux_sym__non_percent_line_token1,
  [441] = 1,
    ACTIONS(147), 1,
      anon_sym_LF,
  [445] = 1,
    ACTIONS(149), 1,
      anon_sym_LF,
  [449] = 1,
    ACTIONS(151), 1,
      aux_sym__non_percent_line_token1,
  [453] = 1,
    ACTIONS(153), 1,
      anon_sym_LF,
  [457] = 1,
    ACTIONS(155), 1,
      aux_sym__non_percent_line_token1,
  [461] = 1,
    ACTIONS(157), 1,
      anon_sym_PERCENT,
  [465] = 1,
    ACTIONS(159), 1,
      aux_sym__non_percent_line_token1,
  [469] = 1,
    ACTIONS(161), 1,
      anon_sym_LF,
  [473] = 1,
    ACTIONS(163), 1,
      aux_sym__non_percent_line_token2,
  [477] = 1,
    ACTIONS(165), 1,
      anon_sym_LF,
  [481] = 1,
    ACTIONS(167), 1,
      aux_sym__non_percent_line_token1,
  [485] = 1,
    ACTIONS(169), 1,
      anon_sym_LF,
  [489] = 1,
    ACTIONS(171), 1,
      ts_builtin_sym_end,
  [493] = 1,
    ACTIONS(173), 1,
      aux_sym__non_percent_line_token1,
  [497] = 1,
    ACTIONS(175), 1,
      aux_sym__non_percent_line_token1,
  [501] = 1,
    ACTIONS(177), 1,
      aux_sym__non_percent_line_token1,
  [505] = 1,
    ACTIONS(179), 1,
      aux_sym__non_percent_line_token1,
  [509] = 1,
    ACTIONS(181), 1,
      anon_sym_LF,
  [513] = 1,
    ACTIONS(183), 1,
      anon_sym_LF,
  [517] = 1,
    ACTIONS(185), 1,
      aux_sym__non_percent_line_token1,
  [521] = 1,
    ACTIONS(187), 1,
      aux_sym__non_percent_line_token1,
  [525] = 1,
    ACTIONS(189), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 34,
  [SMALL_STATE(4)] = 68,
  [SMALL_STATE(5)] = 84,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 115,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 145,
  [SMALL_STATE(10)] = 160,
  [SMALL_STATE(11)] = 171,
  [SMALL_STATE(12)] = 182,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 215,
  [SMALL_STATE(16)] = 226,
  [SMALL_STATE(17)] = 235,
  [SMALL_STATE(18)] = 241,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 261,
  [SMALL_STATE(21)] = 267,
  [SMALL_STATE(22)] = 273,
  [SMALL_STATE(23)] = 283,
  [SMALL_STATE(24)] = 289,
  [SMALL_STATE(25)] = 295,
  [SMALL_STATE(26)] = 301,
  [SMALL_STATE(27)] = 307,
  [SMALL_STATE(28)] = 317,
  [SMALL_STATE(29)] = 324,
  [SMALL_STATE(30)] = 331,
  [SMALL_STATE(31)] = 338,
  [SMALL_STATE(32)] = 343,
  [SMALL_STATE(33)] = 350,
  [SMALL_STATE(34)] = 357,
  [SMALL_STATE(35)] = 364,
  [SMALL_STATE(36)] = 371,
  [SMALL_STATE(37)] = 378,
  [SMALL_STATE(38)] = 385,
  [SMALL_STATE(39)] = 392,
  [SMALL_STATE(40)] = 399,
  [SMALL_STATE(41)] = 406,
  [SMALL_STATE(42)] = 413,
  [SMALL_STATE(43)] = 417,
  [SMALL_STATE(44)] = 421,
  [SMALL_STATE(45)] = 425,
  [SMALL_STATE(46)] = 429,
  [SMALL_STATE(47)] = 433,
  [SMALL_STATE(48)] = 437,
  [SMALL_STATE(49)] = 441,
  [SMALL_STATE(50)] = 445,
  [SMALL_STATE(51)] = 449,
  [SMALL_STATE(52)] = 453,
  [SMALL_STATE(53)] = 457,
  [SMALL_STATE(54)] = 461,
  [SMALL_STATE(55)] = 465,
  [SMALL_STATE(56)] = 469,
  [SMALL_STATE(57)] = 473,
  [SMALL_STATE(58)] = 477,
  [SMALL_STATE(59)] = 481,
  [SMALL_STATE(60)] = 485,
  [SMALL_STATE(61)] = 489,
  [SMALL_STATE(62)] = 493,
  [SMALL_STATE(63)] = 497,
  [SMALL_STATE(64)] = 501,
  [SMALL_STATE(65)] = 505,
  [SMALL_STATE(66)] = 509,
  [SMALL_STATE(67)] = 513,
  [SMALL_STATE(68)] = 517,
  [SMALL_STATE(69)] = 521,
  [SMALL_STATE(70)] = 525,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_content, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_content, 1, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_content, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txt_content, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_txt_content_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_txt_content_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_txt_content_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_content, 1, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_content, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__non_percent_line, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__non_percent_line, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_section_names, 1, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section, 2, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 1, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 5, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 4, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 5, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 5, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [171] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 6, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 6, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 6, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 7, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 7, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
