#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 3
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_COMMA = 1,
  anon_sym_PIPE = 2,
  anon_sym_COLON = 3,
  anon_sym_AT = 4,
  aux_sym_role_token1 = 5,
  sym_options = 6,
  sym_filename = 7,
  anon_sym_script = 8,
  anon_sym_variables = 9,
  anon_sym_late_variables = 10,
  anon_sym_config = 11,
  anon_sym_pyexit = 12,
  anon_sym_info = 13,
  anon_sym_file = 14,
  anon_sym_PERCENT = 15,
  anon_sym_LF = 16,
  sym_alpha_numeric = 17,
  sym__content_line = 18,
  sym_comment_line = 19,
  sym_document = 20,
  sym_section = 21,
  sym_bash_section = 22,
  sym_txt_section = 23,
  sym_js_section = 24,
  sym_python_section = 25,
  sym_lua_file_section = 26,
  sym_tag = 27,
  sym_tags = 28,
  sym_role = 29,
  sym_bash_section_names = 30,
  sym_js_section_names = 31,
  sym_python_section_names = 32,
  sym_txt_section_names = 33,
  sym_file_section_names = 34,
  sym_bash_section_header = 35,
  sym_txt_section_header = 36,
  sym_js_section_header = 37,
  sym_python_section_header = 38,
  sym_lua_file_section_header = 39,
  sym_js_line = 40,
  sym_js_line_and_tags = 41,
  aux_sym__js_and_tags_content = 42,
  sym_raw_content = 43,
  sym_comment_block = 44,
  aux_sym_document_repeat1 = 45,
  aux_sym_tags_repeat1 = 46,
  aux_sym_raw_content_repeat1 = 47,
  aux_sym_comment_block_repeat1 = 48,
  alias_sym_lua_content = 49,
  alias_sym_python_content = 50,
  alias_sym_txt_content = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [aux_sym_role_token1] = "role_token1",
  [sym_options] = "options",
  [sym_filename] = "filename",
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
  [sym_comment_line] = "comment_line",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_bash_section] = "bash_section",
  [sym_txt_section] = "txt_section",
  [sym_js_section] = "js_section",
  [sym_python_section] = "python_section",
  [sym_lua_file_section] = "lua_file_section",
  [sym_tag] = "tag",
  [sym_tags] = "tags",
  [sym_role] = "role",
  [sym_bash_section_names] = "section_name",
  [sym_js_section_names] = "section_name",
  [sym_python_section_names] = "section_name",
  [sym_txt_section_names] = "section_name",
  [sym_file_section_names] = "section_name",
  [sym_bash_section_header] = "bash_section_header",
  [sym_txt_section_header] = "txt_section_header",
  [sym_js_section_header] = "js_section_header",
  [sym_python_section_header] = "python_section_header",
  [sym_lua_file_section_header] = "lua_file_section_header",
  [sym_js_line] = "js_line",
  [sym_js_line_and_tags] = "js_line_and_tags",
  [aux_sym__js_and_tags_content] = "_js_and_tags_content",
  [sym_raw_content] = "bash_content",
  [sym_comment_block] = "comment_block",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
  [aux_sym_raw_content_repeat1] = "raw_content_repeat1",
  [aux_sym_comment_block_repeat1] = "comment_block_repeat1",
  [alias_sym_lua_content] = "lua_content",
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
  [sym_filename] = sym_filename,
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
  [sym_comment_line] = sym_comment_line,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_bash_section] = sym_bash_section,
  [sym_txt_section] = sym_txt_section,
  [sym_js_section] = sym_js_section,
  [sym_python_section] = sym_python_section,
  [sym_lua_file_section] = sym_lua_file_section,
  [sym_tag] = sym_tag,
  [sym_tags] = sym_tags,
  [sym_role] = sym_role,
  [sym_bash_section_names] = sym_bash_section_names,
  [sym_js_section_names] = sym_bash_section_names,
  [sym_python_section_names] = sym_bash_section_names,
  [sym_txt_section_names] = sym_bash_section_names,
  [sym_file_section_names] = sym_bash_section_names,
  [sym_bash_section_header] = sym_bash_section_header,
  [sym_txt_section_header] = sym_txt_section_header,
  [sym_js_section_header] = sym_js_section_header,
  [sym_python_section_header] = sym_python_section_header,
  [sym_lua_file_section_header] = sym_lua_file_section_header,
  [sym_js_line] = sym_js_line,
  [sym_js_line_and_tags] = sym_js_line_and_tags,
  [aux_sym__js_and_tags_content] = aux_sym__js_and_tags_content,
  [sym_raw_content] = sym_raw_content,
  [sym_comment_block] = sym_comment_block,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
  [aux_sym_raw_content_repeat1] = aux_sym_raw_content_repeat1,
  [aux_sym_comment_block_repeat1] = aux_sym_comment_block_repeat1,
  [alias_sym_lua_content] = alias_sym_lua_content,
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
  [sym_filename] = {
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
  [sym_comment_line] = {
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
  [sym_lua_file_section] = {
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
  [sym_file_section_names] = {
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
  [sym_lua_file_section_header] = {
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
  [sym_comment_block] = {
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
  [aux_sym_comment_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_lua_content] = {
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
    [1] = alias_sym_python_content,
  },
  [3] = {
    [1] = alias_sym_lua_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_raw_content, 4,
    sym_raw_content,
    alias_sym_lua_content,
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
  [29] = 20,
  [30] = 28,
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
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 9,
  [101] = 10,
  [102] = 59,
  [103] = 103,
  [104] = 104,
  [105] = 94,
  [106] = 106,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      ADVANCE_MAP(
        '%', 80,
        ',', 54,
        ':', 56,
        '@', 57,
        'c', 112,
        'f', 100,
        'i', 109,
        'l', 84,
        'p', 124,
        's', 91,
        'v', 86,
        '|', 55,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(81);
      if (lookahead == '@') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '@') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(4);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '.') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '_') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'l') ADVANCE(9);
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 's') ADVANCE(17);
      if (lookahead == 'v') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 48:
      if (lookahead == 'v') ADVANCE(13);
      END_STATE();
    case 49:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 50:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 51:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(51);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '%') ADVANCE(80);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(52);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
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
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(7);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_role_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_options);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'a') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'l') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == 'u') ADVANCE(62);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_filename);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_variables);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_late_variables);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_late_variables);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_pyexit);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_pyexit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_info);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(90);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(108);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(118);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'g') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(97);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'p') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(69);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(67);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'x') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'y') ADVANCE(92);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0, .external_lex_state = 2},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 52, .external_lex_state = 1},
  [7] = {.lex_state = 52, .external_lex_state = 1},
  [8] = {.lex_state = 52, .external_lex_state = 3},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 0, .external_lex_state = 1},
  [13] = {.lex_state = 52, .external_lex_state = 1},
  [14] = {.lex_state = 52, .external_lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0, .external_lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 3},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 3},
  [37] = {.lex_state = 0, .external_lex_state = 3},
  [38] = {.lex_state = 0, .external_lex_state = 2},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0, .external_lex_state = 2},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0, .external_lex_state = 2},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0, .external_lex_state = 2},
  [46] = {.lex_state = 0, .external_lex_state = 2},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 52},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 52, .external_lex_state = 3},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 52, .external_lex_state = 3},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 52, .external_lex_state = 3},
  [63] = {.lex_state = 52, .external_lex_state = 3},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 0, .external_lex_state = 3},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0, .external_lex_state = 3},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 3},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0, .external_lex_state = 3},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 0, .external_lex_state = 3},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0, .external_lex_state = 3},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0, .external_lex_state = 3},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 3},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 3},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 51},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 0, .external_lex_state = 3},
  [99] = {.lex_state = 0, .external_lex_state = 3},
  [100] = {.lex_state = 0, .external_lex_state = 3},
  [101] = {.lex_state = 0, .external_lex_state = 3},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 0, .external_lex_state = 3},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 51},
  [106] = {.lex_state = 2},
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
    [sym_comment_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(73),
    [sym_section] = STATE(3),
    [sym_bash_section] = STATE(35),
    [sym_txt_section] = STATE(35),
    [sym_js_section] = STATE(35),
    [sym_python_section] = STATE(35),
    [sym_lua_file_section] = STATE(35),
    [sym_bash_section_header] = STATE(33),
    [sym_txt_section_header] = STATE(36),
    [sym_js_section_header] = STATE(8),
    [sym_python_section_header] = STATE(32),
    [sym_lua_file_section_header] = STATE(37),
    [sym_comment_block] = STATE(3),
    [aux_sym_document_repeat1] = STATE(3),
    [aux_sym_comment_block_repeat1] = STATE(16),
    [anon_sym_PERCENT] = ACTIONS(3),
    [sym_comment_line] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 1,
      anon_sym_PERCENT,
    ACTIONS(12), 1,
      sym_comment_line,
    STATE(8), 1,
      sym_js_section_header,
    STATE(16), 1,
      aux_sym_comment_block_repeat1,
    STATE(32), 1,
      sym_python_section_header,
    STATE(33), 1,
      sym_bash_section_header,
    STATE(36), 1,
      sym_txt_section_header,
    STATE(37), 1,
      sym_lua_file_section_header,
    STATE(2), 3,
      sym_section,
      sym_comment_block,
      aux_sym_document_repeat1,
    STATE(35), 5,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
      sym_lua_file_section,
  [40] = 11,
    ACTIONS(3), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 1,
      sym_comment_line,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(8), 1,
      sym_js_section_header,
    STATE(16), 1,
      aux_sym_comment_block_repeat1,
    STATE(32), 1,
      sym_python_section_header,
    STATE(33), 1,
      sym_bash_section_header,
    STATE(36), 1,
      sym_txt_section_header,
    STATE(37), 1,
      sym_lua_file_section_header,
    STATE(2), 3,
      sym_section,
      sym_comment_block,
      aux_sym_document_repeat1,
    STATE(35), 5,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
      sym_lua_file_section,
  [80] = 13,
    ACTIONS(17), 1,
      anon_sym_script,
    ACTIONS(21), 1,
      anon_sym_pyexit,
    ACTIONS(23), 1,
      anon_sym_info,
    ACTIONS(25), 1,
      anon_sym_file,
    ACTIONS(27), 1,
      sym_alpha_numeric,
    STATE(5), 1,
      sym_tags,
    STATE(15), 1,
      sym_bash_section_names,
    STATE(17), 1,
      sym_txt_section_names,
    STATE(18), 1,
      sym_python_section_names,
    STATE(19), 1,
      sym_js_section_names,
    STATE(20), 1,
      sym_tag,
    STATE(39), 1,
      sym_file_section_names,
    ACTIONS(19), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [122] = 10,
    ACTIONS(29), 1,
      anon_sym_script,
    ACTIONS(33), 1,
      anon_sym_pyexit,
    ACTIONS(35), 1,
      anon_sym_info,
    ACTIONS(37), 1,
      anon_sym_file,
    STATE(22), 1,
      sym_txt_section_names,
    STATE(23), 1,
      sym_python_section_names,
    STATE(25), 1,
      sym_js_section_names,
    STATE(26), 1,
      sym_bash_section_names,
    STATE(31), 1,
      sym_file_section_names,
    ACTIONS(31), 3,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
  [155] = 6,
    ACTIONS(41), 1,
      sym_alpha_numeric,
    ACTIONS(43), 1,
      sym__content_line,
    STATE(29), 1,
      sym_tag,
    STATE(66), 1,
      sym_tags,
    ACTIONS(39), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    STATE(7), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [178] = 6,
    ACTIONS(47), 1,
      sym_alpha_numeric,
    ACTIONS(50), 1,
      sym__content_line,
    STATE(29), 1,
      sym_tag,
    STATE(66), 1,
      sym_tags,
    ACTIONS(45), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    STATE(7), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [201] = 5,
    ACTIONS(41), 1,
      sym_alpha_numeric,
    ACTIONS(43), 1,
      sym__content_line,
    STATE(29), 1,
      sym_tag,
    STATE(66), 1,
      sym_tags,
    STATE(6), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [219] = 1,
    ACTIONS(53), 7,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_pyexit,
      anon_sym_info,
      anon_sym_file,
  [229] = 1,
    ACTIONS(55), 7,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_pyexit,
      anon_sym_info,
      anon_sym_file,
  [239] = 3,
    ACTIONS(59), 1,
      sym__content_line,
    STATE(12), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(57), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [251] = 3,
    ACTIONS(63), 1,
      sym__content_line,
    STATE(12), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(61), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [263] = 1,
    ACTIONS(66), 5,
      sym__content_line,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [271] = 1,
    ACTIONS(68), 5,
      sym__content_line,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [279] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(72), 1,
      sym_options,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym_role,
  [292] = 3,
    ACTIONS(5), 1,
      sym_comment_line,
    STATE(21), 1,
      aux_sym_comment_block_repeat1,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [303] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(78), 1,
      sym_options,
    ACTIONS(80), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym_role,
  [316] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(82), 1,
      sym_options,
    ACTIONS(84), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym_role,
  [329] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(86), 1,
      sym_options,
    ACTIONS(88), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym_role,
  [342] = 3,
    ACTIONS(92), 1,
      anon_sym_COLON,
    STATE(28), 1,
      aux_sym_tags_repeat1,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [353] = 3,
    ACTIONS(96), 1,
      sym_comment_line,
    STATE(21), 1,
      aux_sym_comment_block_repeat1,
    ACTIONS(94), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [364] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(99), 1,
      sym_options,
    ACTIONS(101), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym_role,
  [377] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_options,
    ACTIONS(105), 1,
      anon_sym_LF,
    STATE(61), 1,
      sym_role,
  [390] = 1,
    ACTIONS(61), 4,
      sym__content_line,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [397] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      sym_options,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(56), 1,
      sym_role,
  [410] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(111), 1,
      sym_options,
    ACTIONS(113), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym_role,
  [423] = 3,
    ACTIONS(118), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_tags_repeat1,
    ACTIONS(115), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [434] = 3,
    ACTIONS(120), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_tags_repeat1,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [445] = 3,
    ACTIONS(122), 1,
      anon_sym_COLON,
    STATE(30), 1,
      aux_sym_tags_repeat1,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [456] = 3,
    ACTIONS(124), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_tags_repeat1,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [467] = 3,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(128), 1,
      sym_filename,
    STATE(81), 1,
      sym_role,
  [477] = 3,
    ACTIONS(59), 1,
      sym__content_line,
    STATE(11), 1,
      aux_sym_raw_content_repeat1,
    STATE(45), 1,
      sym_raw_content,
  [487] = 3,
    ACTIONS(59), 1,
      sym__content_line,
    STATE(11), 1,
      aux_sym_raw_content_repeat1,
    STATE(40), 1,
      sym_raw_content,
  [497] = 1,
    ACTIONS(130), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [503] = 1,
    ACTIONS(132), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [509] = 3,
    ACTIONS(59), 1,
      sym__content_line,
    STATE(11), 1,
      aux_sym_raw_content_repeat1,
    STATE(43), 1,
      sym_raw_content,
  [519] = 3,
    ACTIONS(59), 1,
      sym__content_line,
    STATE(11), 1,
      aux_sym_raw_content_repeat1,
    STATE(46), 1,
      sym_raw_content,
  [529] = 1,
    ACTIONS(94), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [535] = 3,
    ACTIONS(126), 1,
      anon_sym_AT,
    ACTIONS(134), 1,
      sym_filename,
    STATE(87), 1,
      sym_role,
  [545] = 1,
    ACTIONS(136), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [551] = 1,
    ACTIONS(138), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [557] = 1,
    ACTIONS(118), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [563] = 1,
    ACTIONS(140), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [569] = 1,
    ACTIONS(142), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [575] = 1,
    ACTIONS(144), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [581] = 1,
    ACTIONS(146), 3,
      sym_comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [587] = 1,
    ACTIONS(148), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [593] = 1,
    ACTIONS(150), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [599] = 2,
    ACTIONS(152), 1,
      anon_sym_AT,
    ACTIONS(154), 1,
      sym_filename,
  [606] = 2,
    ACTIONS(41), 1,
      sym_alpha_numeric,
    STATE(42), 1,
      sym_tag,
  [613] = 2,
    ACTIONS(111), 1,
      sym_options,
    ACTIONS(113), 1,
      anon_sym_LF,
  [620] = 1,
    ACTIONS(156), 2,
      sym__content_line,
      sym_alpha_numeric,
  [625] = 2,
    ACTIONS(107), 1,
      sym_options,
    ACTIONS(109), 1,
      anon_sym_LF,
  [632] = 2,
    ACTIONS(103), 1,
      sym_options,
    ACTIONS(105), 1,
      anon_sym_LF,
  [639] = 2,
    ACTIONS(99), 1,
      sym_options,
    ACTIONS(101), 1,
      anon_sym_LF,
  [646] = 2,
    ACTIONS(158), 1,
      sym_options,
    ACTIONS(160), 1,
      anon_sym_LF,
  [653] = 1,
    ACTIONS(162), 2,
      sym__content_line,
      sym_alpha_numeric,
  [658] = 2,
    ACTIONS(164), 1,
      sym_options,
    ACTIONS(166), 1,
      anon_sym_LF,
  [665] = 1,
    ACTIONS(168), 2,
      sym_options,
      anon_sym_LF,
  [670] = 2,
    ACTIONS(170), 1,
      sym_options,
    ACTIONS(172), 1,
      anon_sym_LF,
  [677] = 2,
    ACTIONS(174), 1,
      sym_options,
    ACTIONS(176), 1,
      anon_sym_LF,
  [684] = 1,
    ACTIONS(178), 2,
      sym__content_line,
      sym_alpha_numeric,
  [689] = 1,
    ACTIONS(180), 2,
      sym__content_line,
      sym_alpha_numeric,
  [694] = 1,
    ACTIONS(182), 1,
      anon_sym_LF,
  [698] = 1,
    ACTIONS(184), 1,
      anon_sym_LF,
  [702] = 1,
    ACTIONS(186), 1,
      sym__content_line,
  [706] = 1,
    ACTIONS(188), 1,
      anon_sym_LF,
  [710] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [714] = 1,
    ACTIONS(192), 1,
      sym__content_line,
  [718] = 1,
    ACTIONS(194), 1,
      anon_sym_LF,
  [722] = 1,
    ACTIONS(196), 1,
      anon_sym_LF,
  [726] = 1,
    ACTIONS(198), 1,
      sym__content_line,
  [730] = 1,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
  [734] = 1,
    ACTIONS(202), 1,
      anon_sym_LF,
  [738] = 1,
    ACTIONS(204), 1,
      sym__content_line,
  [742] = 1,
    ACTIONS(206), 1,
      anon_sym_LF,
  [746] = 1,
    ACTIONS(208), 1,
      anon_sym_LF,
  [750] = 1,
    ACTIONS(210), 1,
      sym__content_line,
  [754] = 1,
    ACTIONS(212), 1,
      sym__content_line,
  [758] = 1,
    ACTIONS(214), 1,
      anon_sym_LF,
  [762] = 1,
    ACTIONS(216), 1,
      sym_filename,
  [766] = 1,
    ACTIONS(218), 1,
      anon_sym_LF,
  [770] = 1,
    ACTIONS(220), 1,
      sym__content_line,
  [774] = 1,
    ACTIONS(222), 1,
      anon_sym_LF,
  [778] = 1,
    ACTIONS(224), 1,
      sym__content_line,
  [782] = 1,
    ACTIONS(226), 1,
      anon_sym_LF,
  [786] = 1,
    ACTIONS(128), 1,
      sym_filename,
  [790] = 1,
    ACTIONS(228), 1,
      anon_sym_LF,
  [794] = 1,
    ACTIONS(230), 1,
      sym__content_line,
  [798] = 1,
    ACTIONS(232), 1,
      anon_sym_LF,
  [802] = 1,
    ACTIONS(234), 1,
      sym__content_line,
  [806] = 1,
    ACTIONS(236), 1,
      anon_sym_LF,
  [810] = 1,
    ACTIONS(238), 1,
      sym__content_line,
  [814] = 1,
    ACTIONS(240), 1,
      aux_sym_role_token1,
  [818] = 1,
    ACTIONS(242), 1,
      sym__content_line,
  [822] = 1,
    ACTIONS(244), 1,
      anon_sym_LF,
  [826] = 1,
    ACTIONS(246), 1,
      sym__content_line,
  [830] = 1,
    ACTIONS(248), 1,
      sym__content_line,
  [834] = 1,
    ACTIONS(250), 1,
      sym__content_line,
  [838] = 1,
    ACTIONS(53), 1,
      sym__content_line,
  [842] = 1,
    ACTIONS(55), 1,
      sym__content_line,
  [846] = 1,
    ACTIONS(252), 1,
      sym_filename,
  [850] = 1,
    ACTIONS(254), 1,
      sym__content_line,
  [854] = 1,
    ACTIONS(256), 1,
      anon_sym_LF,
  [858] = 1,
    ACTIONS(258), 1,
      aux_sym_role_token1,
  [862] = 1,
    ACTIONS(260), 1,
      anon_sym_LF,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 122,
  [SMALL_STATE(6)] = 155,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 201,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 229,
  [SMALL_STATE(11)] = 239,
  [SMALL_STATE(12)] = 251,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 271,
  [SMALL_STATE(15)] = 279,
  [SMALL_STATE(16)] = 292,
  [SMALL_STATE(17)] = 303,
  [SMALL_STATE(18)] = 316,
  [SMALL_STATE(19)] = 329,
  [SMALL_STATE(20)] = 342,
  [SMALL_STATE(21)] = 353,
  [SMALL_STATE(22)] = 364,
  [SMALL_STATE(23)] = 377,
  [SMALL_STATE(24)] = 390,
  [SMALL_STATE(25)] = 397,
  [SMALL_STATE(26)] = 410,
  [SMALL_STATE(27)] = 423,
  [SMALL_STATE(28)] = 434,
  [SMALL_STATE(29)] = 445,
  [SMALL_STATE(30)] = 456,
  [SMALL_STATE(31)] = 467,
  [SMALL_STATE(32)] = 477,
  [SMALL_STATE(33)] = 487,
  [SMALL_STATE(34)] = 497,
  [SMALL_STATE(35)] = 503,
  [SMALL_STATE(36)] = 509,
  [SMALL_STATE(37)] = 519,
  [SMALL_STATE(38)] = 529,
  [SMALL_STATE(39)] = 535,
  [SMALL_STATE(40)] = 545,
  [SMALL_STATE(41)] = 551,
  [SMALL_STATE(42)] = 557,
  [SMALL_STATE(43)] = 563,
  [SMALL_STATE(44)] = 569,
  [SMALL_STATE(45)] = 575,
  [SMALL_STATE(46)] = 581,
  [SMALL_STATE(47)] = 587,
  [SMALL_STATE(48)] = 593,
  [SMALL_STATE(49)] = 599,
  [SMALL_STATE(50)] = 606,
  [SMALL_STATE(51)] = 613,
  [SMALL_STATE(52)] = 620,
  [SMALL_STATE(53)] = 625,
  [SMALL_STATE(54)] = 632,
  [SMALL_STATE(55)] = 639,
  [SMALL_STATE(56)] = 646,
  [SMALL_STATE(57)] = 653,
  [SMALL_STATE(58)] = 658,
  [SMALL_STATE(59)] = 665,
  [SMALL_STATE(60)] = 670,
  [SMALL_STATE(61)] = 677,
  [SMALL_STATE(62)] = 684,
  [SMALL_STATE(63)] = 689,
  [SMALL_STATE(64)] = 694,
  [SMALL_STATE(65)] = 698,
  [SMALL_STATE(66)] = 702,
  [SMALL_STATE(67)] = 706,
  [SMALL_STATE(68)] = 710,
  [SMALL_STATE(69)] = 714,
  [SMALL_STATE(70)] = 718,
  [SMALL_STATE(71)] = 722,
  [SMALL_STATE(72)] = 726,
  [SMALL_STATE(73)] = 730,
  [SMALL_STATE(74)] = 734,
  [SMALL_STATE(75)] = 738,
  [SMALL_STATE(76)] = 742,
  [SMALL_STATE(77)] = 746,
  [SMALL_STATE(78)] = 750,
  [SMALL_STATE(79)] = 754,
  [SMALL_STATE(80)] = 758,
  [SMALL_STATE(81)] = 762,
  [SMALL_STATE(82)] = 766,
  [SMALL_STATE(83)] = 770,
  [SMALL_STATE(84)] = 774,
  [SMALL_STATE(85)] = 778,
  [SMALL_STATE(86)] = 782,
  [SMALL_STATE(87)] = 786,
  [SMALL_STATE(88)] = 790,
  [SMALL_STATE(89)] = 794,
  [SMALL_STATE(90)] = 798,
  [SMALL_STATE(91)] = 802,
  [SMALL_STATE(92)] = 806,
  [SMALL_STATE(93)] = 810,
  [SMALL_STATE(94)] = 814,
  [SMALL_STATE(95)] = 818,
  [SMALL_STATE(96)] = 822,
  [SMALL_STATE(97)] = 826,
  [SMALL_STATE(98)] = 830,
  [SMALL_STATE(99)] = 834,
  [SMALL_STATE(100)] = 838,
  [SMALL_STATE(101)] = 842,
  [SMALL_STATE(102)] = 846,
  [SMALL_STATE(103)] = 850,
  [SMALL_STATE(104)] = 854,
  [SMALL_STATE(105)] = 858,
  [SMALL_STATE(106)] = 862,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(34),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(84),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 3, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_line, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_line_and_tags, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(50),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_section_names, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section, 2, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_names, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section, 2, 0, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_file_section, 2, 0, 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_section_names, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txt_section_names, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_section_names, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_section_names, 1, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 5, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 6, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 4, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 3, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 4, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 4, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 3, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_file_section_header, 4, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 5, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 5, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 5, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_file_section_header, 5, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 6, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 6, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 6, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lua_file_section_header, 6, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__content_line = 0,
  ts_external_token_comment_line = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__content_line] = sym__content_line,
  [ts_external_token_comment_line] = sym_comment_line,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__content_line] = true,
    [ts_external_token_comment_line] = true,
  },
  [2] = {
    [ts_external_token_comment_line] = true,
  },
  [3] = {
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
