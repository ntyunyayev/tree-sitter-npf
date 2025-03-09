#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 2
#define TOKEN_COUNT 19
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
  sym_js_line = 16,
  sym_alpha_numeric = 17,
  sym__content_line = 18,
  sym_document = 19,
  sym_section = 20,
  sym_bash_section = 21,
  sym_txt_section = 22,
  sym_js_section = 23,
  sym_python_section = 24,
  sym_tag = 25,
  sym_tags = 26,
  sym_role = 27,
  sym_bash_section_names = 28,
  sym_js_section_names = 29,
  sym_python_section_names = 30,
  sym_txt_section_names = 31,
  sym_bash_section_header = 32,
  sym_txt_section_header = 33,
  sym_js_section_header = 34,
  sym_python_section_header = 35,
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
  [sym_js_line] = "js_line",
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
  [sym_js_line] = sym_js_line,
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
  [sym_js_line] = {
    .visible = true,
    .named = true,
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
  [23] = 23,
  [24] = 24,
  [25] = 11,
  [26] = 17,
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
  [81] = 8,
  [82] = 9,
  [83] = 83,
  [84] = 84,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '%', 75,
        ',', 54,
        ':', 56,
        '@', 57,
        'c', 111,
        'f', 99,
        'i', 108,
        'l', 83,
        'p', 123,
        's', 90,
        'v', 85,
        '|', 55,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '%') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == '@') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(77);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(37);
      if (lookahead == 'f') ADVANCE(25);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'p') ADVANCE(49);
      if (lookahead == 's') ADVANCE(16);
      if (lookahead == 'v') ADVANCE(10);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(9);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 38:
      if (lookahead == 'p') ADVANCE(45);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(12);
      END_STATE();
    case 48:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 'y') ADVANCE(17);
      END_STATE();
    case 50:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 51:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '%') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_role_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_options);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_variables);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_late_variables);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_late_variables);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_pyexit);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_pyexit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_info);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(76);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_js_line);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_js_line);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == '%') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_js_line);
      if (lookahead == '\n') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_js_line);
      if (lookahead == '\n') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(6);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '_') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'c') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(74);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'p') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'x') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'y') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
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
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 0, .external_lex_state = 1},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0, .external_lex_state = 1},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0, .external_lex_state = 1},
  [31] = {.lex_state = 0, .external_lex_state = 1},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0, .external_lex_state = 1},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 4},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 0, .external_lex_state = 1},
  [58] = {.lex_state = 51},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 5},
  [61] = {.lex_state = 0, .external_lex_state = 1},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 0, .external_lex_state = 1},
  [64] = {.lex_state = 5},
  [65] = {.lex_state = 5},
  [66] = {.lex_state = 0, .external_lex_state = 1},
  [67] = {.lex_state = 0, .external_lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0, .external_lex_state = 1},
  [70] = {.lex_state = 5},
  [71] = {.lex_state = 5},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 0, .external_lex_state = 1},
  [74] = {.lex_state = 6},
  [75] = {.lex_state = 0, .external_lex_state = 1},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 0, .external_lex_state = 1},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 0, .external_lex_state = 1},
  [80] = {.lex_state = 0, .external_lex_state = 1},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0, .external_lex_state = 1},
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
    [sym_document] = STATE(68),
    [sym_section] = STATE(4),
    [sym_bash_section] = STATE(52),
    [sym_txt_section] = STATE(52),
    [sym_js_section] = STATE(52),
    [sym_python_section] = STATE(52),
    [sym_bash_section_header] = STATE(34),
    [sym_txt_section_header] = STATE(27),
    [sym_js_section_header] = STATE(10),
    [sym_python_section_header] = STATE(31),
    [aux_sym_document_repeat1] = STATE(4),
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
    STATE(11), 1,
      sym_tag,
    STATE(12), 1,
      sym_bash_section_names,
    STATE(13), 1,
      sym_js_section_names,
    STATE(14), 1,
      sym_python_section_names,
    STATE(15), 1,
      sym_txt_section_names,
    ACTIONS(11), 2,
      anon_sym_info,
      anon_sym_file,
    ACTIONS(7), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [37] = 8,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    STATE(10), 1,
      sym_js_section_header,
    STATE(27), 1,
      sym_txt_section_header,
    STATE(31), 1,
      sym_python_section_header,
    STATE(34), 1,
      sym_bash_section_header,
    STATE(3), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(52), 4,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
  [66] = 8,
    ACTIONS(3), 1,
      anon_sym_PERCENT,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_js_section_header,
    STATE(27), 1,
      sym_txt_section_header,
    STATE(31), 1,
      sym_python_section_header,
    STATE(34), 1,
      sym_bash_section_header,
    STATE(3), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(52), 4,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
  [95] = 8,
    ACTIONS(22), 1,
      anon_sym_script,
    ACTIONS(26), 1,
      anon_sym_pyexit,
    STATE(18), 1,
      sym_python_section_names,
    STATE(19), 1,
      sym_js_section_names,
    STATE(22), 1,
      sym_bash_section_names,
    STATE(23), 1,
      sym_txt_section_names,
    ACTIONS(28), 2,
      anon_sym_info,
      anon_sym_file,
    ACTIONS(24), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [123] = 7,
    ACTIONS(13), 1,
      sym_alpha_numeric,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
    ACTIONS(32), 1,
      anon_sym_PERCENT,
    ACTIONS(34), 1,
      sym_js_line,
    STATE(25), 1,
      sym_tag,
    STATE(74), 1,
      sym_tags,
    STATE(7), 2,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [146] = 7,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_PERCENT,
    ACTIONS(40), 1,
      sym_js_line,
    ACTIONS(43), 1,
      sym_alpha_numeric,
    STATE(25), 1,
      sym_tag,
    STATE(74), 1,
      sym_tags,
    STATE(7), 2,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [169] = 1,
    ACTIONS(46), 7,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_pyexit,
      anon_sym_info,
      anon_sym_file,
  [179] = 1,
    ACTIONS(48), 7,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_pyexit,
      anon_sym_info,
      anon_sym_file,
  [189] = 5,
    ACTIONS(13), 1,
      sym_alpha_numeric,
    ACTIONS(50), 1,
      sym_js_line,
    STATE(25), 1,
      sym_tag,
    STATE(74), 1,
      sym_tags,
    STATE(6), 2,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [206] = 3,
    ACTIONS(54), 1,
      anon_sym_COLON,
    STATE(17), 1,
      aux_sym_tags_repeat1,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [217] = 4,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(58), 1,
      sym_options,
    ACTIONS(60), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_role,
  [230] = 4,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(62), 1,
      sym_options,
    ACTIONS(64), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym_role,
  [243] = 4,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(66), 1,
      sym_options,
    ACTIONS(68), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_role,
  [256] = 4,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(70), 1,
      sym_options,
    ACTIONS(72), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym_role,
  [269] = 3,
    ACTIONS(76), 1,
      sym__content_line,
    STATE(20), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(74), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [280] = 3,
    ACTIONS(78), 1,
      anon_sym_COLON,
    STATE(24), 1,
      aux_sym_tags_repeat1,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [291] = 4,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(80), 1,
      sym_options,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym_role,
  [304] = 4,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(84), 1,
      sym_options,
    ACTIONS(86), 1,
      anon_sym_LF,
    STATE(47), 1,
      sym_role,
  [317] = 3,
    ACTIONS(90), 1,
      sym__content_line,
    STATE(20), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [328] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 3,
      anon_sym_PERCENT,
      sym_js_line,
      sym_alpha_numeric,
  [337] = 4,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(97), 1,
      sym_options,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_role,
  [350] = 4,
    ACTIONS(56), 1,
      anon_sym_AT,
    ACTIONS(101), 1,
      sym_options,
    ACTIONS(103), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym_role,
  [363] = 3,
    ACTIONS(108), 1,
      anon_sym_COLON,
    STATE(24), 1,
      aux_sym_tags_repeat1,
    ACTIONS(105), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [374] = 3,
    ACTIONS(110), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym_tags_repeat1,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [385] = 3,
    ACTIONS(112), 1,
      anon_sym_COLON,
    STATE(24), 1,
      aux_sym_tags_repeat1,
    ACTIONS(52), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [396] = 3,
    ACTIONS(76), 1,
      sym__content_line,
    STATE(16), 1,
      aux_sym_raw_content_repeat1,
    STATE(42), 1,
      sym_raw_content,
  [406] = 1,
    ACTIONS(114), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [412] = 1,
    ACTIONS(116), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [418] = 1,
    ACTIONS(88), 3,
      sym__content_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [424] = 3,
    ACTIONS(76), 1,
      sym__content_line,
    STATE(16), 1,
      aux_sym_raw_content_repeat1,
    STATE(44), 1,
      sym_raw_content,
  [434] = 1,
    ACTIONS(118), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [440] = 1,
    ACTIONS(108), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [446] = 3,
    ACTIONS(76), 1,
      sym__content_line,
    STATE(16), 1,
      aux_sym_raw_content_repeat1,
    STATE(41), 1,
      sym_raw_content,
  [456] = 1,
    ACTIONS(120), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [462] = 1,
    ACTIONS(122), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [468] = 2,
    ACTIONS(97), 1,
      sym_options,
    ACTIONS(99), 1,
      anon_sym_LF,
  [475] = 2,
    ACTIONS(84), 1,
      sym_options,
    ACTIONS(86), 1,
      anon_sym_LF,
  [482] = 2,
    ACTIONS(80), 1,
      sym_options,
    ACTIONS(82), 1,
      anon_sym_LF,
  [489] = 2,
    ACTIONS(101), 1,
      sym_options,
    ACTIONS(103), 1,
      anon_sym_LF,
  [496] = 1,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [501] = 1,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [506] = 1,
    ACTIONS(128), 2,
      sym_js_line,
      sym_alpha_numeric,
  [511] = 1,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [516] = 2,
    ACTIONS(132), 1,
      sym_alpha_numeric,
    STATE(33), 1,
      sym_tag,
  [523] = 1,
    ACTIONS(134), 2,
      sym_js_line,
      sym_alpha_numeric,
  [528] = 2,
    ACTIONS(136), 1,
      sym_options,
    ACTIONS(138), 1,
      anon_sym_LF,
  [535] = 2,
    ACTIONS(140), 1,
      sym_options,
    ACTIONS(142), 1,
      anon_sym_LF,
  [542] = 2,
    ACTIONS(144), 1,
      sym_options,
    ACTIONS(146), 1,
      anon_sym_LF,
  [549] = 2,
    ACTIONS(148), 1,
      sym_options,
    ACTIONS(150), 1,
      anon_sym_LF,
  [556] = 1,
    ACTIONS(152), 2,
      sym_js_line,
      sym_alpha_numeric,
  [561] = 1,
    ACTIONS(154), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [566] = 1,
    ACTIONS(156), 2,
      sym_options,
      anon_sym_LF,
  [571] = 1,
    ACTIONS(158), 2,
      sym_js_line,
      sym_alpha_numeric,
  [576] = 1,
    ACTIONS(160), 1,
      anon_sym_LF,
  [580] = 1,
    ACTIONS(162), 1,
      anon_sym_LF,
  [584] = 1,
    ACTIONS(164), 1,
      sym__content_line,
  [588] = 1,
    ACTIONS(166), 1,
      aux_sym_role_token1,
  [592] = 1,
    ACTIONS(168), 1,
      anon_sym_LF,
  [596] = 1,
    ACTIONS(170), 1,
      anon_sym_LF,
  [600] = 1,
    ACTIONS(172), 1,
      sym__content_line,
  [604] = 1,
    ACTIONS(174), 1,
      anon_sym_LF,
  [608] = 1,
    ACTIONS(176), 1,
      sym__content_line,
  [612] = 1,
    ACTIONS(178), 1,
      anon_sym_LF,
  [616] = 1,
    ACTIONS(180), 1,
      anon_sym_LF,
  [620] = 1,
    ACTIONS(182), 1,
      sym__content_line,
  [624] = 1,
    ACTIONS(184), 1,
      sym__content_line,
  [628] = 1,
    ACTIONS(186), 1,
      ts_builtin_sym_end,
  [632] = 1,
    ACTIONS(188), 1,
      sym__content_line,
  [636] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [640] = 1,
    ACTIONS(192), 1,
      anon_sym_LF,
  [644] = 1,
    ACTIONS(194), 1,
      anon_sym_LF,
  [648] = 1,
    ACTIONS(196), 1,
      sym__content_line,
  [652] = 1,
    ACTIONS(198), 1,
      sym_js_line,
  [656] = 1,
    ACTIONS(200), 1,
      sym__content_line,
  [660] = 1,
    ACTIONS(202), 1,
      anon_sym_LF,
  [664] = 1,
    ACTIONS(204), 1,
      sym__content_line,
  [668] = 1,
    ACTIONS(206), 1,
      anon_sym_LF,
  [672] = 1,
    ACTIONS(208), 1,
      sym__content_line,
  [676] = 1,
    ACTIONS(210), 1,
      sym__content_line,
  [680] = 1,
    ACTIONS(46), 1,
      sym_js_line,
  [684] = 1,
    ACTIONS(48), 1,
      sym_js_line,
  [688] = 1,
    ACTIONS(212), 1,
      anon_sym_LF,
  [692] = 1,
    ACTIONS(214), 1,
      sym__content_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 37,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 123,
  [SMALL_STATE(7)] = 146,
  [SMALL_STATE(8)] = 169,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 206,
  [SMALL_STATE(12)] = 217,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 243,
  [SMALL_STATE(15)] = 256,
  [SMALL_STATE(16)] = 269,
  [SMALL_STATE(17)] = 280,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 304,
  [SMALL_STATE(20)] = 317,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 337,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 406,
  [SMALL_STATE(29)] = 412,
  [SMALL_STATE(30)] = 418,
  [SMALL_STATE(31)] = 424,
  [SMALL_STATE(32)] = 434,
  [SMALL_STATE(33)] = 440,
  [SMALL_STATE(34)] = 446,
  [SMALL_STATE(35)] = 456,
  [SMALL_STATE(36)] = 462,
  [SMALL_STATE(37)] = 468,
  [SMALL_STATE(38)] = 475,
  [SMALL_STATE(39)] = 482,
  [SMALL_STATE(40)] = 489,
  [SMALL_STATE(41)] = 496,
  [SMALL_STATE(42)] = 501,
  [SMALL_STATE(43)] = 506,
  [SMALL_STATE(44)] = 511,
  [SMALL_STATE(45)] = 516,
  [SMALL_STATE(46)] = 523,
  [SMALL_STATE(47)] = 528,
  [SMALL_STATE(48)] = 535,
  [SMALL_STATE(49)] = 542,
  [SMALL_STATE(50)] = 549,
  [SMALL_STATE(51)] = 556,
  [SMALL_STATE(52)] = 561,
  [SMALL_STATE(53)] = 566,
  [SMALL_STATE(54)] = 571,
  [SMALL_STATE(55)] = 576,
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
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(29),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_line_and_tags, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_line_and_tags, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txt_section_names, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_section_names, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_names, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_section_names, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section, 2, 0, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_header, 3, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section, 2, 0, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_header, 4, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_header, 5, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_header, 6, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 4, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 4, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 5, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 6, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 6, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 6, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 3, 0, 0),
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
