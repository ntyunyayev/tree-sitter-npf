#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 36
#define ALIAS_COUNT 3
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_PIPE = 2,
  sym_role = 3,
  sym_options = 4,
  anon_sym_script = 5,
  anon_sym_variables = 6,
  anon_sym_late_variables = 7,
  anon_sym_config = 8,
  anon_sym_pyexit = 9,
  anon_sym_info = 10,
  anon_sym_PERCENT = 11,
  anon_sym_COLON = 12,
  anon_sym_LF = 13,
  aux_sym_raw_content_token1 = 14,
  sym_alpha_numeric = 15,
  sym_document = 16,
  sym_section = 17,
  sym_bash_section = 18,
  sym_txt_section = 19,
  sym_js_section = 20,
  sym_python_section = 21,
  sym_tag = 22,
  sym_tags = 23,
  sym_bash_section_names = 24,
  sym_js_section_names = 25,
  sym_python_section_names = 26,
  sym_txt_section_names = 27,
  sym_bash_section_header = 28,
  sym_txt_section_header = 29,
  sym_js_section_header = 30,
  sym_python_section_header = 31,
  sym_raw_content = 32,
  aux_sym_document_repeat1 = 33,
  aux_sym_tags_repeat1 = 34,
  aux_sym_raw_content_repeat1 = 35,
  alias_sym_js_content = 36,
  alias_sym_python_content = 37,
  alias_sym_txt_content = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [sym_role] = "role",
  [sym_options] = "options",
  [anon_sym_script] = "script",
  [anon_sym_variables] = "variables",
  [anon_sym_late_variables] = "late_variables",
  [anon_sym_config] = "config",
  [anon_sym_pyexit] = "pyexit",
  [anon_sym_info] = "info",
  [anon_sym_PERCENT] = "%",
  [anon_sym_COLON] = ":",
  [anon_sym_LF] = "\n",
  [aux_sym_raw_content_token1] = "raw_content_token1",
  [sym_alpha_numeric] = "alpha_numeric",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_bash_section] = "bash_section",
  [sym_txt_section] = "txt_section",
  [sym_js_section] = "js_section",
  [sym_python_section] = "python_section",
  [sym_tag] = "tag",
  [sym_tags] = "tags",
  [sym_bash_section_names] = "section_name",
  [sym_js_section_names] = "section_name",
  [sym_python_section_names] = "section_name",
  [sym_txt_section_names] = "section_name",
  [sym_bash_section_header] = "bash_section_header",
  [sym_txt_section_header] = "txt_section_header",
  [sym_js_section_header] = "js_section_header",
  [sym_python_section_header] = "python_section_header",
  [sym_raw_content] = "bash_content",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
  [aux_sym_raw_content_repeat1] = "raw_content_repeat1",
  [alias_sym_js_content] = "js_content",
  [alias_sym_python_content] = "python_content",
  [alias_sym_txt_content] = "txt_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_role] = sym_role,
  [sym_options] = sym_options,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_variables] = anon_sym_variables,
  [anon_sym_late_variables] = anon_sym_late_variables,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_pyexit] = anon_sym_pyexit,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_raw_content_token1] = aux_sym_raw_content_token1,
  [sym_alpha_numeric] = sym_alpha_numeric,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_bash_section] = sym_bash_section,
  [sym_txt_section] = sym_txt_section,
  [sym_js_section] = sym_js_section,
  [sym_python_section] = sym_python_section,
  [sym_tag] = sym_tag,
  [sym_tags] = sym_tags,
  [sym_bash_section_names] = sym_bash_section_names,
  [sym_js_section_names] = sym_bash_section_names,
  [sym_python_section_names] = sym_bash_section_names,
  [sym_txt_section_names] = sym_bash_section_names,
  [sym_bash_section_header] = sym_bash_section_header,
  [sym_txt_section_header] = sym_txt_section_header,
  [sym_js_section_header] = sym_js_section_header,
  [sym_python_section_header] = sym_python_section_header,
  [sym_raw_content] = sym_raw_content,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
  [aux_sym_raw_content_repeat1] = aux_sym_raw_content_repeat1,
  [alias_sym_js_content] = alias_sym_js_content,
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
  [anon_sym_script] = {
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
  [anon_sym_pyexit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_js_section] = {
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
  [sym_js_section_names] = {
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
  [sym_js_section_header] = {
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
  [alias_sym_js_content] = {
    .visible = true,
    .named = true,
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
    [1] = alias_sym_js_content,
  },
  [3] = {
    [1] = alias_sym_python_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_raw_content, 4,
    sym_raw_content,
    alias_sym_js_content,
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
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '%', 68,
        ',', 49,
        ':', 69,
        'c', 101,
        'i', 98,
        'l', 76,
        'p', 113,
        's', 83,
        'v', 78,
        '|', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '%') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '@') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(55);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
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
      if (lookahead == 'g') ADVANCE(62);
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
      if (lookahead == 'o') ADVANCE(66);
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
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(56);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '%') ADVANCE(68);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_role);
      if (lookahead == '@') ADVANCE(52);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(55);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_role);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(51);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_options);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_variables);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_late_variables);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_late_variables);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_pyexit);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_pyexit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_info);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_raw_content_token1);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_raw_content_token1);
      if (lookahead == '\n') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '_') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'v') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'y') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(114);
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
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 47},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 47},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 47},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 47},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 47},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 46},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 4},
  [44] = {.lex_state = 47},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 47},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 47},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 47},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 4},
  [55] = {.lex_state = 47},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 47},
  [59] = {.lex_state = 47},
  [60] = {.lex_state = 4},
  [61] = {.lex_state = 47},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 47},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 47},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 47},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 47},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 47},
  [76] = {.lex_state = 47},
  [77] = {.lex_state = 47},
  [78] = {.lex_state = 47},
  [79] = {.lex_state = 47},
  [80] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_variables] = ACTIONS(1),
    [anon_sym_late_variables] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_pyexit] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_alpha_numeric] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(45),
    [sym_section] = STATE(3),
    [sym_bash_section] = STATE(42),
    [sym_txt_section] = STATE(42),
    [sym_js_section] = STATE(42),
    [sym_python_section] = STATE(42),
    [sym_bash_section_header] = STATE(14),
    [sym_txt_section_header] = STATE(19),
    [sym_js_section_header] = STATE(11),
    [sym_python_section_header] = STATE(20),
    [aux_sym_document_repeat1] = STATE(3),
    [anon_sym_PERCENT] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(5), 1,
      anon_sym_script,
    ACTIONS(9), 1,
      anon_sym_pyexit,
    ACTIONS(11), 1,
      anon_sym_info,
    ACTIONS(13), 1,
      sym_alpha_numeric,
    STATE(8), 1,
      sym_tag,
    STATE(15), 1,
      sym_bash_section_names,
    STATE(16), 1,
      sym_js_section_names,
    STATE(17), 1,
      sym_python_section_names,
    STATE(18), 1,
      sym_txt_section_names,
    STATE(65), 1,
      sym_tags,
    ACTIONS(7), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [36] = 8,
    ACTIONS(3), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_js_section_header,
    STATE(14), 1,
      sym_bash_section_header,
    STATE(19), 1,
      sym_txt_section_header,
    STATE(20), 1,
      sym_python_section_header,
    STATE(4), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(42), 4,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
  [65] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    STATE(11), 1,
      sym_js_section_header,
    STATE(14), 1,
      sym_bash_section_header,
    STATE(19), 1,
      sym_txt_section_header,
    STATE(20), 1,
      sym_python_section_header,
    STATE(4), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(42), 4,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
  [94] = 8,
    ACTIONS(22), 1,
      anon_sym_script,
    ACTIONS(26), 1,
      anon_sym_pyexit,
    ACTIONS(28), 1,
      anon_sym_info,
    STATE(24), 1,
      sym_bash_section_names,
    STATE(25), 1,
      sym_js_section_names,
    STATE(26), 1,
      sym_python_section_names,
    STATE(27), 1,
      sym_txt_section_names,
    ACTIONS(24), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [121] = 4,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_PERCENT,
    ACTIONS(34), 1,
      aux_sym_raw_content_token1,
    STATE(9), 1,
      aux_sym_raw_content_repeat1,
  [134] = 3,
    ACTIONS(38), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym_tags_repeat1,
    ACTIONS(36), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [145] = 3,
    ACTIONS(40), 1,
      anon_sym_COLON,
    STATE(7), 1,
      aux_sym_tags_repeat1,
    ACTIONS(36), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [156] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_PERCENT,
    ACTIONS(46), 1,
      aux_sym_raw_content_token1,
    STATE(9), 1,
      aux_sym_raw_content_repeat1,
  [169] = 3,
    ACTIONS(52), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym_tags_repeat1,
    ACTIONS(49), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [180] = 3,
    ACTIONS(54), 1,
      aux_sym_raw_content_token1,
    STATE(6), 1,
      aux_sym_raw_content_repeat1,
    STATE(34), 1,
      sym_raw_content,
  [190] = 1,
    ACTIONS(56), 3,
      sym_role,
      sym_options,
      anon_sym_LF,
  [196] = 1,
    ACTIONS(58), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [202] = 3,
    ACTIONS(54), 1,
      aux_sym_raw_content_token1,
    STATE(6), 1,
      aux_sym_raw_content_repeat1,
    STATE(37), 1,
      sym_raw_content,
  [212] = 3,
    ACTIONS(60), 1,
      sym_role,
    ACTIONS(62), 1,
      sym_options,
    ACTIONS(64), 1,
      anon_sym_LF,
  [222] = 3,
    ACTIONS(66), 1,
      sym_role,
    ACTIONS(68), 1,
      sym_options,
    ACTIONS(70), 1,
      anon_sym_LF,
  [232] = 3,
    ACTIONS(72), 1,
      sym_role,
    ACTIONS(74), 1,
      sym_options,
    ACTIONS(76), 1,
      anon_sym_LF,
  [242] = 3,
    ACTIONS(78), 1,
      sym_role,
    ACTIONS(80), 1,
      sym_options,
    ACTIONS(82), 1,
      anon_sym_LF,
  [252] = 3,
    ACTIONS(54), 1,
      aux_sym_raw_content_token1,
    STATE(6), 1,
      aux_sym_raw_content_repeat1,
    STATE(33), 1,
      sym_raw_content,
  [262] = 3,
    ACTIONS(54), 1,
      aux_sym_raw_content_token1,
    STATE(6), 1,
      aux_sym_raw_content_repeat1,
    STATE(35), 1,
      sym_raw_content,
  [272] = 1,
    ACTIONS(84), 3,
      sym_role,
      sym_options,
      anon_sym_LF,
  [278] = 1,
    ACTIONS(52), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [284] = 1,
    ACTIONS(86), 3,
      sym_role,
      sym_options,
      anon_sym_LF,
  [290] = 3,
    ACTIONS(88), 1,
      sym_role,
    ACTIONS(90), 1,
      sym_options,
    ACTIONS(92), 1,
      anon_sym_LF,
  [300] = 3,
    ACTIONS(94), 1,
      sym_role,
    ACTIONS(96), 1,
      sym_options,
    ACTIONS(98), 1,
      anon_sym_LF,
  [310] = 3,
    ACTIONS(100), 1,
      sym_role,
    ACTIONS(102), 1,
      sym_options,
    ACTIONS(104), 1,
      anon_sym_LF,
  [320] = 3,
    ACTIONS(106), 1,
      sym_role,
    ACTIONS(108), 1,
      sym_options,
    ACTIONS(110), 1,
      anon_sym_LF,
  [330] = 1,
    ACTIONS(112), 3,
      sym_role,
      sym_options,
      anon_sym_LF,
  [336] = 2,
    ACTIONS(114), 1,
      sym_options,
    ACTIONS(116), 1,
      anon_sym_LF,
  [343] = 2,
    ACTIONS(118), 1,
      sym_options,
    ACTIONS(120), 1,
      anon_sym_LF,
  [350] = 2,
    ACTIONS(122), 1,
      sym_options,
    ACTIONS(124), 1,
      anon_sym_LF,
  [357] = 2,
    ACTIONS(126), 1,
      sym_options,
    ACTIONS(128), 1,
      anon_sym_LF,
  [364] = 1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [369] = 1,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [374] = 1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [379] = 2,
    ACTIONS(136), 1,
      sym_alpha_numeric,
    STATE(22), 1,
      sym_tag,
  [386] = 1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [391] = 2,
    ACTIONS(140), 1,
      sym_options,
    ACTIONS(142), 1,
      anon_sym_LF,
  [398] = 2,
    ACTIONS(144), 1,
      sym_options,
    ACTIONS(146), 1,
      anon_sym_LF,
  [405] = 2,
    ACTIONS(148), 1,
      sym_options,
    ACTIONS(150), 1,
      anon_sym_LF,
  [412] = 2,
    ACTIONS(152), 1,
      sym_options,
    ACTIONS(154), 1,
      anon_sym_LF,
  [419] = 1,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [424] = 1,
    ACTIONS(158), 1,
      anon_sym_LF,
  [428] = 1,
    ACTIONS(160), 1,
      aux_sym_raw_content_token1,
  [432] = 1,
    ACTIONS(162), 1,
      ts_builtin_sym_end,
  [436] = 1,
    ACTIONS(164), 1,
      anon_sym_LF,
  [440] = 1,
    ACTIONS(166), 1,
      aux_sym_raw_content_token1,
  [444] = 1,
    ACTIONS(168), 1,
      anon_sym_LF,
  [448] = 1,
    ACTIONS(170), 1,
      aux_sym_raw_content_token1,
  [452] = 1,
    ACTIONS(172), 1,
      anon_sym_LF,
  [456] = 1,
    ACTIONS(174), 1,
      aux_sym_raw_content_token1,
  [460] = 1,
    ACTIONS(176), 1,
      anon_sym_LF,
  [464] = 1,
    ACTIONS(178), 1,
      aux_sym_raw_content_token1,
  [468] = 1,
    ACTIONS(180), 1,
      anon_sym_LF,
  [472] = 1,
    ACTIONS(182), 1,
      aux_sym_raw_content_token1,
  [476] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [480] = 1,
    ACTIONS(186), 1,
      anon_sym_LF,
  [484] = 1,
    ACTIONS(188), 1,
      aux_sym_raw_content_token1,
  [488] = 1,
    ACTIONS(190), 1,
      aux_sym_raw_content_token1,
  [492] = 1,
    ACTIONS(192), 1,
      anon_sym_LF,
  [496] = 1,
    ACTIONS(194), 1,
      aux_sym_raw_content_token1,
  [500] = 1,
    ACTIONS(196), 1,
      aux_sym_raw_content_token1,
  [504] = 1,
    ACTIONS(198), 1,
      anon_sym_LF,
  [508] = 1,
    ACTIONS(200), 1,
      aux_sym_raw_content_token1,
  [512] = 1,
    ACTIONS(202), 1,
      anon_sym_COLON,
  [516] = 1,
    ACTIONS(204), 1,
      anon_sym_LF,
  [520] = 1,
    ACTIONS(206), 1,
      aux_sym_raw_content_token1,
  [524] = 1,
    ACTIONS(208), 1,
      anon_sym_LF,
  [528] = 1,
    ACTIONS(210), 1,
      aux_sym_raw_content_token1,
  [532] = 1,
    ACTIONS(212), 1,
      anon_sym_LF,
  [536] = 1,
    ACTIONS(214), 1,
      aux_sym_raw_content_token1,
  [540] = 1,
    ACTIONS(216), 1,
      anon_sym_LF,
  [544] = 1,
    ACTIONS(218), 1,
      aux_sym_raw_content_token1,
  [548] = 1,
    ACTIONS(220), 1,
      anon_sym_LF,
  [552] = 1,
    ACTIONS(222), 1,
      aux_sym_raw_content_token1,
  [556] = 1,
    ACTIONS(224), 1,
      aux_sym_raw_content_token1,
  [560] = 1,
    ACTIONS(226), 1,
      aux_sym_raw_content_token1,
  [564] = 1,
    ACTIONS(228), 1,
      aux_sym_raw_content_token1,
  [568] = 1,
    ACTIONS(230), 1,
      aux_sym_raw_content_token1,
  [572] = 1,
    ACTIONS(232), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 169,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 196,
  [SMALL_STATE(14)] = 202,
  [SMALL_STATE(15)] = 212,
  [SMALL_STATE(16)] = 222,
  [SMALL_STATE(17)] = 232,
  [SMALL_STATE(18)] = 242,
  [SMALL_STATE(19)] = 252,
  [SMALL_STATE(20)] = 262,
  [SMALL_STATE(21)] = 272,
  [SMALL_STATE(22)] = 278,
  [SMALL_STATE(23)] = 284,
  [SMALL_STATE(24)] = 290,
  [SMALL_STATE(25)] = 300,
  [SMALL_STATE(26)] = 310,
  [SMALL_STATE(27)] = 320,
  [SMALL_STATE(28)] = 330,
  [SMALL_STATE(29)] = 336,
  [SMALL_STATE(30)] = 343,
  [SMALL_STATE(31)] = 350,
  [SMALL_STATE(32)] = 357,
  [SMALL_STATE(33)] = 364,
  [SMALL_STATE(34)] = 369,
  [SMALL_STATE(35)] = 374,
  [SMALL_STATE(36)] = 379,
  [SMALL_STATE(37)] = 386,
  [SMALL_STATE(38)] = 391,
  [SMALL_STATE(39)] = 398,
  [SMALL_STATE(40)] = 405,
  [SMALL_STATE(41)] = 412,
  [SMALL_STATE(42)] = 419,
  [SMALL_STATE(43)] = 424,
  [SMALL_STATE(44)] = 428,
  [SMALL_STATE(45)] = 432,
  [SMALL_STATE(46)] = 436,
  [SMALL_STATE(47)] = 440,
  [SMALL_STATE(48)] = 444,
  [SMALL_STATE(49)] = 448,
  [SMALL_STATE(50)] = 452,
  [SMALL_STATE(51)] = 456,
  [SMALL_STATE(52)] = 460,
  [SMALL_STATE(53)] = 464,
  [SMALL_STATE(54)] = 468,
  [SMALL_STATE(55)] = 472,
  [SMALL_STATE(56)] = 476,
  [SMALL_STATE(57)] = 480,
  [SMALL_STATE(58)] = 484,
  [SMALL_STATE(59)] = 488,
  [SMALL_STATE(60)] = 492,
  [SMALL_STATE(61)] = 496,
  [SMALL_STATE(62)] = 500,
  [SMALL_STATE(63)] = 504,
  [SMALL_STATE(64)] = 508,
  [SMALL_STATE(65)] = 512,
  [SMALL_STATE(66)] = 516,
  [SMALL_STATE(67)] = 520,
  [SMALL_STATE(68)] = 524,
  [SMALL_STATE(69)] = 528,
  [SMALL_STATE(70)] = 532,
  [SMALL_STATE(71)] = 536,
  [SMALL_STATE(72)] = 540,
  [SMALL_STATE(73)] = 544,
  [SMALL_STATE(74)] = 548,
  [SMALL_STATE(75)] = 552,
  [SMALL_STATE(76)] = 556,
  [SMALL_STATE(77)] = 560,
  [SMALL_STATE(78)] = 564,
  [SMALL_STATE(79)] = 568,
  [SMALL_STATE(80)] = 572,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_content, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 0),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 1, 0, 0),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txt_section_names, 1, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_section_names, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_names, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_section_names, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section, 2, 0, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section, 2, 0, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section, 2, 0, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 4, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 4, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 3, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 5, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 5, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 6, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 6, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 6, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 7, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 7, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 7, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 7, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
