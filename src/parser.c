#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 2
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_PIPE = 2,
  anon_sym_COLON = 3,
  anon_sym_AT = 4,
  aux_sym_role_token1 = 5,
  sym_options = 6,
  anon_sym_script = 7,
  anon_sym_variables = 8,
  anon_sym_late_variables = 9,
  anon_sym_config = 10,
  anon_sym_pyexit = 11,
  anon_sym_info = 12,
  anon_sym_file = 13,
  anon_sym_PERCENT = 14,
  anon_sym_LF = 15,
  sym_alpha_numeric = 16,
  sym__content_line = 17,
  sym_document = 18,
  sym_section = 19,
  sym_bash_section = 20,
  sym_txt_section = 21,
  sym_js_section = 22,
  sym_python_section = 23,
  sym_tag = 24,
  sym_tags = 25,
  sym_role = 26,
  sym_bash_section_names = 27,
  sym_js_section_names = 28,
  sym_python_section_names = 29,
  sym_txt_section_names = 30,
  sym_bash_section_header = 31,
  sym_txt_section_header = 32,
  sym_js_section_header = 33,
  sym_python_section_header = 34,
  sym_js_line = 35,
  sym_js_line_and_tags = 36,
  aux_sym__js_and_tags_content = 37,
  sym_raw_content = 38,
  aux_sym_document_repeat1 = 39,
  aux_sym_tags_repeat1 = 40,
  aux_sym_raw_content_repeat1 = 41,
  alias_sym_python_content = 42,
  alias_sym_txt_content = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [aux_sym_role_token1] = "role_token1",
  [sym_options] = "options",
  [anon_sym_script] = "script",
  [anon_sym_variables] = "variables",
  [anon_sym_late_variables] = "late_variables",
  [anon_sym_config] = "config",
  [anon_sym_pyexit] = "pyexit",
  [anon_sym_info] = "info",
  [anon_sym_file] = "file",
  [anon_sym_PERCENT] = "%",
  [anon_sym_LF] = "\n",
  [sym_alpha_numeric] = "alpha_numeric",
  [sym__content_line] = "_content_line",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_bash_section] = "bash_section",
  [sym_txt_section] = "txt_section",
  [sym_js_section] = "js_section",
  [sym_python_section] = "python_section",
  [sym_tag] = "tag",
  [sym_tags] = "tags",
  [sym_role] = "role",
  [sym_bash_section_names] = "section_name",
  [sym_js_section_names] = "section_name",
  [sym_python_section_names] = "section_name",
  [sym_txt_section_names] = "section_name",
  [sym_bash_section_header] = "bash_section_header",
  [sym_txt_section_header] = "txt_section_header",
  [sym_js_section_header] = "js_section_header",
  [sym_python_section_header] = "python_section_header",
  [sym_js_line] = "js_line",
  [sym_js_line_and_tags] = "js_line_and_tags",
  [aux_sym__js_and_tags_content] = "_js_and_tags_content",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_role_token1] = aux_sym_role_token1,
  [sym_options] = sym_options,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_variables] = anon_sym_variables,
  [anon_sym_late_variables] = anon_sym_late_variables,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_pyexit] = anon_sym_pyexit,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LF] = anon_sym_LF,
  [sym_alpha_numeric] = sym_alpha_numeric,
  [sym__content_line] = sym__content_line,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_bash_section] = sym_bash_section,
  [sym_txt_section] = sym_txt_section,
  [sym_js_section] = sym_js_section,
  [sym_python_section] = sym_python_section,
  [sym_tag] = sym_tag,
  [sym_tags] = sym_tags,
  [sym_role] = sym_role,
  [sym_bash_section_names] = sym_bash_section_names,
  [sym_js_section_names] = sym_bash_section_names,
  [sym_python_section_names] = sym_bash_section_names,
  [sym_txt_section_names] = sym_bash_section_names,
  [sym_bash_section_header] = sym_bash_section_header,
  [sym_txt_section_header] = sym_txt_section_header,
  [sym_js_section_header] = sym_js_section_header,
  [sym_python_section_header] = sym_python_section_header,
  [sym_js_line] = sym_js_line,
  [sym_js_line_and_tags] = sym_js_line_and_tags,
  [aux_sym__js_and_tags_content] = aux_sym__js_and_tags_content,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_role_token1] = {
    .visible = false,
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
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_alpha_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym__content_line] = {
    .visible = false,
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
  [sym_role] = {
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
  [sym_js_line] = {
    .visible = true,
    .named = true,
  },
  [sym_js_line_and_tags] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__js_and_tags_content] = {
    .visible = false,
    .named = false,
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
  [23] = 12,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 19,
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
  [56] = 8,
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
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 10,
  [86] = 86,
  [87] = 87,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      ADVANCE_MAP(
        '%', 70,
        ',', 49,
        ':', 51,
        '@', 52,
        'c', 102,
        'f', 90,
        'i', 99,
        'l', 74,
        'p', 114,
        's', 81,
        'v', 76,
        '|', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(71);
      if (lookahead == '@') ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(55);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(45);
      if (lookahead == 's') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(6);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(35);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'g') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(5);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(19);
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
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(26);
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
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 44:
      if (lookahead == 'x') ADVANCE(24);
      END_STATE();
    case 45:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46);
      if (lookahead != 0) ADVANCE(53);
      END_STATE();
    case 47:
      if (eof) ADVANCE(48);
      if (lookahead == '%') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(47);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
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
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_role_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(71);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '_') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'c') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'g') ADVANCE(63);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(59);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(61);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(65);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(57);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'v') ADVANCE(78);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'x') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'y') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(115);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 47, .external_lex_state = 1},
  [7] = {.lex_state = 47, .external_lex_state = 1},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 47, .external_lex_state = 1},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0, .external_lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 47, .external_lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 47, .external_lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0, .external_lex_state = 1},
  [29] = {.lex_state = 0, .external_lex_state = 1},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0, .external_lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 47},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 47, .external_lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 47, .external_lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 47, .external_lex_state = 1},
  [52] = {.lex_state = 47, .external_lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0, .external_lex_state = 1},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0, .external_lex_state = 1},
  [60] = {.lex_state = 0, .external_lex_state = 1},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 0, .external_lex_state = 1},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 0, .external_lex_state = 1},
  [69] = {.lex_state = 46},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 1},
  [72] = {.lex_state = 0, .external_lex_state = 1},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 1},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 1},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 1},
  [83] = {.lex_state = 0, .external_lex_state = 1},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 1},
  [86] = {.lex_state = 0, .external_lex_state = 1},
  [87] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_variables] = ACTIONS(1),
    [anon_sym_late_variables] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_pyexit] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_alpha_numeric] = ACTIONS(1),
    [sym__content_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(62),
    [sym_section] = STATE(3),
    [sym_bash_section] = STATE(54),
    [sym_txt_section] = STATE(54),
    [sym_js_section] = STATE(54),
    [sym_python_section] = STATE(54),
    [sym_bash_section_header] = STATE(30),
    [sym_txt_section_header] = STATE(28),
    [sym_js_section_header] = STATE(9),
    [sym_python_section_header] = STATE(29),
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
    ACTIONS(13), 1,
      sym_alpha_numeric,
    STATE(5), 1,
      sym_tags,
    STATE(12), 1,
      sym_tag,
    STATE(14), 1,
      sym_bash_section_names,
    STATE(15), 1,
      sym_js_section_names,
    STATE(16), 1,
      sym_python_section_names,
    STATE(17), 1,
      sym_txt_section_names,
    ACTIONS(11), 2,
      anon_sym_info,
      anon_sym_file,
    ACTIONS(7), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [37] = 8,
    ACTIONS(3), 1,
      anon_sym_PERCENT,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_js_section_header,
    STATE(28), 1,
      sym_txt_section_header,
    STATE(29), 1,
      sym_python_section_header,
    STATE(30), 1,
      sym_bash_section_header,
    STATE(4), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(54), 4,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
  [66] = 8,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_PERCENT,
    STATE(9), 1,
      sym_js_section_header,
    STATE(28), 1,
      sym_txt_section_header,
    STATE(29), 1,
      sym_python_section_header,
    STATE(30), 1,
      sym_bash_section_header,
    STATE(4), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(54), 4,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
  [95] = 8,
    ACTIONS(22), 1,
      anon_sym_script,
    ACTIONS(26), 1,
      anon_sym_pyexit,
    STATE(11), 1,
      sym_bash_section_names,
    STATE(18), 1,
      sym_python_section_names,
    STATE(20), 1,
      sym_js_section_names,
    STATE(21), 1,
      sym_txt_section_names,
    ACTIONS(28), 2,
      anon_sym_info,
      anon_sym_file,
    ACTIONS(24), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [123] = 6,
    ACTIONS(32), 1,
      sym_alpha_numeric,
    ACTIONS(34), 1,
      sym__content_line,
    STATE(23), 1,
      sym_tag,
    STATE(86), 1,
      sym_tags,
    ACTIONS(30), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    STATE(7), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [145] = 6,
    ACTIONS(38), 1,
      sym_alpha_numeric,
    ACTIONS(41), 1,
      sym__content_line,
    STATE(23), 1,
      sym_tag,
    STATE(86), 1,
      sym_tags,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    STATE(7), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [167] = 1,
    ACTIONS(44), 7,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_pyexit,
      anon_sym_info,
      anon_sym_file,
  [177] = 5,
    ACTIONS(32), 1,
      sym_alpha_numeric,
    ACTIONS(34), 1,
      sym__content_line,
    STATE(23), 1,
      sym_tag,
    STATE(86), 1,
      sym_tags,
    STATE(6), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [195] = 1,
    ACTIONS(46), 7,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_pyexit,
      anon_sym_info,
      anon_sym_file,
  [205] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(50), 1,
      sym_options,
    ACTIONS(52), 1,
      anon_sym_LF,
    STATE(44), 1,
      sym_role,
  [218] = 3,
    ACTIONS(56), 1,
      anon_sym_COLON,
    STATE(19), 1,
      aux_sym_tags_repeat1,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [229] = 3,
    ACTIONS(60), 1,
      sym__content_line,
    STATE(22), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [240] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      sym_options,
    ACTIONS(64), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym_role,
  [253] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      sym_options,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym_role,
  [266] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      sym_options,
    ACTIONS(72), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_role,
  [279] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(74), 1,
      sym_options,
    ACTIONS(76), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym_role,
  [292] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(78), 1,
      sym_options,
    ACTIONS(80), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym_role,
  [305] = 3,
    ACTIONS(82), 1,
      anon_sym_COLON,
    STATE(25), 1,
      aux_sym_tags_repeat1,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [316] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(84), 1,
      sym_options,
    ACTIONS(86), 1,
      anon_sym_LF,
    STATE(46), 1,
      sym_role,
  [329] = 4,
    ACTIONS(48), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      sym_options,
    ACTIONS(90), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym_role,
  [342] = 3,
    ACTIONS(94), 1,
      sym__content_line,
    STATE(22), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [353] = 3,
    ACTIONS(97), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_tags_repeat1,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [364] = 1,
    ACTIONS(99), 4,
      sym__content_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [371] = 3,
    ACTIONS(104), 1,
      anon_sym_COLON,
    STATE(25), 1,
      aux_sym_tags_repeat1,
    ACTIONS(101), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [382] = 1,
    ACTIONS(106), 4,
      sym__content_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [389] = 3,
    ACTIONS(108), 1,
      anon_sym_COLON,
    STATE(25), 1,
      aux_sym_tags_repeat1,
    ACTIONS(54), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [400] = 3,
    ACTIONS(60), 1,
      sym__content_line,
    STATE(13), 1,
      aux_sym_raw_content_repeat1,
    STATE(41), 1,
      sym_raw_content,
  [410] = 3,
    ACTIONS(60), 1,
      sym__content_line,
    STATE(13), 1,
      aux_sym_raw_content_repeat1,
    STATE(55), 1,
      sym_raw_content,
  [420] = 3,
    ACTIONS(60), 1,
      sym__content_line,
    STATE(13), 1,
      aux_sym_raw_content_repeat1,
    STATE(39), 1,
      sym_raw_content,
  [430] = 1,
    ACTIONS(110), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [436] = 1,
    ACTIONS(92), 3,
      sym__content_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [442] = 1,
    ACTIONS(112), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [448] = 1,
    ACTIONS(114), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [454] = 1,
    ACTIONS(116), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [460] = 1,
    ACTIONS(118), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [466] = 1,
    ACTIONS(104), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [472] = 2,
    ACTIONS(120), 1,
      sym_options,
    ACTIONS(122), 1,
      anon_sym_LF,
  [479] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [484] = 2,
    ACTIONS(32), 1,
      sym_alpha_numeric,
    STATE(37), 1,
      sym_tag,
  [491] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [496] = 2,
    ACTIONS(50), 1,
      sym_options,
    ACTIONS(52), 1,
      anon_sym_LF,
  [503] = 1,
    ACTIONS(128), 2,
      sym__content_line,
      sym_alpha_numeric,
  [508] = 2,
    ACTIONS(130), 1,
      sym_options,
    ACTIONS(132), 1,
      anon_sym_LF,
  [515] = 1,
    ACTIONS(134), 2,
      sym__content_line,
      sym_alpha_numeric,
  [520] = 2,
    ACTIONS(136), 1,
      sym_options,
    ACTIONS(138), 1,
      anon_sym_LF,
  [527] = 2,
    ACTIONS(84), 1,
      sym_options,
    ACTIONS(86), 1,
      anon_sym_LF,
  [534] = 2,
    ACTIONS(140), 1,
      sym_options,
    ACTIONS(142), 1,
      anon_sym_LF,
  [541] = 1,
    ACTIONS(144), 2,
      sym_options,
      anon_sym_LF,
  [546] = 2,
    ACTIONS(78), 1,
      sym_options,
    ACTIONS(80), 1,
      anon_sym_LF,
  [553] = 1,
    ACTIONS(146), 2,
      sym__content_line,
      sym_alpha_numeric,
  [558] = 1,
    ACTIONS(148), 2,
      sym__content_line,
      sym_alpha_numeric,
  [563] = 2,
    ACTIONS(88), 1,
      sym_options,
    ACTIONS(90), 1,
      anon_sym_LF,
  [570] = 1,
    ACTIONS(150), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [575] = 1,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [580] = 1,
    ACTIONS(44), 1,
      sym__content_line,
  [584] = 1,
    ACTIONS(154), 1,
      anon_sym_LF,
  [588] = 1,
    ACTIONS(156), 1,
      anon_sym_LF,
  [592] = 1,
    ACTIONS(158), 1,
      sym__content_line,
  [596] = 1,
    ACTIONS(160), 1,
      sym__content_line,
  [600] = 1,
    ACTIONS(162), 1,
      anon_sym_LF,
  [604] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [608] = 1,
    ACTIONS(166), 1,
      anon_sym_LF,
  [612] = 1,
    ACTIONS(168), 1,
      anon_sym_LF,
  [616] = 1,
    ACTIONS(170), 1,
      sym__content_line,
  [620] = 1,
    ACTIONS(172), 1,
      sym__content_line,
  [624] = 1,
    ACTIONS(174), 1,
      anon_sym_LF,
  [628] = 1,
    ACTIONS(176), 1,
      sym__content_line,
  [632] = 1,
    ACTIONS(178), 1,
      aux_sym_role_token1,
  [636] = 1,
    ACTIONS(180), 1,
      anon_sym_LF,
  [640] = 1,
    ACTIONS(182), 1,
      sym__content_line,
  [644] = 1,
    ACTIONS(184), 1,
      sym__content_line,
  [648] = 1,
    ACTIONS(186), 1,
      anon_sym_LF,
  [652] = 1,
    ACTIONS(188), 1,
      anon_sym_LF,
  [656] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [660] = 1,
    ACTIONS(192), 1,
      sym__content_line,
  [664] = 1,
    ACTIONS(194), 1,
      anon_sym_LF,
  [668] = 1,
    ACTIONS(196), 1,
      sym__content_line,
  [672] = 1,
    ACTIONS(198), 1,
      anon_sym_LF,
  [676] = 1,
    ACTIONS(200), 1,
      sym__content_line,
  [680] = 1,
    ACTIONS(202), 1,
      anon_sym_LF,
  [684] = 1,
    ACTIONS(204), 1,
      sym__content_line,
  [688] = 1,
    ACTIONS(206), 1,
      sym__content_line,
  [692] = 1,
    ACTIONS(208), 1,
      anon_sym_LF,
  [696] = 1,
    ACTIONS(46), 1,
      sym__content_line,
  [700] = 1,
    ACTIONS(210), 1,
      sym__content_line,
  [704] = 1,
    ACTIONS(212), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 145,
  [SMALL_STATE(8)] = 167,
  [SMALL_STATE(9)] = 177,
  [SMALL_STATE(10)] = 195,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 218,
  [SMALL_STATE(13)] = 229,
  [SMALL_STATE(14)] = 240,
  [SMALL_STATE(15)] = 253,
  [SMALL_STATE(16)] = 266,
  [SMALL_STATE(17)] = 279,
  [SMALL_STATE(18)] = 292,
  [SMALL_STATE(19)] = 305,
  [SMALL_STATE(20)] = 316,
  [SMALL_STATE(21)] = 329,
  [SMALL_STATE(22)] = 342,
  [SMALL_STATE(23)] = 353,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 382,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 410,
  [SMALL_STATE(30)] = 420,
  [SMALL_STATE(31)] = 430,
  [SMALL_STATE(32)] = 436,
  [SMALL_STATE(33)] = 442,
  [SMALL_STATE(34)] = 448,
  [SMALL_STATE(35)] = 454,
  [SMALL_STATE(36)] = 460,
  [SMALL_STATE(37)] = 466,
  [SMALL_STATE(38)] = 472,
  [SMALL_STATE(39)] = 479,
  [SMALL_STATE(40)] = 484,
  [SMALL_STATE(41)] = 491,
  [SMALL_STATE(42)] = 496,
  [SMALL_STATE(43)] = 503,
  [SMALL_STATE(44)] = 508,
  [SMALL_STATE(45)] = 515,
  [SMALL_STATE(46)] = 520,
  [SMALL_STATE(47)] = 527,
  [SMALL_STATE(48)] = 534,
  [SMALL_STATE(49)] = 541,
  [SMALL_STATE(50)] = 546,
  [SMALL_STATE(51)] = 553,
  [SMALL_STATE(52)] = 558,
  [SMALL_STATE(53)] = 563,
  [SMALL_STATE(54)] = 570,
  [SMALL_STATE(55)] = 575,
  [SMALL_STATE(56)] = 580,
  [SMALL_STATE(57)] = 584,
  [SMALL_STATE(58)] = 588,
  [SMALL_STATE(59)] = 592,
  [SMALL_STATE(60)] = 596,
  [SMALL_STATE(61)] = 600,
  [SMALL_STATE(62)] = 604,
  [SMALL_STATE(63)] = 608,
  [SMALL_STATE(64)] = 612,
  [SMALL_STATE(65)] = 616,
  [SMALL_STATE(66)] = 620,
  [SMALL_STATE(67)] = 624,
  [SMALL_STATE(68)] = 628,
  [SMALL_STATE(69)] = 632,
  [SMALL_STATE(70)] = 636,
  [SMALL_STATE(71)] = 640,
  [SMALL_STATE(72)] = 644,
  [SMALL_STATE(73)] = 648,
  [SMALL_STATE(74)] = 652,
  [SMALL_STATE(75)] = 656,
  [SMALL_STATE(76)] = 660,
  [SMALL_STATE(77)] = 664,
  [SMALL_STATE(78)] = 668,
  [SMALL_STATE(79)] = 672,
  [SMALL_STATE(80)] = 676,
  [SMALL_STATE(81)] = 680,
  [SMALL_STATE(82)] = 684,
  [SMALL_STATE(83)] = 688,
  [SMALL_STATE(84)] = 692,
  [SMALL_STATE(85)] = 696,
  [SMALL_STATE(86)] = 700,
  [SMALL_STATE(87)] = 704,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(36),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(74),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_line, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_line_and_tags, 3, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_section_names, 1, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_names, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_section_names, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txt_section_names, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section, 2, 0, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 2, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 5, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 6, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section, 2, 0, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 4, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 4, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 5, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 5, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 5, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 6, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 6, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 6, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__content_line = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__content_line] = sym__content_line,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__content_line] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_npf_external_scanner_create(void);
void tree_sitter_npf_external_scanner_destroy(void *);
bool tree_sitter_npf_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_npf_external_scanner_serialize(void *, char *);
void tree_sitter_npf_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_npf_external_scanner_create,
      tree_sitter_npf_external_scanner_destroy,
      tree_sitter_npf_external_scanner_scan,
      tree_sitter_npf_external_scanner_serialize,
      tree_sitter_npf_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
