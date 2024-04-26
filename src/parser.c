#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 103
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 0
#define TOKEN_COUNT 22
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  sym_title = 15,
  sym_summary_line = 16,
  sym_comment = 17,
  anon_sym_DQUOTE = 18,
  aux_sym_quoted_string_token1 = 19,
  sym_number = 20,
  sym_reference = 21,
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
  sym_summary = 40,
  sym_quoted_string = 41,
  aux_sym_feature_repeat1 = 42,
  aux_sym_background_repeat1 = 43,
  aux_sym_step_definition_repeat1 = 44,
  aux_sym_table_repeat1 = 45,
  aux_sym_table_header_repeat1 = 46,
  aux_sym_table_row_repeat1 = 47,
  aux_sym_docstring_content_repeat1 = 48,
  aux_sym_summary_repeat1 = 49,
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
  [sym_title] = "title",
  [sym_summary_line] = "summary_line",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [sym_number] = "number",
  [sym_reference] = "reference",
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
  [sym_summary] = "summary",
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
  [sym_title] = sym_title,
  [sym_summary_line] = sym_summary_line,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [sym_number] = sym_number,
  [sym_reference] = sym_reference,
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
  [sym_summary] = sym_summary,
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
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_summary_line] = {
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
  [sym_summary] = {
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
  [4] = 3,
  [5] = 5,
  [6] = 6,
  [7] = 2,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 10,
  [12] = 2,
  [13] = 3,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 17,
  [19] = 14,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 10,
  [26] = 26,
  [27] = 26,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 35,
  [40] = 34,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 43,
  [47] = 47,
  [48] = 47,
  [49] = 49,
  [50] = 49,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 34,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 55,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 64,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 63,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 79,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 86,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 86,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '|') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(115);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(115);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(151);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(144);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(133);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(148);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(149);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(206);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(92);
      if (lookahead == 'T') ADVANCE(46);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(33);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(82);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 29:
      if (lookahead == 'a') ADVANCE(84);
      END_STATE();
    case 30:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'd') ADVANCE(7);
      END_STATE();
    case 37:
      if (lookahead == 'd') ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 48:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 49:
      if (lookahead == 'g') ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 52:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 53:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 54:
      if (lookahead == 'i') ADVANCE(70);
      END_STATE();
    case 55:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 56:
      if (lookahead == 'k') ADVANCE(49);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 62:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'm') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 68:
      if (lookahead == 'n') ADVANCE(37);
      END_STATE();
    case 69:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 70:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 71:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 72:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 76:
      if (lookahead == 'o') ADVANCE(93);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 78:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 79:
      if (lookahead == 'p') ADVANCE(61);
      END_STATE();
    case 80:
      if (lookahead == 'p') ADVANCE(60);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(76);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(53);
      END_STATE();
    case 85:
      if (lookahead == 'r') ADVANCE(55);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 91:
      if (lookahead == 'u') ADVANCE(83);
      END_STATE();
    case 92:
      if (lookahead == 'u') ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == 'u') ADVANCE(68);
      END_STATE();
    case 94:
      if (lookahead == 'v') ADVANCE(43);
      END_STATE();
    case 95:
      if (lookahead == 'x') ADVANCE(23);
      END_STATE();
    case 96:
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 97:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(97);
      if (lookahead == '\r') ADVANCE(97);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == '|') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 98:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == 'B') ADVANCE(25);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'G') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'W') ADVANCE(50);
      if (lookahead == '|') ADVANCE(125);
      END_STATE();
    case 99:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead == '\r') ADVANCE(154);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'E') ADVANCE(96);
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 100:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(100)
      if (lookahead == '\r') SKIP(100)
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '|') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead == '<') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(203);
      END_STATE();
    case 102:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 104:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 105:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 106:
      if (eof) ADVANCE(108);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(115);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 107:
      if (eof) ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(98);
      if (lookahead == '\r') ADVANCE(98);
      if (lookahead == '"') ADVANCE(13);
      if (lookahead == '#') ADVANCE(199);
      if (lookahead == '@') ADVANCE(104);
      if (lookahead == 'A') ADVANCE(66);
      if (lookahead == 'B') ADVANCE(25);
      if (lookahead == 'E') ADVANCE(95);
      if (lookahead == 'F') ADVANCE(42);
      if (lookahead == 'G') ADVANCE(51);
      if (lookahead == 'S') ADVANCE(34);
      if (lookahead == 'T') ADVANCE(50);
      if (lookahead == 'W') ADVANCE(50);
      if (lookahead == '|') ADVANCE(125);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '@') ADVANCE(122);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(119);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(113);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(115);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'B') ADVANCE(118);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'G') ADVANCE(116);
      if (lookahead == 'S') ADVANCE(114);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == 'W') ADVANCE(115);
      if (lookahead == '|') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\r') ADVANCE(112);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '#') ADVANCE(123);
      if (lookahead == '<') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(112);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'i') ADVANCE(94);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'x') ADVANCE(31);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'x') ADVANCE(32);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(21);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_PIPE_LF);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\n') ADVANCE(132);
      if (lookahead == '|') ADVANCE(199);
      if (lookahead != 0) ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(131);
      if (lookahead == '\r') ADVANCE(131);
      if (lookahead == '#') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '\r') ADVANCE(135);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '\r') ADVANCE(136);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '\r') ADVANCE(137);
      if (lookahead == '"') ADVANCE(139);
      if (lookahead == '#') ADVANCE(140);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '"') ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '"') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_scenario_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_scenario_outline_keyword);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_scenario_outline_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_examples_keyword);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_background_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_step_keywords);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\r') ADVANCE(152);
      if (lookahead == '#') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_title);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '\r') ADVANCE(154);
      if (lookahead == '#') ADVANCE(197);
      if (lookahead == '@') ADVANCE(196);
      if (lookahead == 'B') ADVANCE(163);
      if (lookahead == 'E') ADVANCE(195);
      if (lookahead == 'S') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(197);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == ' ') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == ' ') ADVANCE(161);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == ' ') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'O') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'a') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'a') ADVANCE(190);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'a') ADVANCE(192);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'c') ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'c') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'd') ADVANCE(159);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'e') ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'e') ADVANCE(158);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'e') ADVANCE(160);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'g') ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'i') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'i') ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'k') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'l') ADVANCE(170);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'l') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'm') ADVANCE(187);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'm') ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'n') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'o') ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'o') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'p') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'p') ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'r') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 't') ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 't') ADVANCE(171);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'u') ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == 'x') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_summary_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(197);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(203);
      if (lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(199);
      if (lookahead != 0) ADVANCE(198);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(199);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(14);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(202);
      if (lookahead == '\r') ADVANCE(202);
      if (lookahead == '#') ADVANCE(198);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(203);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(203);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 107},
  [2] = {.lex_state = 106},
  [3] = {.lex_state = 106},
  [4] = {.lex_state = 106},
  [5] = {.lex_state = 99},
  [6] = {.lex_state = 99},
  [7] = {.lex_state = 106},
  [8] = {.lex_state = 107},
  [9] = {.lex_state = 107},
  [10] = {.lex_state = 106},
  [11] = {.lex_state = 106},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 107},
  [15] = {.lex_state = 107},
  [16] = {.lex_state = 107},
  [17] = {.lex_state = 107},
  [18] = {.lex_state = 107},
  [19] = {.lex_state = 107},
  [20] = {.lex_state = 107},
  [21] = {.lex_state = 107},
  [22] = {.lex_state = 107},
  [23] = {.lex_state = 107},
  [24] = {.lex_state = 107},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 107},
  [29] = {.lex_state = 107},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 107},
  [32] = {.lex_state = 107},
  [33] = {.lex_state = 107},
  [34] = {.lex_state = 107},
  [35] = {.lex_state = 107},
  [36] = {.lex_state = 99},
  [37] = {.lex_state = 107},
  [38] = {.lex_state = 107},
  [39] = {.lex_state = 107},
  [40] = {.lex_state = 107},
  [41] = {.lex_state = 107},
  [42] = {.lex_state = 99},
  [43] = {.lex_state = 107},
  [44] = {.lex_state = 107},
  [45] = {.lex_state = 107},
  [46] = {.lex_state = 107},
  [47] = {.lex_state = 107},
  [48] = {.lex_state = 107},
  [49] = {.lex_state = 107},
  [50] = {.lex_state = 107},
  [51] = {.lex_state = 107},
  [52] = {.lex_state = 107},
  [53] = {.lex_state = 107},
  [54] = {.lex_state = 107},
  [55] = {.lex_state = 107},
  [56] = {.lex_state = 107},
  [57] = {.lex_state = 107},
  [58] = {.lex_state = 107},
  [59] = {.lex_state = 100},
  [60] = {.lex_state = 100},
  [61] = {.lex_state = 4},
  [62] = {.lex_state = 107},
  [63] = {.lex_state = 5},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 107},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 107},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 107},
  [70] = {.lex_state = 107},
  [71] = {.lex_state = 107},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 107},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 107},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 100},
  [79] = {.lex_state = 101},
  [80] = {.lex_state = 101},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 101},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 152},
  [86] = {.lex_state = 100},
  [87] = {.lex_state = 152},
  [88] = {.lex_state = 107},
  [89] = {.lex_state = 152},
  [90] = {.lex_state = 152},
  [91] = {.lex_state = 152},
  [92] = {.lex_state = 152},
  [93] = {.lex_state = 100},
  [94] = {.lex_state = 107},
  [95] = {.lex_state = 102},
  [96] = {.lex_state = 152},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 100},
  [99] = {.lex_state = 152},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [aux_sym_table_header_name_token1] = ACTIONS(1),
    [anon_sym_PIPE_LF] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(101),
    [sym_feature] = STATE(97),
    [aux_sym__tags] = STATE(65),
    [sym_tag] = ACTIONS(5),
    [sym_feature_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(3), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(11), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
    ACTIONS(13), 6,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [27] = 6,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_DQUOTE,
    STATE(3), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(21), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
    ACTIONS(24), 6,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [54] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(32), 1,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(29), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
    ACTIONS(24), 6,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [78] = 11,
    ACTIONS(15), 1,
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
      sym_summary_line,
    STATE(15), 1,
      sym_summary,
    STATE(28), 1,
      sym_background,
    STATE(42), 1,
      aux_sym_summary_repeat1,
    STATE(45), 1,
      aux_sym__tags,
    STATE(24), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [114] = 11,
    ACTIONS(15), 1,
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
      sym_summary_line,
    STATE(16), 1,
      sym_summary,
    STATE(33), 1,
      sym_background,
    STATE(42), 1,
      aux_sym_summary_repeat1,
    STATE(45), 1,
      aux_sym__tags,
    STATE(21), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [150] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(45), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
    ACTIONS(13), 6,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [174] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(55), 1,
      sym_table_header,
    STATE(72), 1,
      sym_docstring_start,
    STATE(49), 2,
      sym_table,
      sym_docstring,
    ACTIONS(49), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [201] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    ACTIONS(53), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(58), 1,
      sym_table_header,
    STATE(63), 1,
      sym_docstring_start,
    STATE(50), 2,
      sym_table,
      sym_docstring,
    ACTIONS(49), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_examples_keyword,
      sym_step_keywords,
  [228] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 10,
      aux_sym_step_definition_token1,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
      anon_sym_DQUOTE,
      sym_number,
      sym_reference,
  [247] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(57), 10,
      aux_sym_step_definition_token1,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
      anon_sym_DQUOTE,
      sym_number,
      sym_reference,
  [263] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(13), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(59), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
    ACTIONS(13), 4,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_examples_keyword,
      sym_step_keywords,
  [285] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_DQUOTE,
    STATE(13), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(63), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
    ACTIONS(24), 4,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_examples_keyword,
      sym_step_keywords,
  [307] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_table_row_repeat1,
    STATE(18), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [328] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_tag,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(79), 1,
      sym_background_keyword,
    STATE(31), 1,
      sym_background,
    STATE(45), 1,
      aux_sym__tags,
    STATE(22), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [355] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_tag,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(79), 1,
      sym_background_keyword,
    STATE(28), 1,
      sym_background,
    STATE(45), 1,
      aux_sym__tags,
    STATE(24), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [382] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_table_row_repeat1,
    STATE(17), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(84), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_examples_keyword,
      sym_step_keywords,
  [403] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_table_row_repeat1,
    STATE(18), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(84), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_table_row_repeat1,
    STATE(17), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(69), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_examples_keyword,
      sym_step_keywords,
  [445] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      sym_tag,
    STATE(53), 1,
      aux_sym__tags,
    STATE(23), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [469] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(88), 1,
      sym_tag,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__tags,
    STATE(23), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [493] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(88), 1,
      sym_tag,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__tags,
    STATE(23), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [517] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      sym_tag,
    ACTIONS(99), 1,
      sym_scenario_keyword,
    ACTIONS(102), 1,
      sym_scenario_outline_keyword,
    STATE(53), 1,
      aux_sym__tags,
    STATE(23), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [541] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(88), 1,
      sym_tag,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      aux_sym__tags,
    STATE(23), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [565] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(57), 8,
      aux_sym_step_definition_token1,
      anon_sym_PIPE,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_examples_keyword,
      sym_step_keywords,
      anon_sym_DQUOTE,
      sym_number,
      sym_reference,
  [579] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_step_definition,
    STATE(2), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(107), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
  [598] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_step_definition,
    STATE(7), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(109), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
  [617] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(88), 1,
      sym_tag,
    STATE(53), 1,
      aux_sym__tags,
    STATE(22), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [638] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_step_keywords,
    STATE(34), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [655] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    STATE(9), 1,
      sym_step_definition,
    STATE(12), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(115), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
  [674] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(88), 1,
      sym_tag,
    STATE(53), 1,
      aux_sym__tags,
    STATE(20), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [695] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_step_keywords,
    STATE(34), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [712] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 1,
      sym_scenario_keyword,
    ACTIONS(77), 1,
      sym_scenario_outline_keyword,
    ACTIONS(88), 1,
      sym_tag,
    STATE(53), 1,
      aux_sym__tags,
    STATE(24), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [733] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      sym_step_keywords,
    STATE(34), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(119), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [750] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 6,
      anon_sym_PIPE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_examples_keyword,
      sym_step_keywords,
  [762] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(128), 1,
      sym_summary_line,
    STATE(36), 1,
      aux_sym_summary_repeat1,
    ACTIONS(126), 4,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_background_keyword,
  [778] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_step_keywords,
    STATE(40), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(131), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [794] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      sym_tag,
    STATE(38), 1,
      aux_sym__tags,
    ACTIONS(138), 4,
      sym_feature_keyword,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_background_keyword,
  [810] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 6,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [822] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      sym_step_keywords,
    STATE(40), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(119), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [838] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_step_keywords,
    STATE(40), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(143), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [854] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(147), 1,
      sym_summary_line,
    STATE(36), 1,
      aux_sym_summary_repeat1,
    ACTIONS(145), 4,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_background_keyword,
  [870] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [881] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_examples_keyword,
    ACTIONS(153), 1,
      sym_step_keywords,
    STATE(57), 1,
      sym_examples,
    STATE(54), 2,
      sym_step,
      aux_sym_background_repeat1,
  [898] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_tag,
    ACTIONS(157), 1,
      sym_scenario_keyword,
    ACTIONS(159), 1,
      sym_scenario_outline_keyword,
    ACTIONS(161), 1,
      sym_background_keyword,
    STATE(38), 1,
      aux_sym__tags,
  [917] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_examples_keyword,
      sym_step_keywords,
  [928] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_examples_keyword,
      sym_step_keywords,
  [950] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [961] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_examples_keyword,
      sym_step_keywords,
  [972] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_examples_keyword,
    ACTIONS(153), 1,
      sym_step_keywords,
    STATE(52), 1,
      sym_examples,
    STATE(54), 2,
      sym_step,
      aux_sym_background_repeat1,
  [989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [999] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_tag,
    ACTIONS(157), 1,
      sym_scenario_keyword,
    ACTIONS(159), 1,
      sym_scenario_outline_keyword,
    STATE(38), 1,
      aux_sym__tags,
  [1015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(119), 1,
      sym_examples_keyword,
    ACTIONS(169), 1,
      sym_step_keywords,
    STATE(54), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1029] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      aux_sym_table_row_repeat1,
    STATE(14), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [1043] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [1053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [1063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 1,
      anon_sym_PIPE,
    STATE(64), 1,
      aux_sym_table_row_repeat1,
    STATE(19), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [1077] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    ACTIONS(178), 1,
      aux_sym_table_header_name_token1,
    STATE(60), 1,
      aux_sym_table_header_repeat1,
    STATE(88), 1,
      sym_table_header_name,
  [1093] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_PIPE,
    ACTIONS(182), 1,
      aux_sym_table_header_name_token1,
    STATE(60), 1,
      aux_sym_table_header_repeat1,
    STATE(88), 1,
      sym_table_header_name,
  [1109] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(185), 1,
      aux_sym_table_header_name_token1,
    ACTIONS(187), 1,
      sym_docstring_line,
    STATE(100), 1,
      sym_docstring_lang,
  [1122] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_step_keywords,
    STATE(32), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1133] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_docstring_line,
    STATE(68), 1,
      aux_sym_docstring_content_repeat1,
    STATE(83), 1,
      sym_docstring_content,
  [1146] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(193), 1,
      anon_sym_PIPE_LF,
    STATE(74), 1,
      aux_sym_table_row_repeat1,
  [1159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_tag,
    ACTIONS(195), 1,
      sym_feature_keyword,
    STATE(38), 1,
      aux_sym__tags,
  [1172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_PIPE,
    ACTIONS(197), 1,
      anon_sym_PIPE_LF,
    STATE(74), 1,
      aux_sym_table_row_repeat1,
  [1185] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(113), 1,
      sym_step_keywords,
    STATE(29), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1196] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(201), 1,
      sym_docstring_line,
    STATE(77), 1,
      aux_sym_docstring_content_repeat1,
  [1209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_step_keywords,
    STATE(51), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_step_keywords,
    STATE(37), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 1,
      sym_step_keywords,
    STATE(44), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1242] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_docstring_line,
    STATE(68), 1,
      aux_sym_docstring_content_repeat1,
    STATE(84), 1,
      sym_docstring_content,
  [1255] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_step_keywords,
    STATE(41), 2,
      sym_step,
      aux_sym_background_repeat1,
  [1266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_PIPE,
    ACTIONS(206), 1,
      anon_sym_PIPE_LF,
    STATE(74), 1,
      aux_sym_table_row_repeat1,
  [1279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      aux_sym_table_header_name_token1,
    STATE(59), 1,
      aux_sym_table_header_repeat1,
    STATE(88), 1,
      sym_table_header_name,
  [1292] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      sym_table_header,
    STATE(56), 1,
      sym_table,
  [1305] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(210), 1,
      sym_docstring_line,
    STATE(77), 1,
      aux_sym_docstring_content_repeat1,
  [1318] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_PIPE,
      aux_sym_table_header_name_token1,
  [1326] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(213), 2,
      aux_sym_quoted_string_token1,
      sym_reference,
  [1334] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(215), 2,
      aux_sym_quoted_string_token1,
      sym_reference,
  [1342] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_PIPE_LF,
    ACTIONS(217), 1,
      anon_sym_PIPE,
  [1352] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(219), 2,
      aux_sym_quoted_string_token1,
      sym_reference,
  [1360] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(46), 1,
      sym_docstring_end,
  [1370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(43), 1,
      sym_docstring_end,
  [1380] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(225), 1,
      sym_title,
  [1387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_DQUOTE,
  [1394] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(229), 1,
      sym_title,
  [1401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(231), 1,
      anon_sym_PIPE,
  [1408] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(233), 1,
      sym_title,
  [1415] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(235), 1,
      sym_title,
  [1422] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(237), 1,
      sym_title,
  [1429] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(239), 1,
      sym_title,
  [1436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
  [1443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(243), 1,
      anon_sym_PIPE,
  [1450] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(245), 1,
      sym_table_cell,
  [1457] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(247), 1,
      sym_title,
  [1464] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
  [1471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(251), 1,
      anon_sym_DQUOTE,
  [1478] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(253), 1,
      sym_title,
  [1485] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(255), 1,
      sym_docstring_line,
  [1492] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(257), 1,
      ts_builtin_sym_end,
  [1499] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(259), 1,
      sym_docstring_line,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 174,
  [SMALL_STATE(9)] = 201,
  [SMALL_STATE(10)] = 228,
  [SMALL_STATE(11)] = 247,
  [SMALL_STATE(12)] = 263,
  [SMALL_STATE(13)] = 285,
  [SMALL_STATE(14)] = 307,
  [SMALL_STATE(15)] = 328,
  [SMALL_STATE(16)] = 355,
  [SMALL_STATE(17)] = 382,
  [SMALL_STATE(18)] = 403,
  [SMALL_STATE(19)] = 424,
  [SMALL_STATE(20)] = 445,
  [SMALL_STATE(21)] = 469,
  [SMALL_STATE(22)] = 493,
  [SMALL_STATE(23)] = 517,
  [SMALL_STATE(24)] = 541,
  [SMALL_STATE(25)] = 565,
  [SMALL_STATE(26)] = 579,
  [SMALL_STATE(27)] = 598,
  [SMALL_STATE(28)] = 617,
  [SMALL_STATE(29)] = 638,
  [SMALL_STATE(30)] = 655,
  [SMALL_STATE(31)] = 674,
  [SMALL_STATE(32)] = 695,
  [SMALL_STATE(33)] = 712,
  [SMALL_STATE(34)] = 733,
  [SMALL_STATE(35)] = 750,
  [SMALL_STATE(36)] = 762,
  [SMALL_STATE(37)] = 778,
  [SMALL_STATE(38)] = 794,
  [SMALL_STATE(39)] = 810,
  [SMALL_STATE(40)] = 822,
  [SMALL_STATE(41)] = 838,
  [SMALL_STATE(42)] = 854,
  [SMALL_STATE(43)] = 870,
  [SMALL_STATE(44)] = 881,
  [SMALL_STATE(45)] = 898,
  [SMALL_STATE(46)] = 917,
  [SMALL_STATE(47)] = 928,
  [SMALL_STATE(48)] = 939,
  [SMALL_STATE(49)] = 950,
  [SMALL_STATE(50)] = 961,
  [SMALL_STATE(51)] = 972,
  [SMALL_STATE(52)] = 989,
  [SMALL_STATE(53)] = 999,
  [SMALL_STATE(54)] = 1015,
  [SMALL_STATE(55)] = 1029,
  [SMALL_STATE(56)] = 1043,
  [SMALL_STATE(57)] = 1053,
  [SMALL_STATE(58)] = 1063,
  [SMALL_STATE(59)] = 1077,
  [SMALL_STATE(60)] = 1093,
  [SMALL_STATE(61)] = 1109,
  [SMALL_STATE(62)] = 1122,
  [SMALL_STATE(63)] = 1133,
  [SMALL_STATE(64)] = 1146,
  [SMALL_STATE(65)] = 1159,
  [SMALL_STATE(66)] = 1172,
  [SMALL_STATE(67)] = 1185,
  [SMALL_STATE(68)] = 1196,
  [SMALL_STATE(69)] = 1209,
  [SMALL_STATE(70)] = 1220,
  [SMALL_STATE(71)] = 1231,
  [SMALL_STATE(72)] = 1242,
  [SMALL_STATE(73)] = 1255,
  [SMALL_STATE(74)] = 1266,
  [SMALL_STATE(75)] = 1279,
  [SMALL_STATE(76)] = 1292,
  [SMALL_STATE(77)] = 1305,
  [SMALL_STATE(78)] = 1318,
  [SMALL_STATE(79)] = 1326,
  [SMALL_STATE(80)] = 1334,
  [SMALL_STATE(81)] = 1342,
  [SMALL_STATE(82)] = 1352,
  [SMALL_STATE(83)] = 1360,
  [SMALL_STATE(84)] = 1370,
  [SMALL_STATE(85)] = 1380,
  [SMALL_STATE(86)] = 1387,
  [SMALL_STATE(87)] = 1394,
  [SMALL_STATE(88)] = 1401,
  [SMALL_STATE(89)] = 1408,
  [SMALL_STATE(90)] = 1415,
  [SMALL_STATE(91)] = 1422,
  [SMALL_STATE(92)] = 1429,
  [SMALL_STATE(93)] = 1436,
  [SMALL_STATE(94)] = 1443,
  [SMALL_STATE(95)] = 1450,
  [SMALL_STATE(96)] = 1457,
  [SMALL_STATE(97)] = 1464,
  [SMALL_STATE(98)] = 1471,
  [SMALL_STATE(99)] = 1478,
  [SMALL_STATE(100)] = 1485,
  [SMALL_STATE(101)] = 1492,
  [SMALL_STATE(102)] = 1499,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_definition, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_definition, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(79),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(80),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(13),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(82),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(95),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(53),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(91),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(90),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(26),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 2),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tags, 2), SHIFT_REPEAT(38),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tags, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(27),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 3),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring_end, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 3),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 4),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(30),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2),
  [182] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2), SHIFT_REPEAT(94),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_start, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_content, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [203] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2), SHIFT_REPEAT(95),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docstring_content_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_content_repeat1, 2), SHIFT_REPEAT(77),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header_name, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring_start, 2),
  [257] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring_lang, 1),
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
