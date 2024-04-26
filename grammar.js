module.exports = grammar({
  name: "gherkin",

  rules: {
    source_file: ($) => seq(optional($._space), $.feature),

    feature: ($) =>
      seq(
        optional(seq($._tags, $._space)),
        $.section_keyword,
        $.title,
        $._space,
        optional($.summary),
        repeat1($.section),
      ),

    section: ($) =>
      seq(
        optional(seq($._tags, $._space)),
        seq($.section_keyword, optional($.title), $._space),
        optional(choice(repeat1($.step), $.table)),
      ),

    step: ($) =>
      seq(
        $.step_keywords,
        $.step_definition,
        $._space,
        optional(seq(choice($.table, $.docstring), $._space)),
      ),

    step_definition: ($) =>
      repeat1(choice($.reference, $.quoted_string, $.number, /./)),

    examples: ($) => seq($.section_keyword, $.table),

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

    section_keyword: ($) => /[\w ]+:/,
    step_keywords: ($) => /\w+/,

    title: ($) => $._text,

    summary: ($) => repeat1(seq($.summary_line, $._space)),
    summary_line: ($) => $._text,

    comment: ($) => /#.*/,

    quoted_string: ($) => seq('"', choice($.reference, /[^"<>]+/), '"'),

    number: ($) => /\d+(.\d+)?/,

    reference: ($) => /<[^>]+>/,

    _text: ($) => /[^\n]+/,
    _space: ($) => /\s+/,
  },
  extras: ($) => [$.comment, $._space],
});
