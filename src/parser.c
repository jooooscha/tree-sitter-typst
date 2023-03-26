#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 52
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 2
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_EQ = 1,
  anon_sym_POUND = 2,
  anon_sym_LPAREN = 3,
  anon_sym_COMMA = 4,
  anon_sym_RPAREN = 5,
  anon_sym_COLON = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  sym_int = 9,
  anon_sym_true = 10,
  anon_sym_false = 11,
  anon_sym_LT = 12,
  anon_sym_GT = 13,
  anon_sym_LBRACK = 14,
  anon_sym_RBRACK = 15,
  anon_sym_DASH = 16,
  anon_sym_PLUS = 17,
  aux_sym_list_item_token1 = 18,
  anon_sym_SLASH_STAR = 19,
  anon_sym_STAR_SLASH = 20,
  sym_name = 21,
  sym_tag_name = 22,
  sym_text = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_title = 26,
  sym_function = 27,
  sym_inline_function = 28,
  sym_parameter_list = 29,
  sym__parameter = 30,
  sym_named_parameter = 31,
  sym__type = 32,
  sym_string = 33,
  sym_bool = 34,
  sym_tag = 35,
  sym_block = 36,
  sym_list = 37,
  sym_list_item = 38,
  sym_comment = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_parameter_list_repeat1 = 41,
  aux_sym_list_repeat1 = 42,
  aux_sym_comment_repeat1 = 43,
  anon_alias_sym_comment = 44,
  anon_alias_sym_function = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_POUND] = "#",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COLON] = ":",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [sym_int] = "int",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [aux_sym_list_item_token1] = "list_item_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [anon_sym_STAR_SLASH] = "*/",
  [sym_name] = "name",
  [sym_tag_name] = "tag_name",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_title] = "title",
  [sym_function] = "function",
  [sym_inline_function] = "inline_function",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter] = "_parameter",
  [sym_named_parameter] = "named_parameter",
  [sym__type] = "_type",
  [sym_string] = "string",
  [sym_bool] = "bool",
  [sym_tag] = "tag",
  [sym_block] = "block",
  [sym_list] = "list",
  [sym_list_item] = "list_item",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_comment_repeat1] = "comment_repeat1",
  [anon_alias_sym_comment] = "comment",
  [anon_alias_sym_function] = "function",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [sym_int] = sym_int,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [aux_sym_list_item_token1] = aux_sym_list_item_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [sym_name] = sym_name,
  [sym_tag_name] = sym_tag_name,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_title] = sym_title,
  [sym_function] = sym_function,
  [sym_inline_function] = sym_inline_function,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter] = sym__parameter,
  [sym_named_parameter] = sym_named_parameter,
  [sym__type] = sym__type,
  [sym_string] = sym_string,
  [sym_bool] = sym_bool,
  [sym_tag] = sym_tag,
  [sym_block] = sym_block,
  [sym_list] = sym_list,
  [sym_list_item] = sym_list_item,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_comment_repeat1] = aux_sym_comment_repeat1,
  [anon_alias_sym_comment] = anon_alias_sym_comment,
  [anon_alias_sym_function] = anon_alias_sym_function,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
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
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_list_item_token1] = {
    .visible = false,
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
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
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
  [sym_title] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_function] = {
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
  [sym_named_parameter] = {
    .visible = true,
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
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
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
  [sym_comment] = {
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
  [aux_sym_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [anon_alias_sym_comment] = {
    .visible = true,
    .named = false,
  },
  [anon_alias_sym_function] = {
    .visible = true,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = anon_alias_sym_function,
  },
  [2] = {
    [0] = anon_alias_sym_comment,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym_inline_function, 2,
    sym_inline_function,
    anon_alias_sym_function,
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
  [19] = 17,
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
  [31] = 31,
  [32] = 7,
  [33] = 8,
  [34] = 14,
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
  [48] = 47,
  [49] = 39,
  [50] = 40,
  [51] = 46,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == ',') ADVANCE(20);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '[') ADVANCE(33);
      if (lookahead == ']') ADVANCE(34);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == 't') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(53);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '+') ADVANCE(36);
      if (lookahead == '-') ADVANCE(35);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(15)
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_true);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_false);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_list_item_token1);
      if (lookahead == ' ') ADVANCE(37);
      if (lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_list_item_token1);
      if (lookahead == ' ' ||
          lookahead == '-' ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(44);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(30);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'l') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 's') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_tag_name);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(51);
      if (lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead == '*') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == ' ' ||
          lookahead == '*' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 15},
  [5] = {.lex_state = 15},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 15},
  [45] = {.lex_state = 24},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 14},
  [51] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [sym_tag_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__definition] = STATE(2),
    [sym_title] = STATE(2),
    [sym_function] = STATE(2),
    [sym_list] = STATE(2),
    [sym_list_item] = STATE(4),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_list_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [anon_sym_POUND] = ACTIONS(7),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_SLASH_STAR] = ACTIONS(11),
    [sym_text] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(4), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(3), 6,
      sym__definition,
      sym_title,
      sym_function,
      sym_list,
      sym_comment,
      aux_sym_source_file_repeat1,
  [32] = 8,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_EQ,
    ACTIONS(24), 1,
      anon_sym_POUND,
    ACTIONS(30), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(33), 1,
      sym_text,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(4), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    STATE(3), 6,
      sym__definition,
      sym_title,
      sym_function,
      sym_list,
      sym_comment,
      aux_sym_source_file_repeat1,
  [64] = 4,
    ACTIONS(9), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      sym_text,
    STATE(5), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(38), 3,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [82] = 4,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    STATE(5), 2,
      sym_list_item,
      aux_sym_list_repeat1,
    ACTIONS(42), 3,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_SLASH_STAR,
  [100] = 2,
    ACTIONS(47), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(49), 5,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
  [112] = 2,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(53), 5,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
  [124] = 2,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(57), 5,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
  [136] = 2,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(61), 5,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
  [148] = 4,
    ACTIONS(63), 1,
      anon_sym_DQUOTE,
    ACTIONS(65), 1,
      sym_int,
    ACTIONS(67), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(36), 3,
      sym__type,
      sym_string,
      sym_bool,
  [164] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(71), 5,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
  [176] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(75), 5,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
  [188] = 2,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(79), 5,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
  [200] = 2,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      sym_text,
    ACTIONS(83), 5,
      anon_sym_EQ,
      anon_sym_POUND,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_SLASH_STAR,
  [212] = 4,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      anon_sym_COLON,
    STATE(17), 1,
      sym_parameter_list,
    ACTIONS(87), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [226] = 3,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    ACTIONS(93), 1,
      sym_name,
    STATE(24), 3,
      sym_inline_function,
      sym__parameter,
      sym_named_parameter,
  [238] = 3,
    ACTIONS(95), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      anon_sym_LBRACK,
    STATE(34), 2,
      sym_tag,
      sym_block,
  [249] = 2,
    ACTIONS(93), 1,
      sym_name,
    STATE(37), 3,
      sym_inline_function,
      sym__parameter,
      sym_named_parameter,
  [258] = 3,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(101), 1,
      anon_sym_LBRACK,
    STATE(14), 2,
      sym_tag,
      sym_block,
  [269] = 3,
    ACTIONS(103), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [279] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_parameter_list_repeat1,
  [289] = 3,
    ACTIONS(112), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(114), 1,
      sym_text,
    STATE(22), 1,
      aux_sym_comment_repeat1,
  [299] = 3,
    ACTIONS(117), 1,
      anon_sym_STAR_SLASH,
    ACTIONS(119), 1,
      sym_text,
    STATE(25), 1,
      aux_sym_comment_repeat1,
  [309] = 3,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(21), 1,
      aux_sym_parameter_list_repeat1,
  [319] = 3,
    ACTIONS(119), 1,
      sym_text,
    ACTIONS(123), 1,
      anon_sym_STAR_SLASH,
    STATE(22), 1,
      aux_sym_comment_repeat1,
  [329] = 1,
    ACTIONS(125), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [334] = 1,
    ACTIONS(127), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [339] = 2,
    ACTIONS(129), 1,
      sym_name,
    STATE(11), 1,
      sym_inline_function,
  [346] = 1,
    ACTIONS(131), 2,
      anon_sym_STAR_SLASH,
      sym_text,
  [351] = 2,
    ACTIONS(85), 1,
      anon_sym_LPAREN,
    STATE(19), 1,
      sym_parameter_list,
  [358] = 1,
    ACTIONS(133), 2,
      anon_sym_LT,
      anon_sym_LBRACK,
  [363] = 1,
    ACTIONS(51), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [368] = 1,
    ACTIONS(55), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [373] = 1,
    ACTIONS(81), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [378] = 1,
    ACTIONS(135), 2,
      anon_sym_LT,
      anon_sym_LBRACK,
  [383] = 1,
    ACTIONS(137), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [388] = 1,
    ACTIONS(106), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [393] = 1,
    ACTIONS(139), 2,
      anon_sym_LT,
      anon_sym_LBRACK,
  [398] = 1,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
  [402] = 1,
    ACTIONS(143), 1,
      sym_tag_name,
  [406] = 1,
    ACTIONS(145), 1,
      aux_sym_list_item_token1,
  [410] = 1,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
  [414] = 1,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
  [418] = 1,
    ACTIONS(151), 1,
      sym_text,
  [422] = 1,
    ACTIONS(153), 1,
      aux_sym_string_token1,
  [426] = 1,
    ACTIONS(155), 1,
      sym_text,
  [430] = 1,
    ACTIONS(157), 1,
      anon_sym_GT,
  [434] = 1,
    ACTIONS(159), 1,
      anon_sym_GT,
  [438] = 1,
    ACTIONS(161), 1,
      anon_sym_RBRACK,
  [442] = 1,
    ACTIONS(163), 1,
      sym_tag_name,
  [446] = 1,
    ACTIONS(165), 1,
      sym_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 64,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 124,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 148,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 176,
  [SMALL_STATE(13)] = 188,
  [SMALL_STATE(14)] = 200,
  [SMALL_STATE(15)] = 212,
  [SMALL_STATE(16)] = 226,
  [SMALL_STATE(17)] = 238,
  [SMALL_STATE(18)] = 249,
  [SMALL_STATE(19)] = 258,
  [SMALL_STATE(20)] = 269,
  [SMALL_STATE(21)] = 279,
  [SMALL_STATE(22)] = 289,
  [SMALL_STATE(23)] = 299,
  [SMALL_STATE(24)] = 309,
  [SMALL_STATE(25)] = 319,
  [SMALL_STATE(26)] = 329,
  [SMALL_STATE(27)] = 334,
  [SMALL_STATE(28)] = 339,
  [SMALL_STATE(29)] = 346,
  [SMALL_STATE(30)] = 351,
  [SMALL_STATE(31)] = 358,
  [SMALL_STATE(32)] = 363,
  [SMALL_STATE(33)] = 368,
  [SMALL_STATE(34)] = 373,
  [SMALL_STATE(35)] = 378,
  [SMALL_STATE(36)] = 383,
  [SMALL_STATE(37)] = 388,
  [SMALL_STATE(38)] = 393,
  [SMALL_STATE(39)] = 398,
  [SMALL_STATE(40)] = 402,
  [SMALL_STATE(41)] = 406,
  [SMALL_STATE(42)] = 410,
  [SMALL_STATE(43)] = 414,
  [SMALL_STATE(44)] = 418,
  [SMALL_STATE(45)] = 422,
  [SMALL_STATE(46)] = 426,
  [SMALL_STATE(47)] = 430,
  [SMALL_STATE(48)] = 434,
  [SMALL_STATE(49)] = 438,
  [SMALL_STATE(50)] = 442,
  [SMALL_STATE(51)] = 446,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 2, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 2, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list_item, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list_item, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_function, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_function, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(18),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 2), SHIFT_REPEAT(29),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_comment_repeat1, 1, .production_id = 2),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_parameter, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [149] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
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
