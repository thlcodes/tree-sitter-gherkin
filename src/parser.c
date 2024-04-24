#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 38
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  aux_sym_step_definition_token1 = 1,
  anon_sym_PIPE = 2,
  sym_table_header_name = 3,
  anon_sym_PIPE_LF = 4,
  sym_table_cell = 5,
  sym_tag = 6,
  sym_feature_keyword = 7,
  sym_scenario_keyword = 8,
  sym_scenario_outline_keyword = 9,
  sym_examples_keyword = 10,
  sym_background_keyword = 11,
  sym_step_keywords = 12,
  sym_title = 13,
  sym_comment = 14,
  anon_sym_DQUOTE = 15,
  aux_sym_quoted_string_token1 = 16,
  sym_number = 17,
  sym_reference = 18,
  sym_source_file = 19,
  sym_feature = 20,
  sym_background = 21,
  sym_scenario = 22,
  sym_scenario_outline = 23,
  sym_step = 24,
  sym_step_definition = 25,
  sym_examples = 26,
  sym_table = 27,
  sym_table_header = 28,
  sym_table_row = 29,
  aux_sym__tags = 30,
  sym_quoted_string = 31,
  aux_sym_feature_repeat1 = 32,
  aux_sym_background_repeat1 = 33,
  aux_sym_step_definition_repeat1 = 34,
  aux_sym_table_repeat1 = 35,
  aux_sym_table_header_repeat1 = 36,
  aux_sym_table_row_repeat1 = 37,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_step_definition_token1] = "step_definition_token1",
  [anon_sym_PIPE] = "|",
  [sym_table_header_name] = "table_header_name",
  [anon_sym_PIPE_LF] = "|\n",
  [sym_table_cell] = "table_cell",
  [sym_tag] = "tag",
  [sym_feature_keyword] = "feature_keyword",
  [sym_scenario_keyword] = "scenario_keyword",
  [sym_scenario_outline_keyword] = "scenario_outline_keyword",
  [sym_examples_keyword] = "examples_keyword",
  [sym_background_keyword] = "background_keyword",
  [sym_step_keywords] = "step_keywords",
  [sym_title] = "title",
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
  [sym_table_row] = "table_row",
  [aux_sym__tags] = "_tags",
  [sym_quoted_string] = "quoted_string",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_background_repeat1] = "background_repeat1",
  [aux_sym_step_definition_repeat1] = "step_definition_repeat1",
  [aux_sym_table_repeat1] = "table_repeat1",
  [aux_sym_table_header_repeat1] = "table_header_repeat1",
  [aux_sym_table_row_repeat1] = "table_row_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_step_definition_token1] = aux_sym_step_definition_token1,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_table_header_name] = sym_table_header_name,
  [anon_sym_PIPE_LF] = anon_sym_PIPE_LF,
  [sym_table_cell] = sym_table_cell,
  [sym_tag] = sym_tag,
  [sym_feature_keyword] = sym_feature_keyword,
  [sym_scenario_keyword] = sym_scenario_keyword,
  [sym_scenario_outline_keyword] = sym_scenario_outline_keyword,
  [sym_examples_keyword] = sym_examples_keyword,
  [sym_background_keyword] = sym_background_keyword,
  [sym_step_keywords] = sym_step_keywords,
  [sym_title] = sym_title,
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
  [sym_table_row] = sym_table_row,
  [aux_sym__tags] = aux_sym__tags,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym_feature_repeat1] = aux_sym_feature_repeat1,
  [aux_sym_background_repeat1] = aux_sym_background_repeat1,
  [aux_sym_step_definition_repeat1] = aux_sym_step_definition_repeat1,
  [aux_sym_table_repeat1] = aux_sym_table_repeat1,
  [aux_sym_table_header_repeat1] = aux_sym_table_header_repeat1,
  [aux_sym_table_row_repeat1] = aux_sym_table_row_repeat1,
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
  [sym_table_header_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_table_cell] = {
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
  [sym_table_row] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__tags] = {
    .visible = false,
    .named = false,
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
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 7,
  [12] = 12,
  [13] = 3,
  [14] = 14,
  [15] = 15,
  [16] = 2,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 21,
  [25] = 21,
  [26] = 22,
  [27] = 7,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 32,
  [37] = 37,
  [38] = 38,
  [39] = 22,
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
  [57] = 55,
  [58] = 58,
  [59] = 59,
  [60] = 55,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 62,
  [71] = 71,
  [72] = 62,
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead == '|') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\r') ADVANCE(101);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 'W') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 'W') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(157);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(156);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(161);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(158);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(159);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(160);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(171);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(85);
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(80);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(75);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(77);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(78);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(6);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 42:
      if (lookahead == 'g') ADVANCE(74);
      END_STATE();
    case 43:
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 49:
      if (lookahead == 'k') ADVANCE(42);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(71);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(72);
      END_STATE();
    case 58:
      if (lookahead == 'm') ADVANCE(73);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 64:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(86);
      END_STATE();
    case 70:
      if (lookahead == 'p') ADVANCE(51);
      END_STATE();
    case 71:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 72:
      if (lookahead == 'p') ADVANCE(53);
      END_STATE();
    case 73:
      if (lookahead == 'p') ADVANCE(54);
      END_STATE();
    case 74:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'r') ADVANCE(45);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 79:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 84:
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 85:
      if (lookahead == 'u') ADVANCE(81);
      END_STATE();
    case 86:
      if (lookahead == 'u') ADVANCE(60);
      END_STATE();
    case 87:
      if (lookahead == 'v') ADVANCE(36);
      END_STATE();
    case 88:
      if (lookahead == 'x') ADVANCE(18);
      END_STATE();
    case 89:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead == '\r') ADVANCE(89);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'B') ADVANCE(124);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == 'F') ADVANCE(132);
      if (lookahead == 'S') ADVANCE(127);
      if (lookahead == '|') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 90:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '@') ADVANCE(95);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'B') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(43);
      if (lookahead == '|') ADVANCE(116);
      END_STATE();
    case 91:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') SKIP(91)
      if (lookahead == '\r') SKIP(91)
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == '|') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 92:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(168);
      END_STATE();
    case 93:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(153);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(154);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 96:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 97:
      if (eof) ADVANCE(99);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\r') ADVANCE(101);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 'W') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 98:
      if (eof) ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(90);
      if (lookahead == '\r') ADVANCE(90);
      if (lookahead == '#') ADVANCE(165);
      if (lookahead == 'A') ADVANCE(59);
      if (lookahead == 'B') ADVANCE(19);
      if (lookahead == 'E') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(35);
      if (lookahead == 'G') ADVANCE(44);
      if (lookahead == 'S') ADVANCE(28);
      if (lookahead == 'T') ADVANCE(43);
      if (lookahead == 'W') ADVANCE(43);
      if (lookahead == '|') ADVANCE(116);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '\r') ADVANCE(101);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '@') ADVANCE(113);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(110);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(104);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 'W') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == 'A') ADVANCE(108);
      if (lookahead == 'B') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == 'G') ADVANCE(107);
      if (lookahead == 'S') ADVANCE(105);
      if (lookahead == 'T') ADVANCE(106);
      if (lookahead == 'W') ADVANCE(106);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\r') ADVANCE(103);
      if (lookahead == '"') ADVANCE(166);
      if (lookahead == '#') ADVANCE(114);
      if (lookahead == '<') ADVANCE(115);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'h') ADVANCE(36);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'i') ADVANCE(87);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'u') ADVANCE(82);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'x') ADVANCE(25);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == 'x') ADVANCE(26);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(151);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == 's') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == ':') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == ':') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'a') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'a') ADVANCE(146);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'a') ADVANCE(126);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'a') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'c') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'c') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'd') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'e') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'e') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'e') ADVANCE(121);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'e') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'g') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'k') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'l') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'm') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'n') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'n') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'o') ADVANCE(118);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'o') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'p') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'r') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'r') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'r') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 't') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'u') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'u') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_table_header_name);
      if (lookahead == 'x') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_table_header_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_PIPE_LF);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\n') ADVANCE(154);
      if (lookahead == '|') ADVANCE(165);
      if (lookahead != 0) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(153);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_feature_keyword);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_scenario_keyword);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_scenario_outline_keyword);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_examples_keyword);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_background_keyword);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_step_keywords);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_title);
      if (lookahead == '\r') ADVANCE(162);
      if (lookahead == '#') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_title);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(168);
      if (lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(165);
      if (lookahead != 0) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ') ADVANCE(167);
      if (lookahead == '\r') ADVANCE(167);
      if (lookahead == '#') ADVANCE(164);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 97},
  [3] = {.lex_state = 97},
  [4] = {.lex_state = 97},
  [5] = {.lex_state = 97},
  [6] = {.lex_state = 98},
  [7] = {.lex_state = 97},
  [8] = {.lex_state = 98},
  [9] = {.lex_state = 98},
  [10] = {.lex_state = 98},
  [11] = {.lex_state = 97},
  [12] = {.lex_state = 98},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 98},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 98},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 98},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 98},
  [32] = {.lex_state = 98},
  [33] = {.lex_state = 98},
  [34] = {.lex_state = 98},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 98},
  [37] = {.lex_state = 98},
  [38] = {.lex_state = 98},
  [39] = {.lex_state = 98},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 98},
  [42] = {.lex_state = 98},
  [43] = {.lex_state = 91},
  [44] = {.lex_state = 98},
  [45] = {.lex_state = 98},
  [46] = {.lex_state = 98},
  [47] = {.lex_state = 98},
  [48] = {.lex_state = 91},
  [49] = {.lex_state = 98},
  [50] = {.lex_state = 98},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 98},
  [53] = {.lex_state = 98},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 92},
  [56] = {.lex_state = 91},
  [57] = {.lex_state = 92},
  [58] = {.lex_state = 91},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 92},
  [61] = {.lex_state = 93},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 162},
  [64] = {.lex_state = 162},
  [65] = {.lex_state = 162},
  [66] = {.lex_state = 162},
  [67] = {.lex_state = 162},
  [68] = {.lex_state = 162},
  [69] = {.lex_state = 162},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 98},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 162},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_table_header_name] = ACTIONS(1),
    [anon_sym_PIPE_LF] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_feature_keyword] = ACTIONS(1),
    [sym_scenario_keyword] = ACTIONS(1),
    [sym_examples_keyword] = ACTIONS(1),
    [sym_background_keyword] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(74),
    [sym_feature] = STATE(71),
    [aux_sym__tags] = STATE(47),
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
    ACTIONS(13), 4,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [25] = 6,
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
    ACTIONS(24), 4,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [50] = 5,
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
    ACTIONS(24), 4,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [72] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(4), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(35), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
    ACTIONS(13), 4,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [94] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_tag,
    ACTIONS(41), 1,
      sym_scenario_keyword,
    ACTIONS(43), 1,
      sym_scenario_outline_keyword,
    ACTIONS(45), 1,
      sym_background_keyword,
    STATE(19), 1,
      sym_background,
    STATE(33), 1,
      aux_sym__tags,
    STATE(15), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [121] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(47), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 8,
      aux_sym_step_definition_token1,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
      anon_sym_DQUOTE,
      sym_number,
      sym_reference,
  [138] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      sym_tag,
    ACTIONS(41), 1,
      sym_scenario_keyword,
    ACTIONS(43), 1,
      sym_scenario_outline_keyword,
    ACTIONS(45), 1,
      sym_background_keyword,
    STATE(20), 1,
      sym_background,
    STATE(33), 1,
      aux_sym__tags,
    STATE(17), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [165] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_table_row_repeat1,
    STATE(9), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [185] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_scenario_keyword,
    ACTIONS(43), 1,
      sym_scenario_outline_keyword,
    ACTIONS(56), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      sym_tag,
    STATE(40), 1,
      aux_sym__tags,
    STATE(12), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [209] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(49), 8,
      aux_sym_step_definition_token1,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
      anon_sym_DQUOTE,
      sym_number,
      sym_reference,
  [223] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_tag,
    ACTIONS(65), 1,
      sym_scenario_keyword,
    ACTIONS(68), 1,
      sym_scenario_outline_keyword,
    STATE(40), 1,
      aux_sym__tags,
    STATE(12), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [247] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    ACTIONS(24), 2,
      sym_examples_keyword,
      sym_step_keywords,
    STATE(13), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(71), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
  [267] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_table_row_repeat1,
    STATE(9), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(77), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [287] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_scenario_keyword,
    ACTIONS(43), 1,
      sym_scenario_outline_keyword,
    ACTIONS(58), 1,
      sym_tag,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      aux_sym__tags,
    STATE(12), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [311] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 2,
      sym_examples_keyword,
      sym_step_keywords,
    STATE(13), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(83), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
  [331] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_scenario_keyword,
    ACTIONS(43), 1,
      sym_scenario_outline_keyword,
    ACTIONS(58), 1,
      sym_tag,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      aux_sym__tags,
    STATE(12), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [355] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_step_keywords,
    STATE(22), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [372] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_scenario_keyword,
    ACTIONS(43), 1,
      sym_scenario_outline_keyword,
    ACTIONS(58), 1,
      sym_tag,
    STATE(40), 1,
      aux_sym__tags,
    STATE(17), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [393] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      sym_scenario_keyword,
    ACTIONS(43), 1,
      sym_scenario_outline_keyword,
    ACTIONS(58), 1,
      sym_tag,
    STATE(40), 1,
      aux_sym__tags,
    STATE(10), 3,
      sym_scenario,
      sym_scenario_outline,
      aux_sym_feature_repeat1,
  [414] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_DQUOTE,
    STATE(36), 1,
      sym_step_definition,
    STATE(2), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(93), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
  [433] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      sym_step_keywords,
    STATE(22), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(95), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [450] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_step_keywords,
    STATE(22), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [467] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_step_definition,
    STATE(16), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(102), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
  [486] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_step_definition,
    STATE(5), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
    ACTIONS(104), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym_reference,
  [505] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_step_keywords,
    STATE(26), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(95), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [521] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(49), 6,
      aux_sym_step_definition_token1,
      sym_examples_keyword,
      sym_step_keywords,
      anon_sym_DQUOTE,
      sym_number,
      sym_reference,
  [533] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_step_keywords,
    STATE(26), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(109), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [549] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_step_keywords,
    STATE(26), 2,
      sym_step,
      aux_sym_background_repeat1,
    ACTIONS(113), 3,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [565] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(115), 1,
      sym_tag,
    STATE(30), 1,
      aux_sym__tags,
    ACTIONS(118), 4,
      sym_feature_keyword,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_background_keyword,
  [581] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 5,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [592] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_examples_keyword,
      sym_step_keywords,
  [603] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_tag,
    ACTIONS(126), 1,
      sym_scenario_keyword,
    ACTIONS(128), 1,
      sym_scenario_outline_keyword,
    ACTIONS(130), 1,
      sym_background_keyword,
    STATE(30), 1,
      aux_sym__tags,
  [622] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_examples_keyword,
    ACTIONS(134), 1,
      sym_step_keywords,
    STATE(37), 1,
      sym_examples,
    STATE(39), 2,
      sym_step,
      aux_sym_background_repeat1,
  [639] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      sym_examples_keyword,
    ACTIONS(134), 1,
      sym_step_keywords,
    STATE(42), 1,
      sym_examples,
    STATE(39), 2,
      sym_step,
      aux_sym_background_repeat1,
  [656] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 5,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
      sym_step_keywords,
  [667] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [677] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [687] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      sym_examples_keyword,
    ACTIONS(140), 1,
      sym_step_keywords,
    STATE(39), 2,
      sym_step,
      aux_sym_background_repeat1,
  [701] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_tag,
    ACTIONS(126), 1,
      sym_scenario_keyword,
    ACTIONS(128), 1,
      sym_scenario_outline_keyword,
    STATE(30), 1,
      aux_sym__tags,
  [717] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 1,
      anon_sym_PIPE,
    STATE(51), 1,
      aux_sym_table_row_repeat1,
    STATE(14), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      sym_tag,
      sym_scenario_keyword,
      sym_scenario_outline_keyword,
  [741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_PIPE,
    ACTIONS(147), 1,
      sym_table_header_name,
    STATE(43), 1,
      aux_sym_table_header_repeat1,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_step_keywords,
    STATE(28), 2,
      sym_step,
      aux_sym_background_repeat1,
  [765] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_step_keywords,
    STATE(35), 2,
      sym_step,
      aux_sym_background_repeat1,
  [776] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_step_keywords,
    STATE(23), 2,
      sym_step,
      aux_sym_background_repeat1,
  [787] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 1,
      sym_tag,
    ACTIONS(150), 1,
      sym_feature_keyword,
    STATE(30), 1,
      aux_sym__tags,
  [800] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_PIPE,
    ACTIONS(154), 1,
      sym_table_header_name,
    STATE(43), 1,
      aux_sym_table_header_repeat1,
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 1,
      sym_step_keywords,
    STATE(29), 2,
      sym_step,
      aux_sym_background_repeat1,
  [824] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 1,
      sym_step_keywords,
    STATE(18), 2,
      sym_step,
      aux_sym_background_repeat1,
  [835] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      anon_sym_PIPE,
    ACTIONS(158), 1,
      anon_sym_PIPE_LF,
    STATE(54), 1,
      aux_sym_table_row_repeat1,
  [848] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 1,
      anon_sym_PIPE,
    STATE(38), 1,
      sym_table,
    STATE(41), 1,
      sym_table_header,
  [861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 1,
      sym_step_keywords,
    STATE(34), 2,
      sym_step,
      aux_sym_background_repeat1,
  [872] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(165), 1,
      anon_sym_PIPE_LF,
    STATE(54), 1,
      aux_sym_table_row_repeat1,
  [885] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(167), 2,
      aux_sym_quoted_string_token1,
      sym_reference,
  [893] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_table_header_name,
    STATE(48), 1,
      aux_sym_table_header_repeat1,
  [903] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(169), 2,
      aux_sym_quoted_string_token1,
      sym_reference,
  [911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 2,
      anon_sym_PIPE,
      sym_table_header_name,
  [919] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_PIPE_LF,
    ACTIONS(171), 1,
      anon_sym_PIPE,
  [929] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(173), 2,
      aux_sym_quoted_string_token1,
      sym_reference,
  [937] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_table_cell,
  [944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
  [951] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_title,
  [958] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_title,
  [965] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(183), 1,
      sym_title,
  [972] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_title,
  [979] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_title,
  [986] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(189), 1,
      sym_title,
  [993] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_title,
  [1000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
  [1007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
  [1014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
  [1021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_PIPE,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
  [1035] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_title,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 165,
  [SMALL_STATE(10)] = 185,
  [SMALL_STATE(11)] = 209,
  [SMALL_STATE(12)] = 223,
  [SMALL_STATE(13)] = 247,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 311,
  [SMALL_STATE(17)] = 331,
  [SMALL_STATE(18)] = 355,
  [SMALL_STATE(19)] = 372,
  [SMALL_STATE(20)] = 393,
  [SMALL_STATE(21)] = 414,
  [SMALL_STATE(22)] = 433,
  [SMALL_STATE(23)] = 450,
  [SMALL_STATE(24)] = 467,
  [SMALL_STATE(25)] = 486,
  [SMALL_STATE(26)] = 505,
  [SMALL_STATE(27)] = 521,
  [SMALL_STATE(28)] = 533,
  [SMALL_STATE(29)] = 549,
  [SMALL_STATE(30)] = 565,
  [SMALL_STATE(31)] = 581,
  [SMALL_STATE(32)] = 592,
  [SMALL_STATE(33)] = 603,
  [SMALL_STATE(34)] = 622,
  [SMALL_STATE(35)] = 639,
  [SMALL_STATE(36)] = 656,
  [SMALL_STATE(37)] = 667,
  [SMALL_STATE(38)] = 677,
  [SMALL_STATE(39)] = 687,
  [SMALL_STATE(40)] = 701,
  [SMALL_STATE(41)] = 717,
  [SMALL_STATE(42)] = 731,
  [SMALL_STATE(43)] = 741,
  [SMALL_STATE(44)] = 754,
  [SMALL_STATE(45)] = 765,
  [SMALL_STATE(46)] = 776,
  [SMALL_STATE(47)] = 787,
  [SMALL_STATE(48)] = 800,
  [SMALL_STATE(49)] = 813,
  [SMALL_STATE(50)] = 824,
  [SMALL_STATE(51)] = 835,
  [SMALL_STATE(52)] = 848,
  [SMALL_STATE(53)] = 861,
  [SMALL_STATE(54)] = 872,
  [SMALL_STATE(55)] = 885,
  [SMALL_STATE(56)] = 893,
  [SMALL_STATE(57)] = 903,
  [SMALL_STATE(58)] = 911,
  [SMALL_STATE(59)] = 919,
  [SMALL_STATE(60)] = 929,
  [SMALL_STATE(61)] = 937,
  [SMALL_STATE(62)] = 944,
  [SMALL_STATE(63)] = 951,
  [SMALL_STATE(64)] = 958,
  [SMALL_STATE(65)] = 965,
  [SMALL_STATE(66)] = 972,
  [SMALL_STATE(67)] = 979,
  [SMALL_STATE(68)] = 986,
  [SMALL_STATE(69)] = 993,
  [SMALL_STATE(70)] = 1000,
  [SMALL_STATE(71)] = 1007,
  [SMALL_STATE(72)] = 1014,
  [SMALL_STATE(73)] = 1021,
  [SMALL_STATE(74)] = 1028,
  [SMALL_STATE(75)] = 1035,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_definition, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_definition, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(60),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(55),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(61),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(40),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(67),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(66),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(13),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(57),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario, 4),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_background, 4),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tags, 2), SHIFT_REPEAT(30),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__tags, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 2),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 2),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_examples, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_background_repeat1, 2), SHIFT_REPEAT(24),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scenario_outline, 5),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2), SHIFT_REPEAT(73),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2), SHIFT_REPEAT(61),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [201] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
