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
#line 1 "./syntax.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <string.h>
    #include "lex.yy.c"

    int haveError = 0;

    void yyerror(char* msg){
        printf("Error type B at Line %d: %s.\n", yylval.treeNode->nodeRow, msg);
        haveError = 1;
    }

    int yyparse(void);


    struct TreeNode* treeRoot;
    

#line 85 "./syntax.tab.c" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "syntax.tab.h".  */
#ifndef YY_YY_SYNTAX_TAB_H_INCLUDED
# define YY_YY_SYNTAX_TAB_H_INCLUDED
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
    SEMI = 258,
    COMMA = 259,
    ASSIGNOP = 260,
    RELOP = 261,
    PLUS = 262,
    MINUS = 263,
    STAR = 264,
    DIV = 265,
    AND = 266,
    OR = 267,
    DOT = 268,
    NOT = 269,
    TYPE = 270,
    LP = 271,
    RP = 272,
    LB = 273,
    RB = 274,
    LC = 275,
    RC = 276,
    STRUCT = 277,
    RETURN = 278,
    IF = 279,
    ELSE = 280,
    WHILE = 281,
    INT = 282,
    FLOAT = 283,
    ID = 284,
    UMINUS = 285,
    LOWER_THAN_ELSE = 286
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 23 "./syntax.y" /* yacc.c:355  */

  struct TreeNode* treeNode;

#line 161 "./syntax.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_SYNTAX_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 192 "./syntax.tab.c" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  14
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   432

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  32
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  156

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   286

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
      25,    26,    27,    28,    29,    30,    31
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   112,   112,   118,   123,   127,   133,   138,   144,   147,
     150,   154,   158,   167,   171,   176,   184,   189,   193,   197,
     201,   208,   212,   219,   223,   230,   236,   239,   242,   246,
     252,   257,   265,   272,   276,   281,   285,   290,   294,   300,
     308,   318,   326,   329,   332,   335,   341,   346,   350,   356,
     359,   363,   367,   374,   378,   387,   393,   399,   405,   411,
     417,   423,   429,   435,   441,   446,   451,   456,   462,   468,
     474,   480,   484,   488,   492,   495,   498,   501,   504,   507,
     510,   513,   516,   519,   522,   525,   528,   532,   538
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "SEMI", "COMMA", "ASSIGNOP", "RELOP",
  "PLUS", "MINUS", "STAR", "DIV", "AND", "OR", "DOT", "NOT", "TYPE", "LP",
  "RP", "LB", "RB", "LC", "RC", "STRUCT", "RETURN", "IF", "ELSE", "WHILE",
  "INT", "FLOAT", "ID", "UMINUS", "LOWER_THAN_ELSE", "$accept", "Program",
  "ExtDefList", "ExtDef", "ExtDecList", "Specifier", "StructSpecifier",
  "OptTag", "Tag", "VarDec", "FunDec", "VarList", "ParamDec", "CompSt",
  "StmtList", "Stmt", "DefList", "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
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
     285,   286
};
# endif

#define YYPACT_NINF -67

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-67)))

#define YYTABLE_NINF -66

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     109,   255,   -67,   -12,    13,   -67,   109,    20,   -67,   -67,
      17,     4,     7,   -67,   -67,   -67,    50,   -67,   162,    49,
       0,    37,   -67,   125,   -67,    -6,    42,   147,   -67,    31,
      24,    47,   -67,    57,    21,    61,    -6,    31,    63,    82,
     -67,    73,   -67,    84,   -67,   -67,    69,    86,    97,    71,
     -67,   100,    59,    55,   103,   -67,   -67,   111,   -67,    -6,
     -67,   -67,   -67,   -67,   -67,   124,    18,   122,   127,   144,
     121,   123,   -67,   -67,   126,   -67,   132,    71,   282,   -67,
     253,   -67,   -67,    31,   -67,   -67,   -67,   408,   -67,    -3,
     140,   340,   141,   296,   253,   253,   105,   -67,   -67,   156,
     -67,   160,   169,   178,   194,   203,   212,   228,   237,   138,
     246,   382,   -67,   -67,   -67,   -67,   -67,   -67,   354,   368,
     158,   -67,   311,   164,   -67,   -67,   382,   -67,   402,   -67,
     414,   -67,   414,   -67,    -3,   -67,    -3,   -67,   395,   -67,
     395,   -67,   163,   325,    88,    88,   -67,   253,   -67,   -67,
     -67,   159,   -67,   -67,    88,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    13,    19,     0,     2,     0,     0,    14,     8,
       0,    20,     0,    16,     1,     3,     0,     6,     0,     0,
      11,     0,    10,     0,     9,     0,     0,     0,     5,     0,
       0,     0,     7,     0,     0,     0,    47,     0,     0,    30,
      27,     0,    25,     0,    21,    12,     0,     0,     0,     0,
      17,     0,    53,     0,    51,    15,    46,    31,    28,     0,
      26,    24,    23,    22,    33,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    71,    37,     0,     0,     0,    49,
       0,    50,    48,     0,    29,    42,    83,    64,    84,    66,
       0,     0,     0,     0,     0,     0,     0,    32,    34,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,    52,    82,    63,    45,    44,    38,     0,     0,
       0,    68,    88,     0,    43,    74,    55,    77,    58,    78,
      59,    79,    60,    80,    61,    81,    62,    75,    56,    76,
      57,    70,     0,     0,     0,     0,    85,     0,    67,    86,
      69,    39,    41,    87,     0,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   184,   -67,   170,     6,   -67,   -67,   -67,   -29,
     -67,   -16,   -67,   172,   114,   -61,    89,   -67,   117,   -67,
     -66,    54
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     4,     5,     6,    19,    34,     8,    12,    13,    20,
      21,    38,    39,    75,    76,    77,    35,    36,    53,    54,
      78,   123
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      87,    89,    91,    93,    29,    52,     7,    10,    57,     2,
     109,    43,     7,    14,   111,   110,     3,    11,    30,    86,
      22,    16,    51,    17,   -18,    46,    66,    23,   118,   119,
     122,    37,    67,    37,    68,   126,   128,   130,   132,   134,
     136,   138,   140,    84,   143,    72,    73,    74,    48,    18,
      44,    47,    28,    24,    52,   -47,    81,    31,    82,    40,
      44,   -47,     2,   -47,    80,    37,    25,   -47,   -47,     3,
     -47,   -47,    65,   -47,   -47,   -47,   -47,    30,    50,    66,
      58,   122,    55,   151,   152,    67,    59,    68,    62,    65,
      60,    31,   -35,   155,    69,    70,    66,    71,    72,    73,
      74,    61,    67,    79,    68,    63,   120,    83,    31,    -4,
       1,    69,    70,    66,    71,    72,    73,    74,    64,    67,
      49,    68,   121,    88,     2,    56,    33,    85,    90,    30,
      66,     3,    72,    73,    74,    66,    67,    94,    68,    95,
       2,    67,    96,    68,   115,    92,   -47,     3,    41,    72,
      73,    74,    66,    97,    72,    73,    74,   113,    67,   124,
      68,   125,     2,    26,    42,   -21,   -21,   141,    66,     3,
     127,    72,    73,    74,    67,   146,    68,    66,    27,   129,
     -21,   148,   149,    67,   154,    68,    66,    72,    73,    74,
      15,    98,    67,    32,    68,   131,    72,    73,    74,    45,
     112,   153,    66,     0,   133,    72,    73,    74,    67,     0,
      68,    66,     0,   135,     0,     0,     0,    67,     0,    68,
      66,    72,    73,    74,     0,     0,    67,     0,    68,   137,
      72,    73,    74,     0,     0,     0,    66,     0,   139,    72,
      73,    74,    67,     0,    68,    66,     0,   142,     0,     0,
       0,    67,     0,    68,    66,    72,    73,    74,     9,     0,
      67,    66,    68,     0,    72,    73,    74,    67,     0,    68,
       2,     0,     0,    72,    73,    74,     0,     3,     0,     0,
      72,    73,    74,    99,     0,   100,     0,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,   116,     0,   117,
     110,   101,   102,   103,   104,   105,   106,   107,   108,   109,
       0,     0,     0,     0,   110,   147,   101,   102,   103,   104,
     105,   106,   107,   108,   109,     0,     0,     0,     0,   110,
     101,   102,   103,   104,   105,   106,   107,   108,   109,     0,
       0,     0,     0,   110,   150,   101,   102,   103,   104,   105,
     106,   107,   108,   109,     0,     0,     0,   114,   110,   101,
     102,   103,   104,   105,   106,   107,   108,   109,     0,     0,
       0,   144,   110,   101,   102,   103,   104,   105,   106,   107,
     108,   109,     0,     0,     0,   145,   110,   101,   102,   103,
     104,   105,   106,   107,   108,   109,     0,     0,     0,     0,
     110,   102,   103,   104,   105,   106,     0,     0,   109,   103,
     104,   105,   106,   110,     0,   109,     0,   -65,   -65,     0,
     110,   109,     0,   105,   106,     0,   110,   109,     0,     0,
       0,     0,   110
};

static const yytype_int16 yycheck[] =
{
      66,    67,    68,    69,     4,    34,     0,     1,    37,    15,
      13,    27,     6,     0,    80,    18,    22,    29,    18,     1,
       3,     1,     1,     3,    20,     1,     8,    20,    94,    95,
      96,    25,    14,    27,    16,   101,   102,   103,   104,   105,
     106,   107,   108,    59,   110,    27,    28,    29,     1,    29,
      29,    27,     3,     3,    83,     8,     1,    20,     3,    17,
      29,    14,    15,    16,     5,    59,    16,    20,    21,    22,
      23,    24,     1,    26,    27,    28,    29,    18,    21,     8,
      17,   147,    21,   144,   145,    14,     4,    16,    19,     1,
      17,    20,    21,   154,    23,    24,     8,    26,    27,    28,
      29,    17,    14,     3,    16,    19,     1,     4,    20,     0,
       1,    23,    24,     8,    26,    27,    28,    29,    21,    14,
      31,    16,    17,     1,    15,    36,     1,     3,     1,    18,
       8,    22,    27,    28,    29,     8,    14,    16,    16,    16,
      15,    14,    16,    16,     3,     1,    21,    22,     1,    27,
      28,    29,     8,    21,    27,    28,    29,    17,    14,     3,
      16,     1,    15,     1,    17,     3,     4,    29,     8,    22,
       1,    27,    28,    29,    14,    17,    16,     8,    16,     1,
      18,    17,    19,    14,    25,    16,     8,    27,    28,    29,
       6,    77,    14,    21,    16,     1,    27,    28,    29,    29,
      83,   147,     8,    -1,     1,    27,    28,    29,    14,    -1,
      16,     8,    -1,     1,    -1,    -1,    -1,    14,    -1,    16,
       8,    27,    28,    29,    -1,    -1,    14,    -1,    16,     1,
      27,    28,    29,    -1,    -1,    -1,     8,    -1,     1,    27,
      28,    29,    14,    -1,    16,     8,    -1,     1,    -1,    -1,
      -1,    14,    -1,    16,     8,    27,    28,    29,     3,    -1,
      14,     8,    16,    -1,    27,    28,    29,    14,    -1,    16,
      15,    -1,    -1,    27,    28,    29,    -1,    22,    -1,    -1,
      27,    28,    29,     1,    -1,     3,    -1,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,     1,    -1,     3,
      18,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      -1,    -1,    -1,    -1,    18,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,    18,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    -1,
      -1,    -1,    -1,    18,    19,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    -1,    -1,    -1,    17,    18,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    -1,    -1,
      -1,    17,    18,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    -1,    -1,    -1,    17,    18,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    -1,    -1,    -1,    -1,
      18,     6,     7,     8,     9,    10,    -1,    -1,    13,     7,
       8,     9,    10,    18,    -1,    13,    -1,     9,    10,    -1,
      18,    13,    -1,     9,    10,    -1,    18,    13,    -1,    -1,
      -1,    -1,    18
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,    15,    22,    33,    34,    35,    37,    38,     3,
      37,    29,    39,    40,     0,    34,     1,     3,    29,    36,
      41,    42,     3,    20,     3,    16,     1,    16,     3,     4,
      18,    20,    45,     1,    37,    48,    49,    37,    43,    44,
      17,     1,    17,    43,    29,    36,     1,    27,     1,    48,
      21,     1,    41,    50,    51,    21,    48,    41,    17,     4,
      17,    17,    19,    19,    21,     1,     8,    14,    16,    23,
      24,    26,    27,    28,    29,    45,    46,    47,    52,     3,
       5,     1,     3,     4,    43,     3,     1,    52,     1,    52,
       1,    52,     1,    52,    16,    16,    16,    21,    46,     1,
       3,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      18,    52,    50,    17,    17,     3,     1,     3,    52,    52,
       1,    17,    52,    53,     3,     1,    52,     1,    52,     1,
      52,     1,    52,     1,    52,     1,    52,     1,    52,     1,
      52,    29,     1,    52,    17,    17,    17,     4,    17,    19,
      19,    47,    47,    53,    25,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    32,    33,    34,    34,    35,    35,    35,    35,    35,
      35,    36,    36,    37,    37,    38,    38,    38,    39,    39,
      40,    41,    41,    41,    42,    42,    42,    42,    42,    43,
      43,    44,    45,    45,    46,    46,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    48,    48,    49,    49,
      49,    50,    50,    51,    51,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    53,    53
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     2,     3,
       3,     1,     3,     1,     1,     5,     2,     5,     1,     0,
       1,     1,     4,     4,     4,     3,     4,     3,     4,     3,
       1,     2,     4,     3,     2,     0,     2,     1,     3,     5,
       7,     5,     2,     3,     3,     3,     2,     0,     3,     3,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     2,     2,     2,     4,     3,     4,
       3,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     4,     4,     3,     1
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


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
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
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
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
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 112 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Program", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
    treeRoot = (yyval.treeNode);
}
#line 1526 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 118 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("ExtDefList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1536 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 123 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = NULL;
}
#line 1544 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 127 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("ExtDef", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1555 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 133 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("ExtDef", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1565 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 138 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("ExtDef", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1576 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 144 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1584 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 147 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1592 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 150 "./syntax.y" /* yacc.c:1646  */
    {

;}
#line 1600 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 154 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("ExtDecList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1609 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("ExtDecList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1620 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 167 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Specifier", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1629 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 171 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Specifier", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1638 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 176 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("StructSpecifier", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-4].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1651 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 184 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("StructSpecifier", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1661 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 189 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1669 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 193 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("OptTag", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1678 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 197 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = NULL;
}
#line 1686 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 201 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Tag", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1695 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 208 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("VarDec", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1704 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 212 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("VarDec", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1716 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 219 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1724 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 223 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("FunDec", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1736 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 230 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("FunDec", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1747 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 236 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1755 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 239 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1763 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 242 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1771 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 246 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("VarList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1782 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 252 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("VarList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1791 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 257 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("ParamDec", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1801 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 265 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("CompSt", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1813 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 272 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1821 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 276 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("StmtList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1831 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 281 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = NULL;
}
#line 1839 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 285 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Stmt", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1849 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 290 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Stmt", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1858 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 294 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Stmt", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1869 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 300 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Stmt", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-4].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1882 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 308 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Stmt", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-6].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-5].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-4].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1897 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 318 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Stmt", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-4].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1910 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 326 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1918 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 329 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1926 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1934 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 335 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1942 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 341 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("DefList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1952 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 346 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = NULL;
}
#line 1960 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 350 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Def", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1971 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 356 "./syntax.y" /* yacc.c:1646  */
    {

}
#line 1979 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 359 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 1987 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 363 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("DecList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 1996 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 367 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("DecList", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2007 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 374 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Dec", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2016 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 378 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Dec", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2027 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 387 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2038 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 393 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2049 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 399 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2060 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 405 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2071 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 411 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2082 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 417 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2093 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 423 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2104 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 429 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2115 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 435 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2126 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 441 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2136 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 446 "./syntax.y" /* yacc.c:1646  */
    {
	(yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
	addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2146 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 451 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2156 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 456 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
}
#line 2167 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 462 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2178 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 468 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-3].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
}
#line 2189 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 474 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2200 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 480 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2209 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 484 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2218 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 488 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Exp", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2227 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 492 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2235 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 495 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2243 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 498 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2251 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 501 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2259 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 504 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2267 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 507 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2275 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 510 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2283 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 513 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2291 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 516 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2299 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 519 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2307 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 522 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2315 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 525 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2323 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 528 "./syntax.y" /* yacc.c:1646  */
    {
    
}
#line 2331 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 532 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Args", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[-2].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[-1].treeNode));
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2342 "./syntax.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 538 "./syntax.y" /* yacc.c:1646  */
    {
    (yyval.treeNode) = createTreeNode("Args", NULL, TYPE_NONTERMINAL, (yyloc).first_line);
    addTreeNodeChild((yyval.treeNode), (yyvsp[0].treeNode));
}
#line 2351 "./syntax.tab.c" /* yacc.c:1646  */
    break;


#line 2355 "./syntax.tab.c" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
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
#line 545 "./syntax.y" /* yacc.c:1906  */
