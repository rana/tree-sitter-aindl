// tree-sitter-aindl/grammar.js

module.exports = grammar({
  name: "aindl",

  extras: ($) => [/\s/, $.comment],

  rules: {
    source_file: ($) => repeat($._definition),

    _definition: ($) => choice($.block, $.comment),

    block: ($) =>
      seq(
        field("name", $.identifier),
        "{",
        repeat(choice($.property, $.block, $.comment)),
        "}",
      ),

    identifier: ($) => /[A-Z][A-Z_0-9]*/,

    // property: ($) => seq($.identifier, ":", $._value),
    property: ($) =>
      seq(field("key", $.identifier), ":", field("value", $._value)),

    _value: ($) => choice($.boolean, $.number, $.string, $.code, $.array),

    string: ($) => seq('"', /[^"]*/, '"'),

    code: ($) =>
      seq(token("```"), repeat(choice(/[^`]+/, /`[^``]|``[^`]/)), token("```")),

    array: ($) =>
      seq(
        "[",
        optional(
          seq(
            optional(/\s+/), // Allow leading whitespace
            $._value,
            repeat(
              seq(
                /\s+/, // Require whitespace between values
                $._value,
              ),
            ),
            optional(/\s+/), // Allow trailing whitespace
          ),
        ),
        "]",
      ),

    boolean: ($) => choice("true", "false"),

    number: ($) => {
      const digits = /[0-9]+/;
      const exponent = /[eE][+-]?[0-9]+/;

      return token(
        seq(
          optional("-"),
          choice(
            // Integer: -42
            digits,

            // Decimal: -42.123
            seq(digits, ".", optional(digits)),
            seq(".", digits),

            // Scientific notation: -42.123e+10, 1.23E-4, 1e5
            seq(
              choice(
                seq(digits, ".", optional(digits)),
                seq(".", digits),
                digits,
              ),
              exponent,
            ),
          ),
        ),
      );
    },

    comment: ($) => token(seq("//", /.*/)),
  },
});
