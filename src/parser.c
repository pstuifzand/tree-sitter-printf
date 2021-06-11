#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 10
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 21
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 5
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 17

enum {
  anon_sym_DQUOTE = 1,
  anon_sym_PERCENT_PERCENT = 2,
  anon_sym_PERCENT = 3,
  sym_type = 4,
  sym_flags = 5,
  sym_width = 6,
  sym_precision = 7,
  anon_sym_hh = 8,
  anon_sym_h = 9,
  anon_sym_j = 10,
  anon_sym_l = 11,
  anon_sym_L = 12,
  anon_sym_ll = 13,
  anon_sym_t = 14,
  anon_sym_w = 15,
  anon_sym_z = 16,
  anon_sym_I = 17,
  anon_sym_I32 = 18,
  anon_sym_I64 = 19,
  sym_text = 20,
  sym_format_string = 21,
  sym_text_parts = 22,
  sym_format = 23,
  sym_size = 24,
  aux_sym_format_string_repeat1 = 25,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [anon_sym_PERCENT] = "%",
  [sym_type] = "type",
  [sym_flags] = "flags",
  [sym_width] = "width",
  [sym_precision] = "precision",
  [anon_sym_hh] = "hh",
  [anon_sym_h] = "h",
  [anon_sym_j] = "j",
  [anon_sym_l] = "l",
  [anon_sym_L] = "L",
  [anon_sym_ll] = "ll",
  [anon_sym_t] = "t",
  [anon_sym_w] = "w",
  [anon_sym_z] = "z",
  [anon_sym_I] = "I",
  [anon_sym_I32] = "I32",
  [anon_sym_I64] = "I64",
  [sym_text] = "text",
  [sym_format_string] = "format_string",
  [sym_text_parts] = "text_parts",
  [sym_format] = "format",
  [sym_size] = "size",
  [aux_sym_format_string_repeat1] = "format_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_type] = sym_type,
  [sym_flags] = sym_flags,
  [sym_width] = sym_width,
  [sym_precision] = sym_precision,
  [anon_sym_hh] = anon_sym_hh,
  [anon_sym_h] = anon_sym_h,
  [anon_sym_j] = anon_sym_j,
  [anon_sym_l] = anon_sym_l,
  [anon_sym_L] = anon_sym_L,
  [anon_sym_ll] = anon_sym_ll,
  [anon_sym_t] = anon_sym_t,
  [anon_sym_w] = anon_sym_w,
  [anon_sym_z] = anon_sym_z,
  [anon_sym_I] = anon_sym_I,
  [anon_sym_I32] = anon_sym_I32,
  [anon_sym_I64] = anon_sym_I64,
  [sym_text] = sym_text,
  [sym_format_string] = sym_format_string,
  [sym_text_parts] = sym_text_parts,
  [sym_format] = sym_format,
  [sym_size] = sym_size,
  [aux_sym_format_string_repeat1] = aux_sym_format_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_flags] = {
    .visible = true,
    .named = true,
  },
  [sym_width] = {
    .visible = true,
    .named = true,
  },
  [sym_precision] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_hh] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_h] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_j] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_l] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ll] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_t] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_w] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I64] = {
    .visible = true,
    .named = false,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_format_string] = {
    .visible = true,
    .named = true,
  },
  [sym_text_parts] = {
    .visible = true,
    .named = true,
  },
  [sym_format] = {
    .visible = true,
    .named = true,
  },
  [sym_size] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_format_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_flags = 1,
  field_precision = 2,
  field_size = 3,
  field_type = 4,
  field_width = 5,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_flags] = "flags",
  [field_precision] = "precision",
  [field_size] = "size",
  [field_type] = "type",
  [field_width] = "width",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
  [5] = {.index = 7, .length = 2},
  [6] = {.index = 9, .length = 3},
  [7] = {.index = 12, .length = 3},
  [8] = {.index = 15, .length = 3},
  [9] = {.index = 18, .length = 3},
  [10] = {.index = 21, .length = 3},
  [11] = {.index = 24, .length = 3},
  [12] = {.index = 27, .length = 4},
  [13] = {.index = 31, .length = 4},
  [14] = {.index = 35, .length = 4},
  [15] = {.index = 39, .length = 4},
  [16] = {.index = 43, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 1},
  [1] =
    {field_flags, 1},
    {field_type, 2},
  [3] =
    {field_type, 2},
    {field_width, 1},
  [5] =
    {field_precision, 1},
    {field_type, 2},
  [7] =
    {field_size, 1},
    {field_type, 2},
  [9] =
    {field_flags, 1},
    {field_type, 3},
    {field_width, 2},
  [12] =
    {field_flags, 1},
    {field_precision, 2},
    {field_type, 3},
  [15] =
    {field_flags, 1},
    {field_size, 2},
    {field_type, 3},
  [18] =
    {field_precision, 2},
    {field_type, 3},
    {field_width, 1},
  [21] =
    {field_size, 2},
    {field_type, 3},
    {field_width, 1},
  [24] =
    {field_precision, 1},
    {field_size, 2},
    {field_type, 3},
  [27] =
    {field_flags, 1},
    {field_precision, 3},
    {field_type, 4},
    {field_width, 2},
  [31] =
    {field_flags, 1},
    {field_size, 3},
    {field_type, 4},
    {field_width, 2},
  [35] =
    {field_flags, 1},
    {field_precision, 2},
    {field_size, 3},
    {field_type, 4},
  [39] =
    {field_precision, 2},
    {field_size, 3},
    {field_type, 4},
    {field_width, 1},
  [43] =
    {field_flags, 1},
    {field_precision, 3},
    {field_size, 4},
    {field_type, 5},
    {field_width, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(7);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(15);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'L') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'j') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == 'z') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '*' ||
          ('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '.') ADVANCE(16);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == 'I') ADVANCE(26);
      if (lookahead == 'L') ADVANCE(21);
      if (lookahead == 'h') ADVANCE(18);
      if (lookahead == 'j') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == 'w') ADVANCE(24);
      if (lookahead == 'z') ADVANCE(25);
      if (lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (lookahead == '*' ||
          ('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      if (('a' <= lookahead && lookahead <= 'y')) ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '%') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 3:
      if (lookahead == '2') ADVANCE(27);
      END_STATE();
    case 4:
      if (lookahead == '4') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(30);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      if (lookahead == '%') ADVANCE(9);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_type);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_flags);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_flags);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '0') ADVANCE(14);
      if (lookahead == '#' ||
          lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_flags);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_width);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_precision);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_hh);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_h);
      if (lookahead == 'h') ADVANCE(17);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_j);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_l);
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_L);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_ll);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_t);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_w);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_z);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_I);
      if (lookahead == '3') ADVANCE(3);
      if (lookahead == '6') ADVANCE(4);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_I32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_I64);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '"') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(30);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_type] = ACTIONS(1),
    [sym_width] = ACTIONS(1),
    [sym_precision] = ACTIONS(1),
    [anon_sym_hh] = ACTIONS(1),
    [anon_sym_h] = ACTIONS(1),
    [anon_sym_j] = ACTIONS(1),
    [anon_sym_l] = ACTIONS(1),
    [anon_sym_L] = ACTIONS(1),
    [anon_sym_ll] = ACTIONS(1),
    [anon_sym_t] = ACTIONS(1),
    [anon_sym_w] = ACTIONS(1),
    [anon_sym_z] = ACTIONS(1),
    [anon_sym_I] = ACTIONS(1),
    [anon_sym_I32] = ACTIONS(1),
    [anon_sym_I64] = ACTIONS(1),
  },
  [1] = {
    [sym_format_string] = STATE(41),
    [anon_sym_DQUOTE] = ACTIONS(3),
  },
  [2] = {
    [sym_size] = STATE(40),
    [sym_type] = ACTIONS(5),
    [sym_flags] = ACTIONS(7),
    [sym_width] = ACTIONS(9),
    [sym_precision] = ACTIONS(11),
    [anon_sym_hh] = ACTIONS(13),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(13),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_L] = ACTIONS(13),
    [anon_sym_ll] = ACTIONS(13),
    [anon_sym_t] = ACTIONS(13),
    [anon_sym_w] = ACTIONS(13),
    [anon_sym_z] = ACTIONS(13),
    [anon_sym_I] = ACTIONS(13),
    [anon_sym_I32] = ACTIONS(13),
    [anon_sym_I64] = ACTIONS(13),
  },
  [3] = {
    [sym_size] = STATE(38),
    [sym_type] = ACTIONS(15),
    [sym_width] = ACTIONS(17),
    [sym_precision] = ACTIONS(19),
    [anon_sym_hh] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_ll] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [anon_sym_I] = ACTIONS(13),
    [anon_sym_I32] = ACTIONS(21),
    [anon_sym_I64] = ACTIONS(21),
  },
  [4] = {
    [sym_size] = STATE(36),
    [sym_type] = ACTIONS(23),
    [sym_precision] = ACTIONS(25),
    [anon_sym_hh] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_ll] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [anon_sym_I] = ACTIONS(13),
    [anon_sym_I32] = ACTIONS(21),
    [anon_sym_I64] = ACTIONS(21),
  },
  [5] = {
    [sym_size] = STATE(31),
    [sym_type] = ACTIONS(27),
    [sym_precision] = ACTIONS(29),
    [anon_sym_hh] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_ll] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [anon_sym_I] = ACTIONS(13),
    [anon_sym_I32] = ACTIONS(21),
    [anon_sym_I64] = ACTIONS(21),
  },
  [6] = {
    [sym_size] = STATE(37),
    [sym_type] = ACTIONS(31),
    [anon_sym_hh] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_ll] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [anon_sym_I] = ACTIONS(13),
    [anon_sym_I32] = ACTIONS(21),
    [anon_sym_I64] = ACTIONS(21),
  },
  [7] = {
    [sym_size] = STATE(33),
    [sym_type] = ACTIONS(33),
    [anon_sym_hh] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_ll] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [anon_sym_I] = ACTIONS(13),
    [anon_sym_I32] = ACTIONS(21),
    [anon_sym_I64] = ACTIONS(21),
  },
  [8] = {
    [sym_size] = STATE(30),
    [sym_type] = ACTIONS(35),
    [anon_sym_hh] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_ll] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [anon_sym_I] = ACTIONS(13),
    [anon_sym_I32] = ACTIONS(21),
    [anon_sym_I64] = ACTIONS(21),
  },
  [9] = {
    [sym_size] = STATE(34),
    [sym_type] = ACTIONS(37),
    [anon_sym_hh] = ACTIONS(21),
    [anon_sym_h] = ACTIONS(13),
    [anon_sym_j] = ACTIONS(21),
    [anon_sym_l] = ACTIONS(13),
    [anon_sym_L] = ACTIONS(21),
    [anon_sym_ll] = ACTIONS(21),
    [anon_sym_t] = ACTIONS(21),
    [anon_sym_w] = ACTIONS(21),
    [anon_sym_z] = ACTIONS(21),
    [anon_sym_I] = ACTIONS(13),
    [anon_sym_I32] = ACTIONS(21),
    [anon_sym_I64] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(44), 1,
      anon_sym_PERCENT,
    STATE(21), 1,
      sym_format,
    ACTIONS(41), 2,
      anon_sym_PERCENT_PERCENT,
      sym_text,
    STATE(10), 2,
      sym_text_parts,
      aux_sym_format_string_repeat1,
  [18] = 5,
    ACTIONS(47), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_PERCENT,
    STATE(21), 1,
      sym_format,
    ACTIONS(49), 2,
      anon_sym_PERCENT_PERCENT,
      sym_text,
    STATE(12), 2,
      sym_text_parts,
      aux_sym_format_string_repeat1,
  [36] = 5,
    ACTIONS(51), 1,
      anon_sym_PERCENT,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    STATE(21), 1,
      sym_format,
    ACTIONS(49), 2,
      anon_sym_PERCENT_PERCENT,
      sym_text,
    STATE(10), 2,
      sym_text_parts,
      aux_sym_format_string_repeat1,
  [54] = 1,
    ACTIONS(55), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [61] = 1,
    ACTIONS(57), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [68] = 1,
    ACTIONS(59), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [75] = 1,
    ACTIONS(61), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [82] = 1,
    ACTIONS(63), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [89] = 1,
    ACTIONS(65), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [96] = 1,
    ACTIONS(67), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [103] = 1,
    ACTIONS(69), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [110] = 1,
    ACTIONS(71), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [117] = 1,
    ACTIONS(73), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [124] = 1,
    ACTIONS(75), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [131] = 1,
    ACTIONS(77), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [138] = 1,
    ACTIONS(79), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [145] = 1,
    ACTIONS(81), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [152] = 1,
    ACTIONS(83), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [159] = 1,
    ACTIONS(85), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [166] = 1,
    ACTIONS(87), 4,
      anon_sym_DQUOTE,
      anon_sym_PERCENT_PERCENT,
      anon_sym_PERCENT,
      sym_text,
  [173] = 1,
    ACTIONS(89), 1,
      sym_type,
  [177] = 1,
    ACTIONS(91), 1,
      sym_type,
  [181] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [185] = 1,
    ACTIONS(95), 1,
      sym_type,
  [189] = 1,
    ACTIONS(97), 1,
      sym_type,
  [193] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [197] = 1,
    ACTIONS(101), 1,
      sym_type,
  [201] = 1,
    ACTIONS(103), 1,
      sym_type,
  [205] = 1,
    ACTIONS(105), 1,
      sym_type,
  [209] = 1,
    ACTIONS(107), 1,
      sym_type,
  [213] = 1,
    ACTIONS(109), 1,
      sym_type,
  [217] = 1,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(10)] = 0,
  [SMALL_STATE(11)] = 18,
  [SMALL_STATE(12)] = 36,
  [SMALL_STATE(13)] = 54,
  [SMALL_STATE(14)] = 61,
  [SMALL_STATE(15)] = 68,
  [SMALL_STATE(16)] = 75,
  [SMALL_STATE(17)] = 82,
  [SMALL_STATE(18)] = 89,
  [SMALL_STATE(19)] = 96,
  [SMALL_STATE(20)] = 103,
  [SMALL_STATE(21)] = 110,
  [SMALL_STATE(22)] = 117,
  [SMALL_STATE(23)] = 124,
  [SMALL_STATE(24)] = 131,
  [SMALL_STATE(25)] = 138,
  [SMALL_STATE(26)] = 145,
  [SMALL_STATE(27)] = 152,
  [SMALL_STATE(28)] = 159,
  [SMALL_STATE(29)] = 166,
  [SMALL_STATE(30)] = 173,
  [SMALL_STATE(31)] = 177,
  [SMALL_STATE(32)] = 181,
  [SMALL_STATE(33)] = 185,
  [SMALL_STATE(34)] = 189,
  [SMALL_STATE(35)] = 193,
  [SMALL_STATE(36)] = 197,
  [SMALL_STATE(37)] = 201,
  [SMALL_STATE(38)] = 205,
  [SMALL_STATE(39)] = 209,
  [SMALL_STATE(40)] = 213,
  [SMALL_STATE(41)] = 217,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_format_string_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_format_string_repeat1, 2), SHIFT_REPEAT(21),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_format_string_repeat1, 2), SHIFT_REPEAT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 3, .production_id = 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 4, .production_id = 11),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 6, .production_id = 16),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 3, .production_id = 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, .production_id = 15),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, .production_id = 14),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, .production_id = 13),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text_parts, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 5, .production_id = 12),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 3, .production_id = 4),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 4, .production_id = 10),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 3, .production_id = 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 4, .production_id = 6),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 4, .production_id = 9),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 4, .production_id = 8),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_format, 4, .production_id = 7),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_string, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_string, 3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_size, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [111] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_printf(void) {
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
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
