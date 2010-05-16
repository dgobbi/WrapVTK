
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 15 "vtkParse.y"


/*

This file must be translated to C and modified to build everywhere.

Run yacc like this:

  yacc -b vtkParse vtkParse.y

Modify vtkParse.tab.c:
  - remove TABs
  - remove yyerrorlab stuff in range ["goto yyerrlab1;", "yyerrstatus = 3;")

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define yyerror(a) fprintf(stderr,"%s\n",a)
#define yywrap() 1

/* Make sure yacc-generated code knows we have included stdlib.h.  */
#ifndef _STDLIB_H
# define _STDLIB_H
#endif
#define YYINCLUDED_STDLIB_H

/* Map from the type enumeration in vtkType.h to the VTK wrapping type
   system number for the type. */

#include "vtkParseType.h"

static int vtkParseTypeMap[] =
  {
   VTK_PARSE_VOID,               /* VTK_VOID                0 */
   0,                            /* VTK_BIT                 1 */
   VTK_PARSE_CHAR,               /* VTK_CHAR                2 */
   VTK_PARSE_UNSIGNED_CHAR,      /* VTK_UNSIGNED_CHAR       3 */
   VTK_PARSE_SHORT,              /* VTK_SHORT               4 */
   VTK_PARSE_UNSIGNED_SHORT,     /* VTK_UNSIGNED_SHORT      5 */
   VTK_PARSE_INT,                /* VTK_INT                 6 */
   VTK_PARSE_UNSIGNED_INT,       /* VTK_UNSIGNED_INT        7 */
   VTK_PARSE_LONG,               /* VTK_LONG                8 */
   VTK_PARSE_UNSIGNED_LONG,      /* VTK_UNSIGNED_LONG       9 */
   VTK_PARSE_FLOAT,              /* VTK_FLOAT              10 */
   VTK_PARSE_DOUBLE,             /* VTK_DOUBLE             11 */
   VTK_PARSE_ID_TYPE,            /* VTK_ID_TYPE            12 */
   VTK_PARSE_STRING,             /* VTK_STRING             13 */
   0,                            /* VTK_OPAQUE             14 */
   VTK_PARSE_SIGNED_CHAR,        /* VTK_SIGNED_CHAR        15 */
   VTK_PARSE_LONG_LONG,          /* VTK_LONG_LONG          16 */
   VTK_PARSE_UNSIGNED_LONG_LONG, /* VTK_UNSIGNED_LONG_LONG 17 */
   VTK_PARSE___INT64,            /* VTK___INT64            18 */
   VTK_PARSE_UNSIGNED___INT64    /* VTK_UNSIGNED___INT64   19 */
  };

/* Define some constants to simplify references to the table lookup in
   the type_primitive production rule code.  */
#include "vtkType.h"
#define VTK_PARSE_INT8 vtkParseTypeMap[VTK_TYPE_INT8]
#define VTK_PARSE_UINT8 vtkParseTypeMap[VTK_TYPE_UINT8]
#define VTK_PARSE_INT16 vtkParseTypeMap[VTK_TYPE_INT16]
#define VTK_PARSE_UINT16 vtkParseTypeMap[VTK_TYPE_UINT16]
#define VTK_PARSE_INT32 vtkParseTypeMap[VTK_TYPE_INT32]
#define VTK_PARSE_UINT32 vtkParseTypeMap[VTK_TYPE_UINT32]
#define VTK_PARSE_INT64 vtkParseTypeMap[VTK_TYPE_INT64]
#define VTK_PARSE_UINT64 vtkParseTypeMap[VTK_TYPE_UINT64]
#define VTK_PARSE_FLOAT32 vtkParseTypeMap[VTK_TYPE_FLOAT32]
#define VTK_PARSE_FLOAT64 vtkParseTypeMap[VTK_TYPE_FLOAT64]

/* Define the division between type and array count */
#define VTK_PARSE_COUNT_START 0x10000

static void vtkParseDebug(const char* s1, const char* s2);

/* Borland and MSVC do not define __STDC__ properly. */
#if !defined(__STDC__)
# if (defined(_MSC_VER) && _MSC_VER >= 1200) || defined(__BORLANDC__)
#  define __STDC__ 1
# endif
#endif

/* Disable warnings in generated code. */
#if defined(_MSC_VER)
# pragma warning (disable: 4127) /* conditional expression is constant */
# pragma warning (disable: 4244) /* conversion to smaller integer type */
#endif
#if defined(__BORLANDC__)
# pragma warn -8004 /* assigned a value that is never used */
# pragma warn -8008 /* conditional is always true */
# pragma warn -8066 /* unreachable code */
#endif

int yylex(void);
void output_function(void);

/* vtkstrdup is not part of POSIX so we create our own */
char *vtkstrdup(const char *in)
{
  char *res = malloc(strlen(in)+1);
  strcpy(res,in);
  return res;
}

#include "vtkParse.h"

  FileInfo data;
  FunctionInfo *currentFunction;

  FILE *fhint;
  char temps[2048];
  int  in_public;
  int  in_protected;
  int  HaveComment;
  char CommentText[50000];
  int CommentState;
  int openSig;
  int invertSig;
  unsigned int sigAllocatedLength;

#define YYMAXDEPTH 1000

  void checkSigSize(const char *arg)
    {
    if (strlen(currentFunction->Signature) + strlen(arg) + 3 >
        sigAllocatedLength)
      {
      currentFunction->Signature = (char *)
        realloc(currentFunction->Signature, sigAllocatedLength*2);
      sigAllocatedLength = sigAllocatedLength*2;
      }
    }
  void preSig(const char *arg)
    {
    if (!currentFunction->Signature)
      {
      currentFunction->Signature = (char*)malloc(2048);
      sigAllocatedLength = 2048;
      sprintf(currentFunction->Signature,"%s",arg);
      }
    else if (openSig)
      {
      char *tmp;
      checkSigSize(arg);
      tmp = vtkstrdup(currentFunction->Signature);
      sprintf(currentFunction->Signature,"%s%s",arg,tmp);
      free(tmp);
      }
    }
  void postSig(const char *arg)
    {
    if (!currentFunction->Signature)
      {
      currentFunction->Signature = (char*)malloc(2048);
      sigAllocatedLength = 2048;
      sprintf(currentFunction->Signature,"%s",arg);
      }
    else if (openSig)
      {
      char *tmp;
      checkSigSize(arg);
      tmp = vtkstrdup(currentFunction->Signature);
      if (invertSig)
        {
        sprintf(currentFunction->Signature,"%s%s",arg,tmp);
        }
      else
        {
        sprintf(currentFunction->Signature,"%s%s",tmp,arg);
        }
      free(tmp);
      }
    }
  void delSig(void)
    {
    if (currentFunction->Signature)
      {
      free(currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    }
  void legacySig(void)
    {
    currentFunction->IsLegacy = 1;
    }


/* Line 189 of yacc.c  */
#line 262 "vtkParse.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     CLASS = 258,
     PUBLIC = 259,
     PRIVATE = 260,
     PROTECTED = 261,
     VIRTUAL = 262,
     STRING = 263,
     NUM = 264,
     ID = 265,
     INT = 266,
     FLOAT = 267,
     SHORT = 268,
     LONG = 269,
     LONG_LONG = 270,
     INT64__ = 271,
     DOUBLE = 272,
     VOID = 273,
     CHAR = 274,
     SIGNED_CHAR = 275,
     BOOL = 276,
     OSTREAM = 277,
     ISTREAM = 278,
     ENUM = 279,
     UNION = 280,
     CLASS_REF = 281,
     OTHER = 282,
     CONST = 283,
     OPERATOR = 284,
     UNSIGNED = 285,
     FRIEND = 286,
     INLINE = 287,
     MUTABLE = 288,
     TEMPLATE = 289,
     TYPENAME = 290,
     TYPEDEF = 291,
     NAMESPACE = 292,
     USING = 293,
     VTK_ID = 294,
     STATIC = 295,
     VAR_FUNCTION = 296,
     ARRAY_NUM = 297,
     VTK_LEGACY = 298,
     NEW = 299,
     DELETE = 300,
     FUNCPOINTER_LPAREN = 301,
     OP_LSHIFT_EQ = 302,
     OP_RSHIFT_EQ = 303,
     OP_LSHIFT = 304,
     OP_RSHIFT = 305,
     OP_ARROW = 306,
     OP_INCR = 307,
     OP_DECR = 308,
     OP_PLUS_EQ = 309,
     OP_MINUS_EQ = 310,
     OP_TIMES_EQ = 311,
     OP_DIVIDE_EQ = 312,
     OP_REMAINDER_EQ = 313,
     OP_AND_EQ = 314,
     OP_OR_EQ = 315,
     OP_XOR_EQ = 316,
     OP_LOGIC_AND_EQ = 317,
     OP_LOGIC_OR_EQ = 318,
     OP_LOGIC_AND = 319,
     OP_LOGIC_OR = 320,
     OP_LOGIC_EQ = 321,
     OP_LOGIC_NEQ = 322,
     OP_LOGIC_LEQ = 323,
     OP_LOGIC_GEQ = 324,
     ELLIPSIS = 325,
     DOUBLE_COLON = 326,
     TypeInt8 = 327,
     TypeUInt8 = 328,
     TypeInt16 = 329,
     TypeUInt16 = 330,
     TypeInt32 = 331,
     TypeUInt32 = 332,
     TypeInt64 = 333,
     TypeUInt64 = 334,
     TypeFloat32 = 335,
     TypeFloat64 = 336,
     IdType = 337,
     StdString = 338,
     UnicodeString = 339,
     SetMacro = 340,
     GetMacro = 341,
     SetStringMacro = 342,
     GetStringMacro = 343,
     SetClampMacro = 344,
     SetObjectMacro = 345,
     GetObjectMacro = 346,
     BooleanMacro = 347,
     SetVector2Macro = 348,
     SetVector3Macro = 349,
     SetVector4Macro = 350,
     SetVector6Macro = 351,
     GetVector2Macro = 352,
     GetVector3Macro = 353,
     GetVector4Macro = 354,
     GetVector6Macro = 355,
     SetVectorMacro = 356,
     GetVectorMacro = 357,
     ViewportCoordinateMacro = 358,
     WorldCoordinateMacro = 359,
     TypeMacro = 360,
     VTK_BYTE_SWAP_DECL = 361
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 203 "vtkParse.y"

  char *str;
  int   integer;



/* Line 214 of yacc.c  */
#line 517 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 529 "vtkParse.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)                \
      do                                        \
        {                                        \
          YYSIZE_T yyi;                                \
          for (yyi = 0; yyi < (Count); yyi++)        \
            (To)[yyi] = (From)[yyi];                \
        }                                        \
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                                \
    do                                                                        \
      {                                                                        \
        YYSIZE_T yynewbytes;                                                \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                        \
        Stack = &yyptr->Stack_alloc;                                        \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                                \
      }                                                                        \
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  124
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2025

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  115
/* YYNRULES -- Number of rules.  */
#define YYNRULES  345
/* YYNRULES -- Number of states.  */
#define YYNSTATES  643

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   361

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   126,     2,     2,     2,   129,   120,     2,
     110,   111,   121,   125,   115,   122,   123,   124,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   109,   112,
     113,   117,   114,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   118,     2,   119,   128,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   107,   127,   108,   116,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,     9,    11,    12,    21,    22,    30,
      32,    35,    38,    40,    43,    45,    47,    49,    51,    53,
      55,    57,    60,    62,    64,    67,    71,    75,    78,    82,
      86,    89,    93,    96,   102,   105,   107,   115,   122,   130,
     137,   141,   144,   148,   150,   155,   159,   164,   167,   176,
     184,   194,   198,   201,   205,   210,   213,   218,   221,   226,
     231,   234,   238,   240,   243,   247,   252,   256,   259,   262,
     266,   271,   275,   278,   279,   280,   285,   289,   290,   291,
     299,   300,   301,   306,   310,   311,   313,   314,   320,   321,
     324,   325,   331,   332,   335,   336,   342,   344,   346,   349,
     351,   353,   355,   360,   364,   368,   369,   371,   373,   375,
     376,   381,   384,   385,   390,   392,   400,   401,   404,   408,
     413,   416,   425,   427,   431,   433,   437,   440,   445,   448,
     449,   450,   454,   459,   462,   464,   467,   471,   473,   476,
     478,   480,   483,   487,   492,   496,   501,   505,   510,   515,
     520,   522,   526,   528,   532,   534,   538,   542,   544,   547,
     550,   552,   554,   556,   558,   560,   562,   565,   568,   569,
     573,   575,   577,   579,   581,   583,   585,   587,   589,   591,
     593,   595,   597,   599,   601,   603,   605,   607,   609,   611,
     613,   615,   617,   619,   621,   623,   625,   627,   628,   631,
     634,   635,   641,   643,   645,   647,   650,   652,   654,   658,
     660,   661,   669,   670,   671,   680,   681,   687,   688,   694,
     695,   696,   707,   708,   716,   717,   718,   727,   728,   736,
     737,   745,   746,   754,   755,   763,   764,   772,   773,   781,
     782,   790,   791,   799,   800,   808,   809,   819,   820,   830,
     835,   840,   847,   855,   858,   861,   865,   869,   871,   873,
     875,   877,   879,   881,   883,   885,   887,   889,   891,   893,
     895,   897,   899,   901,   903,   905,   907,   909,   911,   913,
     915,   917,   919,   921,   923,   925,   927,   929,   931,   933,
     935,   937,   939,   941,   943,   945,   947,   949,   950,   953,
     954,   957,   958,   961,   963,   965,   967,   969,   971,   973,
     975,   977,   979,   981,   983,   985,   987,   989,   991,   993,
     995,   997,   999,  1001,  1003,  1005,  1007,  1009,  1011,  1013,
    1015,  1017,  1019,  1021,  1023,  1025,  1027,  1029,  1031,  1035,
    1039,  1043,  1047,  1051,  1052,  1055
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     131,     0,    -1,   234,   132,   234,    -1,   133,    -1,   135,
      -1,    -1,   149,     3,    39,   134,   204,   107,   137,   108,
      -1,    -1,     3,    39,   136,   204,   107,   137,   108,    -1,
     138,    -1,   138,   137,    -1,   207,   109,    -1,   184,    -1,
      33,   184,    -1,   140,    -1,   139,    -1,   142,    -1,   141,
      -1,   143,    -1,   147,    -1,   145,    -1,    31,   145,    -1,
     144,    -1,    26,    -1,   153,   177,    -1,    31,   153,   177,
      -1,    32,   153,   177,    -1,   152,   177,    -1,    31,   152,
     177,    -1,    32,   152,   177,    -1,   148,   177,    -1,    32,
     148,   177,    -1,   151,   177,    -1,   106,   110,   234,   111,
     112,    -1,   210,   112,    -1,   210,    -1,    24,   176,   107,
     234,   108,   235,   112,    -1,    24,   107,   234,   108,   235,
     112,    -1,    25,   176,   107,   234,   108,   235,   112,    -1,
      25,   107,   234,   108,   235,   112,    -1,    38,   235,   112,
      -1,   149,   145,    -1,     3,   176,   146,    -1,   112,    -1,
     107,   234,   108,   112,    -1,   109,   235,   112,    -1,    36,
     190,   187,   112,    -1,    36,    26,    -1,    36,     3,   176,
     107,   234,   108,   176,   112,    -1,    36,     3,   107,   234,
     108,   176,   112,    -1,    36,   190,    46,   176,   111,   110,
     235,   111,   112,    -1,    36,    41,   112,    -1,   149,   152,
      -1,    34,   113,   114,    -1,    34,   113,   150,   114,    -1,
       3,    10,    -1,     3,    10,   115,   150,    -1,    35,    10,
      -1,    35,    10,   115,   150,    -1,    43,   110,   152,   111,
      -1,   116,   170,    -1,     7,   116,   170,    -1,   166,    -1,
     190,   160,    -1,   190,    28,   160,    -1,     7,   190,    28,
     160,    -1,     7,   190,   160,    -1,     7,   160,    -1,   190,
     154,    -1,   190,    28,   154,    -1,     7,   190,    28,   154,
      -1,     7,   190,   154,    -1,     7,   154,    -1,    -1,    -1,
     157,   155,   163,   156,    -1,   157,   117,     9,    -1,    -1,
      -1,    29,   232,   158,   110,   159,   178,   111,    -1,    -1,
      -1,   164,   161,   163,   162,    -1,   164,   117,     9,    -1,
      -1,    28,    -1,    -1,   176,   110,   165,   178,   111,    -1,
      -1,   168,   167,    -1,    -1,    39,   110,   169,   178,   111,
      -1,    -1,   172,   171,    -1,    -1,    39,   110,   173,   178,
     111,    -1,    28,    -1,    40,    -1,    40,    32,    -1,    39,
      -1,    10,    -1,   112,    -1,   107,   234,   108,   112,    -1,
     107,   234,   108,    -1,   109,   235,   112,    -1,    -1,   179,
      -1,    70,    -1,   181,    -1,    -1,   181,   180,   115,   179,
      -1,   190,   188,    -1,    -1,   190,   187,   182,   183,    -1,
      41,    -1,   190,    46,   176,   111,   110,   178,   111,    -1,
      -1,   117,   208,    -1,   190,   185,   112,    -1,   190,    28,
     185,   112,    -1,    41,   112,    -1,   190,    46,   176,   111,
     110,   178,   111,   112,    -1,   187,    -1,   187,   115,   186,
      -1,   187,    -1,   187,   115,   186,    -1,   200,   187,    -1,
     200,   187,   115,   186,    -1,   176,   188,    -1,    -1,    -1,
      42,   189,   188,    -1,   118,   235,   119,   188,    -1,   174,
     191,    -1,   191,    -1,   175,   191,    -1,   175,   174,   191,
      -1,   201,    -1,   201,   200,    -1,   196,    -1,   192,    -1,
     192,   200,    -1,    10,    71,   194,    -1,    10,    71,   194,
     200,    -1,    39,    71,   194,    -1,    39,    71,   194,   200,
      -1,    39,    71,   195,    -1,    39,    71,   195,   200,    -1,
     195,   113,   193,   114,    -1,   194,   113,   193,   114,    -1,
     190,    -1,   190,   115,   193,    -1,    10,    -1,    10,    71,
     194,    -1,    39,    -1,    39,    71,   194,    -1,    39,    71,
     195,    -1,   197,    -1,   197,   120,    -1,   197,   121,    -1,
     198,    -1,   199,    -1,    83,    -1,    84,    -1,   120,    -1,
     121,    -1,   120,   200,    -1,   121,   200,    -1,    -1,    30,
     202,   203,    -1,   203,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    12,    -1,    18,    -1,    19,
      -1,    11,    -1,    13,    -1,    14,    -1,    17,    -1,    22,
      -1,    23,    -1,    10,    -1,    39,    -1,    82,    -1,    15,
      -1,    16,    -1,    20,    -1,    21,    -1,    -1,   109,   205,
      -1,   207,    39,    -1,    -1,   207,    39,   206,   115,   205,
      -1,     4,    -1,     5,    -1,     6,    -1,   122,   209,    -1,
     209,    -1,     9,    -1,     9,   123,     9,    -1,   176,    -1,
      -1,    85,   110,   176,   115,   211,   191,   111,    -1,    -1,
      -1,    86,   110,   212,   176,   115,   213,   191,   111,    -1,
      -1,    87,   110,   214,   176,   111,    -1,    -1,    88,   110,
     215,   176,   111,    -1,    -1,    -1,    89,   110,   176,   115,
     216,   201,   217,   115,   235,   111,    -1,    -1,    90,   110,
     176,   115,   218,   201,   111,    -1,    -1,    -1,    91,   110,
     219,   176,   115,   220,   201,   111,    -1,    -1,    92,   110,
     176,   221,   115,   201,   111,    -1,    -1,    93,   110,   176,
     115,   222,   201,   111,    -1,    -1,    97,   110,   176,   115,
     223,   201,   111,    -1,    -1,    94,   110,   176,   115,   224,
     201,   111,    -1,    -1,    98,   110,   176,   115,   225,   201,
     111,    -1,    -1,    95,   110,   176,   115,   226,   201,   111,
      -1,    -1,    99,   110,   176,   115,   227,   201,   111,    -1,
      -1,    96,   110,   176,   115,   228,   201,   111,    -1,    -1,
     100,   110,   176,   115,   229,   201,   111,    -1,    -1,   101,
     110,   176,   115,   230,   201,   115,   208,   111,    -1,    -1,
     102,   110,   176,   115,   231,   201,   115,   208,   111,    -1,
     103,   110,   176,   111,    -1,   104,   110,   176,   111,    -1,
     105,   110,   176,   115,   176,   111,    -1,   105,   110,   176,
     115,   176,   115,   111,    -1,   110,   111,    -1,   118,   119,
      -1,    44,   118,   119,    -1,    45,   118,   119,    -1,   233,
      -1,   117,    -1,   121,    -1,   124,    -1,   122,    -1,   125,
      -1,   126,    -1,   116,    -1,   115,    -1,   113,    -1,   114,
      -1,   120,    -1,   127,    -1,   128,    -1,   129,    -1,    44,
      -1,    45,    -1,    47,    -1,    48,    -1,    49,    -1,    50,
      -1,    51,    -1,    54,    -1,    55,    -1,    56,    -1,    57,
      -1,    58,    -1,    52,    -1,    53,    -1,    59,    -1,    60,
      -1,    61,    -1,    62,    -1,    63,    -1,    64,    -1,    65,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    -1,
     238,   234,    -1,    -1,   239,   235,    -1,    -1,   237,   236,
      -1,     3,    -1,    34,    -1,   238,    -1,   112,    -1,   239,
      -1,   243,    -1,    27,    -1,   240,    -1,   241,    -1,   242,
      -1,   233,    -1,   109,    -1,   123,    -1,     8,    -1,   201,
      -1,   197,    -1,    71,    -1,     9,    -1,    26,    -1,    28,
      -1,    29,    -1,    40,    -1,    32,    -1,     7,    -1,    24,
      -1,    25,    -1,    35,    -1,    42,    -1,    41,    -1,    70,
      -1,     4,    -1,     6,    -1,     5,    -1,    37,    -1,    38,
      -1,   107,   236,   108,    -1,   110,   234,   111,    -1,    46,
     234,   111,    -1,   118,   234,   119,    -1,    36,   244,   112,
      -1,    -1,     3,   244,    -1,   239,   244,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   320,   320,   322,   322,   325,   324,   331,   330,   336,
     336,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   364,   366,   368,   370,
     372,   374,   376,   378,   379,   380,   382,   383,   384,   385,
     386,   387,   389,   391,   391,   393,   393,   394,   394,   396,
     398,   399,   400,   401,   405,   409,   414,   419,   425,   429,
     433,   438,   443,   448,   448,   448,   454,   463,   464,   463,
     470,   470,   470,   476,   485,   485,   487,   487,   489,   489,
     496,   496,   498,   498,   507,   507,   509,   511,   512,   514,
     514,   516,   517,   518,   519,   521,   521,   523,   523,   524,
     524,   526,   534,   533,   540,   546,   548,   548,   550,   551,
     552,   553,   555,   555,   557,   558,   559,   560,   562,   570,
     571,   571,   574,   577,   578,   579,   580,   582,   583,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   595,   596,
     598,   598,   600,   600,   601,   601,   602,   604,   605,   606,
     608,   609,   611,   613,   622,   623,   624,   625,   627,   627,
     629,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   658,   677,   678,   679,   680,   681,   683,   683,   685,
     691,   690,   696,   697,   698,   700,   700,   702,   703,   703,
     707,   706,   718,   718,   718,   727,   727,   738,   738,   748,
     749,   747,   780,   779,   791,   792,   791,   801,   800,   818,
     817,   848,   847,   865,   864,   897,   896,   914,   913,   948,
     947,   965,   964,  1003,  1002,  1020,  1019,  1038,  1037,  1054,
    1101,  1150,  1201,  1258,  1259,  1260,  1261,  1262,  1264,  1265,
    1265,  1266,  1266,  1267,  1267,  1268,  1268,  1269,  1269,  1270,
    1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,  1279,
    1280,  1281,  1282,  1283,  1284,  1285,  1286,  1287,  1288,  1289,
    1290,  1291,  1292,  1293,  1294,  1295,  1296,  1301,  1301,  1302,
    1302,  1303,  1303,  1305,  1305,  1305,  1307,  1307,  1307,  1309,
    1309,  1309,  1309,  1309,  1310,  1310,  1310,  1310,  1310,  1310,
    1311,  1311,  1311,  1311,  1311,  1311,  1311,  1312,  1312,  1312,
    1312,  1312,  1312,  1313,  1313,  1313,  1313,  1313,  1315,  1316,
    1316,  1317,  1318,  1320,  1320,  1321
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PUBLIC", "PRIVATE",
  "PROTECTED", "VIRTUAL", "STRING", "NUM", "ID", "INT", "FLOAT", "SHORT",
  "LONG", "LONG_LONG", "INT64__", "DOUBLE", "VOID", "CHAR", "SIGNED_CHAR",
  "BOOL", "OSTREAM", "ISTREAM", "ENUM", "UNION", "CLASS_REF", "OTHER",
  "CONST", "OPERATOR", "UNSIGNED", "FRIEND", "INLINE", "MUTABLE",
  "TEMPLATE", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "VTK_ID",
  "STATIC", "VAR_FUNCTION", "ARRAY_NUM", "VTK_LEGACY", "NEW", "DELETE",
  "FUNCPOINTER_LPAREN", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT", "OP_ARROW", "OP_INCR", "OP_DECR", "OP_PLUS_EQ",
  "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ", "OP_REMAINDER_EQ",
  "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ", "OP_LOGIC_AND_EQ",
  "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR", "OP_LOGIC_EQ",
  "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ", "ELLIPSIS",
  "DOUBLE_COLON", "TypeInt8", "TypeUInt8", "TypeInt16", "TypeUInt16",
  "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64", "TypeFloat32",
  "TypeFloat64", "IdType", "StdString", "UnicodeString", "SetMacro",
  "GetMacro", "SetStringMacro", "GetStringMacro", "SetClampMacro",
  "SetObjectMacro", "GetObjectMacro", "BooleanMacro", "SetVector2Macro",
  "SetVector3Macro", "SetVector4Macro", "SetVector6Macro",
  "GetVector2Macro", "GetVector3Macro", "GetVector4Macro",
  "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "'{'", "'}'", "':'", "'('", "')'", "';'", "'<'",
  "'>'", "','", "'~'", "'='", "'['", "']'", "'&'", "'*'", "'-'", "'.'",
  "'/'", "'+'", "'!'", "'|'", "'^'", "'%'", "$accept", "strt", "class_def",
  "template_class_def", "$@1", "non_template_class_def", "$@2",
  "class_def_body", "class_def_item", "named_enum", "enum", "named_union",
  "union", "using", "template_internal_class", "internal_class",
  "internal_class_body", "typedef", "template_function", "template",
  "template_args", "legacy_function", "function", "operator", "op_func",
  "@3", "$@4", "op_sig", "$@5", "$@6", "func", "$@7", "$@8", "maybe_const",
  "func_sig", "$@9", "constructor", "$@10", "constructor_sig", "$@11",
  "destructor", "$@12", "destructor_sig", "$@13", "const_mod",
  "static_mod", "any_id", "func_body", "args_list", "more_args", "$@14",
  "arg", "$@15", "opt_var_assign", "var", "var_ids",
  "maybe_indirect_var_ids", "var_id", "var_array", "$@16", "type",
  "type_red1", "type_templated", "types", "scoped_id", "vtk_scoped_id",
  "type_string1", "type_string2", "type_string3", "type_string4",
  "type_indirection", "type_red2", "$@17", "type_primitive",
  "optional_scope", "scope_list", "$@18", "scope_type", "float_num",
  "float_prim", "macro", "$@19", "$@20", "$@21", "$@22", "$@23", "$@24",
  "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33",
  "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "op_token",
  "op_token_no_delim", "maybe_other", "maybe_other_no_semi",
  "maybe_other_class", "other_stuff_or_class", "other_stuff",
  "other_stuff_no_semi", "braces", "parens", "brackets", "typedef_ignore",
  "typedef_ignore_body", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   123,   125,    58,
      40,    41,    59,    60,    62,    44,   126,    61,    91,    93,
      38,    42,    45,    46,    47,    43,    33,   124,    94,    37
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   130,   131,   132,   132,   134,   133,   136,   135,   137,
     137,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   138,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   146,   146,   147,   147,   147,   147,
     147,   147,   148,   149,   149,   150,   150,   150,   150,   151,
     152,   152,   152,   152,   152,   152,   152,   152,   153,   153,
     153,   153,   153,   155,   156,   154,   154,   158,   159,   157,
     161,   162,   160,   160,   163,   163,   165,   164,   167,   166,
     169,   168,   171,   170,   173,   172,   174,   175,   175,   176,
     176,   177,   177,   177,   177,   178,   178,   179,   179,   180,
     179,   181,   182,   181,   181,   181,   183,   183,   184,   184,
     184,   184,   185,   185,   186,   186,   186,   186,   187,   188,
     189,   188,   188,   190,   190,   190,   190,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   192,   192,
     193,   193,   194,   194,   195,   195,   195,   196,   196,   196,
     197,   197,   198,   199,   200,   200,   200,   200,   202,   201,
     201,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   204,   204,   205,
     206,   205,   207,   207,   207,   208,   208,   209,   209,   209,
     211,   210,   212,   213,   210,   214,   210,   215,   210,   216,
     217,   210,   218,   210,   219,   220,   210,   221,   210,   222,
     210,   223,   210,   224,   210,   225,   210,   226,   210,   227,
     210,   228,   210,   229,   210,   230,   210,   231,   210,   210,
     210,   210,   210,   232,   232,   232,   232,   232,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   233,   234,   234,   235,
     235,   236,   236,   237,   237,   237,   238,   238,   238,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   240,   241,
     241,   242,   243,   244,   244,   244
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     1,     1,     0,     8,     0,     7,     1,
       2,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     2,     3,     3,     2,     3,     3,
       2,     3,     2,     5,     2,     1,     7,     6,     7,     6,
       3,     2,     3,     1,     4,     3,     4,     2,     8,     7,
       9,     3,     2,     3,     4,     2,     4,     2,     4,     4,
       2,     3,     1,     2,     3,     4,     3,     2,     2,     3,
       4,     3,     2,     0,     0,     4,     3,     0,     0,     7,
       0,     0,     4,     3,     0,     1,     0,     5,     0,     2,
       0,     5,     0,     2,     0,     5,     1,     1,     2,     1,
       1,     1,     4,     3,     3,     0,     1,     1,     1,     0,
       4,     2,     0,     4,     1,     7,     0,     2,     3,     4,
       2,     8,     1,     3,     1,     3,     2,     4,     2,     0,
       0,     3,     4,     2,     1,     2,     3,     1,     2,     1,
       1,     2,     3,     4,     3,     4,     3,     4,     4,     4,
       1,     3,     1,     3,     1,     3,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     2,
       0,     5,     1,     1,     1,     2,     1,     1,     3,     1,
       0,     7,     0,     0,     8,     0,     5,     0,     5,     0,
       0,    10,     0,     7,     0,     0,     8,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     9,     0,     9,     4,
       4,     6,     7,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     297,   333,   335,   334,   326,   316,   320,   190,   184,   181,
     185,   186,   193,   194,   187,   182,   183,   195,   196,   188,
     189,   327,   328,   321,   309,   322,   323,   168,   325,   329,
     343,   336,   337,   191,   324,   331,   330,   272,   273,   297,
     274,   275,   276,   277,   278,   284,   285,   279,   280,   281,
     282,   283,   286,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   332,   319,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,   192,   162,   163,   301,   314,
     297,   306,   266,   267,   265,   264,   258,   297,   268,   259,
     261,   315,   260,   262,   263,   269,   270,   271,     0,   318,
     160,   161,   317,   170,   313,     0,   297,   307,   310,   311,
     312,   308,     0,   343,   343,     0,     0,   303,   304,     0,
     301,   305,     0,     0,     1,     0,     0,   297,     3,     4,
       0,   298,   169,   344,   345,   342,   340,   338,   302,   339,
     341,     7,     0,     2,     0,   197,     0,     0,    53,     0,
       5,     0,     0,    55,    57,    54,   197,   202,   203,   204,
     198,     0,     0,     0,     0,     0,   199,     0,     0,   190,
       0,     0,    23,    96,     0,     0,     0,     0,   299,   191,
      97,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    15,    14,
      17,    16,    18,    22,    20,    19,     0,     0,     0,     0,
       0,    62,    88,     0,     0,    12,     0,   134,   140,     0,
       0,   139,   157,   137,     0,    35,    56,    58,     0,     0,
     100,    99,     0,   190,     0,   191,     0,    72,    73,    67,
      80,     0,     0,     0,   297,     0,   297,     0,    21,     0,
       0,     0,     0,     0,     0,     0,   191,    13,     0,     0,
      47,     0,     0,     0,   299,     0,    90,    98,   120,     0,
       0,   212,   215,   217,     0,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   297,     0,    60,    92,     8,    10,   297,   299,   101,
      30,     0,    41,    52,     0,    32,    27,    24,    89,   133,
       0,   135,     0,     0,    68,    63,   129,     0,   122,   164,
     165,   141,     0,     0,   158,   159,   138,    11,    34,     0,
       0,   297,   299,    43,    42,   272,   273,     0,     0,    77,
     257,    61,     0,    84,     0,    84,    86,     0,    71,    66,
     152,   142,     0,   297,     0,   297,    28,    25,     0,    31,
      29,    26,     0,   129,   297,     0,    51,     0,     0,    40,
     300,   154,   144,   146,   105,     0,     0,     0,     0,     0,
       0,     0,     0,   227,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    93,
       0,     0,     0,     0,   136,    69,    64,     0,     0,   130,
     299,   128,   118,     0,   166,   167,   150,     0,     0,     6,
     201,     0,     0,     0,     0,   253,   254,     0,    76,    85,
      74,    83,    81,   105,    70,    65,     0,   143,   299,     0,
     299,     0,     0,   297,     0,    46,     0,   145,   147,   114,
     107,     0,   106,   108,   129,    59,   210,     0,     0,     0,
     219,   222,     0,     0,   229,   233,   237,   241,   231,   235,
     239,   243,   245,   247,   249,   250,     0,     0,   105,   103,
     104,     0,   119,     0,   129,     0,   123,   124,     0,     0,
     149,   148,     0,    45,   255,   256,    78,    75,    82,     0,
     153,     0,   299,     0,   299,     0,     0,     0,   155,   156,
      91,     0,     0,   112,   111,     0,   213,   216,   218,     0,
       0,   225,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,   102,   105,   131,   129,
       0,   126,   151,    44,   105,    87,    37,     0,    39,     0,
       0,     0,   299,     0,     0,   116,     0,     0,   220,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   251,     0,    95,     0,   132,   125,     0,     0,
      36,    38,    49,     0,     0,   110,     0,     0,   113,   211,
       0,     0,   223,     0,   228,   230,   234,   238,   242,   232,
     236,   240,   244,     0,     0,   252,     0,   127,    79,    48,
       0,   105,   207,     0,   209,   117,   206,   214,   299,   226,
       0,     0,   121,    50,     0,     0,   205,     0,   246,   248,
     115,   208,   221
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    98,   127,   128,   156,   129,   145,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   344,   215,   216,   217,
     149,   218,   219,   220,   324,   353,   507,   248,   437,   554,
     325,   355,   508,   440,   250,   443,   221,   318,   222,   384,
     303,   409,   304,   488,   223,   224,   251,   310,   461,   462,
     521,   463,   565,   598,   225,   327,   496,   328,   421,   494,
     464,   227,   228,   427,   229,   230,   231,    99,   100,   101,
     498,   102,   112,   103,   152,   160,   239,   234,   625,   626,
     235,   525,   387,   567,   388,   389,   529,   601,   530,   392,
     570,   473,   533,   537,   534,   538,   535,   539,   536,   540,
     541,   542,   349,   104,   105,   273,   119,   120,   106,   107,
     108,   109,   110,   111,   115
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -453
static const yytype_int16 yypact[] =
{
     818,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
     692,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,   818,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,   565,  -453,
     818,  -453,  -453,  -453,  -453,  -453,  -453,   818,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,    27,  -453,
    -453,  -453,  -453,  -453,  -453,    51,   818,  -453,  -453,  -453,
    -453,  -453,  1943,   692,   692,   -57,   -45,  -453,  -453,   -40,
     565,  -453,   -20,     5,  -453,    91,    45,   818,  -453,  -453,
     149,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,     6,  -453,   129,    68,   188,   197,  -453,   124,
    -453,   311,   148,   157,   160,  -453,    68,  -453,  -453,  -453,
    -453,   219,  1071,    87,    87,   158,   164,   134,  1397,   -24,
      20,    32,  -453,  -453,  1178,  1288,  1687,  1537,   944,    -4,
     265,   179,   194,   200,   203,   208,   209,   210,   211,   212,
     213,   218,   222,   223,   224,   225,   226,   227,   229,   231,
     232,   233,   234,   235,   239,   268,   240,  1071,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,   161,  1209,   161,   161,
     161,  -453,  -453,  1868,  1793,  -453,   172,  -453,    35,   242,
     243,  -453,    60,    35,   241,   246,  -453,  -453,  1071,   236,
    -453,  -453,   199,    22,  1470,    28,   268,  -453,   244,  -453,
     249,   257,   259,   343,   818,   252,   818,   263,  -453,   161,
     161,   264,   161,  1319,   161,   161,    40,  -453,   238,    33,
    -453,   270,   115,   272,   944,   137,  -453,  -453,  -453,  1319,
     134,  -453,  -453,  -453,   134,   134,  -453,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   818,   275,  -453,  -453,  -453,  -453,   818,   944,  -453,
    -453,  1428,  -453,  -453,   176,  -453,  -453,  -453,  -453,  -453,
    1868,  -453,   150,   134,  -453,  -453,   -13,   276,   274,    35,
      35,  -453,  1762,  1762,  -453,  -453,  -453,  -453,  -453,   279,
     311,   818,   944,  -453,  -453,   273,   277,   281,   278,  -453,
    -453,  -453,   385,   368,   389,   368,  -453,   150,  -453,  -453,
     328,    99,   292,   818,   295,   818,  -453,  -453,   150,  -453,
    -453,  -453,   134,    -6,   818,   297,  -453,   134,   296,  -453,
    -453,   336,   141,   143,  1612,   299,   298,   134,   134,   134,
     300,   301,   134,  -453,   302,   304,   307,   309,   312,   313,
     314,   315,   316,   317,   303,   322,   319,   325,  -453,  -453,
     318,   326,   261,   134,  -453,  -453,  -453,   327,   329,  -453,
     944,  -453,  -453,    13,  -453,  -453,   330,   323,   332,  -453,
    -453,   333,   331,   334,   335,  -453,  -453,   337,  -453,  -453,
    -453,  -453,  -453,  1612,  -453,  -453,   343,  -453,   944,   340,
     944,   341,   342,   818,   344,  -453,   137,  -453,  -453,  -453,
    -453,   345,  -453,   346,    11,  -453,  -453,   347,   352,   353,
    -453,  -453,   350,   351,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,   134,   339,  1612,   355,
    -453,   134,  -453,   348,    -6,   338,  -453,   354,   134,  1762,
    -453,  -453,   356,  -453,  -453,  -453,  -453,  -453,  -453,   359,
    -453,   360,   944,   361,   944,   134,   363,   364,  -453,  -453,
    -453,   362,   134,  -453,  -453,  1868,  -453,  -453,  -453,  1898,
    1898,  -453,  1898,  1898,  1898,  1898,  1898,  1898,  1898,  1898,
    1898,  1898,  1898,   -37,  -453,   365,  -453,  1612,  -453,    -6,
      13,   366,  -453,  -453,  1612,  -453,  -453,   371,  -453,   373,
     374,   134,   944,  1612,   367,   294,   369,  1868,  -453,   377,
    1898,   378,   379,   380,   381,   382,   383,   384,   386,   388,
     387,   390,  -453,   392,  -453,   393,  -453,  -453,    13,   395,
    -453,  -453,  -453,   396,   398,  -453,   391,     9,  -453,  -453,
     399,   397,  -453,   400,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,     9,     9,  -453,   401,  -453,  -453,  -453,
     402,  1612,   321,   237,  -453,  -453,  -453,  -453,   944,  -453,
     404,   405,  -453,  -453,   406,   466,  -453,   407,  -453,  -453,
    -453,  -453,  -453
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -453,  -453,  -453,  -453,  -453,  -453,  -453,   -92,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -130,  -453,  -453,   349,   -56,
      29,  -453,  -114,    39,  -158,  -453,  -453,  -453,  -453,  -453,
    -160,  -453,  -453,   145,  -453,  -453,  -453,  -453,  -453,  -453,
     250,  -453,  -453,  -453,   283,  -453,   -63,    21,  -437,   -44,
    -453,  -453,  -453,  -453,   357,  -249,  -452,  -248,  -406,  -453,
    -137,  -220,  -453,  -311,  -189,  -273,  -453,  -142,  -453,  -453,
    -216,  -161,  -453,   408,   370,   182,  -453,  -146,  -411,  -102,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,  -453,
    -453,  -453,  -453,   284,   -11,  -263,   403,  -453,    50,   -30,
    -453,  -453,  -453,  -453,   181
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -201
static const yytype_int16 yytable[] =
{
     114,   233,   383,   319,   321,   161,   509,   233,   249,   146,
     247,   380,   331,   233,   233,   233,   233,   336,   622,   240,
     232,   240,   428,   240,   378,   226,   232,   124,   116,   419,
     240,   252,   232,   232,   232,   232,   419,   261,   261,   268,
     272,   147,   240,   240,   258,   411,   233,   253,   241,   130,
     241,   545,   241,   419,   125,   135,   233,   522,   524,   241,
     259,   264,   233,   233,   361,   232,   136,   275,   137,   122,
     226,   241,   241,   417,   582,   232,   123,   233,   583,   432,
     314,   232,   232,   114,   114,   126,   382,   312,   548,  -152,
     146,   139,   359,   253,   358,   131,   232,   356,   587,   275,
     414,   226,   233,   313,   242,   420,   276,   255,   257,  -154,
     585,   275,   420,   424,   425,   306,   143,   589,   233,   263,
     148,   232,   147,   417,   140,   240,   314,   254,   121,   420,
     141,   623,  -100,   329,   330,  -152,   617,   232,   -99,   256,
     374,  -154,   314,   586,   240,   447,   339,   360,   274,   313,
     233,   249,   144,  -154,   241,   329,   330,   495,   142,   233,
     240,   377,   416,   326,   415,   385,   457,   458,   150,   232,
     121,   233,   233,   241,   412,   497,   381,   151,   232,   244,
     334,   335,   240,   519,   634,   511,   240,   513,   552,   241,
     232,   232,   236,   237,   161,   426,   426,   445,   153,   444,
     322,   244,   630,   631,   413,   373,   375,   154,   416,   373,
     415,   241,  -153,   260,   265,   241,   523,   386,   323,   329,
     330,   390,   391,   233,   393,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   155,   315,
     316,   317,   232,   362,   274,   364,   622,   240,   240,   557,
     551,   559,   359,   416,  -155,   162,  -156,   510,   166,   326,
     418,   329,   330,   329,   330,   238,   372,   518,   307,   240,
     308,   240,   163,   309,   240,   164,   241,   241,   274,  -200,
     366,   367,   233,   369,   323,   370,   371,   357,   244,   491,
     407,   278,   368,   244,   133,   134,   410,   277,   241,   594,
     241,   232,   497,   241,   279,   566,   341,   302,   342,   373,
     280,   343,   274,   281,   454,   157,   158,   159,   282,   283,
     284,   285,   286,   287,   467,   468,   469,   233,   288,   472,
     431,   445,   289,   290,   291,   292,   293,   294,   233,   295,
     497,   296,   297,   298,   299,   300,   232,   600,   305,   301,
     337,   340,   449,   360,   451,   332,   333,   232,   338,   363,
     373,   352,   426,   452,   233,   637,   354,   356,   568,   569,
     365,   571,   572,   573,   574,   575,   576,   577,   578,   579,
     580,   581,   376,   232,   379,   408,   233,   429,   422,   423,
     274,   433,   435,   233,   438,   434,   439,   436,   441,   446,
     448,   373,   233,   450,   453,   232,   233,   456,   455,   603,
     465,   597,   232,   466,   484,   470,   471,   474,   274,   475,
     274,   232,   476,   543,   477,   232,   489,   478,   479,   480,
     481,   482,   483,   485,   486,   373,   487,   500,   490,   492,
     493,   502,   516,   503,   635,   499,   501,   506,   512,   514,
     515,   544,   560,   504,   505,   517,   520,   549,   547,   564,
     233,  -109,   526,   527,   528,   531,   532,   546,   553,   550,
     555,   561,   556,   558,   562,   641,   584,   563,   596,   232,
     599,   588,   274,   590,   274,   591,   592,   373,   602,   604,
     605,   606,   607,   608,   609,   610,   351,   611,   593,   612,
     442,   621,   613,   615,   616,   614,   618,   320,   619,   620,
     627,   629,   628,   632,   633,   638,   639,   640,   642,   595,
     132,   636,   430,   138,   262,   373,   165,     0,   350,     0,
       0,     0,   274,   267,   624,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     624,   624,     0,     0,     0,     0,     0,     0,     0,     0,
     624,     0,     0,     0,     0,     0,     0,     0,   117,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,   274,   118,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,    86,    87,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,   113,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,     0,     0,    29,     0,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,    79,    80,     0,     0,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,     0,
      28,     0,     0,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,     0,    79,    80,     0,
      81,    82,    83,    84,    85,    86,    87,     0,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,     0,    28,     0,     0,    29,
       0,    31,    32,    33,    34,    35,    36,     0,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,     0,    79,    80,     0,     0,    82,    83,    84,
      85,    86,    87,     0,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,   167,   157,   158,   159,   168,     0,
       0,   169,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   170,   171,   172,     0,   173,
       0,    27,   174,   175,   176,   126,     0,   177,     0,   178,
     179,   180,   181,     0,   182,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,     0,     0,
       0,   167,     0,     0,     0,   168,     0,   205,   169,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,   173,     0,    27,     0,
       0,     0,   167,     0,     0,     0,   311,   179,   180,   169,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,   173,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,   179,   180,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   205,   168,     0,     0,   169,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,   173,     0,    27,     0,
       0,     0,   126,     0,     0,   205,   311,   179,   180,   169,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,     0,   173,     0,    27,
       0,     0,     0,     0,     0,     0,     0,     0,   179,   180,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,   205,     0,     0,   243,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,   173,   244,    27,     0,     0,
       0,     0,     0,     0,     0,   205,   245,   180,   243,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,   173,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,   245,   180,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   246,   345,   346,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     269,     0,     0,     0,   246,     0,     0,   169,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,   270,     0,   173,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,   266,   180,   271,     0,
     347,     0,     0,    82,    83,    84,    85,    86,   348,     0,
      88,    89,    90,     0,    92,    93,    94,    95,    96,    97,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   169,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
     173,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,   266,   180,   459,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   460,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,   169,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,   173,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,   266,   180,   181,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   169,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
     173,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,   266,   180,   169,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,   173,     0,    27,     0,     0,     0,     0,     0,     0,
       0,     0,   266,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,   169,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,   266,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75
};

static const yytype_int16 yycheck[] =
{
      30,   162,   275,   223,   224,   151,   443,   168,   168,     3,
     168,   274,   228,   174,   175,   176,   177,   233,     9,    10,
     162,    10,   333,    10,   272,   162,   168,     0,    39,    42,
      10,   168,   174,   175,   176,   177,    42,   174,   175,   176,
     177,    35,    10,    10,   174,   308,   207,    71,    39,   105,
      39,   488,    39,    42,     3,   112,   217,    46,   464,    39,
     174,   175,   223,   224,   253,   207,   111,    71,   108,    80,
     207,    39,    39,   322,   111,   217,    87,   238,   115,   342,
     217,   223,   224,   113,   114,    34,   275,   217,   494,   113,
       3,   111,   252,    71,   252,   106,   238,   110,   550,    71,
     320,   238,   263,   217,   167,   118,   110,   170,   171,   113,
     547,    71,   118,   329,   330,   207,   127,   554,   279,   175,
     114,   263,    35,   372,   119,    10,   263,   107,    78,   118,
      39,   122,   110,   120,   121,   113,   588,   279,   110,   107,
     107,   113,   279,   549,    10,   361,   238,    10,   178,   263,
     311,   311,     3,   113,    39,   120,   121,   420,   113,   320,
      10,    46,   322,   226,   322,   279,   382,   383,    39,   311,
     120,   332,   333,    39,   311,   423,    39,   109,   320,    29,
     120,   121,    10,   456,   621,   448,    10,   450,   499,    39,
     332,   333,   163,   164,   340,   332,   333,   357,    10,   357,
      28,    29,   613,   614,    28,   268,   269,    10,   368,   272,
     368,    39,   113,   174,   175,    39,   464,   280,    46,   120,
     121,   284,   285,   384,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,   300,   114,   218,
     219,   220,   384,   254,   274,   256,     9,    10,    10,   512,
     498,   514,   412,   413,   113,   107,   113,   446,    39,   322,
     323,   120,   121,   120,   121,   107,    28,   456,   107,    10,
     109,    10,   115,   112,    10,   115,    39,    39,   308,   115,
     259,   260,   443,   262,    46,   264,   265,    28,    29,    28,
     301,   112,    28,    29,   113,   114,   307,    32,    39,   562,
      39,   443,   550,    39,   110,   525,   107,    39,   109,   372,
     110,   112,   342,   110,   377,     4,     5,     6,   110,   110,
     110,   110,   110,   110,   387,   388,   389,   488,   110,   392,
     341,   491,   110,   110,   110,   110,   110,   110,   499,   110,
     588,   110,   110,   110,   110,   110,   488,   567,   108,   110,
     109,   115,   363,    10,   365,   113,   113,   499,   112,   107,
     423,   117,   499,   374,   525,   628,   117,   110,   529,   530,
     107,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   112,   525,   112,   110,   547,   108,   112,   115,
     420,   118,   111,   554,     9,   118,    28,   119,     9,    71,
     108,   464,   563,   108,   107,   547,   567,    71,   112,   570,
     111,   117,   554,   115,   111,   115,   115,   115,   448,   115,
     450,   563,   115,   486,   115,   567,   108,   115,   115,   115,
     115,   115,   115,   111,   115,   498,   111,   114,   112,   112,
     111,   108,   453,   112,   123,   115,   114,   110,   108,   108,
     108,   112,   515,   119,   119,   111,   111,   119,   110,   522,
     621,   115,   115,   111,   111,   115,   115,   112,   112,   115,
     111,   108,   112,   112,   110,     9,   111,   115,   111,   621,
     111,   115,   512,   112,   514,   112,   112,   550,   111,   111,
     111,   111,   111,   111,   111,   111,   246,   111,   561,   111,
     355,   110,   115,   111,   111,   115,   111,   224,   112,   111,
     111,   111,   115,   112,   112,   111,   111,   111,   111,   563,
     112,   623,   340,   120,   175,   588,   156,    -1,   244,    -1,
      -1,    -1,   562,   176,   597,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     613,   614,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     623,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,   628,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    -1,    -1,    35,    -1,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,    -1,    -1,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,    -1,
     112,   113,   114,   115,   116,   117,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    32,    -1,    -1,    35,
      -1,    37,    38,    39,    40,    41,    42,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,    -1,    -1,   113,   114,   115,
     116,   117,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
      -1,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    28,
      -1,    30,    31,    32,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,     3,    -1,    -1,    -1,     7,    -1,   116,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,     3,    -1,    -1,    -1,     7,    39,    40,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   116,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,   116,     7,    39,    40,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   116,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    29,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,    39,    40,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   116,    44,    45,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
       3,    -1,    -1,    -1,   116,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    26,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
     110,    -1,    -1,   113,   114,   115,   116,   117,   118,    -1,
     120,   121,   122,    -1,   124,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    40,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    32,    35,
      36,    37,    38,    39,    40,    41,    42,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,   107,   109,
     110,   112,   113,   114,   115,   116,   117,   118,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   131,   197,
     198,   199,   201,   203,   233,   234,   238,   239,   240,   241,
     242,   243,   202,     3,   239,   244,   234,     3,    34,   236,
     237,   238,   234,   234,     0,     3,    34,   132,   133,   135,
     149,   234,   203,   244,   244,   112,   111,   108,   236,   111,
     119,    39,   113,   234,     3,   136,     3,    35,   114,   150,
      39,   109,   204,    10,    10,   114,   134,     4,     5,     6,
     205,   207,   107,   115,   115,   204,    39,     3,     7,    10,
      24,    25,    26,    28,    31,    32,    33,    36,    38,    39,
      40,    41,    43,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   116,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   147,   148,   149,   151,   152,
     153,   166,   168,   174,   175,   184,   190,   191,   192,   194,
     195,   196,   197,   201,   207,   210,   150,   150,   107,   206,
      10,    39,   176,    10,    29,    39,   116,   154,   157,   160,
     164,   176,   190,    71,   107,   176,   107,   176,   145,   152,
     153,   190,   148,   149,   152,   153,    39,   184,   190,     3,
      26,    41,   190,   235,   239,    71,   110,    32,   112,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,    39,   170,   172,   108,   137,   107,   109,   112,
     177,     7,   145,   152,   190,   177,   177,   177,   167,   191,
     174,   191,    28,    46,   154,   160,   176,   185,   187,   120,
     121,   200,   113,   113,   120,   121,   200,   109,   112,   137,
     115,   107,   109,   112,   146,    44,    45,   110,   118,   232,
     233,   170,   117,   155,   117,   161,   110,    28,   154,   160,
      10,   194,   234,   107,   234,   107,   177,   177,    28,   177,
     177,   177,    28,   176,   107,   176,   112,    46,   187,   112,
     235,    39,   194,   195,   169,   152,   176,   212,   214,   215,
     176,   176,   219,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   234,   110,   171,
     234,   235,   190,    28,   191,   154,   160,   185,   176,    42,
     118,   188,   112,   115,   200,   200,   190,   193,   193,   108,
     205,   234,   235,   118,   118,   111,   119,   158,     9,    28,
     163,     9,   163,   165,   154,   160,    71,   200,   108,   234,
     108,   234,   234,   107,   176,   112,    71,   200,   200,    41,
      70,   178,   179,   181,   190,   111,   115,   176,   176,   176,
     115,   115,   176,   221,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   111,   111,   115,   111,   173,   108,
     112,    28,   112,   111,   189,   235,   186,   187,   200,   115,
     114,   114,   108,   112,   119,   119,   110,   156,   162,   178,
     194,   235,   108,   235,   108,   108,   234,   111,   194,   195,
     111,   180,    46,   187,   188,   211,   115,   111,   111,   216,
     218,   115,   115,   222,   224,   226,   228,   223,   225,   227,
     229,   230,   231,   176,   112,   178,   112,   110,   188,   119,
     115,   187,   193,   112,   159,   111,   112,   235,   112,   235,
     176,   108,   110,   115,   176,   182,   191,   213,   201,   201,
     220,   201,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   111,   115,   111,   178,   188,   186,   115,   178,
     112,   112,   112,   176,   235,   179,   111,   117,   183,   111,
     191,   217,   111,   201,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   115,   115,   111,   111,   186,   111,   112,
     111,   110,     9,   122,   176,   208,   209,   111,   115,   111,
     208,   208,   112,   112,   178,   123,   209,   235,   111,   111,
     111,     9,   111
};

#define yyerrok                (yyerrstatus = 0)
#define yyclearin        (yychar = YYEMPTY)
#define YYEMPTY                (-2)
#define YYEOF                0

#define YYACCEPT        goto yyacceptlab
#define YYABORT                goto yyabortlab
#define YYERROR                goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL                goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                        \
do                                                                \
  if (yychar == YYEMPTY && yylen == 1)                                \
    {                                                                \
      yychar = (Token);                                                \
      yylval = (Value);                                                \
      yytoken = YYTRANSLATE (yychar);                                \
      YYPOPSTACK (1);                                                \
      goto yybackup;                                                \
    }                                                                \
  else                                                                \
    {                                                                \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                        \
    }                                                                \
while (YYID (0))


#define YYTERROR        1
#define YYERRCODE        256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                        \
      if (YYID (N))                                                    \
        {                                                                \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;        \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;                \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;        \
        }                                                                \
      else                                                                \
        {                                                                \
          (Current).first_line   = (Current).last_line   =                \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =                \
            YYRHSLOC (Rhs, 0).last_column;                                \
        }                                                                \
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)                        \
     fprintf (File, "%d.%d-%d.%d",                        \
              (Loc).first_line, (Loc).first_column,        \
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                                \
  if (yydebug)                                        \
    YYFPRINTF Args;                                \
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                          \
do {                                                                          \
  if (yydebug)                                                                  \
    {                                                                          \
      YYFPRINTF (stderr, "%s ", Title);                                          \
      yy_symbol_print (stderr,                                                  \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                                  \
    }                                                                          \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                                \
do {                                                                \
  if (yydebug)                                                        \
    yy_stack_print ((Bottom), (Top));                                \
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)                \
do {                                        \
  if (yydebug)                                \
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef        YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
         constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
                    + sizeof yyexpecting - 1
                    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
                       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
          {
            if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
              {
                yycount = 1;
                yysize = yysize0;
                yyformat[sizeof yyunexpected - 1] = '\0';
                break;
              }
            yyarg[yycount++] = yytname[yyx];
            yysize1 = yysize + yytnamerr (0, yytname[yyx]);
            yysize_overflow |= (yysize1 < yysize);
            yysize = yysize1;
            yyfmt = yystpcpy (yyfmt, yyprefix);
            yyprefix = yyor;
          }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
        return YYSIZE_MAXIMUM;

      if (yyresult)
        {
          /* Avoid sprintf, as that infringes on the user's name space.
             Don't have undefined behavior even if the translation
             produced a string with the wrong number of "%s"s.  */
          char *yyp = yyresult;
          int yyi = 0;
          while ((*yyp = *yyf) != '\0')
            {
              if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
                {
                  yyp += yytnamerr (yyp, yyarg[yyi++]);
                  yyf += 2;
                }
              else
                {
                  yyp++;
                  yyf++;
                }
            }
        }
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 5:

/* Line 1455 of yacc.c  */
#line 325 "vtkParse.y"
    {
      data.ClassName = vtkstrdup((yyvsp[(3) - (3)].str));
      }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 331 "vtkParse.y"
    {
      data.ClassName = vtkstrdup((yyvsp[(2) - (2)].str));
      }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 351 "vtkParse.y"
    { output_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 352 "vtkParse.y"
    { output_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 353 "vtkParse.y"
    { output_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 354 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 355 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 356 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 357 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 358 "vtkParse.y"
    { output_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 359 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 398 "vtkParse.y"
    { preSig("~"); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 399 "vtkParse.y"
    { preSig("virtual ~"); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 402 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 406 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 410 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 415 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 420 "vtkParse.y"
    {
         preSig("virtual ");
         }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 426 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 430 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 434 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 439 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 444 "vtkParse.y"
    {
         preSig("virtual ");
         }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 448 "vtkParse.y"
    { postSig(")"); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 448 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 449 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(2) - (4)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (4)].str));
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 455 "vtkParse.y"
    {
      postSig(") = 0;");
      currentFunction->Name = (yyvsp[(2) - (3)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (3)].str));
      currentFunction->IsPureVirtual = 1;
      data.IsAbstract = 1;
    }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 463 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 464 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
    }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 470 "vtkParse.y"
    { postSig(")"); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 470 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 471 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 477 "vtkParse.y"
    {
      postSig(") = 0;");
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (3)].str));
      currentFunction->IsPureVirtual = 1;
      data.IsAbstract = 1;
    }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 485 "vtkParse.y"
    {postSig(" const");}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 487 "vtkParse.y"
    {postSig("("); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 489 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 490 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (2)].str));
    }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 496 "vtkParse.y"
    { postSig((yyvsp[(1) - (2)].str)); postSig(" (");}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 498 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 499 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + 2);
      currentFunction->Name[0] = '~';
      strcpy(&currentFunction->Name[1], (yyvsp[(1) - (2)].str));
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 507 "vtkParse.y"
    { postSig((yyvsp[(1) - (2)].str)); postSig(" (");}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 509 "vtkParse.y"
    {postSig("const ");}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 511 "vtkParse.y"
    {postSig("static ");}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 512 "vtkParse.y"
    {postSig("static ");}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 514 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 514 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 523 "vtkParse.y"
    { currentFunction->NumberOfArguments++;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 524 "vtkParse.y"
    { currentFunction->NumberOfArguments++; postSig(", ");}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 527 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 534 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 541 "vtkParse.y"
    {
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_FUNCTION;
    }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 550 "vtkParse.y"
    {delSig();}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 551 "vtkParse.y"
    {delSig();}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 552 "vtkParse.y"
    {delSig();}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 553 "vtkParse.y"
    {delSig();}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 562 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 570 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 571 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 573 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_POINTER + (VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) + ((yyvsp[(3) - (3)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 575 "vtkParse.y"
    { postSig("[]"); (yyval.integer) = VTK_PARSE_POINTER + ((yyvsp[(4) - (4)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 577 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_CONST + (yyvsp[(2) - (2)].integer);}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 578 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 579 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_STATIC + (yyvsp[(2) - (2)].integer);}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 580 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | VTK_PARSE_STATIC) + (yyvsp[(3) - (3)].integer);}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 582 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 584 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer);}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 585 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 604 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 605 "vtkParse.y"
    { postSig("&"); (yyval.integer) = (yyvsp[(1) - (2)].integer);}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 606 "vtkParse.y"
    { postSig("*"); (yyval.integer) = (VTK_PARSE_REF + VTK_PARSE_POINTER) + (yyvsp[(1) - (2)].integer);}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 608 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 609 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 611 "vtkParse.y"
    { postSig("vtkStdString "); (yyval.integer) = (VTK_PARSE_STRING); }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 613 "vtkParse.y"
    { postSig("vtkUnicodeString "); (yyval.integer) = (VTK_PARSE_UNICODE_STRING); }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 622 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 623 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 624 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_REF + (yyvsp[(2) - (2)].integer);}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 625 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_REF + VTK_PARSE_POINTER) + (yyvsp[(2) - (2)].integer);}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 627 "vtkParse.y"
    {postSig("unsigned ");}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 628 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_UNSIGNED + (yyvsp[(3) - (3)].integer);}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 629 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 632 "vtkParse.y"
    { postSig("vtkTypeInt8 "); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 633 "vtkParse.y"
    { postSig("vtkTypeUInt8 "); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 634 "vtkParse.y"
    { postSig("vtkTypeInt16 "); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 635 "vtkParse.y"
    { postSig("vtkTypeUInt16 "); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 636 "vtkParse.y"
    { postSig("vtkTypeInt32 "); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 637 "vtkParse.y"
    { postSig("vtkTypeUInt32 "); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 638 "vtkParse.y"
    { postSig("vtkTypeInt64 "); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 639 "vtkParse.y"
    { postSig("vtkTypeUInt64 "); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 640 "vtkParse.y"
    { postSig("vtkTypeFloat32 "); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 641 "vtkParse.y"
    { postSig("vtkTypeFloat64 "); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 642 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 643 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 644 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 645 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 646 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 647 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 648 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 649 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 650 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 652 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_UNKNOWN;
    }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_VTK_OBJECT;
      currentFunction->ArgClasses[currentFunction->NumberOfArguments] =
        vtkstrdup((yyvsp[(1) - (1)].str));
      currentFunction->ArgExternals[currentFunction->NumberOfArguments] = 0;
      /* store the string into the return value just in case we need it */
      /* this is a parsing hack because the first "type" parser will */
      /* possibly be ht ereturn type of the first argument */
      if ((!currentFunction->ReturnClass) &&
          (!currentFunction->NumberOfArguments))
        {
        currentFunction->ReturnClass = vtkstrdup((yyvsp[(1) - (1)].str));
        currentFunction->ReturnExternal = 0;
        }
    }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 677 "vtkParse.y"
    { postSig("vtkIdType "); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 678 "vtkParse.y"
    { postSig("long long "); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 679 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 680 "vtkParse.y"
    { postSig("signed char "); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 681 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 686 "vtkParse.y"
    {
      data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
      data.NumberOfSuperClasses++;
    }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    {
      data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
      data.NumberOfSuperClasses++;
    }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 696 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 698 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 707 "vtkParse.y"
    {preSig("void Set"); postSig(" ("); }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    {
   postSig(");");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();
   }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
    {postSig("Get");}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
    {postSig(" ();"); invertSig = 1;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 720 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(7) - (8)].integer);
   output_function();
   }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 727 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 728 "vtkParse.y"
    {
   postSig(" (char *);");
   sprintf(temps,"Set%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_CHAR_PTR;
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();
   }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 738 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 739 "vtkParse.y"
    {
   postSig(" ();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   output_function();
   }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 748 "vtkParse.y"
    {preSig("void Set"); postSig(" ("); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 749 "vtkParse.y"
    {postSig(");"); openSig = 0;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sscanf (currentFunction->Signature, "%*s %*s (%s);", local);
   sprintf(temps,"Set%s",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (10)].integer);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%s Get%sMinValue ();",local,(yyvsp[(3) - (10)].str));
   sprintf(temps,"Get%sMinValue",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(6) - (10)].integer);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%s Get%sMaxValue ();",local,(yyvsp[(3) - (10)].str));
   sprintf(temps,"Get%sMaxValue",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(6) - (10)].integer);
   output_function();
   }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 780 "vtkParse.y"
    {preSig("void Set"); postSig(" ("); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 781 "vtkParse.y"
    {
   postSig("*);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ArgCounts[0] = 1;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();
   }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 791 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 792 "vtkParse.y"
    {postSig(" ();"); invertSig = 1;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 793 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   output_function();
   }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 801 "vtkParse.y"
    {preSig("void "); postSig("On ();"); openSig = 0; }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 803 "vtkParse.y"
    {
   sprintf(temps,"%sOn",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"void %sOff ();",(yyvsp[(3) - (7)].str));
   sprintf(temps,"%sOff",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   output_function();
   }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 818 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 823 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s (%s, %s);",(yyvsp[(3) - (7)].str),
     local, local);
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 2;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ArgTypes[1] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[1] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"void Set%s (%s a[2]);",(yyvsp[(3) - (7)].str),
     local);
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 2;
   output_function();
   }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 848 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 853 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s ();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 2;
   output_function();
   }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 865 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 870 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s (%s, %s, %s);",
     (yyvsp[(3) - (7)].str), local, local, local);
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 3;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ArgTypes[1] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[1] = 0;
   currentFunction->ArgTypes[2] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[2] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"void Set%s (%s a[3]);",(yyvsp[(3) - (7)].str),
     local);
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 3;
   output_function();
   }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 897 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 902 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s ();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 3;
   output_function();
   }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 914 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 919 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s (%s, %s, %s, %s);",
     (yyvsp[(3) - (7)].str), local, local, local, local);
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 4;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ArgTypes[1] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[1] = 0;
   currentFunction->ArgTypes[2] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[2] = 0;
   currentFunction->ArgTypes[3] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[3] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"void Set%s (%s a[4]);",(yyvsp[(3) - (7)].str),
     local);
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 4;
   output_function();
   }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 948 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 953 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s ();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 4;
   output_function();
   }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 965 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 970 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s (%s, %s, %s, %s, %s, %s);",
     (yyvsp[(3) - (7)].str), local, local, local, local, local, local);
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 6;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ArgTypes[1] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[1] = 0;
   currentFunction->ArgTypes[2] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[2] = 0;
   currentFunction->ArgTypes[3] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[3] = 0;
   currentFunction->ArgTypes[4] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[4] = 0;
   currentFunction->ArgTypes[5] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[5] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"void Set%s (%s a[6]);",(yyvsp[(3) - (7)].str),
     local);
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 6;
   output_function();
   }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1003 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1008 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s ();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 6;
   output_function();
   }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1020 "vtkParse.y"
    {
      free (currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1025 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s (%s [%i]);",(yyvsp[(3) - (9)].str),
      local, (yyvsp[(8) - (9)].integer));
     sprintf(temps,"Set%s",(yyvsp[(3) - (9)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->ReturnType = VTK_PARSE_VOID;
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (9)].integer);
     currentFunction->ArgCounts[0] = (yyvsp[(8) - (9)].integer);
     output_function();
   }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1038 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1043 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s ();",local, (yyvsp[(3) - (9)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (9)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = (yyvsp[(8) - (9)].integer);
   output_function();
   }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1055 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate ();",
       (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ReturnClass = vtkstrdup("vtkCoordinate");
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s (double, double);",
       (yyvsp[(3) - (4)].str));
     sprintf(temps,"Set%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 2;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE;
     currentFunction->ArgCounts[0] = 0;
     currentFunction->ArgTypes[1] = VTK_PARSE_DOUBLE;
     currentFunction->ArgCounts[1] = 0;
     currentFunction->ReturnType = VTK_PARSE_VOID;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s (double a[2]);",
       (yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgCounts[0] = 2;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s ();", (yyvsp[(3) - (4)].str));
     sprintf(temps,"Get%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 2;
     output_function();
   }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1102 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate ();",
       (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ReturnClass = vtkstrdup("vtkCoordinate");
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s (double, double, double);",
       (yyvsp[(3) - (4)].str));
     sprintf(temps,"Set%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 3;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE;
     currentFunction->ArgCounts[0] = 0;
     currentFunction->ArgTypes[1] = VTK_PARSE_DOUBLE;
     currentFunction->ArgCounts[1] = 0;
     currentFunction->ArgTypes[2] = VTK_PARSE_DOUBLE;
     currentFunction->ArgCounts[2] = 0;
     currentFunction->ReturnType = VTK_PARSE_VOID;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s (double a[3]);",
       (yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgCounts[0] = 3;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s ();", (yyvsp[(3) - (4)].str));
     sprintf(temps,"Get%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 3;
     output_function();
   }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1151 "vtkParse.y"
    {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName ();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,
           "int IsA (const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance ();",
           (yyvsp[(3) - (6)].str));
   sprintf(temps,"NewInstance");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (6)].str));
   output_function();

   if ( data.IsConcrete )
     {
     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature, "%s *SafeDownCast (vtkObject* o);",
             (yyvsp[(3) - (6)].str));
     sprintf(temps,"SafeDownCast");
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC | VTK_PARSE_VTK_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (6)].str));
     output_function();
     }
   }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1202 "vtkParse.y"
    {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName ();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,
           "int IsA (const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance ();",
           (yyvsp[(3) - (7)].str));
   sprintf(temps,"NewInstance");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (7)].str));
   output_function();

   if ( data.IsConcrete )
     {
     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature, "%s *SafeDownCast (vtkObject* o);",
             (yyvsp[(3) - (7)].str));
     sprintf(temps,"SafeDownCast");
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC | VTK_PARSE_VTK_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (7)].str));
     output_function();
     }
   }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1258 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1259 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1260 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1261 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1264 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1267 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1267 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1268 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1268 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1269 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1269 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1272 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1273 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1274 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1275 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1276 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1277 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1278 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1279 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1281 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1282 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1286 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1287 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1288 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1289 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1292 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1293 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1295 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1296 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 4618 "vtkParse.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
        YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
        if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
          {
            YYSIZE_T yyalloc = 2 * yysize;
            if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
              yyalloc = YYSTACK_ALLOC_MAXIMUM;
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yyalloc);
            if (yymsg)
              yymsg_alloc = yyalloc;
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
              }
          }

        if (0 < yysize && yysize <= yymsg_alloc)
          {
            (void) yysyntax_error (yymsg, yystate, yychar);
            yyerror (yymsg);
          }
        else
          {
            yyerror (YY_("syntax error"));
            if (yysize != 0)
              goto yyexhaustedlab;
          }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;        /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
                 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 1323 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

static void vtkParseDebug(const char* s1, const char* s2)
{
  if ( getenv("DEBUG") )
    {
    fprintf(stderr, "   %s", s1);
    if ( s2 )
      {
      fprintf(stderr, " %s", s2);
      }
    fprintf(stderr, "\n");
    }
}

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  func->Name = NULL;
  func->NumberOfArguments = 0;
  func->ArrayFailure = 0;
  func->IsPureVirtual = 0;
  func->IsPublic = 0;
  func->IsOperator = 0;
  func->HaveHint = 0;
  func->HintSize = 0;
  func->ReturnType = VTK_PARSE_VOID;
  func->ReturnClass = NULL;
  func->Comment = NULL;
  func->Signature = NULL;
  func->IsLegacy = 0;
  sigAllocatedLength = 0;
  openSig = 1;
  invertSig = 0;
}

/* when the cpp file doesn't have enough info use the hint file */
void look_for_hint(void)
{
  char h_cls[80];
  char h_func[80];
  unsigned int  h_type;
  int  h_value;

  /* reset the position */
  if (!fhint)
    {
    return;
    }
  rewind(fhint);

  /* first find a hint */
  while (fscanf(fhint,"%s %s %x %i",h_cls,h_func,&h_type,&h_value) != EOF)
    {
    if ((!strcmp(h_cls,data.ClassName))&&
        currentFunction->Name &&
        (!strcmp(h_func,currentFunction->Name))&&
        ((int)h_type == currentFunction->ReturnType))
      {
      currentFunction->HaveHint = 1;
      currentFunction->HintSize = h_value;
      }
    }
}

/* a simple routine that updates a few variables */
void output_function()
{
  int i;

  /* a void argument is the same as no arguements */
  if ((currentFunction->ArgTypes[0] & VTK_PARSE_UNQUALIFIED_TYPE) ==
      VTK_PARSE_VOID)
    {
    currentFunction->NumberOfArguments = 0;
    }

  currentFunction->IsPublic = in_public;
  currentFunction->IsProtected = in_protected;

  /* look for VAR FUNCTIONS */
  if (currentFunction->NumberOfArguments
      && (currentFunction->ArgTypes[0] == VTK_PARSE_FUNCTION))
    {
    if (currentFunction->NumberOfArguments == 2)
      {
      currentFunction->NumberOfArguments = 1;
      }
    else
      {
      currentFunction->ArrayFailure = 1;
      }
    }

  /* is it a delete function */
  if (currentFunction->Name && !strcmp("Delete",currentFunction->Name))
    {
    data.HasDelete = 1;
    }


  /* if we need a return type hint and dont currently have one */
  /* then try to find one */
  if (!currentFunction->HaveHint)
    {
    switch (currentFunction->ReturnType & VTK_PARSE_UNQUALIFIED_TYPE)
      {
      case VTK_PARSE_FLOAT_PTR:
      case VTK_PARSE_VOID_PTR:
      case VTK_PARSE_DOUBLE_PTR:
      case VTK_PARSE_ID_TYPE_PTR:
      case VTK_PARSE_LONG_LONG_PTR:
      case VTK_PARSE___INT64_PTR:
      case VTK_PARSE_INT_PTR:
      case VTK_PARSE_SHORT_PTR:
      case VTK_PARSE_LONG_PTR:
      case VTK_PARSE_UNSIGNED_CHAR_PTR:
        look_for_hint();
        break;
      }
    }

  /* reject multi-dimensional arrays from wrappers */
  for (i = 0; i < currentFunction->NumberOfArguments; i++)
    {
    if ((currentFunction->ArgTypes[i] & VTK_PARSE_INDIRECT) == 2*VTK_PARSE_POINTER ||
        (currentFunction->ArgTypes[i] & VTK_PARSE_INDIRECT) == 3*VTK_PARSE_POINTER)
      {
      currentFunction->ArrayFailure = 1;
      }
    }

  if (HaveComment)
    {
    currentFunction->Comment = vtkstrdup(CommentText);
    }

  data.NumberOfFunctions++;
  currentFunction = data.Functions + data.NumberOfFunctions;
  InitFunction(currentFunction);
}

extern void vtkParseOutput(FILE *,FileInfo *);

int main(int argc,char *argv[])
{
  FILE *fin;
  int ret;
  FILE *fout;

  if (argc < 4 || argc > 5)
    {
    fprintf(stderr,
            "Usage: %s input_file <hint_file> is_concrete output_file\n",argv[0]);
    exit(1);
    }

  if (!(fin = fopen(argv[1],"r")))
    {
    fprintf(stderr,"Error opening input file %s\n",argv[1]);
    exit(1);
    }

  fhint = 0;
  data.FileName = argv[1];
  data.NameComment = NULL;
  data.Description = NULL;
  data.Caveats = NULL;
  data.SeeAlso = NULL;
  CommentState = 0;

  if (argc == 5)
    {
    if (!(fhint = fopen(argv[2],"r")))
      {
      fprintf(stderr,"Error opening hint file %s\n",argv[2]);
      exit(1);
      }
    data.IsConcrete = atoi(argv[3]);
    }
  else
    {
    data.IsConcrete = atoi(argv[2]);
    }

  currentFunction = data.Functions;
  InitFunction(currentFunction);

  yyin = fin;
  yyout = stdout;
  ret = yyparse();
  if (ret)
    {
    fprintf(stdout,
            "*** SYNTAX ERROR found in parsing the header file %s before line %d ***\n",
            argv[1], yylineno);
    return ret;
    }

  if (argc == 5)
    {
    fout = fopen(argv[4],"w");
    data.OutputFileName = argv[4];
    }
  else
    {
    fout = fopen(argv[3],"w");
    data.OutputFileName = argv[3];
    }

  if (!fout)
    {
    fprintf(stderr,"Error opening output file %s\n",argv[3]);
    exit(1);
    }
  vtkParseOutput(fout,&data);
  fclose (fout);

  return 0;
}

