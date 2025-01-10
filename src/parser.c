#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 83
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 41
#define ALIAS_COUNT 2
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
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
  anon_sym_PERCENT = 13,
  anon_sym_LF = 14,
  sym_js_line = 15,
  aux_sym_raw_content_token1 = 16,
  sym_alpha_numeric = 17,
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
  sym_js_line_and_tags = 35,
  aux_sym__js_and_tags_content = 36,
  sym_raw_content = 37,
  aux_sym_document_repeat1 = 38,
  aux_sym_tags_repeat1 = 39,
  aux_sym_raw_content_repeat1 = 40,
  alias_sym_python_content = 41,
  alias_sym_txt_content = 42,
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
  [anon_sym_PERCENT] = "%",
  [anon_sym_LF] = "\n",
  [sym_js_line] = "js_line",
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
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_LF] = anon_sym_LF,
  [sym_js_line] = sym_js_line,
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
  [25] = 12,
  [26] = 18,
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
  [79] = 8,
  [80] = 10,
  [81] = 81,
  [82] = 82,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '%', 73,
        ',', 54,
        ':', 56,
        '@', 57,
        'c', 108,
        'i', 105,
        'l', 83,
        'p', 120,
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '%') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '%') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(74);
      if (lookahead == '@') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(75);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(7);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 9:
      if (lookahead == '_') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(33);
      if (lookahead == 'l') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(17);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 46:
      if (lookahead == 'v') ADVANCE(14);
      END_STATE();
    case 47:
      if (lookahead == 'x') ADVANCE(28);
      END_STATE();
    case 48:
      if (lookahead == 'y') ADVANCE(19);
      END_STATE();
    case 49:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(49);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 50:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(50);
      if (lookahead != 0) ADVANCE(58);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '%') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '%') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
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
      if (lookahead == '\n') ADVANCE(74);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
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
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_js_line);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_js_line);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == '%') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_js_line);
      if (lookahead == '\n') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_js_line);
      if (lookahead == '\n') ADVANCE(79);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(2);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_raw_content_token1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_raw_content_token1);
      if (lookahead == '\n') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(5);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '_') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'c') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'g') ADVANCE(68);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(86);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'p') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(64);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(66);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(70);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(62);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'v') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'x') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'y') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(121);
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
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 51},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 6},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 51},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 52},
  [28] = {.lex_state = 52},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 49},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 52},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 52},
  [60] = {.lex_state = 7},
  [61] = {.lex_state = 52},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 52},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 7},
  [67] = {.lex_state = 52},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 52},
  [70] = {.lex_state = 7},
  [71] = {.lex_state = 52},
  [72] = {.lex_state = 7},
  [73] = {.lex_state = 52},
  [74] = {.lex_state = 7},
  [75] = {.lex_state = 52},
  [76] = {.lex_state = 7},
  [77] = {.lex_state = 52},
  [78] = {.lex_state = 52},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 50},
  [82] = {.lex_state = 7},
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
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_alpha_numeric] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(58),
    [sym_section] = STATE(4),
    [sym_bash_section] = STATE(43),
    [sym_txt_section] = STATE(43),
    [sym_js_section] = STATE(43),
    [sym_python_section] = STATE(43),
    [sym_bash_section_header] = STATE(27),
    [sym_txt_section_header] = STATE(29),
    [sym_js_section_header] = STATE(9),
    [sym_python_section_header] = STATE(28),
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
    ACTIONS(11), 1,
      anon_sym_info,
    ACTIONS(13), 1,
      sym_alpha_numeric,
    STATE(5), 1,
      sym_tags,
    STATE(12), 1,
      sym_tag,
    STATE(13), 1,
      sym_js_section_names,
    STATE(14), 1,
      sym_bash_section_names,
    STATE(16), 1,
      sym_python_section_names,
    STATE(17), 1,
      sym_txt_section_names,
    ACTIONS(7), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [36] = 8,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_PERCENT,
    STATE(9), 1,
      sym_js_section_header,
    STATE(27), 1,
      sym_bash_section_header,
    STATE(28), 1,
      sym_python_section_header,
    STATE(29), 1,
      sym_txt_section_header,
    STATE(3), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(43), 4,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
  [65] = 8,
    ACTIONS(3), 1,
      anon_sym_PERCENT,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_js_section_header,
    STATE(27), 1,
      sym_bash_section_header,
    STATE(28), 1,
      sym_python_section_header,
    STATE(29), 1,
      sym_txt_section_header,
    STATE(3), 2,
      sym_section,
      aux_sym_document_repeat1,
    STATE(43), 4,
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
    STATE(19), 1,
      sym_bash_section_names,
    STATE(20), 1,
      sym_js_section_names,
    STATE(21), 1,
      sym_python_section_names,
    STATE(22), 1,
      sym_txt_section_names,
    ACTIONS(24), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [121] = 7,
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
    STATE(62), 1,
      sym_tags,
    STATE(7), 2,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [144] = 7,
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
    STATE(62), 1,
      sym_tags,
    STATE(7), 2,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [167] = 1,
    ACTIONS(46), 6,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_pyexit,
      anon_sym_info,
  [176] = 5,
    ACTIONS(13), 1,
      sym_alpha_numeric,
    ACTIONS(48), 1,
      sym_js_line,
    STATE(25), 1,
      sym_tag,
    STATE(62), 1,
      sym_tags,
    STATE(6), 2,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [193] = 1,
    ACTIONS(50), 6,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_pyexit,
      anon_sym_info,
  [202] = 4,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      anon_sym_PERCENT,
    ACTIONS(56), 1,
      aux_sym_raw_content_token1,
    STATE(11), 1,
      aux_sym_raw_content_repeat1,
  [215] = 3,
    ACTIONS(61), 1,
      anon_sym_COLON,
    STATE(18), 1,
      aux_sym_tags_repeat1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [226] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(65), 1,
      sym_options,
    ACTIONS(67), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_role,
  [239] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(69), 1,
      sym_options,
    ACTIONS(71), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_role,
  [252] = 4,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    ACTIONS(75), 1,
      anon_sym_PERCENT,
    ACTIONS(77), 1,
      aux_sym_raw_content_token1,
    STATE(11), 1,
      aux_sym_raw_content_repeat1,
  [265] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(79), 1,
      sym_options,
    ACTIONS(81), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_role,
  [278] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(83), 1,
      sym_options,
    ACTIONS(85), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym_role,
  [291] = 3,
    ACTIONS(87), 1,
      anon_sym_COLON,
    STATE(24), 1,
      aux_sym_tags_repeat1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [302] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(89), 1,
      sym_options,
    ACTIONS(91), 1,
      anon_sym_LF,
    STATE(46), 1,
      sym_role,
  [315] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(93), 1,
      sym_options,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(48), 1,
      sym_role,
  [328] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(97), 1,
      sym_options,
    ACTIONS(99), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym_role,
  [341] = 4,
    ACTIONS(63), 1,
      anon_sym_AT,
    ACTIONS(101), 1,
      sym_options,
    ACTIONS(103), 1,
      anon_sym_LF,
    STATE(50), 1,
      sym_role,
  [354] = 2,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    ACTIONS(107), 3,
      anon_sym_PERCENT,
      sym_js_line,
      sym_alpha_numeric,
  [363] = 3,
    ACTIONS(112), 1,
      anon_sym_COLON,
    STATE(24), 1,
      aux_sym_tags_repeat1,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [374] = 3,
    ACTIONS(114), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym_tags_repeat1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [385] = 3,
    ACTIONS(116), 1,
      anon_sym_COLON,
    STATE(24), 1,
      aux_sym_tags_repeat1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [396] = 3,
    ACTIONS(118), 1,
      aux_sym_raw_content_token1,
    STATE(15), 1,
      aux_sym_raw_content_repeat1,
    STATE(45), 1,
      sym_raw_content,
  [406] = 3,
    ACTIONS(118), 1,
      aux_sym_raw_content_token1,
    STATE(15), 1,
      aux_sym_raw_content_repeat1,
    STATE(44), 1,
      sym_raw_content,
  [416] = 3,
    ACTIONS(118), 1,
      aux_sym_raw_content_token1,
    STATE(15), 1,
      aux_sym_raw_content_repeat1,
    STATE(42), 1,
      sym_raw_content,
  [426] = 1,
    ACTIONS(120), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [432] = 1,
    ACTIONS(122), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [438] = 1,
    ACTIONS(124), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [444] = 1,
    ACTIONS(126), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [450] = 1,
    ACTIONS(112), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [456] = 1,
    ACTIONS(128), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [462] = 2,
    ACTIONS(97), 1,
      sym_options,
    ACTIONS(99), 1,
      anon_sym_LF,
  [469] = 2,
    ACTIONS(89), 1,
      sym_options,
    ACTIONS(91), 1,
      anon_sym_LF,
  [476] = 1,
    ACTIONS(130), 2,
      sym_js_line,
      sym_alpha_numeric,
  [481] = 2,
    ACTIONS(93), 1,
      sym_options,
    ACTIONS(95), 1,
      anon_sym_LF,
  [488] = 2,
    ACTIONS(132), 1,
      sym_alpha_numeric,
    STATE(34), 1,
      sym_tag,
  [495] = 2,
    ACTIONS(101), 1,
      sym_options,
    ACTIONS(103), 1,
      anon_sym_LF,
  [502] = 1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [507] = 1,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [512] = 1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [517] = 1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [522] = 2,
    ACTIONS(142), 1,
      sym_options,
    ACTIONS(144), 1,
      anon_sym_LF,
  [529] = 1,
    ACTIONS(146), 2,
      sym_js_line,
      sym_alpha_numeric,
  [534] = 2,
    ACTIONS(148), 1,
      sym_options,
    ACTIONS(150), 1,
      anon_sym_LF,
  [541] = 2,
    ACTIONS(152), 1,
      sym_options,
    ACTIONS(154), 1,
      anon_sym_LF,
  [548] = 2,
    ACTIONS(156), 1,
      sym_options,
    ACTIONS(158), 1,
      anon_sym_LF,
  [555] = 1,
    ACTIONS(160), 2,
      sym_options,
      anon_sym_LF,
  [560] = 1,
    ACTIONS(162), 2,
      sym_js_line,
      sym_alpha_numeric,
  [565] = 1,
    ACTIONS(164), 2,
      sym_js_line,
      sym_alpha_numeric,
  [570] = 1,
    ACTIONS(166), 1,
      anon_sym_LF,
  [574] = 1,
    ACTIONS(168), 1,
      aux_sym_raw_content_token1,
  [578] = 1,
    ACTIONS(170), 1,
      anon_sym_LF,
  [582] = 1,
    ACTIONS(172), 1,
      aux_sym_raw_content_token1,
  [586] = 1,
    ACTIONS(174), 1,
      ts_builtin_sym_end,
  [590] = 1,
    ACTIONS(176), 1,
      aux_sym_raw_content_token1,
  [594] = 1,
    ACTIONS(178), 1,
      anon_sym_LF,
  [598] = 1,
    ACTIONS(180), 1,
      aux_sym_raw_content_token1,
  [602] = 1,
    ACTIONS(182), 1,
      sym_js_line,
  [606] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [610] = 1,
    ACTIONS(186), 1,
      aux_sym_raw_content_token1,
  [614] = 1,
    ACTIONS(188), 1,
      anon_sym_LF,
  [618] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [622] = 1,
    ACTIONS(192), 1,
      aux_sym_raw_content_token1,
  [626] = 1,
    ACTIONS(194), 1,
      anon_sym_LF,
  [630] = 1,
    ACTIONS(196), 1,
      aux_sym_raw_content_token1,
  [634] = 1,
    ACTIONS(198), 1,
      anon_sym_LF,
  [638] = 1,
    ACTIONS(200), 1,
      aux_sym_raw_content_token1,
  [642] = 1,
    ACTIONS(202), 1,
      anon_sym_LF,
  [646] = 1,
    ACTIONS(204), 1,
      aux_sym_raw_content_token1,
  [650] = 1,
    ACTIONS(206), 1,
      anon_sym_LF,
  [654] = 1,
    ACTIONS(208), 1,
      aux_sym_raw_content_token1,
  [658] = 1,
    ACTIONS(210), 1,
      anon_sym_LF,
  [662] = 1,
    ACTIONS(212), 1,
      aux_sym_raw_content_token1,
  [666] = 1,
    ACTIONS(214), 1,
      aux_sym_raw_content_token1,
  [670] = 1,
    ACTIONS(46), 1,
      sym_js_line,
  [674] = 1,
    ACTIONS(50), 1,
      sym_js_line,
  [678] = 1,
    ACTIONS(216), 1,
      aux_sym_role_token1,
  [682] = 1,
    ACTIONS(218), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 65,
  [SMALL_STATE(5)] = 94,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 167,
  [SMALL_STATE(9)] = 176,
  [SMALL_STATE(10)] = 193,
  [SMALL_STATE(11)] = 202,
  [SMALL_STATE(12)] = 215,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 239,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 278,
  [SMALL_STATE(18)] = 291,
  [SMALL_STATE(19)] = 302,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 328,
  [SMALL_STATE(22)] = 341,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 363,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 385,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 406,
  [SMALL_STATE(29)] = 416,
  [SMALL_STATE(30)] = 426,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 438,
  [SMALL_STATE(33)] = 444,
  [SMALL_STATE(34)] = 450,
  [SMALL_STATE(35)] = 456,
  [SMALL_STATE(36)] = 462,
  [SMALL_STATE(37)] = 469,
  [SMALL_STATE(38)] = 476,
  [SMALL_STATE(39)] = 481,
  [SMALL_STATE(40)] = 488,
  [SMALL_STATE(41)] = 495,
  [SMALL_STATE(42)] = 502,
  [SMALL_STATE(43)] = 507,
  [SMALL_STATE(44)] = 512,
  [SMALL_STATE(45)] = 517,
  [SMALL_STATE(46)] = 522,
  [SMALL_STATE(47)] = 529,
  [SMALL_STATE(48)] = 534,
  [SMALL_STATE(49)] = 541,
  [SMALL_STATE(50)] = 548,
  [SMALL_STATE(51)] = 555,
  [SMALL_STATE(52)] = 560,
  [SMALL_STATE(53)] = 565,
  [SMALL_STATE(54)] = 570,
  [SMALL_STATE(55)] = 574,
  [SMALL_STATE(56)] = 578,
  [SMALL_STATE(57)] = 582,
  [SMALL_STATE(58)] = 586,
  [SMALL_STATE(59)] = 590,
  [SMALL_STATE(60)] = 594,
  [SMALL_STATE(61)] = 598,
  [SMALL_STATE(62)] = 602,
  [SMALL_STATE(63)] = 606,
  [SMALL_STATE(64)] = 610,
  [SMALL_STATE(65)] = 614,
  [SMALL_STATE(66)] = 618,
  [SMALL_STATE(67)] = 622,
  [SMALL_STATE(68)] = 626,
  [SMALL_STATE(69)] = 630,
  [SMALL_STATE(70)] = 634,
  [SMALL_STATE(71)] = 638,
  [SMALL_STATE(72)] = 642,
  [SMALL_STATE(73)] = 646,
  [SMALL_STATE(74)] = 650,
  [SMALL_STATE(75)] = 654,
  [SMALL_STATE(76)] = 658,
  [SMALL_STATE(77)] = 662,
  [SMALL_STATE(78)] = 666,
  [SMALL_STATE(79)] = 670,
  [SMALL_STATE(80)] = 674,
  [SMALL_STATE(81)] = 678,
  [SMALL_STATE(82)] = 682,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section, 2, 0, 0),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section, 2, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(7),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(35),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 3, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_raw_content, 1, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_line_and_tags, 2, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_line_and_tags, 2, 0, 0),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_section_names, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_names, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_section_names, 1, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txt_section_names, 1, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_header, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section, 2, 0, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section, 2, 0, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_header, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_header, 5, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_header, 6, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 4, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 4, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 5, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 3, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 5, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 5, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 6, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 6, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 6, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
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
