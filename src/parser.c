#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 3
#define TOKEN_COUNT 23
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
  sym_file_name = 7,
  sym_file_extension = 8,
  anon_sym_DOT = 9,
  anon_sym_LF = 10,
  anon_sym_script = 11,
  anon_sym_variables = 12,
  anon_sym_late_variables = 13,
  anon_sym_config = 14,
  anon_sym_include = 15,
  anon_sym_pyexit = 16,
  anon_sym_info = 17,
  anon_sym_file = 18,
  anon_sym_PERCENT = 19,
  sym_alpha_numeric = 20,
  sym__content_line = 21,
  sym__comment_line = 22,
  sym_document = 23,
  sym_section = 24,
  sym_bash_section = 25,
  sym_txt_section = 26,
  sym_js_section = 27,
  sym_python_section = 28,
  sym_file_section = 29,
  sym_tag = 30,
  sym_tags = 31,
  sym_role = 32,
  sym_file_name_and_extension = 33,
  sym_file = 34,
  sym_bash_section_names = 35,
  sym_js_section_names = 36,
  sym_python_section_names = 37,
  sym_txt_section_names = 38,
  sym__file_section_name = 39,
  sym_bash_section_header = 40,
  sym_txt_section_header = 41,
  sym_js_section_header = 42,
  sym_python_section_header = 43,
  sym__file_section_header = 44,
  sym_js_line = 45,
  sym_js_line_and_tags = 46,
  aux_sym__js_and_tags_content = 47,
  sym_raw_content = 48,
  sym_comment_block = 49,
  aux_sym_document_repeat1 = 50,
  aux_sym_tags_repeat1 = 51,
  aux_sym_raw_content_repeat1 = 52,
  aux_sym_comment_block_repeat1 = 53,
  alias_sym_file_content = 54,
  alias_sym_python_content = 55,
  alias_sym_txt_content = 56,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_PIPE] = "|",
  [anon_sym_COLON] = ":",
  [anon_sym_AT] = "@",
  [aux_sym_role_token1] = "role_token1",
  [sym_options] = "options",
  [sym_file_name] = "file_name",
  [sym_file_extension] = "file_extension",
  [anon_sym_DOT] = ".",
  [anon_sym_LF] = "\n",
  [anon_sym_script] = "script",
  [anon_sym_variables] = "variables",
  [anon_sym_late_variables] = "late_variables",
  [anon_sym_config] = "config",
  [anon_sym_include] = "include",
  [anon_sym_pyexit] = "pyexit",
  [anon_sym_info] = "info",
  [anon_sym_file] = "file",
  [anon_sym_PERCENT] = "%",
  [sym_alpha_numeric] = "alpha_numeric",
  [sym__content_line] = "_content_line",
  [sym__comment_line] = "_comment_line",
  [sym_document] = "document",
  [sym_section] = "section",
  [sym_bash_section] = "bash_section",
  [sym_txt_section] = "txt_section",
  [sym_js_section] = "js_section",
  [sym_python_section] = "python_section",
  [sym_file_section] = "file_section",
  [sym_tag] = "tag",
  [sym_tags] = "tags",
  [sym_role] = "role",
  [sym_file_name_and_extension] = "file_name_and_extension",
  [sym_file] = "file",
  [sym_bash_section_names] = "section_name",
  [sym_js_section_names] = "section_name",
  [sym_python_section_names] = "section_name",
  [sym_txt_section_names] = "section_name",
  [sym__file_section_name] = "section_name",
  [sym_bash_section_header] = "bash_section_header",
  [sym_txt_section_header] = "txt_section_header",
  [sym_js_section_header] = "js_section_header",
  [sym_python_section_header] = "python_section_header",
  [sym__file_section_header] = "_file_section_header",
  [sym_js_line] = "js_line",
  [sym_js_line_and_tags] = "js_line_and_tags",
  [aux_sym__js_and_tags_content] = "_js_and_tags_content",
  [sym_raw_content] = "bash_content",
  [sym_comment_block] = "comment_block",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_tags_repeat1] = "tags_repeat1",
  [aux_sym_raw_content_repeat1] = "raw_content_repeat1",
  [aux_sym_comment_block_repeat1] = "comment_block_repeat1",
  [alias_sym_file_content] = "file_content",
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
  [sym_file_name] = sym_file_name,
  [sym_file_extension] = sym_file_extension,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_script] = anon_sym_script,
  [anon_sym_variables] = anon_sym_variables,
  [anon_sym_late_variables] = anon_sym_late_variables,
  [anon_sym_config] = anon_sym_config,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_pyexit] = anon_sym_pyexit,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_alpha_numeric] = sym_alpha_numeric,
  [sym__content_line] = sym__content_line,
  [sym__comment_line] = sym__comment_line,
  [sym_document] = sym_document,
  [sym_section] = sym_section,
  [sym_bash_section] = sym_bash_section,
  [sym_txt_section] = sym_txt_section,
  [sym_js_section] = sym_js_section,
  [sym_python_section] = sym_python_section,
  [sym_file_section] = sym_file_section,
  [sym_tag] = sym_tag,
  [sym_tags] = sym_tags,
  [sym_role] = sym_role,
  [sym_file_name_and_extension] = sym_file_name_and_extension,
  [sym_file] = sym_file,
  [sym_bash_section_names] = sym_bash_section_names,
  [sym_js_section_names] = sym_bash_section_names,
  [sym_python_section_names] = sym_bash_section_names,
  [sym_txt_section_names] = sym_bash_section_names,
  [sym__file_section_name] = sym_bash_section_names,
  [sym_bash_section_header] = sym_bash_section_header,
  [sym_txt_section_header] = sym_txt_section_header,
  [sym_js_section_header] = sym_js_section_header,
  [sym_python_section_header] = sym_python_section_header,
  [sym__file_section_header] = sym__file_section_header,
  [sym_js_line] = sym_js_line,
  [sym_js_line_and_tags] = sym_js_line_and_tags,
  [aux_sym__js_and_tags_content] = aux_sym__js_and_tags_content,
  [sym_raw_content] = sym_raw_content,
  [sym_comment_block] = sym_comment_block,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_tags_repeat1] = aux_sym_tags_repeat1,
  [aux_sym_raw_content_repeat1] = aux_sym_raw_content_repeat1,
  [aux_sym_comment_block_repeat1] = aux_sym_comment_block_repeat1,
  [alias_sym_file_content] = alias_sym_file_content,
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
  [sym_file_name] = {
    .visible = true,
    .named = true,
  },
  [sym_file_extension] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [anon_sym_include] = {
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
  [sym_alpha_numeric] = {
    .visible = true,
    .named = true,
  },
  [sym__content_line] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_line] = {
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
  [sym_file_section] = {
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
  [sym_file_name_and_extension] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
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
  [sym__file_section_name] = {
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
  [sym__file_section_header] = {
    .visible = false,
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
  [alias_sym_file_content] = {
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
    [2] = alias_sym_file_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_raw_content, 4,
    sym_raw_content,
    alias_sym_file_content,
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
  [22] = 16,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 28,
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
  [96] = 9,
  [97] = 8,
  [98] = 56,
  [99] = 99,
  [100] = 100,
  [101] = 83,
  [102] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(55);
      ADVANCE_MAP(
        '%', 88,
        ',', 56,
        '.', 69,
        ':', 58,
        '@', 59,
        'c', 121,
        'f', 108,
        'i', 118,
        'l', 90,
        'p', 134,
        's', 97,
        'v', 92,
        '|', 57,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '@') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '@') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(66);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '.') ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(71);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(50);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(26);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'p') ADVANCE(52);
      if (lookahead == 's') ADVANCE(15);
      if (lookahead == 'v') ADVANCE(9);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(14);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(32);
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(78);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(8);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(74);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 50:
      if (lookahead == 'v') ADVANCE(11);
      END_STATE();
    case 51:
      if (lookahead == 'x') ADVANCE(29);
      END_STATE();
    case 52:
      if (lookahead == 'y') ADVANCE(18);
      END_STATE();
    case 53:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(53);
      if (lookahead != 0) ADVANCE(61);
      END_STATE();
    case 54:
      if (eof) ADVANCE(55);
      if (lookahead == '%') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(54);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_AT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '.') ADVANCE(66);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_role_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_options);
      if (lookahead == '\n') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_options);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '@') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_file_name);
      if (lookahead == '@') ADVANCE(60);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '.') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_file_name);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '.') ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_file_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '.') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_file_extension);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(67);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(68);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_file_extension);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(70);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_script);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_script);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_variables);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_variables);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_late_variables);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_late_variables);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_config);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_config);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_include);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_pyexit);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_pyexit);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_info);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_info);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_file);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '_') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(130);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(96);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(116);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'c') ADVANCE(114);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(87);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(126);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'f') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'g') ADVANCE(79);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(115);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(122);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(128);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(91);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(101);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(104);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'l') ADVANCE(105);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(98);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'n') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(85);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'o') ADVANCE(119);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'p') ADVANCE(129);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(112);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'r') ADVANCE(113);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 's') ADVANCE(77);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(83);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'u') ADVANCE(99);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'v') ADVANCE(94);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'x') ADVANCE(111);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == 'y') ADVANCE(100);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_alpha_numeric);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
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
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 54, .external_lex_state = 1},
  [7] = {.lex_state = 54, .external_lex_state = 1},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 54, .external_lex_state = 3},
  [11] = {.lex_state = 0, .external_lex_state = 1},
  [12] = {.lex_state = 54, .external_lex_state = 1},
  [13] = {.lex_state = 0, .external_lex_state = 1},
  [14] = {.lex_state = 54, .external_lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0, .external_lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0, .external_lex_state = 2},
  [31] = {.lex_state = 0, .external_lex_state = 3},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {.lex_state = 0, .external_lex_state = 2},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0, .external_lex_state = 3},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0, .external_lex_state = 2},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 0, .external_lex_state = 3},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 54, .external_lex_state = 3},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 54, .external_lex_state = 3},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 54, .external_lex_state = 3},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 54, .external_lex_state = 3},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 54},
  [64] = {.lex_state = 0, .external_lex_state = 3},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 0, .external_lex_state = 3},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 0, .external_lex_state = 3},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 0, .external_lex_state = 3},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 0, .external_lex_state = 3},
  [78] = {.lex_state = 0, .external_lex_state = 3},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 53},
  [84] = {.lex_state = 0, .external_lex_state = 3},
  [85] = {.lex_state = 4},
  [86] = {.lex_state = 4},
  [87] = {.lex_state = 4},
  [88] = {.lex_state = 0, .external_lex_state = 3},
  [89] = {.lex_state = 4},
  [90] = {.lex_state = 4},
  [91] = {.lex_state = 4},
  [92] = {.lex_state = 0, .external_lex_state = 3},
  [93] = {.lex_state = 0, .external_lex_state = 3},
  [94] = {.lex_state = 0, .external_lex_state = 3},
  [95] = {.lex_state = 0, .external_lex_state = 3},
  [96] = {.lex_state = 0, .external_lex_state = 3},
  [97] = {.lex_state = 0, .external_lex_state = 3},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 53},
  [102] = {.lex_state = 0, .external_lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_script] = ACTIONS(1),
    [anon_sym_variables] = ACTIONS(1),
    [anon_sym_late_variables] = ACTIONS(1),
    [anon_sym_config] = ACTIONS(1),
    [anon_sym_include] = ACTIONS(1),
    [anon_sym_pyexit] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_alpha_numeric] = ACTIONS(1),
    [sym__content_line] = ACTIONS(1),
    [sym__comment_line] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(100),
    [sym_section] = STATE(2),
    [sym_bash_section] = STATE(33),
    [sym_txt_section] = STATE(33),
    [sym_js_section] = STATE(33),
    [sym_python_section] = STATE(33),
    [sym_file_section] = STATE(33),
    [sym_bash_section_header] = STATE(31),
    [sym_txt_section_header] = STATE(48),
    [sym_js_section_header] = STATE(10),
    [sym_python_section_header] = STATE(35),
    [sym__file_section_header] = STATE(45),
    [sym_comment_block] = STATE(2),
    [aux_sym_document_repeat1] = STATE(2),
    [aux_sym_comment_block_repeat1] = STATE(25),
    [anon_sym_PERCENT] = ACTIONS(3),
    [sym__comment_line] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      anon_sym_PERCENT,
    ACTIONS(5), 1,
      sym__comment_line,
    ACTIONS(7), 1,
      ts_builtin_sym_end,
    STATE(10), 1,
      sym_js_section_header,
    STATE(25), 1,
      aux_sym_comment_block_repeat1,
    STATE(31), 1,
      sym_bash_section_header,
    STATE(35), 1,
      sym_python_section_header,
    STATE(45), 1,
      sym__file_section_header,
    STATE(48), 1,
      sym_txt_section_header,
    STATE(3), 3,
      sym_section,
      sym_comment_block,
      aux_sym_document_repeat1,
    STATE(33), 5,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
      sym_file_section,
  [40] = 11,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_PERCENT,
    ACTIONS(14), 1,
      sym__comment_line,
    STATE(10), 1,
      sym_js_section_header,
    STATE(25), 1,
      aux_sym_comment_block_repeat1,
    STATE(31), 1,
      sym_bash_section_header,
    STATE(35), 1,
      sym_python_section_header,
    STATE(45), 1,
      sym__file_section_header,
    STATE(48), 1,
      sym_txt_section_header,
    STATE(3), 3,
      sym_section,
      sym_comment_block,
      aux_sym_document_repeat1,
    STATE(33), 5,
      sym_bash_section,
      sym_txt_section,
      sym_js_section,
      sym_python_section,
      sym_file_section,
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
    STATE(17), 1,
      sym_bash_section_names,
    STATE(18), 1,
      sym_js_section_names,
    STATE(19), 1,
      sym_python_section_names,
    STATE(20), 1,
      sym_txt_section_names,
    STATE(28), 1,
      sym_tag,
    STATE(47), 1,
      sym__file_section_name,
    ACTIONS(19), 4,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_include,
  [123] = 10,
    ACTIONS(29), 1,
      anon_sym_script,
    ACTIONS(33), 1,
      anon_sym_pyexit,
    ACTIONS(35), 1,
      anon_sym_info,
    ACTIONS(37), 1,
      anon_sym_file,
    STATE(15), 1,
      sym_python_section_names,
    STATE(23), 1,
      sym_bash_section_names,
    STATE(24), 1,
      sym_js_section_names,
    STATE(26), 1,
      sym_txt_section_names,
    STATE(37), 1,
      sym__file_section_name,
    ACTIONS(31), 4,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_include,
  [157] = 6,
    ACTIONS(41), 1,
      sym_alpha_numeric,
    ACTIONS(43), 1,
      sym__content_line,
    STATE(29), 1,
      sym_tag,
    STATE(102), 1,
      sym_tags,
    ACTIONS(39), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    STATE(7), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [180] = 6,
    ACTIONS(47), 1,
      sym_alpha_numeric,
    ACTIONS(50), 1,
      sym__content_line,
    STATE(29), 1,
      sym_tag,
    STATE(102), 1,
      sym_tags,
    ACTIONS(45), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
    STATE(7), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [203] = 1,
    ACTIONS(53), 8,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_include,
      anon_sym_pyexit,
      anon_sym_info,
      anon_sym_file,
  [214] = 1,
    ACTIONS(55), 8,
      anon_sym_script,
      anon_sym_variables,
      anon_sym_late_variables,
      anon_sym_config,
      anon_sym_include,
      anon_sym_pyexit,
      anon_sym_info,
      anon_sym_file,
  [225] = 5,
    ACTIONS(41), 1,
      sym_alpha_numeric,
    ACTIONS(43), 1,
      sym__content_line,
    STATE(29), 1,
      sym_tag,
    STATE(102), 1,
      sym_tags,
    STATE(6), 3,
      sym_js_line,
      sym_js_line_and_tags,
      aux_sym__js_and_tags_content,
  [243] = 3,
    ACTIONS(59), 1,
      sym__content_line,
    STATE(11), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(57), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [255] = 1,
    ACTIONS(62), 5,
      sym__content_line,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [263] = 3,
    ACTIONS(66), 1,
      sym__content_line,
    STATE(11), 1,
      aux_sym_raw_content_repeat1,
    ACTIONS(64), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [275] = 1,
    ACTIONS(68), 5,
      sym__content_line,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
      sym_alpha_numeric,
  [283] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(72), 1,
      sym_options,
    ACTIONS(74), 1,
      anon_sym_LF,
    STATE(54), 1,
      sym_role,
  [296] = 3,
    ACTIONS(78), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_tags_repeat1,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [307] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(80), 1,
      sym_options,
    ACTIONS(82), 1,
      anon_sym_LF,
    STATE(49), 1,
      sym_role,
  [320] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(84), 1,
      sym_options,
    ACTIONS(86), 1,
      anon_sym_LF,
    STATE(58), 1,
      sym_role,
  [333] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(88), 1,
      sym_options,
    ACTIONS(90), 1,
      anon_sym_LF,
    STATE(60), 1,
      sym_role,
  [346] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(92), 1,
      sym_options,
    ACTIONS(94), 1,
      anon_sym_LF,
    STATE(62), 1,
      sym_role,
  [359] = 3,
    ACTIONS(98), 1,
      sym__comment_line,
    STATE(21), 1,
      aux_sym_comment_block_repeat1,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [370] = 3,
    ACTIONS(101), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_tags_repeat1,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [381] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(103), 1,
      sym_options,
    ACTIONS(105), 1,
      anon_sym_LF,
    STATE(51), 1,
      sym_role,
  [394] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(107), 1,
      sym_options,
    ACTIONS(109), 1,
      anon_sym_LF,
    STATE(53), 1,
      sym_role,
  [407] = 3,
    ACTIONS(113), 1,
      sym__comment_line,
    STATE(21), 1,
      aux_sym_comment_block_repeat1,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [418] = 4,
    ACTIONS(70), 1,
      anon_sym_AT,
    ACTIONS(115), 1,
      sym_options,
    ACTIONS(117), 1,
      anon_sym_LF,
    STATE(55), 1,
      sym_role,
  [431] = 3,
    ACTIONS(122), 1,
      anon_sym_COLON,
    STATE(27), 1,
      aux_sym_tags_repeat1,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [442] = 3,
    ACTIONS(124), 1,
      anon_sym_COLON,
    STATE(22), 1,
      aux_sym_tags_repeat1,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [453] = 3,
    ACTIONS(126), 1,
      anon_sym_COLON,
    STATE(16), 1,
      aux_sym_tags_repeat1,
    ACTIONS(76), 2,
      anon_sym_COMMA,
      anon_sym_PIPE,
  [464] = 1,
    ACTIONS(128), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [470] = 3,
    ACTIONS(130), 1,
      sym__content_line,
    STATE(13), 1,
      aux_sym_raw_content_repeat1,
    STATE(32), 1,
      sym_raw_content,
  [480] = 1,
    ACTIONS(132), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [486] = 1,
    ACTIONS(134), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [492] = 1,
    ACTIONS(136), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [498] = 3,
    ACTIONS(130), 1,
      sym__content_line,
    STATE(13), 1,
      aux_sym_raw_content_repeat1,
    STATE(36), 1,
      sym_raw_content,
  [508] = 1,
    ACTIONS(138), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [514] = 3,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(142), 1,
      sym_file_name,
    STATE(79), 1,
      sym_role,
  [524] = 1,
    ACTIONS(144), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [530] = 1,
    ACTIONS(146), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [536] = 1,
    ACTIONS(148), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [542] = 3,
    ACTIONS(130), 1,
      sym__content_line,
    STATE(13), 1,
      aux_sym_raw_content_repeat1,
    STATE(30), 1,
      sym_raw_content,
  [552] = 1,
    ACTIONS(122), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [558] = 1,
    ACTIONS(150), 3,
      anon_sym_AT,
      sym_options,
      anon_sym_LF,
  [564] = 1,
    ACTIONS(152), 3,
      sym__comment_line,
      ts_builtin_sym_end,
      anon_sym_PERCENT,
  [570] = 3,
    ACTIONS(154), 1,
      sym_file_name,
    STATE(44), 1,
      sym_file,
    STATE(72), 1,
      sym_file_name_and_extension,
  [580] = 1,
    ACTIONS(156), 3,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_COLON,
  [586] = 3,
    ACTIONS(140), 1,
      anon_sym_AT,
    ACTIONS(158), 1,
      sym_file_name,
    STATE(81), 1,
      sym_role,
  [596] = 3,
    ACTIONS(130), 1,
      sym__content_line,
    STATE(13), 1,
      aux_sym_raw_content_repeat1,
    STATE(34), 1,
      sym_raw_content,
  [606] = 2,
    ACTIONS(103), 1,
      sym_options,
    ACTIONS(105), 1,
      anon_sym_LF,
  [613] = 1,
    ACTIONS(160), 2,
      sym__content_line,
      sym_alpha_numeric,
  [618] = 2,
    ACTIONS(162), 1,
      sym_options,
    ACTIONS(164), 1,
      anon_sym_LF,
  [625] = 1,
    ACTIONS(166), 2,
      sym__content_line,
      sym_alpha_numeric,
  [630] = 2,
    ACTIONS(168), 1,
      sym_options,
    ACTIONS(170), 1,
      anon_sym_LF,
  [637] = 2,
    ACTIONS(172), 1,
      sym_options,
    ACTIONS(174), 1,
      anon_sym_LF,
  [644] = 2,
    ACTIONS(176), 1,
      sym_options,
    ACTIONS(178), 1,
      anon_sym_LF,
  [651] = 1,
    ACTIONS(180), 2,
      sym_options,
      anon_sym_LF,
  [656] = 1,
    ACTIONS(182), 2,
      anon_sym_AT,
      sym_file_name,
  [661] = 2,
    ACTIONS(107), 1,
      sym_options,
    ACTIONS(109), 1,
      anon_sym_LF,
  [668] = 1,
    ACTIONS(184), 2,
      sym__content_line,
      sym_alpha_numeric,
  [673] = 2,
    ACTIONS(72), 1,
      sym_options,
    ACTIONS(74), 1,
      anon_sym_LF,
  [680] = 1,
    ACTIONS(186), 2,
      sym__content_line,
      sym_alpha_numeric,
  [685] = 2,
    ACTIONS(115), 1,
      sym_options,
    ACTIONS(117), 1,
      anon_sym_LF,
  [692] = 2,
    ACTIONS(41), 1,
      sym_alpha_numeric,
    STATE(42), 1,
      sym_tag,
  [699] = 1,
    ACTIONS(188), 1,
      sym__content_line,
  [703] = 1,
    ACTIONS(190), 1,
      anon_sym_LF,
  [707] = 1,
    ACTIONS(192), 1,
      anon_sym_DOT,
  [711] = 1,
    ACTIONS(194), 1,
      anon_sym_LF,
  [715] = 1,
    ACTIONS(196), 1,
      sym__content_line,
  [719] = 1,
    ACTIONS(198), 1,
      anon_sym_LF,
  [723] = 1,
    ACTIONS(200), 1,
      anon_sym_LF,
  [727] = 1,
    ACTIONS(202), 1,
      sym__content_line,
  [731] = 1,
    ACTIONS(204), 1,
      anon_sym_LF,
  [735] = 1,
    ACTIONS(206), 1,
      anon_sym_LF,
  [739] = 1,
    ACTIONS(208), 1,
      sym__content_line,
  [743] = 1,
    ACTIONS(210), 1,
      anon_sym_LF,
  [747] = 1,
    ACTIONS(212), 1,
      anon_sym_LF,
  [751] = 1,
    ACTIONS(214), 1,
      sym__content_line,
  [755] = 1,
    ACTIONS(216), 1,
      sym__content_line,
  [759] = 1,
    ACTIONS(218), 1,
      sym_file_name,
  [763] = 1,
    ACTIONS(220), 1,
      anon_sym_LF,
  [767] = 1,
    ACTIONS(222), 1,
      sym_file_name,
  [771] = 1,
    ACTIONS(224), 1,
      anon_sym_LF,
  [775] = 1,
    ACTIONS(226), 1,
      aux_sym_role_token1,
  [779] = 1,
    ACTIONS(228), 1,
      sym__content_line,
  [783] = 1,
    ACTIONS(230), 1,
      anon_sym_LF,
  [787] = 1,
    ACTIONS(232), 1,
      anon_sym_LF,
  [791] = 1,
    ACTIONS(234), 1,
      anon_sym_LF,
  [795] = 1,
    ACTIONS(236), 1,
      sym__content_line,
  [799] = 1,
    ACTIONS(238), 1,
      anon_sym_LF,
  [803] = 1,
    ACTIONS(240), 1,
      anon_sym_LF,
  [807] = 1,
    ACTIONS(242), 1,
      anon_sym_LF,
  [811] = 1,
    ACTIONS(244), 1,
      sym__content_line,
  [815] = 1,
    ACTIONS(246), 1,
      sym__content_line,
  [819] = 1,
    ACTIONS(248), 1,
      sym__content_line,
  [823] = 1,
    ACTIONS(250), 1,
      sym__content_line,
  [827] = 1,
    ACTIONS(55), 1,
      sym__content_line,
  [831] = 1,
    ACTIONS(53), 1,
      sym__content_line,
  [835] = 1,
    ACTIONS(252), 1,
      sym_file_name,
  [839] = 1,
    ACTIONS(254), 1,
      sym_file_extension,
  [843] = 1,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
  [847] = 1,
    ACTIONS(258), 1,
      aux_sym_role_token1,
  [851] = 1,
    ACTIONS(260), 1,
      sym__content_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 123,
  [SMALL_STATE(6)] = 157,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 203,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 225,
  [SMALL_STATE(11)] = 243,
  [SMALL_STATE(12)] = 255,
  [SMALL_STATE(13)] = 263,
  [SMALL_STATE(14)] = 275,
  [SMALL_STATE(15)] = 283,
  [SMALL_STATE(16)] = 296,
  [SMALL_STATE(17)] = 307,
  [SMALL_STATE(18)] = 320,
  [SMALL_STATE(19)] = 333,
  [SMALL_STATE(20)] = 346,
  [SMALL_STATE(21)] = 359,
  [SMALL_STATE(22)] = 370,
  [SMALL_STATE(23)] = 381,
  [SMALL_STATE(24)] = 394,
  [SMALL_STATE(25)] = 407,
  [SMALL_STATE(26)] = 418,
  [SMALL_STATE(27)] = 431,
  [SMALL_STATE(28)] = 442,
  [SMALL_STATE(29)] = 453,
  [SMALL_STATE(30)] = 464,
  [SMALL_STATE(31)] = 470,
  [SMALL_STATE(32)] = 480,
  [SMALL_STATE(33)] = 486,
  [SMALL_STATE(34)] = 492,
  [SMALL_STATE(35)] = 498,
  [SMALL_STATE(36)] = 508,
  [SMALL_STATE(37)] = 514,
  [SMALL_STATE(38)] = 524,
  [SMALL_STATE(39)] = 530,
  [SMALL_STATE(40)] = 536,
  [SMALL_STATE(41)] = 542,
  [SMALL_STATE(42)] = 552,
  [SMALL_STATE(43)] = 558,
  [SMALL_STATE(44)] = 564,
  [SMALL_STATE(45)] = 570,
  [SMALL_STATE(46)] = 580,
  [SMALL_STATE(47)] = 586,
  [SMALL_STATE(48)] = 596,
  [SMALL_STATE(49)] = 606,
  [SMALL_STATE(50)] = 613,
  [SMALL_STATE(51)] = 618,
  [SMALL_STATE(52)] = 625,
  [SMALL_STATE(53)] = 630,
  [SMALL_STATE(54)] = 637,
  [SMALL_STATE(55)] = 644,
  [SMALL_STATE(56)] = 651,
  [SMALL_STATE(57)] = 656,
  [SMALL_STATE(58)] = 661,
  [SMALL_STATE(59)] = 668,
  [SMALL_STATE(60)] = 673,
  [SMALL_STATE(61)] = 680,
  [SMALL_STATE(62)] = 685,
  [SMALL_STATE(63)] = 692,
  [SMALL_STATE(64)] = 699,
  [SMALL_STATE(65)] = 703,
  [SMALL_STATE(66)] = 707,
  [SMALL_STATE(67)] = 711,
  [SMALL_STATE(68)] = 715,
  [SMALL_STATE(69)] = 719,
  [SMALL_STATE(70)] = 723,
  [SMALL_STATE(71)] = 727,
  [SMALL_STATE(72)] = 731,
  [SMALL_STATE(73)] = 735,
  [SMALL_STATE(74)] = 739,
  [SMALL_STATE(75)] = 743,
  [SMALL_STATE(76)] = 747,
  [SMALL_STATE(77)] = 751,
  [SMALL_STATE(78)] = 755,
  [SMALL_STATE(79)] = 759,
  [SMALL_STATE(80)] = 763,
  [SMALL_STATE(81)] = 767,
  [SMALL_STATE(82)] = 771,
  [SMALL_STATE(83)] = 775,
  [SMALL_STATE(84)] = 779,
  [SMALL_STATE(85)] = 783,
  [SMALL_STATE(86)] = 787,
  [SMALL_STATE(87)] = 791,
  [SMALL_STATE(88)] = 795,
  [SMALL_STATE(89)] = 799,
  [SMALL_STATE(90)] = 803,
  [SMALL_STATE(91)] = 807,
  [SMALL_STATE(92)] = 811,
  [SMALL_STATE(93)] = 815,
  [SMALL_STATE(94)] = 819,
  [SMALL_STATE(95)] = 823,
  [SMALL_STATE(96)] = 827,
  [SMALL_STATE(97)] = 831,
  [SMALL_STATE(98)] = 835,
  [SMALL_STATE(99)] = 839,
  [SMALL_STATE(100)] = 843,
  [SMALL_STATE(101)] = 847,
  [SMALL_STATE(102)] = 851,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section, 2, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(46),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__js_and_tags_content, 2, 0, 0), SHIFT_REPEAT(65),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tags, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_raw_content_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_line, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_raw_content, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_line_and_tags, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_block, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0), SHIFT_REPEAT(63),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tags_repeat1, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file, 3, 0, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section, 2, 0, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section, 2, 0, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__file_section_header, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bash_section_names, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_js_section_names, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_python_section_names, 1, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txt_section_names, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_section, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__file_section_header, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 4, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_role, 2, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__file_section_name, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 5, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_js_section_header, 6, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 5, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 4, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 3, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 4, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 4, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 3, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_section_header, 4, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_section_header, 3, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_name_and_extension, 3, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 5, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 5, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 6, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bash_section_header, 3, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_python_section_header, 6, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txt_section_header, 6, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_role, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [256] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token__content_line = 0,
  ts_external_token__comment_line = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__content_line] = sym__content_line,
  [ts_external_token__comment_line] = sym__comment_line,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__content_line] = true,
    [ts_external_token__comment_line] = true,
  },
  [2] = {
    [ts_external_token__comment_line] = true,
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
