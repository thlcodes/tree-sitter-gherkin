#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 120
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_step_definition_token1 = 1,
  anon_sym_PIPE = 2,
  aux_sym_table_header_name_token1 = 3,
  anon_sym_PIPE_LF = 4,
  sym_table_cell = 5,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 6,
  sym_docstring_line = 7,
  sym_tag = 8,
  sym_feature_keyword = 9,
  sym_scenario_keyword = 10,
  sym_scenario_outline_keyword = 11,
  sym_examples_keyword = 12,
  sym_background_keyword = 13,
  sym_step_keywords = 14,
  sym_comment = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_quoted_string_token1 = 17,
  sym_number = 18,
  sym_reference = 19,
  sym__text = 20,
  sym__space = 21,
  sym_source_file = 22,
  sym_feature = 23,
  sym_background = 24,
  sym_scenario = 25,
  sym_scenario_outline = 26,
  sym_step = 27,
  sym_step_definition = 28,
  sym_examples = 29,
  sym_table = 30,
  sym_table_header = 31,
  sym_table_header_name = 32,
  sym_table_row = 33,
  sym_docstring = 34,
  sym_docstring_start = 35,
  sym_docstring_end = 36,
  sym_docstring_lang = 37,
  sym_docstring_content = 38,
  aux_sym__tags = 39,
  sym_title = 40,
  sym_summary = 41,
  sym_summary_line = 42,
  sym_quoted_string = 43,
  aux_sym_feature_repeat1 = 44,
  aux_sym_background_repeat1 = 45,
  aux_sym_step_definition_repeat1 = 46,
  aux_sym_table_repeat1 = 47,
  aux_sym_table_header_repeat1 = 48,
  aux_sym_table_row_repeat1 = 49,
  aux_sym_docstring_content_repeat1 = 50,
  aux_sym_summary_repeat1 = 51,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_step_definition_token1] = "step_definition_token1",
  [anon_sym_PIPE] = "|",
  [aux_sym_table_header_name_token1] = "table_header_name_token1",
  [anon_sym_PIPE_LF] = "|\n",
  [sym_table_cell] = "table_cell",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [sym_docstring_line] = "docstring_line",
  [sym_tag] = "tag",
  [sym_feature_keyword] = "feature_keyword",
  [sym_scenario_keyword] = "scenario_keyword",
  [sym_scenario_outline_keyword] = "scenario_outline_keyword",
  [sym_examples_keyword] = "examples_keyword",
  [sym_background_keyword] = "background_keyword",
  [sym_step_keywords] = "step_keywords",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [sym_number] = "number",
  [sym_reference] = "reference",
  [sym__text] = "_text",
  [sym__space] = "_space",
  [sym_source_file] = "source_file",
  [sym_feature] = "feature",
  [sym_background] = "background",
  [sym_scenario] = "scenario",
  [sym_scenario_outline] = "scenario_outline",
  [sym_step] = "step",
  [sym_step_definition] = "step_definition",
  [sym_examples] = "examples",
  [sym_table] = "table",
  [sym_table_header] = "table_header",
  [sym_table_header_name] = "table_header_name",
  [sym_table_row] = "table_row",
  [sym_docstring] = "docstring",
  [sym_docstring_start] = "docstring_start",
  [sym_docstring_end] = "docstring_end",
  [sym_docstring_lang] = "docstring_lang",
  [sym_docstring_content] = "docstring_content",
  [aux_sym__tags] = "_tags",
  [sym_title] = "title",
  [sym_summary] = "summary",
  [sym_summary_line] = "summary_line",
  [sym_quoted_string] = "quoted_string",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_step_definition_repeat1] = "step_definition_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_table_header_repeat1] = "table_header_repeat1",
  [aux_sym_table_row_repeat1] = "table_row_repeat1",
  [aux_sym_docstring_content_repeat1] = "docstring_content_repeat1",
  [aux_sym_summary_repeat1] = "summary_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_step_definition_token1] = aux_sym_step_definition_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [aux_sym_table_header_name_token1] = aux_sym_table_header_name_token1,
  [anon_sym_PIPE_LF] = anon_sym_PIPE_LF,
  [sym_table_cell] = sym_table_cell,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [sym_docstring_line] = sym_docstring_line,
  [sym_tag] = sym_tag,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [sym_scenario_outline_keyword] = sym_scenario_outline_keyword,
  [sym_examples_keyword] = sym_examples_keyword,
  [sym_background_keyword] = sym_background_keyword,
  [sym_step_keywords] = sym_step_keywords,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [sym_number] = sym_number,
  [sym_reference] = sym_reference,
  [sym__text] = sym__text,
  [sym__space] = sym__space,
  [sym_source_file] = sym_source_file,
  [sym_feature] = sym_feature,
  [sym_background] = sym_background,
  [sym_scenario] = sym_scenario,
  [sym_scenario_outline] = sym_scenario_outline,
  [sym_step] = sym_step,
  [sym_step_definition] = sym_step_definition,
  [sym_examples] = sym_examples,
  [sym_table] = sym_table,
  [sym_table_header] = sym_table_header,
  [sym_table_header_name] = sym_table_header_name,
  [sym_table_row] = sym_table_row,
  [sym_docstring] = sym_docstring,
  [sym_docstring_start] = sym_docstring_start,
  [sym_docstring_end] = sym_docstring_end,
  [sym_docstring_lang] = sym_docstring_lang,
  [sym_docstring_content] = sym_docstring_content,
  [aux_sym__tags] = aux_sym__tags,
  [sym_title] = sym_title,
  [sym_summary] = sym_summary,
  [sym_summary_line] = sym_summary_line,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym_feature_repeat1] = aux_sym_feature_repeat1,
  [aux_sym_background_repeat1] = aux_sym_background_repeat1,
  [aux_sym_step_definition_repeat1] = aux_sym_step_definition_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_table_header_repeat1] = aux_sym_table_header_repeat1,
  [aux_sym_table_row_repeat1] = aux_sym_table_row_repeat1,
  [aux_sym_docstring_content_repeat1] = aux_sym_docstring_content_repeat1,
  [aux_sym_summary_repeat1] = aux_sym_summary_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_step_definition_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_table_header_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PIPE_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_table_cell] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_docstring_line] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_feature_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_outline_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_examples_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_background_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym_step_keywords] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_reference] = {
    .visible = true,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_background] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario] = {
    .visible = true,
    .named = true,
  },
  [sym_scenario_outline] = {
    .visible = true,
    .named = true,
  },
  [sym_step] = {
    .visible = true,
    .named = true,
  },
  [sym_step_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_examples] = {
    .visible = true,
    .named = true,
  },
  [sym_table] = {
    .visible = true,
    .named = true,
  },
  [sym_table_header] = {
    .visible = true,
    .named = true,
  },
  [sym_table_header_name] = {
    .visible = true,
    .named = true,
  },
  [sym_table_row] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring_start] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring_end] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring_lang] = {
    .visible = true,
    .named = true,
  },
  [sym_docstring_content] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__tags] = {
    .visible = false,
    .named = false,
  },
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_summary] = {
    .visible = true,
    .named = true,
  },
  [sym_summary_line] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_feature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_background_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_step_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_table_row_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_docstring_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_summary_repeat1] = {
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 4,
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
  [21] = 20,
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
  [34] = 20,
  [35] = 35,
  [36] = 36,
  [37] = 31,
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
  [48] = 46,
  [49] = 49,
  [50] = 40,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 11,
  [55] = 10,
  [56] = 31,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 61,
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
  [85] = 40,
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
  [100] = 44,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 108,
  [113] = 113,
  [114] = 114,
  [115] = 114,
  [116] = 108,
  [117] = 114,
  [118] = 118,
  [119] = 119,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(93);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '#') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == 'B') ADVANCE(142);
      if (lookahead == 'E') ADVANCE(174);
      if (lookahead == 'S') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(123);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(116);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(26);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(118);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(126);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(107);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '|') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(124);
      if (lookahead == '<') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(128);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(106);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(121);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == '>') ADVANCE(131);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(83);
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(79);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 33:
      if (lookahead == 'a') ADVANCE(61);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 38:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(23);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 49:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 54:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 59:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 60:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(45);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(56);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(51);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(44);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 82:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 83:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 85:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 86:
      if (lookahead == 'x') ADVANCE(27);
      END_STATE();
    case 87:
      if (lookahead == 'x') ADVANCE(33);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 89:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 90:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(25);
      END_STATE();
    case 91:
      if (eof) ADVANCE(93);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'B') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'G') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(35);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(49);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 92:
      if (eof) ADVANCE(93);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '#') ADVANCE(125);
      if (lookahead == 'A') ADVANCE(62);
      if (lookahead == 'B') ADVANCE(28);
      if (lookahead == 'E') ADVANCE(87);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'G') ADVANCE(50);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == 'T') ADVANCE(49);
      if (lookahead == 'W') ADVANCE(49);
      if (lookahead == '|') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(25);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_PIPE_LF);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(109);
      if (lookahead != 0) ADVANCE(112);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '"') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_scenario_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_scenario_outline_keyword);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_scenario_outline_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_examples_keyword);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_background_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_step_keywords);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(128);
      if (lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(125);
      if (lookahead != 0) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(128);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(88);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(178);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(177);
      if (lookahead == '@') ADVANCE(175);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(133);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ' ') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ' ') ADVANCE(140);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ':') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ':') ADVANCE(122);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ':') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'O') ADVANCE(172);
      if (lookahead == 'T') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'a') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'a') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'a') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'c') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'd') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'e') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'e') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'g') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'i') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'i') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'k') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'l') ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'm') ADVANCE(166);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'm') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'n') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'n') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'o') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'o') ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'p') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'p') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'r') ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 't') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 't') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'u') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'u') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == 'x') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '@') ADVANCE(89);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(178);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 91},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 91},
  [5] = {.lex_state = 91},
  [6] = {.lex_state = 91},
  [7] = {.lex_state = 91},
  [8] = {.lex_state = 91},
  [9] = {.lex_state = 92},
  [10] = {.lex_state = 91},
  [11] = {.lex_state = 91},
  [12] = {.lex_state = 91},
  [13] = {.lex_state = 91},
  [14] = {.lex_state = 91},
  [15] = {.lex_state = 91},
  [16] = {.lex_state = 91},
  [17] = {.lex_state = 91},
  [18] = {.lex_state = 91},
  [19] = {.lex_state = 91},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 91},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 91},
  [25] = {.lex_state = 91},
  [26] = {.lex_state = 91},
  [27] = {.lex_state = 91},
  [28] = {.lex_state = 91},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 91},
  [31] = {.lex_state = 91},
  [32] = {.lex_state = 91},
  [33] = {.lex_state = 91},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 91},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 91},
  [38] = {.lex_state = 91},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 91},
  [41] = {.lex_state = 92},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 92},
  [44] = {.lex_state = 91},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 92},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 92},
  [49] = {.lex_state = 91},
  [50] = {.lex_state = 91},
  [51] = {.lex_state = 91},
  [52] = {.lex_state = 13},
  [53] = {.lex_state = 91},
  [54] = {.lex_state = 92},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 92},
  [57] = {.lex_state = 91},
  [58] = {.lex_state = 92},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 92},
  [63] = {.lex_state = 92},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 92},
  [66] = {.lex_state = 92},
  [67] = {.lex_state = 5},
  [68] = {.lex_state = 92},
  [69] = {.lex_state = 92},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 4},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 92},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 3},
  [77] = {.lex_state = 3},
  [78] = {.lex_state = 91},
  [79] = {.lex_state = 3},
  [80] = {.lex_state = 92},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 91},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 91},
  [85] = {.lex_state = 92},
  [86] = {.lex_state = 91},
  [87] = {.lex_state = 3},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 92},
  [90] = {.lex_state = 5},
  [91] = {.lex_state = 92},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 92},
  [94] = {.lex_state = 18},
  [95] = {.lex_state = 92},
  [96] = {.lex_state = 92},
  [97] = {.lex_state = 92},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 92},
  [100] = {.lex_state = 92},
  [101] = {.lex_state = 92},
  [102] = {.lex_state = 92},
  [103] = {.lex_state = 92},
  [104] = {.lex_state = 92},
  [105] = {.lex_state = 92},
  [106] = {.lex_state = 92},
  [107] = {.lex_state = 92},
  [108] = {.lex_state = 92},
  [109] = {.lex_state = 92},
  [110] = {.lex_state = 92},
  [111] = {.lex_state = 92},
  [112] = {.lex_state = 92},
  [113] = {.lex_state = 92},
  [114] = {.lex_state = 92},
  [115] = {.lex_state = 92},
  [116] = {.lex_state = 92},
  [117] = {.lex_state = 92},
  [118] = {.lex_state = 92},
  [119] = {.lex_state = 92},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_step_definition_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(91),
    [sym_feature] = STATE(97),
    [aux_sym__tags] = STATE(86),
    [sym_tag] = ACTIONS(5),
    [sym_feature_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__space] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      sym_scenario_keyword,
    ACTIONS(17), 1,
      sym_scenario_outline_keyword,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym__text,
    ACTIONS(23), 1,
      sym__space,
    STATE(6), 1,
      sym_summary,
    STATE(26), 1,
      sym_background,
    STATE(29), 1,
      aux_sym_summary_repeat1,
    STATE(84), 1,
      aux_sym__tags,
    STATE(107), 1,
      sym_summary_line,
    STATE(17), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [42] = 13,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_tag,
    ACTIONS(15), 1,
      sym_scenario_keyword,
    ACTIONS(17), 1,
      sym_scenario_outline_keyword,
    ACTIONS(19), 1,
      sym_background_keyword,
    ACTIONS(21), 1,
      sym__text,
    ACTIONS(25), 1,
      sym__space,
    STATE(7), 1,
      sym_summary,
    STATE(29), 1,
      aux_sym_summary_repeat1,
    STATE(33), 1,
      sym_background,
    STATE(84), 1,
      aux_sym__tags,
    STATE(107), 1,
      sym_summary_line,
    STATE(16), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [84] = 8,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(46), 1,
      sym_table_header,
    STATE(67), 1,
      sym_docstring_start,
    STATE(114), 2,
      sym_table,
      sym_docstring,
    ACTIONS(27), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [114] = 8,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(33), 1,
      sym__space,
    STATE(46), 1,
      sym_table_header,
    STATE(67), 1,
      sym_docstring_start,
    STATE(115), 2,
      sym_table,
      sym_docstring,
    ACTIONS(27), 4,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [143] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_tag,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(41), 1,
      sym_background_keyword,
    ACTIONS(43), 1,
      sym__space,
    STATE(24), 1,
      sym_background,
    STATE(84), 1,
      aux_sym__tags,
    STATE(8), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [173] = 9,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym_tag,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(41), 1,
      sym_background_keyword,
    ACTIONS(45), 1,
      sym__space,
    STATE(22), 1,
      sym_background,
    STATE(84), 1,
      aux_sym__tags,
    STATE(14), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [203] = 8,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(15), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [230] = 7,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    ACTIONS(31), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(46), 1,
      sym_table_header,
    STATE(67), 1,
      sym_docstring_start,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    ACTIONS(27), 2,
      sym_examples_keyword,
      sym_step_keywords,
    STATE(117), 2,
      sym_table,
      sym_docstring,
  [255] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_table_row_repeat1,
    STATE(10), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [278] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_table_row_repeat1,
    STATE(10), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(56), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [301] = 8,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym__tags,
    STATE(15), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [328] = 8,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym__tags,
    STATE(15), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [355] = 8,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym__tags,
    STATE(15), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [382] = 8,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym_tag,
    ACTIONS(71), 1,
      sym_scenario_keyword,
    ACTIONS(74), 1,
      sym_scenario_outline_keyword,
    STATE(82), 1,
      aux_sym__tags,
    STATE(15), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [409] = 8,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym__tags,
    STATE(15), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [436] = 8,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(82), 1,
      aux_sym__tags,
    STATE(15), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [463] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(13), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [487] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(14), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [511] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_reference,
    STATE(116), 1,
      sym_step_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
    ACTIONS(81), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(36), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [533] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_reference,
    STATE(112), 1,
      sym_step_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
    ACTIONS(81), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(36), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [555] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    ACTIONS(87), 1,
      sym__space,
    STATE(82), 1,
      aux_sym__tags,
    STATE(13), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [579] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym__text,
    STATE(23), 1,
      aux_sym_summary_repeat1,
    STATE(107), 1,
      sym_summary_line,
    ACTIONS(89), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_background_keyword,
      sym__space,
  [599] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(25), 1,
      sym__space,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(16), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [623] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(8), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [647] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(43), 1,
      sym__space,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(8), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [671] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_step_keywords,
    STATE(31), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [691] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(16), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [715] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(21), 1,
      sym__text,
    STATE(23), 1,
      aux_sym_summary_repeat1,
    STATE(107), 1,
      sym_summary_line,
    ACTIONS(98), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_background_keyword,
      sym__space,
  [735] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(12), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [759] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_step_keywords,
    STATE(31), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [779] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(96), 1,
      sym_step_keywords,
    STATE(31), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(105), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [799] = 7,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym_scenario_keyword,
    ACTIONS(39), 1,
      sym_scenario_outline_keyword,
    ACTIONS(45), 1,
      sym__space,
    ACTIONS(49), 1,
      sym_tag,
    STATE(82), 1,
      aux_sym__tags,
    STATE(14), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [823] = 6,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(85), 1,
      sym_reference,
    STATE(108), 1,
      sym_step_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
    ACTIONS(81), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(36), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [845] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_step_keywords,
    ACTIONS(111), 1,
      sym__space,
    STATE(37), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(107), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [864] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_reference,
    ACTIONS(117), 1,
      sym__space,
    ACTIONS(113), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(39), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [885] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_step_keywords,
    ACTIONS(122), 1,
      sym__space,
    STATE(37), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(100), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [904] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(109), 1,
      sym_step_keywords,
    ACTIONS(126), 1,
      sym__space,
    STATE(37), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(124), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [923] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym_reference,
    ACTIONS(137), 1,
      sym__space,
    ACTIONS(128), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(39), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [944] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(139), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [958] = 5,
    ACTIONS(141), 1,
      sym_examples_keyword,
    ACTIONS(143), 1,
      sym_step_keywords,
    STATE(51), 1,
      sym_examples,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(56), 2,
      sym_step,
      aux_sym_background_repeat1,
  [976] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(89), 6,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_background_keyword,
      sym__text,
      sym__space,
  [988] = 5,
    ACTIONS(141), 1,
      sym_examples_keyword,
    ACTIONS(143), 1,
      sym_step_keywords,
    STATE(53), 1,
      sym_examples,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(56), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1006] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(145), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [1020] = 5,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(149), 1,
      aux_sym_table_header_name_token1,
    STATE(52), 1,
      aux_sym_table_header_repeat1,
    STATE(95), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1037] = 4,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(54), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [1052] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      anon_sym_DQUOTE,
      sym_reference,
    ACTIONS(151), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym__space,
  [1065] = 4,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(61), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(11), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [1080] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [1093] = 3,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__space,
    ACTIONS(139), 4,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [1106] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(159), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [1119] = 5,
    ACTIONS(161), 1,
      anon_sym_PIPE,
    ACTIONS(163), 1,
      aux_sym_table_header_name_token1,
    STATE(52), 1,
      aux_sym_table_header_repeat1,
    STATE(95), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1136] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(166), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [1149] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(56), 1,
      sym__space,
    ACTIONS(58), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_table_row_repeat1,
    STATE(55), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [1166] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym__space,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_table_row_repeat1,
    STATE(55), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [1183] = 4,
    ACTIONS(100), 1,
      sym_examples_keyword,
    ACTIONS(168), 1,
      sym_step_keywords,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(56), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1198] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(5), 1,
      sym_tag,
    ACTIONS(7), 1,
      sym_feature_keyword,
    ACTIONS(9), 1,
      sym_comment,
    STATE(86), 1,
      aux_sym__tags,
    STATE(99), 1,
      sym_feature,
  [1217] = 3,
    ACTIONS(143), 1,
      sym_step_keywords,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(41), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1229] = 4,
    ACTIONS(171), 1,
      anon_sym_PIPE,
    ACTIONS(174), 1,
      anon_sym_PIPE_LF,
    STATE(59), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1243] = 4,
    ACTIONS(176), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(178), 1,
      sym_docstring_line,
    STATE(70), 1,
      aux_sym_docstring_content_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1257] = 4,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    ACTIONS(182), 1,
      anon_sym_PIPE_LF,
    STATE(59), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1271] = 3,
    ACTIONS(109), 1,
      sym_step_keywords,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(35), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1283] = 4,
    ACTIONS(184), 1,
      sym_scenario_keyword,
    ACTIONS(186), 1,
      sym_scenario_outline_keyword,
    ACTIONS(188), 1,
      sym_background_keyword,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1297] = 4,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    ACTIONS(190), 1,
      anon_sym_PIPE_LF,
    STATE(59), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1311] = 4,
    ACTIONS(29), 1,
      anon_sym_PIPE,
    STATE(48), 1,
      sym_table_header,
    STATE(49), 1,
      sym_table,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1325] = 3,
    ACTIONS(143), 1,
      sym_step_keywords,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(43), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1337] = 4,
    ACTIONS(192), 1,
      sym_docstring_line,
    STATE(60), 1,
      aux_sym_docstring_content_repeat1,
    STATE(89), 1,
      sym_docstring_content,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1351] = 3,
    ACTIONS(96), 1,
      sym_step_keywords,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(27), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1363] = 3,
    ACTIONS(109), 1,
      sym_step_keywords,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(38), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1375] = 4,
    ACTIONS(194), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(196), 1,
      sym_docstring_line,
    STATE(70), 1,
      aux_sym_docstring_content_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1389] = 4,
    ACTIONS(199), 1,
      aux_sym_table_header_name_token1,
    ACTIONS(201), 1,
      sym_docstring_line,
    STATE(92), 1,
      sym_docstring_lang,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1403] = 4,
    ACTIONS(149), 1,
      aux_sym_table_header_name_token1,
    STATE(45), 1,
      aux_sym_table_header_repeat1,
    STATE(95), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1417] = 3,
    ACTIONS(96), 1,
      sym_step_keywords,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(32), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1429] = 3,
    ACTIONS(203), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(205), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1440] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__text,
    STATE(119), 1,
      sym_title,
  [1453] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__text,
    STATE(101), 1,
      sym_title,
  [1466] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__text,
    STATE(106), 1,
      sym_title,
  [1479] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym_tag,
    ACTIONS(212), 1,
      sym__space,
    STATE(78), 1,
      aux_sym__tags,
  [1492] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__text,
    STATE(105), 1,
      sym_title,
  [1505] = 3,
    ACTIONS(184), 1,
      sym_scenario_keyword,
    ACTIONS(186), 1,
      sym_scenario_outline_keyword,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1516] = 3,
    ACTIONS(174), 1,
      anon_sym_PIPE_LF,
    ACTIONS(214), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1527] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_tag,
    ACTIONS(218), 1,
      sym__space,
    STATE(78), 1,
      aux_sym__tags,
  [1540] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    ACTIONS(161), 2,
      anon_sym_PIPE,
      aux_sym_table_header_name_token1,
  [1549] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_tag,
    ACTIONS(220), 1,
      sym__space,
    STATE(78), 1,
      aux_sym__tags,
  [1562] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    ACTIONS(139), 2,
      sym_examples_keyword,
      sym_step_keywords,
  [1571] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_tag,
    ACTIONS(222), 1,
      sym__space,
    STATE(78), 1,
      aux_sym__tags,
  [1584] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__text,
    STATE(109), 1,
      sym_title,
  [1597] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__text,
    STATE(104), 1,
      sym_title,
  [1610] = 3,
    ACTIONS(224), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(102), 1,
      sym_docstring_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1621] = 2,
    ACTIONS(226), 1,
      sym_docstring_line,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1629] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1637] = 2,
    ACTIONS(230), 1,
      sym_docstring_line,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1645] = 2,
    ACTIONS(232), 1,
      sym_feature_keyword,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1653] = 2,
    ACTIONS(234), 1,
      sym_table_cell,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1661] = 2,
    ACTIONS(236), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1669] = 2,
    ACTIONS(238), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1677] = 2,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1685] = 2,
    ACTIONS(242), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1693] = 2,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1701] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_PIPE,
      sym__space,
  [1709] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(246), 1,
      sym__space,
  [1716] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(248), 1,
      sym__space,
  [1723] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym__space,
  [1730] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym__space,
  [1737] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym__space,
  [1744] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(256), 1,
      sym__space,
  [1751] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(258), 1,
      sym__space,
  [1758] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym__space,
  [1765] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(262), 1,
      sym__space,
  [1772] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(264), 1,
      sym__space,
  [1779] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(266), 1,
      sym__space,
  [1786] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym__space,
  [1793] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym__space,
  [1800] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(272), 1,
      sym__space,
  [1807] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym__space,
  [1814] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(276), 1,
      sym__space,
  [1821] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(278), 1,
      sym__space,
  [1828] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(280), 1,
      sym__space,
  [1835] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(282), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 42,
  [SMALL_STATE(4)] = 84,
  [SMALL_STATE(5)] = 114,
  [SMALL_STATE(6)] = 143,
  [SMALL_STATE(7)] = 173,
  [SMALL_STATE(8)] = 203,
  [SMALL_STATE(9)] = 230,
  [SMALL_STATE(10)] = 255,
  [SMALL_STATE(11)] = 278,
  [SMALL_STATE(12)] = 301,
  [SMALL_STATE(13)] = 328,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 382,
  [SMALL_STATE(16)] = 409,
  [SMALL_STATE(17)] = 436,
  [SMALL_STATE(18)] = 463,
  [SMALL_STATE(19)] = 487,
  [SMALL_STATE(20)] = 511,
  [SMALL_STATE(21)] = 533,
  [SMALL_STATE(22)] = 555,
  [SMALL_STATE(23)] = 579,
  [SMALL_STATE(24)] = 599,
  [SMALL_STATE(25)] = 623,
  [SMALL_STATE(26)] = 647,
  [SMALL_STATE(27)] = 671,
  [SMALL_STATE(28)] = 691,
  [SMALL_STATE(29)] = 715,
  [SMALL_STATE(30)] = 735,
  [SMALL_STATE(31)] = 759,
  [SMALL_STATE(32)] = 779,
  [SMALL_STATE(33)] = 799,
  [SMALL_STATE(34)] = 823,
  [SMALL_STATE(35)] = 845,
  [SMALL_STATE(36)] = 864,
  [SMALL_STATE(37)] = 885,
  [SMALL_STATE(38)] = 904,
  [SMALL_STATE(39)] = 923,
  [SMALL_STATE(40)] = 944,
  [SMALL_STATE(41)] = 958,
  [SMALL_STATE(42)] = 976,
  [SMALL_STATE(43)] = 988,
  [SMALL_STATE(44)] = 1006,
  [SMALL_STATE(45)] = 1020,
  [SMALL_STATE(46)] = 1037,
  [SMALL_STATE(47)] = 1052,
  [SMALL_STATE(48)] = 1065,
  [SMALL_STATE(49)] = 1080,
  [SMALL_STATE(50)] = 1093,
  [SMALL_STATE(51)] = 1106,
  [SMALL_STATE(52)] = 1119,
  [SMALL_STATE(53)] = 1136,
  [SMALL_STATE(54)] = 1149,
  [SMALL_STATE(55)] = 1166,
  [SMALL_STATE(56)] = 1183,
  [SMALL_STATE(57)] = 1198,
  [SMALL_STATE(58)] = 1217,
  [SMALL_STATE(59)] = 1229,
  [SMALL_STATE(60)] = 1243,
  [SMALL_STATE(61)] = 1257,
  [SMALL_STATE(62)] = 1271,
  [SMALL_STATE(63)] = 1283,
  [SMALL_STATE(64)] = 1297,
  [SMALL_STATE(65)] = 1311,
  [SMALL_STATE(66)] = 1325,
  [SMALL_STATE(67)] = 1337,
  [SMALL_STATE(68)] = 1351,
  [SMALL_STATE(69)] = 1363,
  [SMALL_STATE(70)] = 1375,
  [SMALL_STATE(71)] = 1389,
  [SMALL_STATE(72)] = 1403,
  [SMALL_STATE(73)] = 1417,
  [SMALL_STATE(74)] = 1429,
  [SMALL_STATE(75)] = 1440,
  [SMALL_STATE(76)] = 1453,
  [SMALL_STATE(77)] = 1466,
  [SMALL_STATE(78)] = 1479,
  [SMALL_STATE(79)] = 1492,
  [SMALL_STATE(80)] = 1505,
  [SMALL_STATE(81)] = 1516,
  [SMALL_STATE(82)] = 1527,
  [SMALL_STATE(83)] = 1540,
  [SMALL_STATE(84)] = 1549,
  [SMALL_STATE(85)] = 1562,
  [SMALL_STATE(86)] = 1571,
  [SMALL_STATE(87)] = 1584,
  [SMALL_STATE(88)] = 1597,
  [SMALL_STATE(89)] = 1610,
  [SMALL_STATE(90)] = 1621,
  [SMALL_STATE(91)] = 1629,
  [SMALL_STATE(92)] = 1637,
  [SMALL_STATE(93)] = 1645,
  [SMALL_STATE(94)] = 1653,
  [SMALL_STATE(95)] = 1661,
  [SMALL_STATE(96)] = 1669,
  [SMALL_STATE(97)] = 1677,
  [SMALL_STATE(98)] = 1685,
  [SMALL_STATE(99)] = 1693,
  [SMALL_STATE(100)] = 1701,
  [SMALL_STATE(101)] = 1709,
  [SMALL_STATE(102)] = 1716,
  [SMALL_STATE(103)] = 1723,
  [SMALL_STATE(104)] = 1730,
  [SMALL_STATE(105)] = 1737,
  [SMALL_STATE(106)] = 1744,
  [SMALL_STATE(107)] = 1751,
  [SMALL_STATE(108)] = 1758,
  [SMALL_STATE(109)] = 1765,
  [SMALL_STATE(110)] = 1772,
  [SMALL_STATE(111)] = 1779,
  [SMALL_STATE(112)] = 1786,
  [SMALL_STATE(113)] = 1793,
  [SMALL_STATE(114)] = 1800,
  [SMALL_STATE(115)] = 1807,
  [SMALL_STATE(116)] = 1814,
  [SMALL_STATE(117)] = 1821,
  [SMALL_STATE(118)] = 1828,
  [SMALL_STATE(119)] = 1835,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(94),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 9),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 8),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 7),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(82),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(76),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(88),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 6),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(110),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(21),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 5),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_definition, 1),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(34),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_background_repeat1, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_background, 3),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(39),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(74),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(39),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 5),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header, 2),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 7),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2), SHIFT_REPEAT(96),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 5),
  [168] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(20),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2), SHIFT_REPEAT(94),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_content, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docstring_content_repeat1, 2),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_content_repeat1, 2), SHIFT_REPEAT(70),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_start, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tags, 2), SHIFT_REPEAT(78),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tags, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_lang, 1),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_start, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header_name, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary_line, 1),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring_end, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 1),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gherkin(void) {
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
