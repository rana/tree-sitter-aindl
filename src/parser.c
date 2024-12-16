#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  aux_sym_block_identifier_token1 = 3,
  anon_sym_COLON = 4,
  sym_string = 5,
  sym_number = 6,
  anon_sym_LBRACK = 7,
  anon_sym_COMMA = 8,
  anon_sym_RBRACK = 9,
  sym_comment = 10,
  sym_source_file = 11,
  sym__definition = 12,
  sym_block = 13,
  sym_block_identifier = 14,
  sym_property = 15,
  sym_property_key = 16,
  sym_value = 17,
  sym_array = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_block_repeat1 = 20,
  aux_sym_array_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [aux_sym_block_identifier_token1] = "block_identifier_token1",
  [anon_sym_COLON] = ":",
  [sym_string] = "string",
  [sym_number] = "number",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_block] = "block",
  [sym_block_identifier] = "block_identifier",
  [sym_property] = "property",
  [sym_property_key] = "property_key",
  [sym_value] = "value",
  [sym_array] = "array",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [aux_sym_block_identifier_token1] = aux_sym_block_identifier_token1,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_string] = sym_string,
  [sym_number] = sym_number,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_block] = sym_block,
  [sym_block_identifier] = sym_block_identifier,
  [sym_property] = sym_property,
  [sym_property_key] = sym_property_key,
  [sym_value] = sym_value,
  [sym_array] = sym_array,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_block_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == ',') ADVANCE(13);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '[') ADVANCE(12);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead == '}') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(7);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(9);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(15);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_block_identifier_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(15);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [aux_sym_block_identifier_token1] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym__definition] = STATE(8),
    [sym_block] = STATE(8),
    [sym_block_identifier] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_block_identifier_token1] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      aux_sym_block_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_value,
    STATE(22), 1,
      sym_block_identifier,
    ACTIONS(9), 2,
      sym_string,
      sym_number,
    STATE(15), 2,
      sym_block,
      sym_array,
  [24] = 6,
    ACTIONS(5), 1,
      aux_sym_block_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_value,
    STATE(22), 1,
      sym_block_identifier,
    ACTIONS(9), 2,
      sym_string,
      sym_number,
    STATE(15), 2,
      sym_block,
      sym_array,
  [45] = 6,
    ACTIONS(15), 1,
      anon_sym_RBRACE,
    ACTIONS(17), 1,
      aux_sym_block_identifier_token1,
    ACTIONS(19), 1,
      sym_comment,
    STATE(22), 1,
      sym_block_identifier,
    STATE(25), 1,
      sym_property_key,
    STATE(5), 3,
      sym_block,
      sym_property,
      aux_sym_block_repeat1,
  [66] = 6,
    ACTIONS(17), 1,
      aux_sym_block_identifier_token1,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym_comment,
    STATE(22), 1,
      sym_block_identifier,
    STATE(25), 1,
      sym_property_key,
    STATE(7), 3,
      sym_block,
      sym_property,
      aux_sym_block_repeat1,
  [87] = 6,
    ACTIONS(5), 1,
      aux_sym_block_identifier_token1,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym_value,
    STATE(22), 1,
      sym_block_identifier,
    ACTIONS(9), 2,
      sym_string,
      sym_number,
    STATE(15), 2,
      sym_block,
      sym_array,
  [108] = 6,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      aux_sym_block_identifier_token1,
    ACTIONS(30), 1,
      sym_comment,
    STATE(22), 1,
      sym_block_identifier,
    STATE(25), 1,
      sym_property_key,
    STATE(7), 3,
      sym_block,
      sym_property,
      aux_sym_block_repeat1,
  [129] = 5,
    ACTIONS(5), 1,
      aux_sym_block_identifier_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_comment,
    STATE(22), 1,
      sym_block_identifier,
    STATE(9), 3,
      sym__definition,
      sym_block,
      aux_sym_source_file_repeat1,
  [147] = 5,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      aux_sym_block_identifier_token1,
    ACTIONS(42), 1,
      sym_comment,
    STATE(22), 1,
      sym_block_identifier,
    STATE(9), 3,
      sym__definition,
      sym_block,
      aux_sym_source_file_repeat1,
  [165] = 1,
    ACTIONS(45), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_block_identifier_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [174] = 1,
    ACTIONS(47), 6,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      aux_sym_block_identifier_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [183] = 1,
    ACTIONS(49), 5,
      anon_sym_RBRACE,
      aux_sym_block_identifier_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [191] = 1,
    ACTIONS(51), 5,
      anon_sym_RBRACE,
      aux_sym_block_identifier_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [199] = 1,
    ACTIONS(53), 5,
      anon_sym_RBRACE,
      aux_sym_block_identifier_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [207] = 1,
    ACTIONS(55), 5,
      anon_sym_RBRACE,
      aux_sym_block_identifier_token1,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      sym_comment,
  [215] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      aux_sym_array_repeat1,
  [225] = 1,
    ACTIONS(61), 3,
      anon_sym_RBRACE,
      aux_sym_block_identifier_token1,
      sym_comment,
  [231] = 3,
    ACTIONS(57), 1,
      anon_sym_COMMA,
    ACTIONS(63), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_repeat1,
  [241] = 3,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_array_repeat1,
  [251] = 2,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
    ACTIONS(72), 1,
      anon_sym_COLON,
  [258] = 1,
    ACTIONS(68), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [263] = 1,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
  [267] = 1,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
  [271] = 1,
    ACTIONS(70), 1,
      anon_sym_LBRACE,
  [275] = 1,
    ACTIONS(78), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 147,
  [SMALL_STATE(10)] = 165,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 183,
  [SMALL_STATE(13)] = 191,
  [SMALL_STATE(14)] = 199,
  [SMALL_STATE(15)] = 207,
  [SMALL_STATE(16)] = 215,
  [SMALL_STATE(17)] = 225,
  [SMALL_STATE(18)] = 231,
  [SMALL_STATE(19)] = 241,
  [SMALL_STATE(20)] = 251,
  [SMALL_STATE(21)] = 258,
  [SMALL_STATE(22)] = 263,
  [SMALL_STATE(23)] = 267,
  [SMALL_STATE(24)] = 271,
  [SMALL_STATE(25)] = 275,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(20),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(7),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2), SHIFT_REPEAT(6),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_identifier, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_key, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [76] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_aindl(void) {
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
