#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
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
  sym_number = 13,
  sym_reference = 14,
  sym__text = 15,
  sym__space = 16,
  sym_source_file = 17,
  sym_feature = 18,
  sym_section = 19,
  sym_step = 20,
  sym_step_definition = 21,
  sym_table = 22,
  sym_table_header = 23,
  sym_table_header_name = 24,
  sym_table_row = 25,
  sym_docstring = 26,
  sym_docstring_start = 27,
  sym_docstring_end = 28,
  sym_docstring_lang = 29,
  sym_docstring_content = 30,
  aux_sym__tags = 31,
  sym_step_keywords = 32,
  sym_title = 33,
  sym_summary = 34,
  sym_summary_line = 35,
  sym_quoted_string = 36,
  aux_sym_feature_repeat1 = 37,
  aux_sym_section_repeat1 = 38,
  aux_sym_step_definition_repeat1 = 39,
  aux_sym_table_repeat1 = 40,
  aux_sym_table_header_repeat1 = 41,
  aux_sym_table_row_repeat1 = 42,
  aux_sym_docstring_content_repeat1 = 43,
  aux_sym_summary_repeat1 = 44,
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
  [31] = 9,
  [32] = 13,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 30,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 41,
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
  [65] = 29,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(25);
      if (lookahead == '<') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(48);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '|') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(46);
      if (lookahead == '<') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 13:
      if (lookahead == '#') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(53);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 17:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(15);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '"') ADVANCE(10);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '|') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_step_definition_token1);
      if (lookahead != 0 &&
          lookahead != '>') ADVANCE(15);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '\n') ADVANCE(32);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == ':') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_table_header_name_token1);
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
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PIPE_LF);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_table_cell);
      if (lookahead != 0 &&
          lookahead != '|') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '"') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_docstring_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_section_keyword);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_section_keyword);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(50);
      if (lookahead == '"' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(47);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(16);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_reference);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == ' ') ADVANCE(55);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '@') ADVANCE(58);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == ' ' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(60);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == ' ') ADVANCE(61);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '@') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(63);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 19},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 6},
  [8] = {.lex_state = 6},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 19},
  [20] = {.lex_state = 19},
  [21] = {.lex_state = 19},
  [22] = {.lex_state = 19},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 19},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 19},
  [28] = {.lex_state = 19},
  [29] = {.lex_state = 19},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 19},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 19},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 5},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 19},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 19},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 3},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 20},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 3},
  [63] = {.lex_state = 20},
  [64] = {.lex_state = 20},
  [65] = {.lex_state = 20},
  [66] = {.lex_state = 20},
  [67] = {.lex_state = 20},
  [68] = {.lex_state = 7},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 20},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 13},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 20},
  [76] = {.lex_state = 20},
  [77] = {.lex_state = 20},
  [78] = {.lex_state = 20},
  [79] = {.lex_state = 20},
  [80] = {.lex_state = 20},
  [81] = {.lex_state = 20},
  [82] = {.lex_state = 20},
  [83] = {.lex_state = 20},
  [84] = {.lex_state = 20},
  [85] = {.lex_state = 20},
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
    [sym_source_file] = STATE(67),
    [sym_feature] = STATE(66),
    [aux_sym__tags] = STATE(53),
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
    STATE(14), 1,
      sym_step_keywords,
    STATE(37), 1,
      sym_table_header,
    STATE(48), 1,
      sym_table,
    STATE(16), 2,
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
    STATE(14), 1,
      sym_step_keywords,
    STATE(37), 1,
      sym_table_header,
    STATE(42), 1,
      sym_table,
    STATE(15), 2,
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
    STATE(14), 1,
      sym_step_keywords,
    STATE(37), 1,
      sym_table_header,
    STATE(43), 1,
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
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(14), 1,
      sym_step_keywords,
    STATE(37), 1,
      sym_table_header,
    STATE(50), 1,
      sym_table,
    STATE(10), 2,
      sym_step,
      aux_sym_section_repeat1,
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
    ACTIONS(27), 1,
      aux_sym_table_header_name_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(30), 1,
      sym_table_header,
    STATE(44), 1,
      sym_docstring_start,
    STATE(75), 2,
      sym_table,
      sym_docstring,
    ACTIONS(25), 3,
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
    STATE(25), 1,
      sym_summary,
    STATE(55), 1,
      aux_sym__tags,
    STATE(81), 1,
      sym_summary_line,
    STATE(22), 2,
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
    STATE(27), 1,
      sym_summary,
    STATE(55), 1,
      aux_sym__tags,
    STATE(81), 1,
      sym_summary_line,
    STATE(19), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [219] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_table_row_repeat1,
    STATE(9), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(37), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [241] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(14), 1,
      sym_step_keywords,
    STATE(11), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [263] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(44), 1,
      aux_sym_table_header_name_token1,
    STATE(14), 1,
      sym_step_keywords,
    STATE(11), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [285] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(14), 1,
      sym_step_keywords,
    STATE(11), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [307] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_table_row_repeat1,
    STATE(9), 2,
      sym_table_row,
      aux_sym_table_repeat1,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [329] = 6,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      sym_reference,
    STATE(83), 1,
      sym_step_definition,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
    ACTIONS(53), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(18), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [351] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(14), 1,
      sym_step_keywords,
    STATE(11), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [373] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(17), 1,
      aux_sym_table_header_name_token1,
    STATE(14), 1,
      sym_step_keywords,
    STATE(11), 2,
      sym_step,
      aux_sym_section_repeat1,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [395] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      sym_tag,
    ACTIONS(63), 1,
      sym_section_keyword,
    STATE(55), 1,
      aux_sym__tags,
    STATE(21), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [418] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      sym_reference,
    ACTIONS(69), 1,
      sym__space,
    ACTIONS(65), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(23), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [439] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_tag,
    ACTIONS(63), 1,
      sym_section_keyword,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__tags,
    STATE(21), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [462] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_tag,
    ACTIONS(63), 1,
      sym_section_keyword,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__tags,
    STATE(21), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [485] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      sym_tag,
    ACTIONS(80), 1,
      sym_section_keyword,
    STATE(55), 1,
      aux_sym__tags,
    STATE(21), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [508] = 7,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_tag,
    ACTIONS(63), 1,
      sym_section_keyword,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      aux_sym__tags,
    STATE(21), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [531] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      sym_reference,
    ACTIONS(94), 1,
      sym__space,
    ACTIONS(85), 2,
      aux_sym_step_definition_token1,
      sym_number,
    STATE(23), 2,
      sym_quoted_string,
      aux_sym_step_definition_repeat1,
  [552] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(35), 1,
      sym__text,
    STATE(26), 1,
      aux_sym_summary_repeat1,
    STATE(81), 1,
      sym_summary_line,
    ACTIONS(96), 2,
      sym_tag,
      sym_section_keyword,
  [572] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_tag,
    ACTIONS(63), 1,
      sym_section_keyword,
    STATE(55), 1,
      aux_sym__tags,
    STATE(20), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [592] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(100), 1,
      sym__text,
    STATE(26), 1,
      aux_sym_summary_repeat1,
    STATE(81), 1,
      sym_summary_line,
    ACTIONS(98), 2,
      sym_tag,
      sym_section_keyword,
  [612] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(61), 1,
      sym_tag,
    ACTIONS(63), 1,
      sym_section_keyword,
    STATE(55), 1,
      aux_sym__tags,
    STATE(17), 2,
      sym_section,
      aux_sym_feature_repeat1,
  [632] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(105), 1,
      aux_sym_table_header_name_token1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [647] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      anon_sym_PIPE,
      sym_tag,
      sym_section_keyword,
  [660] = 4,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(32), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [675] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(37), 1,
      sym__space,
    ACTIONS(39), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_table_row_repeat1,
    STATE(31), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [692] = 5,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(49), 1,
      sym__space,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(41), 1,
      aux_sym_table_row_repeat1,
    STATE(31), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [709] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(111), 2,
      anon_sym_DQUOTE,
      sym_reference,
    ACTIONS(109), 3,
      aux_sym_step_definition_token1,
      sym_number,
      sym__space,
  [722] = 5,
    ACTIONS(113), 1,
      anon_sym_PIPE,
    ACTIONS(115), 1,
      aux_sym_table_header_name_token1,
    STATE(38), 1,
      aux_sym_table_header_repeat1,
    STATE(64), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [739] = 3,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
    ACTIONS(117), 2,
      aux_sym_step_definition_token1,
      sym_number,
    ACTIONS(119), 2,
      anon_sym_DQUOTE,
      sym_reference,
  [752] = 6,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(5), 1,
      sym_tag,
    ACTIONS(7), 1,
      sym_section_keyword,
    ACTIONS(9), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym__tags,
    STATE(70), 1,
      sym_feature,
  [771] = 4,
    ACTIONS(51), 1,
      anon_sym_PIPE,
    STATE(45), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    STATE(13), 2,
      sym_table_row,
      aux_sym_table_repeat1,
  [786] = 5,
    ACTIONS(121), 1,
      anon_sym_PIPE,
    ACTIONS(123), 1,
      aux_sym_table_header_name_token1,
    STATE(38), 1,
      aux_sym_table_header_repeat1,
    STATE(64), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [803] = 4,
    ACTIONS(126), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(128), 1,
      sym_docstring_line,
    STATE(39), 1,
      aux_sym_docstring_content_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [817] = 4,
    ACTIONS(131), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(133), 1,
      sym_docstring_line,
    STATE(39), 1,
      aux_sym_docstring_content_repeat1,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [831] = 4,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(137), 1,
      anon_sym_PIPE_LF,
    STATE(49), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [845] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(23), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [857] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [869] = 4,
    ACTIONS(139), 1,
      sym_docstring_line,
    STATE(40), 1,
      aux_sym_docstring_content_repeat1,
    STATE(58), 1,
      sym_docstring_content,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [883] = 4,
    ACTIONS(135), 1,
      anon_sym_PIPE,
    ACTIONS(141), 1,
      anon_sym_PIPE_LF,
    STATE(49), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [897] = 4,
    ACTIONS(143), 1,
      aux_sym_table_header_name_token1,
    ACTIONS(145), 1,
      sym_docstring_line,
    STATE(74), 1,
      sym_docstring_lang,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [911] = 4,
    ACTIONS(115), 1,
      aux_sym_table_header_name_token1,
    STATE(34), 1,
      aux_sym_table_header_repeat1,
    STATE(64), 1,
      sym_table_header_name,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [925] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [937] = 4,
    ACTIONS(147), 1,
      anon_sym_PIPE,
    ACTIONS(150), 1,
      anon_sym_PIPE_LF,
    STATE(49), 1,
      aux_sym_table_row_repeat1,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [951] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(13), 3,
      ts_builtin_sym_end,
      sym_tag,
      sym_section_keyword,
  [963] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(98), 3,
      sym_tag,
      sym_section_keyword,
      sym__text,
  [975] = 2,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
    ACTIONS(121), 2,
      anon_sym_PIPE,
      aux_sym_table_header_name_token1,
  [984] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_tag,
    ACTIONS(154), 1,
      sym__space,
    STATE(60), 1,
      aux_sym__tags,
  [997] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__text,
    ACTIONS(158), 1,
      sym__space,
    STATE(77), 1,
      sym_title,
  [1010] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(152), 1,
      sym_tag,
    ACTIONS(160), 1,
      sym__space,
    STATE(60), 1,
      aux_sym__tags,
  [1023] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__text,
    STATE(80), 1,
      sym_title,
  [1036] = 3,
    ACTIONS(150), 1,
      anon_sym_PIPE_LF,
    ACTIONS(162), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1047] = 3,
    ACTIONS(164), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    STATE(79), 1,
      sym_docstring_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1058] = 3,
    ACTIONS(166), 1,
      aux_sym_quoted_string_token1,
    ACTIONS(168), 1,
      sym_reference,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1069] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_tag,
    ACTIONS(173), 1,
      sym__space,
    STATE(60), 1,
      aux_sym__tags,
  [1082] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__text,
    STATE(85), 1,
      sym_title,
  [1095] = 4,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__text,
    ACTIONS(175), 1,
      sym__space,
    STATE(84), 1,
      sym_title,
  [1108] = 2,
    ACTIONS(177), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1116] = 2,
    ACTIONS(179), 1,
      anon_sym_PIPE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1124] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(107), 2,
      anon_sym_PIPE,
      sym__space,
  [1132] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1140] = 2,
    ACTIONS(183), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1148] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(185), 1,
      sym_section_keyword,
  [1158] = 2,
    ACTIONS(187), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1166] = 2,
    ACTIONS(189), 1,
      ts_builtin_sym_end,
    ACTIONS(9), 2,
      sym_comment,
      sym__space,
  [1174] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_section_keyword,
  [1184] = 2,
    ACTIONS(193), 1,
      sym_table_cell,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1192] = 2,
    ACTIONS(195), 1,
      sym_docstring_line,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1200] = 2,
    ACTIONS(197), 1,
      sym_docstring_line,
    ACTIONS(3), 2,
      sym_comment,
      sym__space,
  [1208] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(199), 1,
      sym__space,
  [1215] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(201), 1,
      sym__space,
  [1222] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym__space,
  [1229] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(205), 1,
      sym__space,
  [1236] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(207), 1,
      sym__space,
  [1243] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(209), 1,
      sym__space,
  [1250] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym__space,
  [1257] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym__space,
  [1264] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(215), 1,
      sym__space,
  [1271] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(217), 1,
      sym__space,
  [1278] = 2,
    ACTIONS(9), 1,
      sym_comment,
    ACTIONS(219), 1,
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
  [SMALL_STATE(10)] = 241,
  [SMALL_STATE(11)] = 263,
  [SMALL_STATE(12)] = 285,
  [SMALL_STATE(13)] = 307,
  [SMALL_STATE(14)] = 329,
  [SMALL_STATE(15)] = 351,
  [SMALL_STATE(16)] = 373,
  [SMALL_STATE(17)] = 395,
  [SMALL_STATE(18)] = 418,
  [SMALL_STATE(19)] = 439,
  [SMALL_STATE(20)] = 462,
  [SMALL_STATE(21)] = 485,
  [SMALL_STATE(22)] = 508,
  [SMALL_STATE(23)] = 531,
  [SMALL_STATE(24)] = 552,
  [SMALL_STATE(25)] = 572,
  [SMALL_STATE(26)] = 592,
  [SMALL_STATE(27)] = 612,
  [SMALL_STATE(28)] = 632,
  [SMALL_STATE(29)] = 647,
  [SMALL_STATE(30)] = 660,
  [SMALL_STATE(31)] = 675,
  [SMALL_STATE(32)] = 692,
  [SMALL_STATE(33)] = 709,
  [SMALL_STATE(34)] = 722,
  [SMALL_STATE(35)] = 739,
  [SMALL_STATE(36)] = 752,
  [SMALL_STATE(37)] = 771,
  [SMALL_STATE(38)] = 786,
  [SMALL_STATE(39)] = 803,
  [SMALL_STATE(40)] = 817,
  [SMALL_STATE(41)] = 831,
  [SMALL_STATE(42)] = 845,
  [SMALL_STATE(43)] = 857,
  [SMALL_STATE(44)] = 869,
  [SMALL_STATE(45)] = 883,
  [SMALL_STATE(46)] = 897,
  [SMALL_STATE(47)] = 911,
  [SMALL_STATE(48)] = 925,
  [SMALL_STATE(49)] = 937,
  [SMALL_STATE(50)] = 951,
  [SMALL_STATE(51)] = 963,
  [SMALL_STATE(52)] = 975,
  [SMALL_STATE(53)] = 984,
  [SMALL_STATE(54)] = 997,
  [SMALL_STATE(55)] = 1010,
  [SMALL_STATE(56)] = 1023,
  [SMALL_STATE(57)] = 1036,
  [SMALL_STATE(58)] = 1047,
  [SMALL_STATE(59)] = 1058,
  [SMALL_STATE(60)] = 1069,
  [SMALL_STATE(61)] = 1082,
  [SMALL_STATE(62)] = 1095,
  [SMALL_STATE(63)] = 1108,
  [SMALL_STATE(64)] = 1116,
  [SMALL_STATE(65)] = 1124,
  [SMALL_STATE(66)] = 1132,
  [SMALL_STATE(67)] = 1140,
  [SMALL_STATE(68)] = 1148,
  [SMALL_STATE(69)] = 1158,
  [SMALL_STATE(70)] = 1166,
  [SMALL_STATE(71)] = 1174,
  [SMALL_STATE(72)] = 1184,
  [SMALL_STATE(73)] = 1192,
  [SMALL_STATE(74)] = 1200,
  [SMALL_STATE(75)] = 1208,
  [SMALL_STATE(76)] = 1215,
  [SMALL_STATE(77)] = 1222,
  [SMALL_STATE(78)] = 1229,
  [SMALL_STATE(79)] = 1236,
  [SMALL_STATE(80)] = 1243,
  [SMALL_STATE(81)] = 1250,
  [SMALL_STATE(82)] = 1257,
  [SMALL_STATE(83)] = 1264,
  [SMALL_STATE(84)] = 1271,
  [SMALL_STATE(85)] = 1278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 4),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 5),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_repeat1, 2), SHIFT_REPEAT(72),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2), SHIFT_REPEAT(35),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 6),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 7),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_definition, 1),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 5),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(55),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_feature_repeat1, 2), SHIFT_REPEAT(62),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_feature, 4),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(23),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(59),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_step_definition_repeat1, 2), SHIFT_REPEAT(23),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_step_definition_repeat1, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_summary, 1),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_summary_repeat1, 2), SHIFT_REPEAT(82),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step, 5),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step, 5),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_row, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header, 2),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_step_keywords, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_step_keywords, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_table_header_repeat1, 2), SHIFT_REPEAT(63),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_docstring_content_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_docstring_content_repeat1, 2), SHIFT_REPEAT(39),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_content, 1),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_start, 1),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2), SHIFT_REPEAT(72),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_table_row_repeat1, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [170] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__tags, 2), SHIFT_REPEAT(60),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__tags, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_table_header_name, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [183] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_lang, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_docstring_start, 2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [205] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring_end, 1),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_docstring, 3),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_summary_line, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
