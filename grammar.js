module.exports = grammar({
  name: "gherkin",

  rules: {
    source_file: ($) => $.feature,

    feature: ($) =>
      seq(
        optional($._tags),
        $.feature_keyword,
        $.title,
        optional($.summary),
        optional($.background),
        repeat1(choice($.scenario, $.scenario_outline)),
      ),

    background: ($) =>
      seq(optional($._tags), $.background_keyword, $.title, repeat1($.step)),

    scenario: ($) =>
      seq(optional($._tags), $.scenario_keyword, $.title, repeat1($.step)),

    scenario_outline: ($) =>
      seq(
        optional($._tags),
        $.scenario_outline_keyword,
        $.title,
        repeat1($.step),
        $.examples,
      ),

    step: ($) =>
      seq(
        $.step_keywords,
        $.step_definition,
        optional(choice($.table, $.docstring)),
      ),

    step_definition: ($) =>
      repeat1(choice($.reference, $.quoted_string, $.number, /./)),

    examples: ($) => seq($.examples_keyword, $.table),

    table: ($) => seq($.table_header, repeat1($.table_row)),

    table_header: ($) => seq("|", repeat1(seq($.table_header_name, "|"))),

    table_header_name: ($) => /\w+/,

    table_row: ($) => seq(repeat1(seq("|", $.table_cell)), "|\n"),

    table_cell: ($) => /[^|]+/,

    docstring: ($) =>
      seq($.docstring_start, $.docstring_content, $.docstring_end),
    docstring_start: ($) => seq('"""', optional($.docstring_lang)),
    docstring_end: ($) => '"""',
    docstring_lang: ($) => /\w+/,
    docstring_content: ($) => repeat1($.docstring_line),
    docstring_line: ($) => /.+/,

    tag: ($) => /\s*@[a-zA-z-_0-9]+/,
    _tags: ($) => repeat1($.tag),

    feature_keyword: ($) => /Feature: /,
    scenario_keyword: ($) => /(Scenario|Example): /,
    scenario_outline_keyword: ($) => /Scenario (Outline|Template): /,
    examples_keyword: ($) => /(Examples|Scenarios):/,
    background_keyword: ($) => /Background:/,
    step_keywords: ($) => /(Given|When|Then|And|But) /,

    title: ($) => /.*/,

    summary: ($) => repeat1($.summary_line),
    summary_line: ($) => /\s+.*/,

    comment: ($) => /#.*/,

    quoted_string: ($) => seq('"', choice($.reference, /[^"<>]+/), '"'),

    number: ($) => /\d+(.\d+)?/,

    reference: ($) => /<[^>]+>/,
  },
  extras: ($) => [$.comment, /\s/, /\r?\n/],
});
