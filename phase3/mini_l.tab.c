/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "mini_l.y" /* yacc.c:339  */

#include "mini_l.tab.h"
#include <sstream>

void map_push(string, Var);
bool map_search(string);
string insideOS(int);
string outsideOS(char*);
int yyerror (const char* s);
int yylex (void);
map<string, Var> vmap;
void doNOTequal(string);
stringstream* codeStr;
FILE *fileDir;
string* temp();
string* label();
string syn_create(string*, string*, string*, string);
string SortingDOT(string *);
void exp(Terminal &, Terminal, Terminal, string);
stack<DList> dataList;
bool flags = false;
bool success = true;
int temp_count = 0;
int label_count = 0;

#line 92 "mini_l.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "mini_l.tab.h".  */
#ifndef YY_YY_MINI_L_TAB_H_INCLUDED
# define YY_YY_MINI_L_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    FUNCTION = 258,
    BEGIN_PARAMS = 259,
    END_PARAMS = 260,
    BEGIN_LOCALS = 261,
    END_LOCALS = 262,
    BEGIN_BODY = 263,
    END_BODY = 264,
    INTEGER = 265,
    ARRAY = 266,
    OF = 267,
    IF = 268,
    THEN = 269,
    ENDIF = 270,
    ELSE = 271,
    WHILE = 272,
    DO = 273,
    FOREACH = 274,
    IN = 275,
    BEGINLOOP = 276,
    ENDLOOP = 277,
    CONTINUE = 278,
    READ = 279,
    WRITE = 280,
    TRUE = 281,
    FALSE = 282,
    SEMICOLON = 283,
    COLON = 284,
    COMMA = 285,
    L_PAREN = 286,
    R_PAREN = 287,
    L_SQUARE_BRACKET = 288,
    R_SQUARE_BRACKET = 289,
    RETURN = 290,
    NUMBER = 291,
    IDENT = 292,
    MULT = 293,
    DIV = 294,
    MOD = 295,
    ADD = 296,
    SUB = 297,
    LT = 298,
    LTE = 299,
    GT = 300,
    GTE = 301,
    EQ = 302,
    NEQ = 303,
    AND = 304,
    OR = 305,
    NOT = 306,
    ASSIGN = 307
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 38 "mini_l.y" /* yacc.c:355  */

        int val;
        char* cval;
        struct {
                stringstream *code;
        } start;

        struct Terminal Terminal;

#line 195 "mini_l.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_MINI_L_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 212 "mini_l.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  76
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  150

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   307

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    50,    50,    60,    66,    87,   100,   110,   116,   162,
     195,   204,   214,   222,   227,   232,   237,   242,   247,   252,
     257,   263,   269,   274,   297,   314,   320,   326,   342,   358,
     370,   382,   387,   399,   411,   416,   428,   437,   451,   456,
     462,   476,   481,   487,   492,   500,   508,   514,   520,   527,
     533,   539,   545,   551,   557,   565,   580,   584,   589,   595,
     609,   613,   617,   622,   628,   633,   640,   650,   656,   662,
     669,   675,   683,   689,   719,   726,   734
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "FUNCTION", "BEGIN_PARAMS", "END_PARAMS",
  "BEGIN_LOCALS", "END_LOCALS", "BEGIN_BODY", "END_BODY", "INTEGER",
  "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE", "WHILE", "DO", "FOREACH",
  "IN", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ", "WRITE", "TRUE",
  "FALSE", "SEMICOLON", "COLON", "COMMA", "L_PAREN", "R_PAREN",
  "L_SQUARE_BRACKET", "R_SQUARE_BRACKET", "RETURN", "NUMBER", "IDENT",
  "MULT", "DIV", "MOD", "ADD", "SUB", "LT", "LTE", "GT", "GTE", "EQ",
  "NEQ", "AND", "OR", "NOT", "ASSIGN", "$accept", "prog", "func", "ident",
  "func1", "decl", "decl1", "array", "stmt", "stmt1", "asn_stmt",
  "if_stmt", "else_stmt", "while_stmt", "do_stmt", "read_stmt", "r_stmt",
  "write_stmt", "w_stmt", "cont_stmt", "ret_stmt", "bool_expr", "or_expr",
  "and_expr", "and_expr1", "rel_expr", "rel_expr1", "comp", "expr",
  "expr1", "multi_expr", "multi_expr1", "term", "term2", "term3", "var",
  "var2", "number", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307
};
# endif

#define YYPACT_NINF -92

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-92)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      19,     7,    25,    19,   -92,    18,   -92,   -92,    47,    17,
      28,    51,    39,    29,    42,    66,    17,    28,    62,    17,
     -92,   -92,    46,    65,    73,    53,   -92,    82,   -92,    57,
       6,    81,    26,    26,    75,   -92,    63,    63,   -27,    69,
      71,    85,   -92,   -92,   -92,   -92,   -92,   -92,   -92,   -92,
      49,   -92,   -92,   -92,    26,     4,   -20,    61,    91,    56,
      58,   -92,    68,   -28,   -12,   -92,   -92,   -92,    87,     6,
      79,    88,   -27,   -92,   -27,   -92,     6,   -92,   -27,    89,
      38,   -27,   -92,   -92,     6,    26,   -92,    26,   -92,   -92,
     -92,   -92,   -92,   -92,   -92,   -27,   -27,   -27,   -92,   -27,
     -27,   -27,   -92,     6,    95,    63,   -92,    63,   -92,    90,
      86,   -92,   -92,   -92,   -92,    93,    92,   103,    56,    58,
     -92,   -28,   -28,   -12,   -12,   -12,   104,   108,    79,    88,
     -92,   -27,   -92,     6,   112,   -92,   -92,   -92,   -92,   -92,
     -92,   -92,   -92,    26,   -92,   -92,   -92,   -92,   -92,   -92
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     3,     5,     0,     1,     2,     0,     7,
      10,     0,     0,     0,     0,     0,     7,    10,    12,     7,
       6,     9,     0,     0,     0,     0,     8,     0,    76,     0,
      22,     0,     0,     0,     0,    35,     0,     0,     0,    75,
       0,     0,    13,    14,    15,    16,    17,    18,    19,    20,
       0,    11,    46,    47,     0,    75,     0,     0,     0,    39,
      42,    43,     0,    58,    63,    64,    67,    68,     0,    22,
      31,    34,     0,    36,     0,    73,    22,     4,     0,     0,
       0,    72,    65,    44,    22,     0,    37,     0,    40,    51,
      54,    52,    53,    49,    50,     0,     0,     0,    55,     0,
       0,     0,    59,    22,     0,     0,    29,     0,    32,     0,
       0,    21,    23,    48,    69,    71,     0,    26,    39,    42,
      45,    58,    58,    63,    63,    63,     0,     0,    31,    34,
      74,    72,    66,    22,     0,    38,    41,    56,    57,    60,
      61,    62,    27,     0,    30,    33,    70,    25,    24,    28
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -92,   125,   -92,   -92,   -13,   -92,   113,   -92,   -92,   -64,
     -92,   -92,   -92,   -92,   -92,   -92,     1,   -92,     2,   -92,
     -92,   -33,    14,    48,    15,    50,    78,   -92,   -36,   -61,
     -32,   -91,   -51,    80,     8,   -29,   -92,   115
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     5,    11,    12,    14,    23,    40,    41,
      42,    43,   134,    44,    45,    46,   106,    47,   108,    48,
      49,    58,    86,    59,    88,    60,    61,    95,    62,    98,
      63,   102,    64,    65,   116,    66,    75,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,    50,    73,    20,    72,   104,    24,    70,    71,    28,
      55,    72,   111,    96,    97,    56,    28,    39,    80,    32,
     117,    79,     1,    33,    34,     6,    99,   100,   101,    35,
      36,    37,   139,   140,   141,    81,   109,    74,   110,   126,
      50,    38,   112,    39,     4,   115,     8,    50,   123,   124,
     125,     9,    52,    53,    10,    50,    15,    54,    13,   120,
     137,   138,    28,    55,   121,   122,    17,    16,    56,   147,
     114,    18,    19,    22,    50,    26,   128,    57,   129,    25,
      27,    89,    90,    91,    92,    93,    94,    52,    53,    28,
      30,    31,    54,    51,    77,   115,    69,    28,    55,    76,
      39,    78,    74,    56,    50,    84,    85,    87,   103,   105,
     149,    89,    90,    91,    92,    93,    94,   127,   107,   133,
     130,   113,   114,   131,   132,   143,   142,   148,     7,   144,
      21,   145,   135,   118,   136,    83,    82,   119,     0,   146,
      29
};

static const yytype_int16 yycheck[] =
{
      33,    30,    38,    16,    31,    69,    19,    36,    37,    36,
      37,    31,    76,    41,    42,    42,    36,    37,    54,    13,
      84,    54,     3,    17,    18,     0,    38,    39,    40,    23,
      24,    25,   123,   124,   125,    31,    72,    33,    74,   103,
      69,    35,    78,    37,    37,    81,    28,    76,    99,   100,
     101,     4,    26,    27,    37,    84,     5,    31,    30,    95,
     121,   122,    36,    37,    96,    97,    37,    28,    42,   133,
      32,    29,     6,    11,   103,    10,   105,    51,   107,    33,
       7,    43,    44,    45,    46,    47,    48,    26,    27,    36,
       8,    34,    31,    12,     9,   131,    21,    36,    37,    28,
      37,    52,    33,    42,   133,    14,    50,    49,    21,    30,
     143,    43,    44,    45,    46,    47,    48,    22,    30,    16,
      34,    32,    32,    30,    32,    17,    22,    15,     3,   128,
      17,   129,   118,    85,   119,    57,    56,    87,    -1,   131,
      25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    54,    55,    37,    56,     0,    54,    28,     4,
      37,    57,    58,    30,    59,     5,    28,    37,    29,     6,
      57,    59,    11,    60,    57,    33,    10,     7,    36,    90,
       8,    34,    13,    17,    18,    23,    24,    25,    35,    37,
      61,    62,    63,    64,    66,    67,    68,    70,    72,    73,
      88,    12,    26,    27,    31,    37,    42,    51,    74,    76,
      78,    79,    81,    83,    85,    86,    88,    90,    74,    21,
      88,    88,    31,    81,    33,    89,    28,     9,    52,    74,
      81,    31,    86,    79,    14,    50,    75,    49,    77,    43,
      44,    45,    46,    47,    48,    80,    41,    42,    82,    38,
      39,    40,    84,    21,    62,    30,    69,    30,    71,    81,
      81,    62,    81,    32,    32,    81,    87,    62,    76,    78,
      81,    83,    83,    85,    85,    85,    62,    22,    88,    88,
      34,    30,    32,    16,    65,    75,    77,    82,    82,    84,
      84,    84,    22,    17,    69,    71,    87,    62,    15,    74
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    54,    55,    56,    57,    57,    58,    59,
      59,    60,    60,    61,    61,    61,    61,    61,    61,    61,
      61,    62,    62,    63,    64,    65,    65,    66,    67,    68,
      69,    69,    70,    71,    71,    72,    73,    74,    75,    75,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    81,    82,    82,    82,    83,
      84,    84,    84,    84,    85,    85,    85,    86,    86,    86,
      87,    87,    87,    88,    89,    89,    90
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,    12,     1,     3,     0,     5,     3,
       0,     5,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     3,     6,     2,     0,     5,     6,     3,
       3,     0,     3,     3,     0,     1,     2,     2,     3,     0,
       2,     3,     0,     1,     2,     3,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     0,     2,
       3,     3,     3,     0,     1,     2,     4,     1,     1,     3,
       3,     1,     0,     2,     3,     0,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 51 "mini_l.y" /* yacc.c:1646  */
    {	
                        (yyval.start).code = (yyvsp[-1].Terminal).code;
                        *((yyval.start).code) << (yyvsp[0].start).code->str();
                        if(!flags){
                                yyerror("No main function founded");
                        }
                        codeStr = (yyval.start).code;
                }
#line 1403 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 60 "mini_l.y" /* yacc.c:1646  */
    {	
                        (yyval.start).code = new stringstream();

                }
#line 1412 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 67 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        string place_holder = *(yyvsp[-10].Terminal).name;
                        if (place_holder.compare("main") == 0){
                                flags = true;
                        }
                        *((yyval.Terminal).code) << "func " << place_holder << "\n" << (yyvsp[-7].Terminal).code->str() << (yyvsp[-4].Terminal).code->str();
                        for(int i = 0; i < (yyvsp[-7].Terminal).vars->size(); ++i){
                                if((*(yyvsp[-7].Terminal).vars)[i].type == INT_ARR){
                                        yyerror("Invalid Input in passing in to array.");
                                } else if ((*(yyvsp[-7].Terminal).vars)[i].type == INT){
                                        *((yyval.Terminal).code) << "= " << *((*(yyvsp[-7].Terminal).vars)[i].name) << ", " << "$"<< insideOS(i) << "\n";
                                } else {
                                        yyerror("Invalid Input. passing in invalid type.");
                                }
                        }
                        *((yyval.Terminal).code) << (yyvsp[-1].Terminal).code->str() << "end func\n";
                }
#line 1435 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "mini_l.y" /* yacc.c:1646  */
    {
                        string temp = (yyvsp[0].cval);
                        Var appleiphonexs = Var();
                        appleiphonexs.type = FUNC;
                        if(!map_search(temp)){
                                map_push(temp, appleiphonexs);
                        }
                        (yyval.Terminal).name = new string();
                        *(yyval.Terminal).name = temp;
                }
#line 1450 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 101 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                        (yyval.Terminal).vars = (yyvsp[-2].Terminal).vars;
                        for(int i = 0; i < (yyvsp[0].Terminal).vars->size(); ++i){
                                (yyval.Terminal).vars->push_back((*(yyvsp[0].Terminal).vars)[i]);
                        }
                        *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                }
#line 1463 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 110 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).vars = new vector<Var>();
                }
#line 1472 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 117 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-3].Terminal).code;
                        (yyval.Terminal).type = (yyvsp[-3].Terminal).type;
                        (yyval.Terminal).length = (yyvsp[-3].Terminal).length;
                        (yyval.Terminal).vars = (yyvsp[-3].Terminal).vars;

                        Var v = Var();
                        v.type = (yyvsp[-3].Terminal).type;
                        v.length = (yyvsp[-3].Terminal).length;
                        v.name = new string();
                        *v.name = (yyvsp[-4].cval);
                        (yyval.Terminal).vars->push_back(v);
                        if((yyvsp[-3].Terminal).type == INT_ARR){
                                if((yyvsp[-3].Terminal).length <= 0){
                                        yyerror("ERROR: array size");
                                }
                                *((yyval.Terminal).code) << ".[] " << (yyvsp[-4].cval) << ", " << (yyvsp[-3].Terminal).length << "\n";
                                string s = (yyvsp[-4].cval);
                                if(!map_search(s)){
                                        map_push(s,v);
                                }
                                else{
                                        string tmp = "Invalid Input. (" + s + ") is defined multiple times.";
                                        yyerror(tmp.c_str());
                                }
                        }

            else if((yyvsp[-3].Terminal).type == INT){
                *((yyval.Terminal).code) << ". " << (yyvsp[-4].cval) << "\n";
                string s = (yyvsp[-4].cval);
                if(!map_search(s)){
                    map_push(s,v);
                } else{
                    string tmp = "Invalid Input. (" + s + ") is defined multiple times.";
                    yyerror(tmp.c_str());
                }
            } else{
                    yyerror("ERROR: invalid type");
            }



                }
#line 1520 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 163 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                        (yyval.Terminal).type = (yyvsp[0].Terminal).type;
                        (yyval.Terminal).length = (yyvsp[0].Terminal).length;
                        (yyval.Terminal).vars = (yyvsp[0].Terminal).vars;
                        Var v = Var();
                        v.type = (yyvsp[0].Terminal).type;
                        v.length = (yyvsp[0].Terminal).length;
                        v.name = new string ();
                        *v.name = (yyvsp[-1].cval);
                        (yyval.Terminal).vars->push_back(v);

                        if((yyvsp[0].Terminal).type == INT_ARR){
                                *((yyval.Terminal).code) << ".[] " << (yyvsp[-1].cval) << ", " << (yyvsp[0].Terminal).length << "\n";
                                string s = (yyvsp[-1].cval);
                                if(!map_search(s)){
                                        map_push(s,v);
                                } else {
                                        string tmp = "Invalid Input. (" + s + ") is defined multiple times.";
                                        yyerror(tmp.c_str());
                                }
                        } else if ((yyvsp[0].Terminal).type == INT) {
                                *((yyval.Terminal).code) << ". " << (yyvsp[-1].cval) << "\n";
                                string s = (yyvsp[-1].cval);
                                if(!map_search(s)){
                                        map_push(s,v);
                                } else {
                                        string tmp = "Invalid Input. (" + s + ") is defined multiple times.";
                                }
                        }
                }
#line 1556 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 195 "mini_l.y" /* yacc.c:1646  */
    {

            (yyval.Terminal).code = new stringstream();
            (yyval.Terminal).vars = new vector<Var>();
            (yyval.Terminal).type = INT;
            (yyval.Terminal).length = 0;
                }
#line 1568 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 205 "mini_l.y" /* yacc.c:1646  */
    {
                (yyval.Terminal).length = (yyvsp[-2].Terminal).length;
                (yyval.Terminal).vars = new vector<Var>();
                (yyval.Terminal).code = new stringstream();
                (yyval.Terminal).type = INT_ARR;
                }
#line 1579 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 214 "mini_l.y" /* yacc.c:1646  */
    {
                (yyval.Terminal).type = INT;
                (yyval.Terminal).vars = new vector<Var>();
                (yyval.Terminal).length = 0;
                        (yyval.Terminal).code = new stringstream();
                }
#line 1590 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 223 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1598 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 228 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1606 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 233 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1614 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 238 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1622 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 243 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1630 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 248 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1638 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 253 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1646 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 258 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                }
#line 1654 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 264 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                        *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                }
#line 1663 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 269 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                }
#line 1671 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 275 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                        *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                        if((yyvsp[-2].Terminal).type == INT && (yyvsp[0].Terminal).type == INT){
               *((yyval.Terminal).code) << "= " << *(yyvsp[-2].Terminal).name << ", " << *(yyvsp[0].Terminal).name << "\n";
            }
            else if((yyvsp[-2].Terminal).type == INT && (yyvsp[0].Terminal).type == INT_ARR){
                *((yyval.Terminal).code) << syn_create((yyvsp[-2].Terminal).name, (yyvsp[0].Terminal).name, (yyvsp[0].Terminal).index, "=[]");
            }
            else if((yyvsp[-2].Terminal).type == INT_ARR && (yyvsp[0].Terminal).type == INT && (yyvsp[-2].Terminal).value != NULL){
                *((yyval.Terminal).code) << syn_create((yyvsp[-2].Terminal).value, (yyvsp[-2].Terminal).index, (yyvsp[0].Terminal).name, "[]=");
            }
            else if((yyvsp[-2].Terminal).type == INT_ARR && (yyvsp[0].Terminal).type == INT_ARR){
                string *tmp = temp();
                *((yyval.Terminal).code) << SortingDOT(tmp) << syn_create(tmp, (yyvsp[0].Terminal).name, (yyvsp[0].Terminal).index, "=[]");
                *((yyval.Terminal).code) << syn_create((yyvsp[-2].Terminal).value, (yyvsp[-2].Terminal).index, tmp, "[]=");
            }
            else{
                yyerror("Invalid Input: expression is null.");
            }
                }
#line 1697 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 298 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).begin = label();
                        (yyval.Terminal).end = label();
                        *((yyval.Terminal).code) << (yyvsp[-4].Terminal).code->str() << "?:= " << *(yyval.Terminal).begin << ", " <<  *(yyvsp[-4].Terminal).name << "\n";
                        if((yyvsp[-1].Terminal).begin != NULL){
                                *((yyval.Terminal).code) << ":= " << *(yyvsp[-1].Terminal).begin << "\n";
                                *((yyval.Terminal).code) << ": " << *((yyval.Terminal).begin) << "\n" << (yyvsp[-2].Terminal).code->str() << ":= "+ *((yyval.Terminal).end) + "\n";
                *((yyval.Terminal).code) << ": " << *((yyvsp[-1].Terminal).begin) << "\n" << (yyvsp[-1].Terminal).code->str();
                        } else {
                                *((yyval.Terminal).code) << ": " << *((yyval.Terminal).end) << "\n" << ": " << *((yyval.Terminal).begin) << "\n"  << (yyvsp[-2].Terminal).code->str();
                        }
                        *((yyval.Terminal).code) << ": " << *((yyval.Terminal).end) << "\n";
                }
#line 1716 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 315 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                                (yyval.Terminal).begin = label();
                        }
#line 1725 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 320 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).begin = NULL;
                        }
#line 1734 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 327 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).begin = label();
                                (yyval.Terminal).parent = label();
                                (yyval.Terminal).end = label();
                                DList p = DList();
                                p.parent = (yyval.Terminal).parent;
                                p.begin = (yyval.Terminal).begin;
                                p.end = (yyval.Terminal).end;
                                dataList.push(p);
                                *((yyval.Terminal).code) << ": " << *((yyval.Terminal).parent) << "\n" << (yyvsp[-3].Terminal).code->str() << "?:= " << *(yyval.Terminal).begin << ", " << *(yyvsp[-3].Terminal).name << "\n" << ":=" << *((yyval.Terminal).end) << "\n" << ": " << *((yyval.Terminal).begin) << "\n" << (yyvsp[-1].Terminal).code->str() << ":=" << *((yyval.Terminal).parent) << "\n" << ": " << *((yyval.Terminal).end) << "\n";
                dataList.pop();
                        }
#line 1752 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 343 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).begin = label();
                                (yyval.Terminal).parent = label();
                                (yyval.Terminal).end = label();
                                DList p = DList();
                                p.parent = (yyval.Terminal).parent;
                                p.begin = (yyval.Terminal).begin;
                                p.end = (yyval.Terminal).end;
                                dataList.push(p);
                                *((yyval.Terminal).code) << ": " << *((yyval.Terminal).begin) << "\n" << (yyvsp[-3].Terminal).code->str() << ": " << *((yyval.Terminal).parent) << "\n" << (yyvsp[0].Terminal).code->str() << "?:= " << *(yyval.Terminal).begin << ", " << (yyvsp[0].Terminal).name << "\n" << ": " << *((yyval.Terminal).end) << "\n";
                            dataList.pop();
                        }
#line 1770 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 359 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                                if((yyvsp[-1].Terminal).type == INT){
                                        *((yyval.Terminal).code) << ".< " << *(yyvsp[-1].Terminal).name << "\n";  
                                } else {
                                         *((yyval.Terminal).code) << ".[]< " << *(yyvsp[-1].Terminal).name << ", " << (yyvsp[-1].Terminal).index << "\n"; 
                                }
                                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                        }
#line 1784 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 371 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                        if((yyvsp[-1].Terminal).type == INT){
                                *((yyval.Terminal).code) << ".< " << *(yyvsp[-1].Terminal).name << "\n";
                        } else {
                                *((yyval.Terminal).code) << ".[]< " << *(yyvsp[-1].Terminal).value << ", " << (yyvsp[-1].Terminal).index << "\n"; 
                        }

                        *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                }
#line 1799 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 382 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                        }
#line 1807 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 388 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                                if((yyvsp[-1].Terminal).type == INT){
                                        *((yyval.Terminal).code) << ".> " << *(yyvsp[-1].Terminal).name << "\n";
                                } else {
                                        *((yyval.Terminal).code) << ".[]> " << *(yyvsp[-1].Terminal).value << ", " << *(yyvsp[-1].Terminal).index << "\n";
                                }
                                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                        }
#line 1821 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 400 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                        if((yyvsp[-1].Terminal).type == INT){
                                *((yyval.Terminal).code) << ".> " << *(yyvsp[-1].Terminal).name << "\n";
                        } else {
                                *((yyval.Terminal).code) << ".[]> " << *(yyvsp[-1].Terminal).value << ", " << (yyvsp[-1].Terminal).index << "\n"; 
                        }

                        *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                }
#line 1836 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 411 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                        }
#line 1844 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 417 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                if(dataList.size() <= 0){
                                        yyerror("Invalid Input. invalid use of continue.");
                                } else {
                                        DList cont = dataList.top();
                                        *((yyval.Terminal).code) << ":= " << *cont.parent << "\n";
                                }
                        }
#line 1858 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 429 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).name = (yyvsp[0].Terminal).name;
                                (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                                *((yyval.Terminal).code) << "ret " << *(yyval.Terminal).name << "\n";
                        }
#line 1868 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 438 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                                if((yyvsp[0].Terminal).name != NULL && (yyvsp[0].Terminal).operator1 != NULL){
                                        (yyval.Terminal).name = temp();
                                        *((yyval.Terminal).code) << SortingDOT((yyval.Terminal).name) << syn_create((yyval.Terminal).name, (yyvsp[-1].Terminal).name, (yyvsp[0].Terminal).name, *(yyvsp[0].Terminal).operator1); 
                                } else {
                                        (yyval.Terminal).name = (yyvsp[-1].Terminal).name;
                                        (yyval.Terminal).operator1 = (yyvsp[-1].Terminal).operator1;
                                }
                        }
#line 1884 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 452 "mini_l.y" /* yacc.c:1646  */
    {
                                exp((yyval.Terminal), (yyvsp[-1].Terminal), (yyvsp[0].Terminal), "||");
                        }
#line 1892 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 456 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).operator1 = NULL;
                        }
#line 1901 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 463 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                                if((yyvsp[0].Terminal).name != NULL && (yyvsp[0].Terminal).operator1 != NULL){
                                        (yyval.Terminal).name = temp();
                                        *((yyval.Terminal).code) << SortingDOT((yyval.Terminal).name) << syn_create((yyval.Terminal).name, (yyvsp[-1].Terminal).name, (yyvsp[0].Terminal).name, *(yyvsp[0].Terminal).operator1);
                                } else {
                                        (yyval.Terminal).name = (yyvsp[-1].Terminal).name;
                                        (yyval.Terminal).operator1 = (yyvsp[-1].Terminal).operator1;
                                }
                        }
#line 1917 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 477 "mini_l.y" /* yacc.c:1646  */
    {
                                exp((yyval.Terminal), (yyvsp[-1].Terminal), (yyvsp[0].Terminal), "&&");
                        }
#line 1925 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 481 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).operator1 = NULL;
                        }
#line 1934 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 488 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                                (yyval.Terminal).name = (yyvsp[0].Terminal).name;
                        }
#line 1943 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 493 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                                (yyval.Terminal).name = temp();
                                *((yyval.Terminal).code) << SortingDOT((yyval.Terminal).name) << syn_create((yyval.Terminal).name, (yyvsp[0].Terminal).name, NULL, "!");
                        }
#line 1953 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 501 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                                *((yyval.Terminal).code) << (yyvsp[-1].Terminal).code->str();
                                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                                (yyval.Terminal).name = temp();
                                *((yyval.Terminal).code) << SortingDOT((yyval.Terminal).name) << syn_create((yyval.Terminal).name, (yyvsp[-2].Terminal).name, (yyvsp[0].Terminal).name, *(yyvsp[-1].Terminal).operator1);
                        }
#line 1965 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 509 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).name = new string();
                                *(yyval.Terminal).name = "1";
                        }
#line 1975 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 515 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).name = new string();
                                *(yyval.Terminal).name = "0";
                        }
#line 1985 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 521 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                                (yyval.Terminal).name = (yyvsp[-1].Terminal).name;
                        }
#line 1994 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 528 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).operator1 = new string();
                        *(yyval.Terminal).operator1 = "==";
                }
#line 2004 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 534 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).operator1 = new string();
                        *(yyval.Terminal).operator1 = "!=";
                }
#line 2014 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 540 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).operator1 = new string();
                        *(yyval.Terminal).operator1 = "<";
                }
#line 2024 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 546 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).operator1 = new string();
                        *(yyval.Terminal).operator1 = ">";
                }
#line 2034 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 552 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).operator1 = new string();
                        *(yyval.Terminal).operator1 = ">=";
                }
#line 2044 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 558 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).operator1 = new string();
                        *(yyval.Terminal).operator1 = "<=";
                }
#line 2054 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 566 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                        *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                        if((yyvsp[0].Terminal).name != NULL && (yyvsp[0].Terminal).operator1 != NULL){
                                (yyval.Terminal).name = temp();
                                *((yyval.Terminal).code)<< SortingDOT((yyval.Terminal).name) << syn_create((yyval.Terminal).name, (yyvsp[-1].Terminal).name, (yyvsp[0].Terminal).name, *(yyvsp[0].Terminal).operator1);
                        } else{
                                (yyval.Terminal).name = (yyvsp[-1].Terminal).name;
                                (yyval.Terminal).operator1 = (yyvsp[-1].Terminal).operator1;
                        }
                        (yyval.Terminal).type = INT;
                }
#line 2071 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 581 "mini_l.y" /* yacc.c:1646  */
    {
                                exp((yyval.Terminal), (yyvsp[-1].Terminal), (yyvsp[0].Terminal), "+");
                        }
#line 2079 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 585 "mini_l.y" /* yacc.c:1646  */
    {
                                exp((yyval.Terminal), (yyvsp[-1].Terminal), (yyvsp[0].Terminal), "-");
                        }
#line 2087 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 589 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).operator1 = NULL;
                        }
#line 2096 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 596 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                                *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                                if((yyvsp[0].Terminal).name != NULL && (yyvsp[0].Terminal).operator1 != NULL){
                                        (yyval.Terminal).name = temp();
                                        *((yyval.Terminal).code)<< SortingDOT((yyval.Terminal).name)<< syn_create((yyval.Terminal).name, (yyvsp[-1].Terminal).name, (yyvsp[0].Terminal).name, *(yyvsp[0].Terminal).operator1);
                                } else {
                                        (yyval.Terminal).name = (yyvsp[-1].Terminal).name;
                                        (yyval.Terminal).operator1 = (yyvsp[-1].Terminal).operator1;
                                }
                        }
#line 2112 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 610 "mini_l.y" /* yacc.c:1646  */
    {
                                        exp((yyval.Terminal), (yyvsp[-1].Terminal), (yyvsp[0].Terminal), "*");
                                }
#line 2120 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 614 "mini_l.y" /* yacc.c:1646  */
    {
                                        exp((yyval.Terminal), (yyvsp[-1].Terminal), (yyvsp[0].Terminal), "/");
                                }
#line 2128 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 618 "mini_l.y" /* yacc.c:1646  */
    {
                                        exp((yyval.Terminal), (yyvsp[-1].Terminal), (yyvsp[0].Terminal), "%");
                                }
#line 2136 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 622 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                                (yyval.Terminal).operator1 = NULL;
                        }
#line 2145 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 629 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                        (yyval.Terminal).name = (yyvsp[0].Terminal).name;
                }
#line 2154 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 634 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                        (yyval.Terminal).name = temp();
                        string temp = "-1";
                        *((yyval.Terminal).code)<< SortingDOT((yyval.Terminal).name) << syn_create((yyval.Terminal).name, (yyvsp[0].Terminal).name, &temp, "*");
                }
#line 2165 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 641 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                        (yyval.Terminal).name = temp();
                        *((yyval.Terminal).code) << SortingDOT((yyval.Terminal).name) << "call " << (yyvsp[-3].cval) << ", " << *(yyval.Terminal).name << "\n";
                        string temp = (yyvsp[-3].cval);
                        doNOTequal(temp);
                }
#line 2177 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 651 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                        (yyval.Terminal).name = (yyvsp[0].Terminal).name;
                        (yyval.Terminal).index = (yyvsp[0].Terminal).index;
                }
#line 2187 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 657 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                                (yyval.Terminal).name = (yyvsp[0].Terminal).name;
                                *(yyval.Terminal).name = *(yyvsp[0].Terminal).name;
                        }
#line 2197 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 663 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                                (yyval.Terminal).name = (yyvsp[-1].Terminal).name;
                        }
#line 2206 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 670 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-2].Terminal).code;
                        *((yyval.Terminal).code) << (yyvsp[0].Terminal).code->str();
                        *((yyval.Terminal).code) << "param " << *(yyvsp[-2].Terminal).name;
                }
#line 2216 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 676 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                                *((yyval.Terminal).code) << new stringstream();
                                *((yyval.Terminal).code) << "param " << *(yyvsp[0].Terminal).name;

                        }
#line 2227 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 683 "mini_l.y" /* yacc.c:1646  */
    {
                                (yyval.Terminal).code = new stringstream();
                        }
#line 2235 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 690 "mini_l.y" /* yacc.c:1646  */
    {
                (yyval.Terminal).code = (yyvsp[0].Terminal).code;
                (yyval.Terminal).type = (yyvsp[0].Terminal).type;
                string container = (yyvsp[-1].cval);
                doNOTequal(container);
                if(map_search(container) && vmap[container].type != (yyvsp[0].Terminal).type){
                        if((yyvsp[0].Terminal).type == INT_ARR){
                                string errmsg = "Invalid Input: " + container + " is not array type";
                                yyerror(errmsg.c_str());
                        } else if((yyvsp[0].Terminal).type == INT){
                                string errmsg = "Invalid Input: no index specified.";
                                yyerror(errmsg.c_str());
                        }
                }
                if ((yyvsp[0].Terminal).index == NULL){
                        (yyval.Terminal).name = new string();
                        *(yyval.Terminal).name = (yyvsp[-1].cval);
                } else {
                        (yyval.Terminal).index =(yyvsp[0].Terminal).index;
                        (yyval.Terminal).name = temp();
                        string* pepperpots = new string();
                        *pepperpots = (yyvsp[-1].cval);
                        *((yyval.Terminal).code) << SortingDOT((yyval.Terminal).name) << syn_create((yyval.Terminal).name, pepperpots, (yyvsp[0].Terminal).index, "=[]");
                        (yyval.Terminal).value = new string();
                        *(yyval.Terminal).value = (yyvsp[-1].cval);
                }
        }
#line 2267 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 719 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = (yyvsp[-1].Terminal).code;
                        (yyval.Terminal).name = NULL;
                        (yyval.Terminal).index = (yyvsp[-1].Terminal).name;
                        (yyval.Terminal).type = INT_ARR;
                }
#line 2278 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 726 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).index = NULL;
                        (yyval.Terminal).name = NULL;
                        (yyval.Terminal).type = INT;
                }
#line 2289 "mini_l.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 735 "mini_l.y" /* yacc.c:1646  */
    {
                        (yyval.Terminal).code = new stringstream();
                        (yyval.Terminal).name = new string();
                        *(yyval.Terminal).name = insideOS((yyvsp[0].val));
                        (yyval.Terminal).length = (yyvsp[0].val);
                }
#line 2300 "mini_l.tab.c" /* yacc.c:1646  */
    break;


#line 2304 "mini_l.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 741 "mini_l.y" /* yacc.c:1906  */



void doNOTequal(string key){
        if(!map_search(key)){
                string temp = "Invalid Input: " + key + " DNE.";
                yyerror(temp.c_str());
        } 
}

string insideOS (int str){
        ostringstream int2str;
        int2str << str;
        return int2str.str();
}

void map_push(string name, Var v){
    if(vmap.find(name) == vmap.end()){
        vmap[name] = v;
    }
    else{
        string tmp = "ERROR: " + name + " already exists";
        yyerror(tmp.c_str());
    }
}

bool map_search(string name){
    if(vmap.find(name) == vmap.end()){
        return false;
    }
    return true;
}

string* temp() {
        string* temp = new string();
        ostringstream os;
        os << temp_count;
        *temp = "_temp_" + os.str();
        temp_count++;
        return temp;
}

void exp(Terminal &a, Terminal b, Terminal c, string d){
        a.code = b.code;
        *(a.code) << c.code->str();
        if(c.operator1 == NULL){
                a.name = b.name;
                a.operator1 = new string();
                *a.operator1 = d;
        } else {
                a.name = temp();
                a.operator1 = new string();
                *a.operator1 = d;
                *(a.code) << SortingDOT(a.name) << syn_create(a.name, b.name, c.name, *c.operator1);
        }
}

string* label() {
        string* temp = new string();
        ostringstream os;
        os << label_count;
        *temp = "_label_" + os.str();
        label_count++;
        return temp;
}

string syn_create(string *name, string *first, string *second, string operator1) 
{
        return (operator1 == "!") ? operator1 + " " + *name + ", " + *first + "\n" : operator1 + " " + *name + ", " + *first + ", "+ *second +"\n";
}

string SortingDOT(string *s)
{ 
        return ". " + *s + "\n"; 
}

//main progarm
// contain the automatic input file function


int yyerror(const char *s)
{
        extern int currLine, currPos;
        extern char *yytext;	
        printf("At line %d: %s\n",currLine,s);
        success = false;
        exit(1);
}


int main(int argc, char **argv) {

    if ( (argc > 1) && (fileDir = fopen(argv[1],"r")) == NULL){
        printf("syntax: %s filename\n", argv[0]);
        return 1;
    }
    yyparse();

    if(success)
    {
        ofstream file;
        file.open("mil_code.mil");
        file << codeStr->str();
        file.close();
    }
    
    else{
        cout << "**Errors exist, fix to compile code**" << endl;
    }

    return 0;
}

