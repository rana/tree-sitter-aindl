#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  sym_identifier = 3,
  anon_sym_COLON = 4,
  anon_sym_DQUOTE = 5,
  aux_sym_string_token1 = 6,
  anon_sym_BQUOTE_BQUOTE_BQUOTE = 7,
  aux_sym_code_token1 = 8,
  aux_sym_code_token2 = 9,
  anon_sym_LBRACK = 10,
  aux_sym_array_token1 = 11,
  anon_sym_RBRACK = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  sym_number = 15,
  sym_comment = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_block = 19,
  sym_property = 20,
  sym__value = 21,
  sym_string = 22,
  sym_code = 23,
  sym_array = 24,
  sym_boolean = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_block_repeat1 = 27,
  aux_sym_code_repeat1 = 28,
  aux_sym_array_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = "```",
  [aux_sym_code_token1] = "code_token1",
  [aux_sym_code_token2] = "code_token2",
  [anon_sym_LBRACK] = "[",
  [aux_sym_array_token1] = "array_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_block] = "block",
  [sym_property] = "property",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym_code] = "code",
  [sym_array] = "array",
  [sym_boolean] = "boolean",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_code_repeat1] = "code_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_identifier] = sym_identifier,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = anon_sym_BQUOTE_BQUOTE_BQUOTE,
  [aux_sym_code_token1] = aux_sym_code_token1,
  [aux_sym_code_token2] = aux_sym_code_token2,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym_array_token1] = aux_sym_array_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_block] = sym_block,
  [sym_property] = sym_property,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym_code] = sym_code,
  [sym_array] = sym_array,
  [sym_boolean] = sym_boolean,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_code_repeat1] = aux_sym_code_repeat1,
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
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BQUOTE_BQUOTE_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_code_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_array_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
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
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_code] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
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
  [aux_sym_code_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
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
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 6,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 21,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 24,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 25,
  [31] = 31,
  [32] = 32,
  [33] = 27,
  [34] = 28,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 38,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 46,
  [49] = 35,
  [50] = 45,
  [51] = 51,
  [52] = 37,
  [53] = 43,
  [54] = 54,
  [55] = 42,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 59,
  [61] = 57,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      ADVANCE_MAP(
        '"', 24,
        '-', 2,
        '.', 17,
        '/', 3,
        ':', 23,
        '[', 35,
        ']', 37,
        '`', 7,
        'f', 9,
        't', 13,
        '{', 20,
        '}', 21,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(22);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 24,
        '-', 2,
        '.', 17,
        '/', 3,
        '[', 35,
        ']', 37,
        '`', 8,
        'f', 9,
        't', 13,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '`') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '`') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '`') ADVANCE(29);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '`') ADVANCE(6);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 8:
      if (lookahead == '`') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_BQUOTE_BQUOTE_BQUOTE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '\n') ADVANCE(33);
      if (lookahead == '`') ADVANCE(43);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '/') ADVANCE(32);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_code_token1);
      if (lookahead != 0 &&
          lookahead != '`') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_code_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_array_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
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
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 26},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE_BQUOTE_BQUOTE] = ACTIONS(1),
    [aux_sym_code_token2] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__definition] = STATE(17),
    [sym_block] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      aux_sym_array_token1,
    ACTIONS(19), 1,
      anon_sym_RBRACK,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [33] = 9,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(27), 1,
      aux_sym_array_token1,
    ACTIONS(29), 1,
      anon_sym_RBRACK,
    ACTIONS(31), 1,
      sym_number,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(30), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [66] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(39), 1,
      anon_sym_RBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [96] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [126] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [156] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(49), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [186] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [216] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(53), 1,
      anon_sym_RBRACK,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [246] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(59), 1,
      anon_sym_LBRACK,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(61), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(47), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [273] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(26), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [300] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(54), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [327] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(33), 1,
      anon_sym_DQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
      sym__value,
      sym_string,
      sym_code,
      sym_array,
      sym_boolean,
  [354] = 4,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(74), 1,
      sym_comment,
    STATE(14), 3,
      sym__definition,
      sym_block,
      aux_sym_source_file_repeat1,
  [369] = 4,
    ACTIONS(77), 1,
      anon_sym_RBRACE,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(81), 1,
      sym_comment,
    STATE(16), 3,
      sym_block,
      sym_property,
      aux_sym_block_repeat1,
  [384] = 4,
    ACTIONS(83), 1,
      anon_sym_RBRACE,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(88), 1,
      sym_comment,
    STATE(16), 3,
      sym_block,
      sym_property,
      aux_sym_block_repeat1,
  [399] = 4,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 1,
      sym_comment,
    STATE(14), 3,
      sym__definition,
      sym_block,
      aux_sym_source_file_repeat1,
  [414] = 4,
    ACTIONS(79), 1,
      sym_identifier,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
    ACTIONS(97), 1,
      sym_comment,
    STATE(15), 3,
      sym_block,
      sym_property,
      aux_sym_block_repeat1,
  [429] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(20), 1,
      aux_sym_code_repeat1,
    ACTIONS(101), 2,
      aux_sym_code_token1,
      aux_sym_code_token2,
  [443] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(20), 1,
      aux_sym_code_repeat1,
    ACTIONS(105), 2,
      aux_sym_code_token1,
      aux_sym_code_token2,
  [457] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(19), 1,
      aux_sym_code_repeat1,
    ACTIONS(110), 2,
      aux_sym_code_token1,
      aux_sym_code_token2,
  [471] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(23), 1,
      aux_sym_code_repeat1,
    ACTIONS(114), 2,
      aux_sym_code_token1,
      aux_sym_code_token2,
  [485] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(116), 1,
      anon_sym_BQUOTE_BQUOTE_BQUOTE,
    STATE(20), 1,
      aux_sym_code_repeat1,
    ACTIONS(101), 2,
      aux_sym_code_token1,
      aux_sym_code_token2,
  [499] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_array_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      aux_sym_array_repeat1,
  [512] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(122), 1,
      aux_sym_array_token1,
    ACTIONS(124), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_array_repeat1,
  [525] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_array_token1,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_array_repeat1,
  [538] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(126), 1,
      aux_sym_array_token1,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [551] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(130), 1,
      aux_sym_array_token1,
    ACTIONS(132), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [564] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(134), 1,
      aux_sym_array_token1,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [577] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(139), 1,
      aux_sym_array_token1,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(33), 1,
      aux_sym_array_repeat1,
  [590] = 1,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [597] = 1,
    ACTIONS(145), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [604] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(118), 1,
      aux_sym_array_token1,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [617] = 4,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(147), 1,
      aux_sym_array_token1,
    ACTIONS(149), 1,
      anon_sym_RBRACK,
    STATE(29), 1,
      aux_sym_array_repeat1,
  [630] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(151), 1,
      aux_sym_array_token1,
    ACTIONS(153), 1,
      anon_sym_RBRACK,
  [640] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(155), 1,
      aux_sym_array_token1,
    ACTIONS(157), 1,
      anon_sym_RBRACK,
  [650] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(159), 1,
      aux_sym_array_token1,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
  [660] = 1,
    ACTIONS(163), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [666] = 1,
    ACTIONS(155), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [672] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(163), 1,
      aux_sym_array_token1,
    ACTIONS(165), 1,
      anon_sym_RBRACK,
  [682] = 1,
    ACTIONS(167), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [688] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(169), 1,
      aux_sym_array_token1,
    ACTIONS(171), 1,
      anon_sym_RBRACK,
  [698] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(173), 1,
      aux_sym_array_token1,
    ACTIONS(175), 1,
      anon_sym_RBRACK,
  [708] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(167), 1,
      aux_sym_array_token1,
    ACTIONS(177), 1,
      anon_sym_RBRACK,
  [718] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_array_token1,
    ACTIONS(181), 1,
      anon_sym_RBRACK,
  [728] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(183), 1,
      aux_sym_array_token1,
    ACTIONS(185), 1,
      anon_sym_RBRACK,
  [738] = 1,
    ACTIONS(187), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [744] = 1,
    ACTIONS(183), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [750] = 1,
    ACTIONS(151), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [756] = 1,
    ACTIONS(179), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [762] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
    ACTIONS(191), 1,
      anon_sym_COLON,
  [772] = 1,
    ACTIONS(159), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [778] = 1,
    ACTIONS(173), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [784] = 3,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_RBRACK,
    ACTIONS(193), 1,
      aux_sym_array_token1,
  [794] = 1,
    ACTIONS(169), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_comment,
  [800] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_LBRACE,
  [807] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(195), 1,
      aux_sym_string_token1,
  [814] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(197), 1,
      ts_builtin_sym_end,
  [821] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_DQUOTE,
  [828] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_DQUOTE,
  [835] = 2,
    ACTIONS(25), 1,
      sym_comment,
    ACTIONS(203), 1,
      aux_sym_string_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 96,
  [SMALL_STATE(6)] = 126,
  [SMALL_STATE(7)] = 156,
  [SMALL_STATE(8)] = 186,
  [SMALL_STATE(9)] = 216,
  [SMALL_STATE(10)] = 246,
  [SMALL_STATE(11)] = 273,
  [SMALL_STATE(12)] = 300,
  [SMALL_STATE(13)] = 327,
  [SMALL_STATE(14)] = 354,
  [SMALL_STATE(15)] = 369,
  [SMALL_STATE(16)] = 384,
  [SMALL_STATE(17)] = 399,
  [SMALL_STATE(18)] = 414,
  [SMALL_STATE(19)] = 429,
  [SMALL_STATE(20)] = 443,
  [SMALL_STATE(21)] = 457,
  [SMALL_STATE(22)] = 471,
  [SMALL_STATE(23)] = 485,
  [SMALL_STATE(24)] = 499,
  [SMALL_STATE(25)] = 512,
  [SMALL_STATE(26)] = 525,
  [SMALL_STATE(27)] = 538,
  [SMALL_STATE(28)] = 551,
  [SMALL_STATE(29)] = 564,
  [SMALL_STATE(30)] = 577,
  [SMALL_STATE(31)] = 590,
  [SMALL_STATE(32)] = 597,
  [SMALL_STATE(33)] = 604,
  [SMALL_STATE(34)] = 617,
  [SMALL_STATE(35)] = 630,
  [SMALL_STATE(36)] = 640,
  [SMALL_STATE(37)] = 650,
  [SMALL_STATE(38)] = 660,
  [SMALL_STATE(39)] = 666,
  [SMALL_STATE(40)] = 672,
  [SMALL_STATE(41)] = 682,
  [SMALL_STATE(42)] = 688,
  [SMALL_STATE(43)] = 698,
  [SMALL_STATE(44)] = 708,
  [SMALL_STATE(45)] = 718,
  [SMALL_STATE(46)] = 728,
  [SMALL_STATE(47)] = 738,
  [SMALL_STATE(48)] = 744,
  [SMALL_STATE(49)] = 750,
  [SMALL_STATE(50)] = 756,
  [SMALL_STATE(51)] = 762,
  [SMALL_STATE(52)] = 772,
  [SMALL_STATE(53)] = 778,
  [SMALL_STATE(54)] = 784,
  [SMALL_STATE(55)] = 794,
  [SMALL_STATE(56)] = 800,
  [SMALL_STATE(57)] = 807,
  [SMALL_STATE(58)] = 814,
  [SMALL_STATE(59)] = 821,
  [SMALL_STATE(60)] = 828,
  [SMALL_STATE(61)] = 835,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(56),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_code_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 2, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 2, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 6, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 6, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 4, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code, 3, 0, 0),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 5, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 5, 0, 0),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 3, 0, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [197] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_aindl(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
