module.exports = grammar({
  name: "aindl",

  rules: {
    // Root
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.block, $.comment),

    // Block Structure
    block: ($) =>
      seq(
        field("name", $.block_identifier),
        field("left_brace", "{"),
        repeat(choice($.property, $.block, $.comment)),
        field("right_brace", "}"),
      ),

    block_identifier: ($) => /[A-Z][A-Z_0-9]*/,

    // Properties
    property: ($) =>
      seq(field("key", $.property_key), ":", field("value", $.value)),

    property_key: ($) => /[A-Z][A-Z_0-9]*/,

    // Values
    value: ($) => choice($.string, $.number, $.array, $.block),

    // Leaf Nodes
    string: ($) =>
      seq(
        field("quote", '"'),
        field("content", /[^"]*/),
        field("end_quote", '"'),
      ),

    number: ($) => /\d+(\.\d+)?/,

    // Array Structure
    array: ($) =>
      seq(
        field("left_bracket", "["),
        optional(seq($.value, repeat(seq(",", $.value)))),
        field("right_bracket", "]"),
      ),

    // Comments
    comment: ($) => token(seq("//", /.*/)),
  },
});
