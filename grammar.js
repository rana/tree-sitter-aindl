// grammar.js
module.exports = grammar({
  name: "aindl",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.block),

    block: ($) =>
      seq(
        $.identifier,
        "{",
        optional(seq($.property, repeat(seq(",", $.property)), optional(","))),
        "}",
      ),

    identifier: ($) => /[A-Z][A-Z_0-9]*/,

    property: ($) => seq($.identifier, ":", $._value),

    _value: ($) => choice($.string, $.multiline_string, $.number, $.array),

    string: ($) => /"[^"]*"/,

    multiline_string: ($) => token(seq('"""', repeat(/[^"]/), '"""')),

    number: ($) => /\d+(\.\d+)?/,

    array: ($) =>
      seq(
        "[",
        optional(seq($._value, repeat(seq(",", $._value)), optional(","))),
        "]",
      ),
  },
});
