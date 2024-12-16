module.exports = grammar({
  name: "aindl",

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.block, $.comment),

    block: ($) =>
      seq(
        $.block_identifier,
        "{",
        repeat(choice($.property, $.block, $.comment)),
        "}",
      ),

    block_identifier: ($) => /[A-Z][A-Z_0-9]*/,

    property: ($) => seq($.property_key, ":", $.value),

    property_key: ($) => /[A-Z][A-Z_0-9]*/,

    value: ($) => choice($.string, $.number, $.array, $.block),

    string: ($) => /"[^"]*"/,

    number: ($) => /\d+(\.\d+)?/,

    array: ($) =>
      seq("[", optional(seq($.value, repeat(seq(",", $.value)))), "]"),

    comment: ($) => token(seq("//", /.*/)),
  },
});
