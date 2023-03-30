#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 6

enum {
  anon_sym_EQ = 1,
  anon_sym_LF = 2,
  anon_sym_set = 3,
  anon_sym_POUND = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_COLON = 8,
  anon_sym_LBRACK = 9,
  anon_sym_RBRACK = 10,
  anon_sym_LT = 11,
  anon_sym_GT = 12,
  aux_sym_list_item_token1 = 13,
  anon_sym_DASH = 14,
  anon_sym_PLUS = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_string_token1 = 17,
  sym_int = 18,
  anon_sym_true = 19,
  anon_sym_false = 20,
  anon_sym_SLASH_STAR = 21,
  anon_sym_STAR_SLASH = 22,
  sym_identifier = 23,
  sym__word = 24,
  sym_source_file = 25,
  sym__definition = 26,
  sym_title = 27,
  sym_set_rule = 28,
  sym__expressions = 29,
  sym_function = 30,
  sym_parameter_list = 31,
  sym__parameter = 32,
  sym__named_parameter = 33,
  sym_block = 34,
  sym_tag = 35,
  sym_list = 36,
  sym_list_item = 37,
  sym__list_marker = 38,
  sym__type = 39,
  sym_string = 40,
  sym_bool = 41,
  sym_comment = 42,
  sym_text = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_parameter_list_repeat1 = 45,
  aux_sym_list_repeat1 = 46,
  aux_sym_string_repeat1 = 47,
  aux_sym_comment_repeat1 = 48,
  aux_sym_text_repeat1 = 49,
  anon_alias_sym_comment = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LF] = "\n",
  [anon_sym_set] = "set",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [aux_sym_list_item_token1] = "list_item_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_int] = "int",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_identifier] = "identifier",
  [sym__word] = "_word",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_title] = "title",
  [sym_set_rule] = "set_rule",
  [sym__expressions] = "_expressions",
  [sym_function] = "function",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [sym__named_parameter] = "_named_parameter",
  [sym_block] = "block",
  [sym_tag] = "tag",
  [sym_list] = "list",
  [sym_list_item] = "list_item",
  [sym__list_marker] = "_list_marker",
  [sym__type] = "_type",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym_comment] = "comment",
  [sym_text] = "text",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [anon_alias_sym_comment] = "comment",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_list_item_token1] = aux_sym_list_item_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_int] = sym_int,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_identifier] = sym_identifier,
  [sym__word] = sym__word,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_title] = sym_title,
  [sym_set_rule] = sym_set_rule,
  [sym__expressions] = sym__expressions,
  [sym_function] = sym_function,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
  [sym__named_parameter] = sym__named_parameter,
  [sym_block] = sym_block,
  [sym_tag] = sym_tag,
  [sym_list] = sym_list,
  [sym_list_item] = sym_list_item,
  [sym__list_marker] = sym__list_marker,
  [sym__type] = sym__type,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym_comment] = sym_comment,
  [sym_text] = sym_text,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
  [anon_alias_sym_comment] = anon_alias_sym_comment,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_item_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
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
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__word] = {
    .visible = false,
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
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_set_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__expressions] = {
    .visible = false,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter] = {
    .visible = false,
    .named = true,
  },
  [sym__named_parameter] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_list_item] = {
    .visible = true,
    .named = true,
  },
  [sym__list_marker] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
};

enum {
  field_block = 1,
  field_name = 2,
  field_parameters = 3,
  field_tag = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_block] = "block",
  [field_name] = "name",
  [field_parameters] = "parameters",
  [field_tag] = "tag",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 2},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 4},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_parameters, 1},
  [2] =
    {field_block, 2},
    {field_name, 0},
    {field_parameters, 1},
  [5] =
    {field_name, 0},
    {field_parameters, 1},
    {field_tag, 2},
  [8] =
    {field_block, 2},
    {field_name, 0},
    {field_parameters, 1},
    {field_tag, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = anon_alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_text, 2,
    sym_text,
    anon_alias_sym_comment,
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
  [31] = 8,
  [32] = 6,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(25);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 't') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(43);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 's') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(21);
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '+') ADVANCE(33);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_set);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_list_item_token1);
      if (lookahead == ' ') ADVANCE(30);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_list_item_token1);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '"') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_true);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_false);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(48);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(51);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(52);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 16},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 16},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(53),
    [sym__definition] = STATE(3),
    [sym_title] = STATE(3),
    [sym__expressions] = STATE(3),
    [sym_list] = STATE(3),
    [sym_list_item] = STATE(5),
    [sym__list_marker] = STATE(54),
    [sym_comment] = STATE(3),
    [sym_text] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_list_repeat1] = STATE(5),
    [aux_sym_text_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [sym__word] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_EQ,
    ACTIONS(20), 1,
      anon_sym_POUND,
    ACTIONS(26), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      sym__word,
    STATE(6), 1,
      aux_sym_text_repeat1,
    STATE(54), 1,
      sym__list_marker,
    ACTIONS(23), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(5), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(2), 7,
      sym__definition,
      sym_title,
      sym__expressions,
      sym_list,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [39] = 10,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      aux_sym_text_repeat1,
    STATE(54), 1,
      sym__list_marker,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(5), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(2), 7,
      sym__definition,
      sym_title,
      sym__expressions,
      sym_list,
      sym_comment,
      sym_text,
      aux_sym_source_file_repeat1,
  [78] = 5,
    ACTIONS(36), 1,
      anon_sym_LBRACK,
    ACTIONS(38), 1,
      anon_sym_LT,
    STATE(11), 1,
      sym_block,
    STATE(15), 1,
      sym_tag,
    ACTIONS(34), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [100] = 4,
    STATE(54), 1,
      sym__list_marker,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(7), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(40), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
      sym__word,
  [119] = 3,
    ACTIONS(44), 1,
      sym__word,
    STATE(8), 1,
      aux_sym_text_repeat1,
    ACTIONS(42), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [136] = 4,
    STATE(54), 1,
      sym__list_marker,
    ACTIONS(48), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(7), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(46), 5,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
      sym__word,
  [155] = 3,
    ACTIONS(53), 1,
      sym__word,
    STATE(8), 1,
      aux_sym_text_repeat1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_RBRACK,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      anon_sym_STAR_SLASH,
  [172] = 1,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [184] = 1,
    ACTIONS(58), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [196] = 3,
    ACTIONS(38), 1,
      anon_sym_LT,
    STATE(22), 1,
      sym_tag,
    ACTIONS(60), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [212] = 1,
    ACTIONS(62), 9,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LBRACK,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [224] = 1,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_LT,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [235] = 1,
    ACTIONS(66), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [245] = 1,
    ACTIONS(68), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [255] = 1,
    ACTIONS(70), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [265] = 1,
    ACTIONS(72), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [275] = 1,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [285] = 1,
    ACTIONS(76), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [295] = 1,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [305] = 1,
    ACTIONS(80), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [315] = 1,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
      sym__word,
  [325] = 4,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 1,
      sym_int,
    ACTIONS(88), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(43), 3,
      sym__type,
      sym_string,
      sym_bool,
  [341] = 5,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(90), 1,
      anon_sym_STAR_SLASH,
    STATE(6), 1,
      aux_sym_text_repeat1,
    STATE(26), 1,
      aux_sym_comment_repeat1,
    STATE(41), 1,
      sym_text,
  [357] = 5,
    ACTIONS(13), 1,
      sym__word,
    ACTIONS(92), 1,
      anon_sym_STAR_SLASH,
    STATE(6), 1,
      aux_sym_text_repeat1,
    STATE(24), 1,
      aux_sym_comment_repeat1,
    STATE(41), 1,
      sym_text,
  [373] = 5,
    ACTIONS(94), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(96), 1,
      sym__word,
    STATE(6), 1,
      aux_sym_text_repeat1,
    STATE(26), 1,
      aux_sym_comment_repeat1,
    STATE(41), 1,
      sym_text,
  [389] = 3,
    ACTIONS(99), 1,
      anon_sym_set,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(17), 2,
      sym_set_rule,
      sym_function,
  [400] = 3,
    ACTIONS(103), 1,
      anon_sym_RPAREN,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(34), 2,
      sym__parameter,
      sym__named_parameter,
  [411] = 3,
    ACTIONS(107), 1,
      sym__word,
    STATE(32), 1,
      aux_sym_text_repeat1,
    STATE(49), 1,
      sym_text,
  [421] = 3,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      aux_sym_string_token1,
    STATE(36), 1,
      aux_sym_string_repeat1,
  [431] = 3,
    ACTIONS(51), 1,
      anon_sym_LF,
    ACTIONS(113), 1,
      sym__word,
    STATE(31), 1,
      aux_sym_text_repeat1,
  [441] = 3,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(116), 1,
      sym__word,
    STATE(31), 1,
      aux_sym_text_repeat1,
  [451] = 3,
    ACTIONS(118), 1,
      anon_sym_DQUOTE,
    ACTIONS(120), 1,
      aux_sym_string_token1,
    STATE(33), 1,
      aux_sym_string_repeat1,
  [461] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(37), 1,
      aux_sym_parameter_list_repeat1,
  [471] = 2,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(44), 2,
      sym__parameter,
      sym__named_parameter,
  [479] = 3,
    ACTIONS(127), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      aux_sym_string_token1,
    STATE(33), 1,
      aux_sym_string_repeat1,
  [489] = 3,
    ACTIONS(123), 1,
      anon_sym_COMMA,
    ACTIONS(131), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_parameter_list_repeat1,
  [499] = 3,
    ACTIONS(13), 1,
      sym__word,
    STATE(6), 1,
      aux_sym_text_repeat1,
    STATE(52), 1,
      sym_text,
  [509] = 3,
    ACTIONS(133), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_parameter_list_repeat1,
  [519] = 2,
    ACTIONS(140), 1,
      anon_sym_COLON,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [527] = 1,
    ACTIONS(142), 2,
      anon_sym_STAR_SLASH,
      sym__word,
  [532] = 1,
    ACTIONS(144), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [537] = 1,
    ACTIONS(146), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [542] = 1,
    ACTIONS(136), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [547] = 2,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(21), 1,
      sym_function,
  [554] = 1,
    ACTIONS(150), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [559] = 1,
    ACTIONS(152), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [564] = 2,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    STATE(4), 1,
      sym_parameter_list,
  [571] = 1,
    ACTIONS(156), 1,
      anon_sym_LF,
  [575] = 1,
    ACTIONS(158), 1,
      sym_identifier,
  [579] = 1,
    ACTIONS(160), 1,
      anon_sym_GT,
  [583] = 1,
    ACTIONS(162), 1,
      anon_sym_RBRACK,
  [587] = 1,
    ACTIONS(164), 1,
      ts_builtin_sym_end,
  [591] = 1,
    ACTIONS(166), 1,
      aux_sym_list_item_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 100,
  [SMALL_STATE(6)] = 119,
  [SMALL_STATE(7)] = 136,
  [SMALL_STATE(8)] = 155,
  [SMALL_STATE(9)] = 172,
  [SMALL_STATE(10)] = 184,
  [SMALL_STATE(11)] = 196,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 224,
  [SMALL_STATE(14)] = 235,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 265,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 295,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 325,
  [SMALL_STATE(24)] = 341,
  [SMALL_STATE(25)] = 357,
  [SMALL_STATE(26)] = 373,
  [SMALL_STATE(27)] = 389,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 411,
  [SMALL_STATE(30)] = 421,
  [SMALL_STATE(31)] = 431,
  [SMALL_STATE(32)] = 441,
  [SMALL_STATE(33)] = 451,
  [SMALL_STATE(34)] = 461,
  [SMALL_STATE(35)] = 471,
  [SMALL_STATE(36)] = 479,
  [SMALL_STATE(37)] = 489,
  [SMALL_STATE(38)] = 499,
  [SMALL_STATE(39)] = 509,
  [SMALL_STATE(40)] = 519,
  [SMALL_STATE(41)] = 527,
  [SMALL_STATE(42)] = 532,
  [SMALL_STATE(43)] = 537,
  [SMALL_STATE(44)] = 542,
  [SMALL_STATE(45)] = 547,
  [SMALL_STATE(46)] = 554,
  [SMALL_STATE(47)] = 559,
  [SMALL_STATE(48)] = 564,
  [SMALL_STATE(49)] = 571,
  [SMALL_STATE(50)] = 575,
  [SMALL_STATE(51)] = 579,
  [SMALL_STATE(52)] = 583,
  [SMALL_STATE(53)] = 587,
  [SMALL_STATE(54)] = 591,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(27),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(25),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(54),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(8),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, .production_id = 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 3, .production_id = 4),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expressions, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_set_rule, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(6),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [113] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(31),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(33),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(35),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_comment_repeat1, 1, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__named_parameter, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [164] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_typst(void) {
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
