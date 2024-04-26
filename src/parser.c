#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  sym_section_keyword = 9,
  sym_comment = 10,
  anon_sym_DQUOTE = 11,
  aux_sym_quoted_string_token1 = 12,
  anon_sym_SQUOTE = 13,
  aux_sym_quoted_string_token2 = 14,
  sym_number = 15,
  sym_reference = 16,
  sym__text = 17,
  sym__space = 18,
  sym_source_file = 19,
  sym_feature = 20,
  sym_section = 21,
  sym_step = 22,
  sym_step_definition = 23,
  sym_table = 24,
  sym_table_header = 25,
  sym_table_header_name = 26,
  sym_table_row = 27,
  sym_docstring = 28,
  sym_docstring_start = 29,
  sym_docstring_end = 30,
  sym_docstring_lang = 31,
  sym_docstring_content = 32,
  aux_sym__tags = 33,
  sym_step_keywords = 34,
  sym_title = 35,
  sym_summary = 36,
  sym_summary_line = 37,
  sym_quoted_string = 38,
  aux_sym_feature_repeat1 = 39,
  aux_sym_section_repeat1 = 40,
  aux_sym_step_definition_repeat1 = 41,
  aux_sym_table_repeat1 = 42,
  aux_sym_table_header_repeat1 = 43,
  aux_sym_table_row_repeat1 = 44,
  aux_sym_docstring_content_repeat1 = 45,
  aux_sym_summary_repeat1 = 46,
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
  [sym_section_keyword] = "section_keyword",
  [sym_comment] = "comment",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [sym_number] = "number",
  [sym_reference] = "reference",
  [sym__text] = "_text",
  [sym__space] = "_space",
  [sym_source_file] = "source_file",
  [sym_feature] = "feature",
  [sym_section] = "section",
  [sym_step] = "step",
  [sym_step_definition] = "step_definition",
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
  [sym_step_keywords] = "step_keywords",
  [sym_title] = "title",
  [sym_summary] = "summary",
  [sym_summary_line] = "summary_line",
  [sym_quoted_string] = "quoted_string",
  [aux_sym_feature_repeat1] = "feature_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
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
  [sym_section_keyword] = sym_section_keyword,
  [sym_comment] = sym_comment,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [sym_number] = sym_number,
  [sym_reference] = sym_reference,
  [sym__text] = sym__text,
  [sym__space] = sym__space,
  [sym_source_file] = sym_source_file,
  [sym_feature] = sym_feature,
  [sym_section] = sym_section,
  [sym_step] = sym_step,
  [sym_step_definition] = sym_step_definition,
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
  [sym_step_keywords] = sym_step_keywords,
  [sym_title] = sym_title,
  [sym_summary] = sym_summary,
  [sym_summary_line] = sym_summary_line,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym_feature_repeat1] = aux_sym_feature_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
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
  [sym_section_keyword] = {
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
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
  [sym_section] = {
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
  [sym_step_keywords] = {
    .visible = true,
    .named = true,
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
  [aux_sym_section_repeat1] = {
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
  [34] = 30,
  [35] = 11,
  [36] = 16,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 39,
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
  [73] = 32,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(22);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(26);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '"') ADVANCE(41);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '|') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '>') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == '#') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(58);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 20:
      if (eof) ADVANCE(22);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 21:
      if (eof) ADVANCE(22);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '\'') ADVANCE(53);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(16);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
      if (lookahead == ' ') ADVANCE(15);
      if (lookahead == ':') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE_LF);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\n') ADVANCE(36);
      if (lookahead == '|') ADVANCE(49);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(36);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '"') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_section_keyword);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_section_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '\'' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(49);
      if (lookahead != 0) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(17);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(68);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(59);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '@') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ':') ADVANCE(46);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(65);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(66);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(68);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 20},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 21},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 21},
  [35] = {.lex_state = 21},
  [36] = {.lex_state = 21},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 21},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 21},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 21},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 21},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 11},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 13},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 14},
  [66] = {.lex_state = 21},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 21},
  [70] = {.lex_state = 21},
  [71] = {.lex_state = 21},
  [72] = {.lex_state = 21},
  [73] = {.lex_state = 21},
  [74] = {.lex_state = 21},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 5},
  [77] = {.lex_state = 21},
  [78] = {.lex_state = 21},
  [79] = {.lex_state = 21},
  [80] = {.lex_state = 21},
  [81] = {.lex_state = 21},
  [82] = {.lex_state = 21},
  [83] = {.lex_state = 21},
  [84] = {.lex_state = 21},
  [85] = {.lex_state = 21},
  [86] = {.lex_state = 21},
  [87] = {.lex_state = 21},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_step_definition_token1] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_reference] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym_feature] = STATE(74),
    [aux_sym__tags] = STATE(55),
    [sym_tag] = ACTIONS(5),
    [sym_section_keyword] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [sym__space] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(34), 1,
      sym_table_header,
    STATE(42), 1,
      sym_table,
    STATE(13), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [31] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(34), 1,
      sym_table_header,
    STATE(51), 1,
      sym_table,
    STATE(18), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [62] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(34), 1,
      sym_table_header,
    STATE(40), 1,
      sym_table,
    STATE(12), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [93] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(25), 1,
      aux_sym_table_header_name_token1,
    ACTIONS(27), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(30), 1,
      sym_table_header,
    STATE(47), 1,
      sym_docstring_start,
    STATE(83), 2,
      sym_table,
      sym_docstring,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [124] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_PIPE,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(34), 1,
      sym_table_header,
    STATE(45), 1,
      sym_table,
    STATE(10), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(29), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [155] = 10,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_tag,
    ACTIONS(33), 1,
      sym_section_keyword,
    ACTIONS(35), 1,
      sym__text,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    STATE(29), 1,
      sym_summary,
    STATE(59), 1,
      aux_sym__tags,
    STATE(87), 1,
      sym_summary_line,
    STATE(21), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [187] = 10,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_tag,
    ACTIONS(33), 1,
      sym_section_keyword,
    ACTIONS(35), 1,
      sym__text,
    STATE(24), 1,
      aux_sym_summary_repeat1,
    STATE(25), 1,
      sym_summary,
    STATE(59), 1,
      aux_sym__tags,
    STATE(87), 1,
      sym_summary_line,
    STATE(20), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [219] = 7,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(43), 1,
      sym_reference,
    STATE(82), 1,
      sym_step_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
    ACTIONS(37), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(15), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [244] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(17), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [266] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_table_row_repeat1,
    STATE(16), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(45), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [288] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(17), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [310] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(17), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [332] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      sym_reference,
    ACTIONS(63), 1,
      sym__space,
    ACTIONS(51), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(14), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [356] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_SQUOTE,
    ACTIONS(67), 1,
      sym_reference,
    ACTIONS(69), 1,
      sym__space,
    ACTIONS(65), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(14), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [380] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_table_row_repeat1,
    STATE(16), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(71), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [402] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(78), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(17), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [424] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(9), 1,
      sym_step_keywords,
    STATE(17), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [446] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      sym_tag,
    ACTIONS(85), 1,
      sym_section_keyword,
    STATE(59), 1,
      aux_sym__tags,
    STATE(23), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [469] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_tag,
    ACTIONS(85), 1,
      sym_section_keyword,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__tags,
    STATE(23), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [492] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_tag,
    ACTIONS(85), 1,
      sym_section_keyword,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__tags,
    STATE(23), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [515] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_tag,
    ACTIONS(85), 1,
      sym_section_keyword,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(59), 1,
      aux_sym__tags,
    STATE(23), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [538] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      sym_tag,
    ACTIONS(98), 1,
      sym_section_keyword,
    STATE(59), 1,
      aux_sym__tags,
    STATE(23), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [561] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__text,
    STATE(26), 1,
      aux_sym_summary_repeat1,
    STATE(87), 1,
      sym_summary_line,
    ACTIONS(101), 2,
      sym_tag,
      sym_section_keyword,
  [581] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_tag,
    ACTIONS(85), 1,
      sym_section_keyword,
    STATE(59), 1,
      aux_sym__tags,
    STATE(22), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [601] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(105), 1,
      sym__text,
    STATE(26), 1,
      aux_sym_summary_repeat1,
    STATE(87), 1,
      sym_summary_line,
    ACTIONS(103), 2,
      sym_tag,
      sym_section_keyword,
  [621] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym__space,
    ACTIONS(110), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_reference,
  [635] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
    ACTIONS(112), 2,
      aux_sym_step_definition_token1,
      sym_number,
    ACTIONS(114), 3,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_reference,
  [649] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(83), 1,
      sym_tag,
    ACTIONS(85), 1,
      sym_section_keyword,
    STATE(59), 1,
      aux_sym__tags,
    STATE(19), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [669] = 4,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(35), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [684] = 5,
    ACTIONS(116), 1,
      anon_sym_PIPE,
    ACTIONS(118), 1,
      aux_sym_table_header_name_token1,
    STATE(31), 1,
      aux_sym_table_header_repeat1,
    STATE(71), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [701] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(121), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_tag,
      sym_section_keyword,
  [714] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(125), 1,
      aux_sym_table_header_name_token1,
    ACTIONS(123), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [729] = 4,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(39), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(11), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [744] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(45), 1,
      sym__space,
    ACTIONS(47), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_table_row_repeat1,
    STATE(36), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [761] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(71), 1,
      sym__space,
    ACTIONS(73), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_table_row_repeat1,
    STATE(36), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [778] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(5), 1,
      sym_tag,
    ACTIONS(7), 1,
      sym_section_keyword,
    ACTIONS(9), 1,
      sym_comment,
    STATE(55), 1,
      aux_sym__tags,
    STATE(69), 1,
      sym_feature,
  [797] = 5,
    ACTIONS(127), 1,
      anon_sym_PIPE,
    ACTIONS(129), 1,
      aux_sym_table_header_name_token1,
    STATE(31), 1,
      aux_sym_table_header_repeat1,
    STATE(71), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [814] = 4,
    ACTIONS(131), 1,
      anon_sym_PIPE,
    ACTIONS(133), 1,
      anon_sym_PIPE_LF,
    STATE(44), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [828] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [840] = 4,
    ACTIONS(131), 1,
      anon_sym_PIPE,
    ACTIONS(135), 1,
      anon_sym_PIPE_LF,
    STATE(44), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [854] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [866] = 4,
    ACTIONS(137), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(139), 1,
      sym_docstring_line,
    STATE(43), 1,
      aux_sym_docstring_content_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [880] = 4,
    ACTIONS(142), 1,
      anon_sym_PIPE,
    ACTIONS(145), 1,
      anon_sym_PIPE_LF,
    STATE(44), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [894] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [906] = 4,
    ACTIONS(147), 1,
      aux_sym_table_header_name_token1,
    ACTIONS(149), 1,
      sym_docstring_line,
    STATE(76), 1,
      sym_docstring_lang,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [920] = 4,
    ACTIONS(151), 1,
      sym_docstring_line,
    STATE(48), 1,
      aux_sym_docstring_content_repeat1,
    STATE(53), 1,
      sym_docstring_content,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [934] = 4,
    ACTIONS(153), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(155), 1,
      sym_docstring_line,
    STATE(43), 1,
      aux_sym_docstring_content_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [948] = 4,
    ACTIONS(129), 1,
      aux_sym_table_header_name_token1,
    STATE(38), 1,
      aux_sym_table_header_repeat1,
    STATE(71), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [962] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(103), 3,
      sym_tag,
      sym_section_keyword,
      sym__text,
  [974] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [986] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__text,
    ACTIONS(159), 1,
      sym__space,
    STATE(78), 1,
      sym_title,
  [999] = 3,
    ACTIONS(161), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(81), 1,
      sym_docstring_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1010] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__text,
    ACTIONS(163), 1,
      sym__space,
    STATE(79), 1,
      sym_title,
  [1023] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_tag,
    ACTIONS(167), 1,
      sym__space,
    STATE(60), 1,
      aux_sym__tags,
  [1036] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    ACTIONS(116), 2,
      anon_sym_PIPE,
      aux_sym_table_header_name_token1,
  [1045] = 3,
    ACTIONS(169), 1,
      aux_sym_quoted_string_token2,
    ACTIONS(171), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1056] = 3,
    ACTIONS(145), 1,
      anon_sym_PIPE_LF,
    ACTIONS(173), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1067] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(165), 1,
      sym_tag,
    ACTIONS(175), 1,
      sym__space,
    STATE(60), 1,
      aux_sym__tags,
  [1080] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(177), 1,
      sym_tag,
    ACTIONS(180), 1,
      sym__space,
    STATE(60), 1,
      aux_sym__tags,
  [1093] = 3,
    ACTIONS(182), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(184), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1104] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__text,
    STATE(85), 1,
      sym_title,
  [1117] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym__text,
    STATE(86), 1,
      sym_title,
  [1130] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_section_keyword,
  [1140] = 2,
    ACTIONS(188), 1,
      sym_table_cell,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1148] = 2,
    ACTIONS(190), 1,
      anon_sym_SQUOTE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1156] = 2,
    ACTIONS(190), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1164] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_section_keyword,
  [1174] = 2,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1182] = 2,
    ACTIONS(196), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1190] = 2,
    ACTIONS(198), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1198] = 2,
    ACTIONS(200), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1206] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(121), 2,
      anon_sym_PIPE,
      sym__space,
  [1214] = 2,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1222] = 2,
    ACTIONS(204), 1,
      sym_docstring_line,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1230] = 2,
    ACTIONS(206), 1,
      sym_docstring_line,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1238] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym__space,
  [1245] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym__space,
  [1252] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym__space,
  [1259] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym__space,
  [1266] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym__space,
  [1273] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym__space,
  [1280] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym__space,
  [1287] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym__space,
  [1294] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(224), 1,
      sym__space,
  [1301] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym__space,
  [1308] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym__space,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 93,
  [SMALL_STATE(6)] = 124,
  [SMALL_STATE(7)] = 155,
  [SMALL_STATE(8)] = 187,
  [SMALL_STATE(9)] = 219,
  [SMALL_STATE(10)] = 244,
  [SMALL_STATE(11)] = 266,
  [SMALL_STATE(12)] = 288,
  [SMALL_STATE(13)] = 310,
  [SMALL_STATE(14)] = 332,
  [SMALL_STATE(15)] = 356,
  [SMALL_STATE(16)] = 380,
  [SMALL_STATE(17)] = 402,
  [SMALL_STATE(18)] = 424,
  [SMALL_STATE(19)] = 446,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 492,
  [SMALL_STATE(22)] = 515,
  [SMALL_STATE(23)] = 538,
  [SMALL_STATE(24)] = 561,
  [SMALL_STATE(25)] = 581,
  [SMALL_STATE(26)] = 601,
  [SMALL_STATE(27)] = 621,
  [SMALL_STATE(28)] = 635,
  [SMALL_STATE(29)] = 649,
  [SMALL_STATE(30)] = 669,
  [SMALL_STATE(31)] = 684,
  [SMALL_STATE(32)] = 701,
  [SMALL_STATE(33)] = 714,
  [SMALL_STATE(34)] = 729,
  [SMALL_STATE(35)] = 744,
  [SMALL_STATE(36)] = 761,
  [SMALL_STATE(37)] = 778,
  [SMALL_STATE(38)] = 797,
  [SMALL_STATE(39)] = 814,
  [SMALL_STATE(40)] = 828,
  [SMALL_STATE(41)] = 840,
  [SMALL_STATE(42)] = 854,
  [SMALL_STATE(43)] = 866,
  [SMALL_STATE(44)] = 880,
  [SMALL_STATE(45)] = 894,
  [SMALL_STATE(46)] = 906,
  [SMALL_STATE(47)] = 920,
  [SMALL_STATE(48)] = 934,
  [SMALL_STATE(49)] = 948,
  [SMALL_STATE(50)] = 962,
  [SMALL_STATE(51)] = 974,
  [SMALL_STATE(52)] = 986,
  [SMALL_STATE(53)] = 999,
  [SMALL_STATE(54)] = 1010,
  [SMALL_STATE(55)] = 1023,
  [SMALL_STATE(56)] = 1036,
  [SMALL_STATE(57)] = 1045,
  [SMALL_STATE(58)] = 1056,
  [SMALL_STATE(59)] = 1067,
  [SMALL_STATE(60)] = 1080,
  [SMALL_STATE(61)] = 1093,
  [SMALL_STATE(62)] = 1104,
  [SMALL_STATE(63)] = 1117,
  [SMALL_STATE(64)] = 1130,
  [SMALL_STATE(65)] = 1140,
  [SMALL_STATE(66)] = 1148,
  [SMALL_STATE(67)] = 1156,
  [SMALL_STATE(68)] = 1164,
  [SMALL_STATE(69)] = 1174,
  [SMALL_STATE(70)] = 1182,
  [SMALL_STATE(71)] = 1190,
  [SMALL_STATE(72)] = 1198,
  [SMALL_STATE(73)] = 1206,
  [SMALL_STATE(74)] = 1214,
  [SMALL_STATE(75)] = 1222,
  [SMALL_STATE(76)] = 1230,
  [SMALL_STATE(77)] = 1238,
  [SMALL_STATE(78)] = 1245,
  [SMALL_STATE(79)] = 1252,
  [SMALL_STATE(80)] = 1259,
  [SMALL_STATE(81)] = 1266,
  [SMALL_STATE(82)] = 1273,
  [SMALL_STATE(83)] = 1280,
  [SMALL_STATE(84)] = 1287,
  [SMALL_STATE(85)] = 1294,
  [SMALL_STATE(86)] = 1301,
  [SMALL_STATE(87)] = 1308,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 6),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(14),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(61),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(57),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(14),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_definition, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(65),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(28),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 7),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 6),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(59),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(54),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 1),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(77),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_keywords, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_keywords, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2), SHIFT_REPEAT(70),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 5),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 5),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docstring_content_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_content_repeat1, 2), SHIFT_REPEAT(43),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2), SHIFT_REPEAT(65),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_start, 1),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_content, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tags, 2), SHIFT_REPEAT(60),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tags, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header_name, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [200] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_lang, 1),
  [206] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_start, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary_line, 1),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring_end, 1),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 1),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
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
