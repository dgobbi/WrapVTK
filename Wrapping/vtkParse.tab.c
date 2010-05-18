
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
void start_class(const char *classname);
void output_function(void);
void reject_function(void);

/* vtkstrdup is not part of POSIX so we create our own */
char *vtkstrdup(const char *in)
{
  char *res = malloc(strlen(in)+1);
  strcpy(res,in);
  return res;
}

#include "vtkParse.h"

  FileInfo data;
  FunctionInfo throwAwayFunction;
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
  int mainClass;

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
#line 266 "vtkParse.tab.c"

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
     INT_LITERAL = 264,
     ID = 265,
     HEX_LITERAL = 266,
     FLOAT_LITERAL = 267,
     INT = 268,
     FLOAT = 269,
     SHORT = 270,
     LONG = 271,
     LONG_LONG = 272,
     INT64__ = 273,
     DOUBLE = 274,
     VOID = 275,
     CHAR = 276,
     SIGNED_CHAR = 277,
     BOOL = 278,
     OSTREAM = 279,
     ISTREAM = 280,
     ENUM = 281,
     UNION = 282,
     CLASS_REF = 283,
     OTHER = 284,
     CONST = 285,
     CONST_PTR = 286,
     CONST_REF = 287,
     OPERATOR = 288,
     UNSIGNED = 289,
     FRIEND = 290,
     INLINE = 291,
     MUTABLE = 292,
     TEMPLATE = 293,
     TYPENAME = 294,
     TYPEDEF = 295,
     NAMESPACE = 296,
     USING = 297,
     VTK_ID = 298,
     STATIC = 299,
     VAR_FUNCTION = 300,
     ARRAY_NUM = 301,
     VTK_LEGACY = 302,
     NEW = 303,
     DELETE = 304,
     LPAREN_POINTER = 305,
     LPAREN_AMPERSAND = 306,
     OP_LSHIFT_EQ = 307,
     OP_RSHIFT_EQ = 308,
     OP_LSHIFT = 309,
     OP_RSHIFT = 310,
     OP_ARROW_POINTER = 311,
     OP_ARROW = 312,
     OP_INCR = 313,
     OP_DECR = 314,
     OP_PLUS_EQ = 315,
     OP_MINUS_EQ = 316,
     OP_TIMES_EQ = 317,
     OP_DIVIDE_EQ = 318,
     OP_REMAINDER_EQ = 319,
     OP_AND_EQ = 320,
     OP_OR_EQ = 321,
     OP_XOR_EQ = 322,
     OP_LOGIC_AND_EQ = 323,
     OP_LOGIC_OR_EQ = 324,
     OP_LOGIC_AND = 325,
     OP_LOGIC_OR = 326,
     OP_LOGIC_EQ = 327,
     OP_LOGIC_NEQ = 328,
     OP_LOGIC_LEQ = 329,
     OP_LOGIC_GEQ = 330,
     ELLIPSIS = 331,
     DOUBLE_COLON = 332,
     TypeInt8 = 333,
     TypeUInt8 = 334,
     TypeInt16 = 335,
     TypeUInt16 = 336,
     TypeInt32 = 337,
     TypeUInt32 = 338,
     TypeInt64 = 339,
     TypeUInt64 = 340,
     TypeFloat32 = 341,
     TypeFloat64 = 342,
     IdType = 343,
     StdString = 344,
     UnicodeString = 345,
     SetMacro = 346,
     GetMacro = 347,
     SetStringMacro = 348,
     GetStringMacro = 349,
     SetClampMacro = 350,
     SetObjectMacro = 351,
     GetObjectMacro = 352,
     BooleanMacro = 353,
     SetVector2Macro = 354,
     SetVector3Macro = 355,
     SetVector4Macro = 356,
     SetVector6Macro = 357,
     GetVector2Macro = 358,
     GetVector3Macro = 359,
     GetVector4Macro = 360,
     GetVector6Macro = 361,
     SetVectorMacro = 362,
     GetVectorMacro = 363,
     ViewportCoordinateMacro = 364,
     WorldCoordinateMacro = 365,
     TypeMacro = 366,
     VTK_BYTE_SWAP_DECL = 367
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 207 "vtkParse.y"

  char *str;
  int   integer;



/* Line 214 of yacc.c  */
#line 533 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 545 "vtkParse.tab.c"

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
#define YYFINAL  128
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2389

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  123
/* YYNRULES -- Number of rules.  */
#define YYNRULES  387
/* YYNRULES -- Number of states.  */
#define YYNSTATES  738

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   367

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   131,     2,     2,     2,   134,   126,     2,
     116,   117,   127,   130,   121,   128,   135,   129,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   115,   118,
     119,   123,   120,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   124,     2,   125,   133,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   113,   132,   114,   122,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   111,   112
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     8,     9,    13,    16,    19,    23,    27,
      30,    32,    33,    41,    42,    45,    48,    50,    53,    55,
      57,    59,    61,    63,    65,    67,    70,    72,    74,    77,
      81,    85,    88,    92,    96,    99,   103,   106,   112,   115,
     117,   125,   132,   140,   147,   151,   154,   158,   160,   165,
     169,   174,   177,   186,   194,   204,   214,   217,   220,   223,
     226,   230,   233,   237,   242,   245,   250,   253,   258,   263,
     266,   270,   272,   275,   279,   284,   288,   290,   293,   297,
     302,   306,   307,   308,   309,   319,   320,   321,   326,   330,
     331,   332,   340,   341,   342,   347,   351,   352,   354,   355,
     361,   362,   363,   368,   369,   375,   376,   380,   381,   385,
     390,   391,   394,   395,   401,   403,   405,   408,   410,   412,
     414,   419,   423,   424,   426,   428,   430,   431,   436,   439,
     440,   445,   447,   452,   460,   461,   464,   469,   475,   480,
     486,   491,   497,   501,   506,   509,   513,   519,   525,   532,
     541,   543,   547,   549,   553,   556,   561,   564,   565,   566,
     570,   575,   578,   580,   583,   587,   589,   592,   594,   596,
     599,   603,   608,   612,   617,   621,   626,   631,   636,   644,
     652,   654,   658,   660,   664,   666,   670,   674,   676,   679,
     682,   684,   686,   688,   690,   692,   694,   697,   700,   703,
     706,   710,   714,   715,   719,   721,   723,   725,   727,   729,
     731,   733,   735,   737,   739,   741,   743,   745,   747,   749,
     751,   753,   755,   757,   759,   761,   763,   765,   767,   769,
     771,   773,   774,   777,   780,   781,   787,   788,   790,   792,
     794,   796,   798,   800,   803,   805,   807,   809,   811,   813,
     814,   822,   823,   824,   833,   834,   840,   841,   847,   848,
     849,   860,   861,   869,   870,   871,   880,   881,   889,   890,
     898,   899,   907,   908,   916,   917,   925,   926,   934,   935,
     943,   944,   952,   953,   961,   962,   972,   973,   983,   988,
     993,  1000,  1008,  1011,  1014,  1018,  1022,  1024,  1026,  1028,
    1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,  1046,  1048,
    1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,  1068,
    1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1086,  1088,
    1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,  1105,  1108,
    1109,  1112,  1113,  1116,  1118,  1120,  1122,  1124,  1126,  1128,
    1130,  1132,  1134,  1136,  1138,  1140,  1142,  1144,  1146,  1148,
    1150,  1152,  1154,  1156,  1158,  1160,  1162,  1164,  1166,  1168,
    1170,  1172,  1174,  1176,  1178,  1180,  1182,  1184,  1186,  1188,
    1192,  1196,  1200,  1204,  1208,  1212,  1213,  1216
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     137,     0,    -1,   248,   139,   248,   138,    -1,    -1,   139,
     248,   138,    -1,   154,   214,    -1,   154,   210,    -1,   154,
      36,   214,    -1,   154,    36,   210,    -1,   154,   140,    -1,
     140,    -1,    -1,     3,   189,   141,   217,   113,   142,   114,
      -1,    -1,   143,   142,    -1,   220,   115,    -1,   197,    -1,
      37,   197,    -1,   145,    -1,   144,    -1,   147,    -1,   146,
      -1,   148,    -1,   152,    -1,   150,    -1,    35,   150,    -1,
     149,    -1,    28,    -1,   158,   190,    -1,    35,   158,   190,
      -1,    36,   158,   190,    -1,   157,   190,    -1,    35,   157,
     190,    -1,    36,   157,   190,    -1,   153,   190,    -1,    36,
     153,   190,    -1,   156,   190,    -1,   112,   116,   248,   117,
     118,    -1,   224,   118,    -1,   224,    -1,    26,   189,   113,
     248,   114,   249,   118,    -1,    26,   113,   248,   114,   249,
     118,    -1,    27,   189,   113,   248,   114,   249,   118,    -1,
      27,   113,   248,   114,   249,   118,    -1,    42,   249,   118,
      -1,   154,   150,    -1,     3,   189,   151,    -1,   118,    -1,
     113,   248,   114,   118,    -1,   115,   249,   118,    -1,    40,
     203,   200,   118,    -1,    40,    28,    -1,    40,     3,   189,
     113,   248,   114,   189,   118,    -1,    40,     3,   113,   248,
     114,   189,   118,    -1,    40,   203,    50,   189,   117,   116,
     249,   117,   118,    -1,    40,   203,    51,   189,   117,   116,
     249,   117,   118,    -1,    40,   145,    -1,    40,   144,    -1,
      40,   147,    -1,    40,   146,    -1,    40,    45,   118,    -1,
     154,   157,    -1,    38,   119,   120,    -1,    38,   119,   155,
     120,    -1,     3,    10,    -1,     3,    10,   121,   155,    -1,
      39,    10,    -1,    39,    10,   121,   155,    -1,    47,   116,
     157,   117,    -1,   122,   183,    -1,     7,   122,   183,    -1,
     175,    -1,   203,   169,    -1,   203,    30,   169,    -1,     7,
     203,    30,   169,    -1,     7,   203,   169,    -1,   159,    -1,
     203,   163,    -1,   203,    30,   163,    -1,     7,   203,    30,
     163,    -1,     7,   203,   163,    -1,    -1,    -1,    -1,    33,
     203,   116,   160,   191,   117,   161,   172,   162,    -1,    -1,
      -1,   166,   164,   172,   165,    -1,   166,   123,     9,    -1,
      -1,    -1,    33,   246,   167,   116,   168,   191,   117,    -1,
      -1,    -1,   173,   170,   172,   171,    -1,   173,   123,     9,
      -1,    -1,    30,    -1,    -1,   189,   116,   174,   191,   117,
      -1,    -1,    -1,   178,   176,   180,   177,    -1,    -1,   189,
     116,   179,   191,   117,    -1,    -1,   115,   182,   181,    -1,
      -1,   121,   182,   181,    -1,   189,   116,   248,   117,    -1,
      -1,   185,   184,    -1,    -1,   189,   116,   186,   191,   117,
      -1,    30,    -1,    44,    -1,    44,    36,    -1,    43,    -1,
      10,    -1,   118,    -1,   113,   248,   114,   118,    -1,   113,
     248,   114,    -1,    -1,   192,    -1,    76,    -1,   194,    -1,
      -1,   194,   193,   121,   192,    -1,   203,   201,    -1,    -1,
     203,   200,   195,   196,    -1,    45,    -1,   203,    51,   189,
     117,    -1,   203,    50,   189,   117,   116,   191,   117,    -1,
      -1,   123,   222,    -1,     3,   189,   198,   118,    -1,     3,
     189,   213,   198,   118,    -1,    26,   189,   198,   118,    -1,
      26,   189,   213,   198,   118,    -1,    27,   189,   198,   118,
      -1,    27,   189,   213,   198,   118,    -1,   203,   198,   118,
      -1,   203,    30,   198,   118,    -1,    45,   118,    -1,    44,
      45,   118,    -1,   203,    51,   189,   117,   118,    -1,   203,
      50,   189,   117,   118,    -1,   203,    50,   189,   117,    46,
     118,    -1,   203,    50,   189,   117,   116,   191,   117,   118,
      -1,   200,    -1,   200,   121,   199,    -1,   200,    -1,   200,
     121,   199,    -1,   213,   200,    -1,   213,   200,   121,   199,
      -1,   189,   201,    -1,    -1,    -1,    46,   202,   201,    -1,
     124,   249,   125,   201,    -1,   187,   204,    -1,   204,    -1,
     188,   204,    -1,   188,   187,   204,    -1,   214,    -1,   214,
     213,    -1,   209,    -1,   205,    -1,   205,   213,    -1,    10,
      77,   207,    -1,    10,    77,   207,   213,    -1,    43,    77,
     207,    -1,    43,    77,   207,   213,    -1,    43,    77,   208,
      -1,    43,    77,   208,   213,    -1,   208,   119,   206,   120,
      -1,   207,   119,   206,   120,    -1,    39,   208,   119,   206,
     120,    77,   207,    -1,    39,   207,   119,   206,   120,    77,
     207,    -1,   203,    -1,   203,   121,   206,    -1,    10,    -1,
      10,    77,   207,    -1,    43,    -1,    43,    77,   207,    -1,
      43,    77,   208,    -1,   210,    -1,   210,   126,    -1,   210,
     127,    -1,   211,    -1,   212,    -1,    89,    -1,    90,    -1,
     126,    -1,   127,    -1,   127,   126,    -1,   127,    32,    -1,
     127,   127,    -1,   127,    31,    -1,   127,   127,   126,    -1,
     127,   127,   127,    -1,    -1,    34,   215,   216,    -1,   216,
      -1,    78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,
      -1,    14,    -1,    20,    -1,    21,    -1,    13,    -1,    15,
      -1,    16,    -1,    19,    -1,    24,    -1,    25,    -1,    10,
      -1,    43,    -1,    88,    -1,    17,    -1,    18,    -1,    22,
      -1,    23,    -1,    -1,   115,   218,    -1,   220,   221,    -1,
      -1,   220,   221,   219,   121,   218,    -1,    -1,     4,    -1,
       5,    -1,     6,    -1,   207,    -1,   208,    -1,   205,    -1,
     128,   223,    -1,   223,    -1,     9,    -1,    11,    -1,    12,
      -1,   189,    -1,    -1,    91,   116,   189,   121,   225,   204,
     117,    -1,    -1,    -1,    92,   116,   226,   189,   121,   227,
     204,   117,    -1,    -1,    93,   116,   228,   189,   117,    -1,
      -1,    94,   116,   229,   189,   117,    -1,    -1,    -1,    95,
     116,   189,   121,   230,   214,   231,   121,   249,   117,    -1,
      -1,    96,   116,   189,   121,   232,   214,   117,    -1,    -1,
      -1,    97,   116,   233,   189,   121,   234,   214,   117,    -1,
      -1,    98,   116,   189,   235,   121,   214,   117,    -1,    -1,
      99,   116,   189,   121,   236,   214,   117,    -1,    -1,   103,
     116,   189,   121,   237,   214,   117,    -1,    -1,   100,   116,
     189,   121,   238,   214,   117,    -1,    -1,   104,   116,   189,
     121,   239,   214,   117,    -1,    -1,   101,   116,   189,   121,
     240,   214,   117,    -1,    -1,   105,   116,   189,   121,   241,
     214,   117,    -1,    -1,   102,   116,   189,   121,   242,   214,
     117,    -1,    -1,   106,   116,   189,   121,   243,   214,   117,
      -1,    -1,   107,   116,   189,   121,   244,   214,   121,   222,
     117,    -1,    -1,   108,   116,   189,   121,   245,   214,   121,
     222,   117,    -1,   109,   116,   189,   117,    -1,   110,   116,
     189,   117,    -1,   111,   116,   189,   121,   189,   117,    -1,
     111,   116,   189,   121,   189,   121,   117,    -1,   116,   117,
      -1,   124,   125,    -1,    48,   124,   125,    -1,    49,   124,
     125,    -1,   247,    -1,   123,    -1,   127,    -1,   129,    -1,
     128,    -1,   130,    -1,   131,    -1,   122,    -1,   121,    -1,
     119,    -1,   120,    -1,   126,    -1,   132,    -1,   133,    -1,
     134,    -1,    48,    -1,    49,    -1,    52,    -1,    53,    -1,
      54,    -1,    55,    -1,    56,    -1,    57,    -1,    60,    -1,
      61,    -1,    62,    -1,    63,    -1,    64,    -1,    58,    -1,
      59,    -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    -1,   252,   248,    -1,    -1,   253,
     249,    -1,    -1,   251,   250,    -1,     3,    -1,    38,    -1,
     252,    -1,   118,    -1,   253,    -1,   257,    -1,    29,    -1,
     254,    -1,   255,    -1,   256,    -1,   247,    -1,   115,    -1,
     135,    -1,     8,    -1,   214,    -1,   210,    -1,    77,    -1,
       9,    -1,    12,    -1,    28,    -1,    30,    -1,    33,    -1,
      44,    -1,    36,    -1,     7,    -1,    26,    -1,    27,    -1,
      39,    -1,    46,    -1,    45,    -1,    76,    -1,     4,    -1,
       6,    -1,     5,    -1,    41,    -1,    42,    -1,   113,   250,
     114,    -1,   116,   248,   117,    -1,    50,   248,   117,    -1,
      51,   248,   117,    -1,   124,   248,   125,    -1,    40,   258,
     118,    -1,    -1,     3,   258,    -1,   253,   258,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   330,   330,   332,   332,   334,   334,   335,   335,   336,
     336,   339,   338,   344,   344,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   387,   388,
     390,   391,   392,   393,   394,   395,   396,   397,   398,   399,
     400,   402,   404,   404,   406,   406,   407,   407,   409,   411,
     412,   413,   414,   418,   422,   427,   434,   438,   442,   446,
     451,   457,   458,   459,   457,   469,   469,   469,   475,   487,
     488,   487,   494,   494,   494,   500,   512,   512,   514,   514,
     516,   517,   516,   524,   524,   526,   526,   528,   528,   530,
     532,   532,   541,   541,   543,   545,   546,   548,   548,   550,
     551,   552,   554,   554,   556,   556,   557,   557,   559,   567,
     566,   573,   579,   580,   582,   582,   584,   585,   586,   587,
     588,   589,   590,   591,   592,   593,   594,   595,   596,   597,
     599,   599,   601,   602,   603,   604,   606,   614,   615,   615,
     618,   621,   622,   623,   624,   626,   627,   629,   630,   631,
     632,   633,   634,   635,   636,   637,   639,   640,   641,   642,
     644,   644,   646,   646,   648,   648,   649,   651,   652,   653,
     655,   656,   658,   660,   669,   670,   671,   672,   673,   674,
     675,   676,   678,   678,   680,   683,   684,   685,   686,   687,
     688,   689,   690,   691,   692,   693,   694,   695,   696,   697,
     698,   699,   700,   701,   702,   709,   726,   727,   728,   729,
     730,   732,   732,   734,   743,   742,   751,   752,   753,   754,
     756,   756,   756,   758,   758,   760,   761,   762,   763,   767,
     766,   778,   778,   778,   787,   787,   798,   798,   808,   809,
     807,   840,   839,   851,   852,   851,   861,   860,   878,   877,
     908,   907,   925,   924,   957,   956,   974,   973,  1008,  1007,
    1025,  1024,  1063,  1062,  1080,  1079,  1098,  1097,  1114,  1161,
    1210,  1261,  1318,  1319,  1320,  1321,  1322,  1324,  1325,  1325,
    1326,  1326,  1327,  1327,  1328,  1328,  1329,  1329,  1330,  1330,
    1331,  1332,  1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,
    1341,  1342,  1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,
    1351,  1352,  1353,  1354,  1355,  1356,  1357,  1362,  1362,  1363,
    1363,  1364,  1364,  1366,  1366,  1366,  1368,  1368,  1368,  1370,
    1370,  1370,  1370,  1370,  1371,  1371,  1371,  1371,  1371,  1371,
    1372,  1372,  1372,  1372,  1372,  1372,  1373,  1373,  1373,  1373,
    1373,  1373,  1373,  1374,  1374,  1374,  1374,  1374,  1374,  1376,
    1377,  1378,  1379,  1380,  1381,  1383,  1383,  1384
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PUBLIC", "PRIVATE",
  "PROTECTED", "VIRTUAL", "STRING", "INT_LITERAL", "ID", "HEX_LITERAL",
  "FLOAT_LITERAL", "INT", "FLOAT", "SHORT", "LONG", "LONG_LONG", "INT64__",
  "DOUBLE", "VOID", "CHAR", "SIGNED_CHAR", "BOOL", "OSTREAM", "ISTREAM",
  "ENUM", "UNION", "CLASS_REF", "OTHER", "CONST", "CONST_PTR", "CONST_REF",
  "OPERATOR", "UNSIGNED", "FRIEND", "INLINE", "MUTABLE", "TEMPLATE",
  "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "VTK_ID", "STATIC",
  "VAR_FUNCTION", "ARRAY_NUM", "VTK_LEGACY", "NEW", "DELETE",
  "LPAREN_POINTER", "LPAREN_AMPERSAND", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ",
  "OP_LSHIFT", "OP_RSHIFT", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR",
  "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
  "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND_EQ", "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR",
  "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ",
  "ELLIPSIS", "DOUBLE_COLON", "TypeInt8", "TypeUInt8", "TypeInt16",
  "TypeUInt16", "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64",
  "TypeFloat32", "TypeFloat64", "IdType", "StdString", "UnicodeString",
  "SetMacro", "GetMacro", "SetStringMacro", "GetStringMacro",
  "SetClampMacro", "SetObjectMacro", "GetObjectMacro", "BooleanMacro",
  "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "'{'", "'}'", "':'", "'('", "')'", "';'", "'<'",
  "'>'", "','", "'~'", "'='", "'['", "']'", "'&'", "'*'", "'-'", "'/'",
  "'+'", "'!'", "'|'", "'^'", "'%'", "'.'", "$accept", "strt",
  "more_classes", "maybe_template_class_def", "class_def", "$@1",
  "class_def_body", "class_def_item", "named_enum", "enum", "named_union",
  "union", "using", "template_internal_class", "internal_class",
  "internal_class_body", "typedef", "template_function", "template",
  "template_args", "legacy_function", "function", "operator",
  "typecast_op_func", "$@2", "$@3", "$@4", "op_func", "@5", "$@6",
  "op_sig", "$@7", "$@8", "func", "$@9", "$@10", "maybe_const", "func_sig",
  "$@11", "constructor", "$@12", "$@13", "constructor_sig", "$@14",
  "maybe_initializers", "more_initializers", "initializer", "destructor",
  "$@15", "destructor_sig", "$@16", "const_mod", "static_mod", "any_id",
  "func_body", "args_list", "more_args", "$@17", "arg", "$@18",
  "opt_var_assign", "var", "var_ids", "maybe_indirect_var_ids", "var_id",
  "var_array", "$@19", "type", "type_red1", "templated_id", "types",
  "scoped_id", "vtk_scoped_id", "type_string1", "type_string2",
  "type_string3", "type_string4", "type_indirection", "type_red2", "$@20",
  "type_primitive", "optional_scope", "scope_list", "$@21", "scope_type",
  "superclass_id", "float_num", "float_prim", "macro", "$@22", "$@23",
  "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30", "$@31", "$@32",
  "$@33", "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41",
  "$@42", "op_token", "op_token_no_delim", "maybe_other",
  "maybe_other_no_semi", "maybe_other_class", "other_stuff_or_class",
  "other_stuff", "other_stuff_no_semi", "braces", "parens", "brackets",
  "typedef_ignore", "typedef_ignore_body", 0
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
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   123,   125,    58,    40,    41,    59,    60,
      62,    44,   126,    61,    91,    93,    38,    42,    45,    47,
      43,    33,   124,    94,    37,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   136,   137,   138,   138,   139,   139,   139,   139,   139,
     139,   141,   140,   142,   142,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   151,   151,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   153,   154,   154,   155,   155,   155,   155,   156,   157,
     157,   157,   157,   157,   157,   157,   158,   158,   158,   158,
     158,   160,   161,   162,   159,   164,   165,   163,   163,   167,
     168,   166,   170,   171,   169,   169,   172,   172,   174,   173,
     176,   177,   175,   179,   178,   180,   180,   181,   181,   182,
     184,   183,   186,   185,   187,   188,   188,   189,   189,   190,
     190,   190,   191,   191,   192,   192,   193,   192,   194,   195,
     194,   194,   194,   194,   196,   196,   197,   197,   197,   197,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   197,
     198,   198,   199,   199,   199,   199,   200,   201,   202,   201,
     201,   203,   203,   203,   203,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   205,   205,   205,   205,
     206,   206,   207,   207,   208,   208,   208,   209,   209,   209,
     210,   210,   211,   212,   213,   213,   213,   213,   213,   213,
     213,   213,   215,   214,   214,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   216,   216,   216,   216,   216,   216,   216,   216,   216,
     216,   217,   217,   218,   219,   218,   220,   220,   220,   220,
     221,   221,   221,   222,   222,   223,   223,   223,   223,   225,
     224,   226,   227,   224,   228,   224,   229,   224,   230,   231,
     224,   232,   224,   233,   234,   224,   235,   224,   236,   224,
     237,   224,   238,   224,   239,   224,   240,   224,   241,   224,
     242,   224,   243,   224,   244,   224,   245,   224,   224,   224,
     224,   224,   246,   246,   246,   246,   246,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   248,   248,   249,
     249,   250,   250,   251,   251,   251,   252,   252,   252,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   254,
     255,   255,   255,   256,   257,   258,   258,   258
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     0,     3,     2,     2,     3,     3,     2,
       1,     0,     7,     0,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     3,
       3,     2,     3,     3,     2,     3,     2,     5,     2,     1,
       7,     6,     7,     6,     3,     2,     3,     1,     4,     3,
       4,     2,     8,     7,     9,     9,     2,     2,     2,     2,
       3,     2,     3,     4,     2,     4,     2,     4,     4,     2,
       3,     1,     2,     3,     4,     3,     1,     2,     3,     4,
       3,     0,     0,     0,     9,     0,     0,     4,     3,     0,
       0,     7,     0,     0,     4,     3,     0,     1,     0,     5,
       0,     0,     4,     0,     5,     0,     3,     0,     3,     4,
       0,     2,     0,     5,     1,     1,     2,     1,     1,     1,
       4,     3,     0,     1,     1,     1,     0,     4,     2,     0,
       4,     1,     4,     7,     0,     2,     4,     5,     4,     5,
       4,     5,     3,     4,     2,     3,     5,     5,     6,     8,
       1,     3,     1,     3,     2,     4,     2,     0,     0,     3,
       4,     2,     1,     2,     3,     1,     2,     1,     1,     2,
       3,     4,     3,     4,     3,     4,     4,     4,     7,     7,
       1,     3,     1,     3,     1,     3,     3,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       3,     3,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     2,     0,     5,     0,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     0,
       7,     0,     0,     8,     0,     5,     0,     5,     0,     0,
      10,     0,     7,     0,     0,     8,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     9,     0,     9,     4,     4,
       6,     7,     2,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     337,   374,   376,   375,   367,   356,   360,   224,   361,   218,
     215,   219,   220,   227,   228,   221,   216,   217,   229,   230,
     222,   223,   368,   369,   362,   349,   363,   364,   202,   366,
     370,   385,   377,   378,   225,   365,   372,   371,   311,   312,
     337,   337,   313,   314,   315,   316,   317,   318,   324,   325,
     319,   320,   321,   322,   323,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   373,   359,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   226,   192,
     193,   341,   354,   337,   346,   305,   306,   304,   303,   297,
     337,   307,   298,   300,   299,   301,   302,   308,   309,   310,
     355,     0,   358,   190,   191,   357,   204,   353,     0,   337,
     347,   350,   351,   352,   348,     0,   385,   385,     0,     0,
       0,   343,   344,     0,   341,   345,     0,     0,     1,     0,
       0,   337,    10,     0,   338,   203,   386,   387,   384,   381,
     382,   379,   342,   380,   383,   118,   117,    11,     0,     3,
       0,     9,     6,     5,   231,     0,     0,    62,     0,     2,
     337,     8,     7,   236,     0,    64,    66,    63,     3,   237,
     238,   239,   232,     0,    13,     0,     0,     4,   182,     0,
     184,   242,   240,   241,   233,     0,     0,   224,     0,     0,
      27,   114,     0,     0,     0,     0,     0,   339,   225,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    19,    18,    21,
      20,    22,    26,    24,    23,     0,     0,     0,     0,     0,
      76,    71,   100,     0,     0,     0,    16,     0,   162,   168,
       0,     0,   167,   187,   165,     0,    39,    65,    67,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   225,   115,
       0,     0,     0,   337,     0,   337,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,    51,     0,    57,    56,    59,
      58,     0,     0,   339,     0,   116,     0,   144,     0,     0,
     251,   254,   256,     0,     0,   263,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     337,    69,   110,     0,    12,    14,   337,   119,    34,     0,
      45,    61,     0,    36,    31,    28,   105,   161,     0,   163,
     103,     0,     0,     0,     0,    77,    85,    72,    92,   157,
       0,   150,   194,   195,   169,   188,   189,   166,    15,    38,
     183,     0,     0,   185,   186,   180,     0,     0,   236,   337,
     339,    47,    46,   157,     0,     0,    70,     0,    80,    75,
       0,   170,     0,   337,     0,     0,     0,   337,     0,     0,
      81,     0,    32,    29,     0,    35,    33,    30,     0,     0,
       0,     0,   337,     0,     0,     0,    60,     0,     0,     0,
      44,   340,   172,   174,   145,     0,     0,     0,     0,     0,
       0,     0,     0,   266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   112,
       0,     0,     0,     0,   101,   164,   122,    78,    73,     0,
     311,   312,     0,     0,    89,   296,     0,     0,     0,    96,
       0,    96,   158,    98,   339,   156,   142,     0,   199,   197,
     196,   198,     0,     0,     0,   177,   176,   235,     0,     0,
     136,     0,    79,    74,   171,   339,     0,   138,     0,   339,
       0,   140,     0,   122,     0,   337,     0,     0,    50,   173,
     175,    68,   249,     0,     0,     0,   258,   261,     0,     0,
     268,   272,   276,   280,   270,   274,   278,   282,   284,   286,
     288,   289,     0,     0,   122,   121,     0,   107,     0,   102,
     131,   124,     0,   123,   125,   157,   143,     0,     0,   292,
     293,     0,     0,     0,    88,    97,    86,    95,    93,   157,
     122,     0,   151,   152,     0,   200,   201,     0,     0,   181,
       0,    49,   137,     0,   339,   139,     0,   339,   141,     0,
       0,     0,     0,     0,     0,   252,   255,   257,     0,     0,
     264,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,   120,     0,   106,   337,   104,
       0,     0,     0,   129,   128,   294,   295,    90,     0,   122,
     147,   146,    87,    94,   159,     0,   157,     0,   154,     0,
       0,    48,    41,     0,    43,     0,    82,     0,     0,   339,
     339,     0,     0,   259,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   290,     0,   113,
     107,     0,     0,     0,     0,   134,   122,   148,     0,    99,
     160,   153,     0,   179,   178,    40,    42,    96,    53,     0,
       0,     0,   250,     0,     0,   262,     0,   267,   269,   273,
     277,   281,   271,   275,   279,   283,     0,     0,   291,   108,
     109,   127,     0,   132,     0,   130,     0,     0,   155,    83,
      52,     0,     0,   253,   339,   265,   245,   246,   247,     0,
     248,     0,   244,     0,   122,   135,    91,   149,    84,    54,
      55,     0,   243,   285,   287,     0,   260,   133
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   101,   159,   160,   132,   154,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   382,   234,   235,   133,   158,
     237,   238,   239,   240,   503,   677,   728,   355,   469,   622,
     356,   551,   666,   357,   471,   623,   556,   358,   560,   241,
     346,   539,   242,   456,   454,   607,   537,   331,   448,   332,
     534,   243,   244,   383,   338,   542,   543,   610,   544,   665,
     705,   246,   360,   562,   361,   475,   559,   545,   248,   249,
     376,   250,   251,   252,   102,   103,   104,   564,   105,   115,
     106,   164,   172,   265,   173,   184,   721,   722,   256,   584,
     427,   642,   428,   429,   588,   684,   589,   432,   645,   519,
     592,   596,   593,   597,   594,   598,   595,   599,   600,   601,
     464,   107,   108,   302,   123,   124,   109,   110,   111,   112,
     113,   114,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -671
static const yytype_int16 yypact[] =
{
    1073,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,   941,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    1073,  1073,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,   808,  -671,  1073,  -671,  -671,  -671,  -671,  -671,  -671,
    1073,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,    21,  -671,  -671,  -671,  -671,  -671,  -671,    22,  1073,
    -671,  -671,  -671,  -671,  -671,  1500,   941,   941,   -79,   -61,
     -59,  -671,  -671,   -73,   808,  -671,   -42,   -38,  -671,    38,
      13,  1073,  -671,  1878,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,    14,    22,
    2220,  -671,  -671,  -671,   -20,   129,   136,  -671,    50,  -671,
    1073,  -671,  -671,   233,    66,    68,    81,  -671,    22,  -671,
    -671,  -671,  -671,   177,  1338,   116,   116,  -671,   133,   115,
     141,  -671,    73,   105,   125,    38,  1613,   106,    -1,    36,
    -671,  -671,  2076,   560,  1448,  1790,  1702,  1205,   111,   154,
     146,   165,   167,   174,   184,   200,   217,   219,   221,   224,
     227,   230,   239,   245,   247,   248,   253,   258,   259,   263,
     264,   274,   275,   279,    38,   207,  1338,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,   162,   671,   162,   162,   162,
    -671,  -671,  -671,  2189,  2108,   280,  -671,   272,  -671,   169,
      73,   105,  -671,   201,   169,   161,   281,  -671,  -671,   388,
     282,   284,   115,  2076,  2076,   283,    41,   -76,   -57,   364,
      38,   276,   388,  1073,     2,  1073,   121,   289,    38,  -671,
     162,   162,   287,   162,  1532,   162,   162,    38,    38,    38,
    -671,   241,    39,    -1,    36,  -671,   288,  -671,  -671,  -671,
    -671,   153,   293,  1205,   115,  -671,   297,  -671,  1532,    38,
    -671,  -671,  -671,    38,    38,  -671,    38,    38,    38,    38,
      38,    38,    38,    38,    38,    38,    38,    38,    38,    38,
    1073,  -671,  -671,   314,  -671,  -671,  1073,  -671,  -671,  1613,
    -671,  -671,    97,  -671,  -671,  -671,   316,  -671,  2189,  -671,
    -671,   315,  1870,    38,    38,  -671,   309,  -671,   311,   -24,
     317,   318,  -671,    71,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  2076,  2076,  -671,  -671,   320,   324,   325,   233,  1073,
    1205,  -671,  -671,   -13,   319,    38,  -671,   315,  -671,  -671,
     332,    82,   322,  1073,   331,    38,   336,  1073,   334,    38,
    -671,   147,  -671,  -671,   315,  -671,  -671,  -671,    34,    34,
      34,    38,  1073,   342,   343,   347,  -671,    38,    38,   362,
    -671,  -671,    87,   142,  -671,   344,   360,    38,    38,    38,
     361,   363,    38,  -671,   365,   369,   370,   372,   373,   374,
     375,   377,   378,   379,   348,   366,   380,   368,  -671,  -671,
     391,   367,    38,    38,  -671,  -671,  1995,  -671,  -671,   384,
     382,   385,   371,   383,  -671,  -671,   393,   394,   503,   483,
     505,   483,  -671,  -671,  1205,  -671,  -671,    34,  -671,  -671,
    -671,   205,   396,   399,  2076,  -671,  -671,  -671,   407,   406,
    -671,   408,  -671,  -671,  -671,  1205,   411,  -671,   412,  1205,
     417,  -671,   415,  1995,   420,  1073,   419,   421,  -671,  -671,
    -671,  -671,  -671,   416,   424,   425,  -671,  -671,   426,   427,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,    38,   431,  1995,   432,    38,   433,   429,  -671,
    -671,  -671,   438,  -671,   435,   134,  -671,   434,   436,  -671,
    -671,   441,    60,   440,  -671,  -671,  -671,  -671,  -671,   -13,
    1995,   437,  -671,   439,    38,  -671,  -671,   487,   488,  -671,
     448,  -671,  -671,   450,  1205,  -671,   451,  1205,  -671,   454,
      38,   458,   470,   471,  2189,  -671,  -671,  -671,  2301,  2301,
    -671,  2301,  2301,  2301,  2301,  2301,  2301,  2301,  2301,  2301,
    2301,  2301,   156,  -671,   472,  -671,    38,  -671,  1073,  -671,
     467,    38,    38,  -671,  -671,  -671,  -671,  -671,   473,  1995,
    -671,  -671,  -671,  -671,  -671,   475,   -13,    34,   474,   388,
     388,  -671,  -671,   478,  -671,   480,  -671,   482,    38,  1205,
    1205,   484,  2189,  -671,   489,  2301,   490,   493,   494,   495,
     496,   497,   499,   500,   501,   498,   502,  -671,   504,  -671,
     433,   507,  1995,   508,   509,   506,  1995,  -671,   510,  -671,
    -671,  -671,    34,  -671,  -671,  -671,  -671,   483,  -671,   512,
     511,   514,  -671,   516,   513,  -671,   518,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,    20,    20,  -671,  -671,
    -671,  -671,   521,  -671,    20,  -671,   534,   535,  -671,  -671,
    -671,   536,   537,  -671,  1205,  -671,  -671,  -671,  -671,   302,
    -671,   539,  -671,   540,  1995,  -671,  -671,  -671,  -671,  -671,
    -671,   541,  -671,  -671,  -671,   542,  -671,  -671
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -671,  -671,   452,   544,   527,  -671,   442,  -671,   409,   465,
     466,   468,  -671,  -671,  -175,  -671,  -671,   428,  -137,   163,
    -671,  -139,   160,  -671,  -671,  -671,  -671,  -261,  -671,  -671,
    -671,  -671,  -671,  -257,  -671,  -671,  -466,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,     3,    59,   397,  -671,  -671,
    -671,   422,  -671,   100,    18,  -484,     7,  -671,  -671,  -671,
    -671,   476,   -43,  -592,  -286,  -521,  -671,   -21,  -240,   524,
    -248,  -171,  -166,  -671,  -127,  -671,  -671,  -156,  -122,  -671,
     555,  -671,   294,  -671,  -148,  -671,  -670,   -46,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,  -671,
    -671,   323,   110,  -267,   552,  -671,   -41,   -31,  -671,  -671,
    -671,  -671,   243
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -237
static const yytype_int16 yytable[] =
{
     117,   272,   182,   347,   349,   558,   152,   183,   260,   145,
     388,   153,   145,   261,   389,   419,   377,   155,   279,   579,
     304,   128,   472,   161,   614,   129,   255,   723,   162,   716,
     145,   717,   718,   472,   725,   671,   421,   236,   624,   138,
     125,   141,   146,  -182,   145,   146,   145,   253,   145,   145,
     604,   145,   254,   156,   280,   285,   139,   284,   140,   253,
     130,   340,  -184,   146,   254,   253,   253,   253,   253,   253,
     254,   254,   254,   254,   254,   143,   625,   146,   255,   146,
     708,   146,   146,   125,   146,   117,   117,   144,   370,   236,
     457,   373,   473,   364,   458,   163,   374,   341,   367,   253,
     474,   391,   478,   479,   254,   670,   618,   145,   455,   253,
     385,   474,   273,   489,   254,   393,   253,   253,   395,   155,
     399,   254,   254,   482,   483,   178,   492,   452,   362,   363,
     493,   145,   148,   422,   157,   668,   253,   253,   423,   165,
     146,   254,   254,   457,   145,   341,   166,   458,   719,   275,
     119,   120,   412,   247,   379,   156,   380,   253,   180,   381,
     362,   363,   254,   145,   146,   271,   303,   362,   363,   425,
     167,   277,   282,   282,   291,   301,   619,   146,   620,   174,
     472,   253,   706,   272,   611,   612,   254,   178,   304,   175,
     305,   563,   263,   126,   389,   458,   146,   480,   481,   306,
     127,  -183,   176,   417,   418,   247,  -185,   561,   362,   363,
     259,   709,   253,   362,   363,   342,   179,   254,   262,   134,
     180,   253,  -118,   384,   264,  -182,   254,  -117,   573,   147,
    -184,   394,   576,   398,   397,   494,   569,   169,   170,   171,
     735,   149,   375,   375,   253,   253,  -234,   362,   363,   254,
     254,   145,   385,   395,   399,   343,   344,   345,   474,   613,
     379,  -186,   380,   342,   307,   381,   509,   510,   362,   363,
     168,   411,   303,   657,   245,   336,   368,   658,   628,   493,
     337,   308,   145,   309,   146,   266,   145,   342,   274,   276,
     310,   353,   354,   245,   245,   362,   363,   145,   402,   403,
     311,   405,   351,   406,   407,   352,   387,   633,   459,   352,
     635,   716,   145,   717,   718,   146,   312,   404,   451,   146,
     352,   334,   353,   354,   333,   145,   245,   365,   366,   253,
     146,   565,   566,   313,   254,   314,   245,   315,   257,   258,
     316,   563,   491,   317,   641,   146,   318,   359,   352,   303,
     375,   375,   498,   281,   286,   319,   502,   253,   146,   136,
     137,   320,   254,   321,   322,   384,   394,   398,   459,   323,
     333,   390,   680,   681,   324,   325,   253,   145,   401,   326,
     327,   254,   390,   392,   245,   396,   563,   408,   409,   410,
     328,   329,   413,   414,   415,   330,   350,   536,   178,   369,
     305,   371,   683,   372,   378,   400,   416,   253,   245,   426,
     146,   420,   254,   430,   431,   424,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     449,   453,   468,   253,   470,   476,   495,   490,   254,   477,
     447,   484,   390,   303,   485,   486,   450,   731,   473,   497,
     499,   359,   501,   466,   467,   505,   393,   253,   673,   674,
     397,   511,   254,   375,   303,   530,   643,   644,   303,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     508,   512,   516,   531,   517,   533,   520,   390,   549,   488,
     521,   522,   253,   523,   524,   525,   526,   254,   527,   528,
     529,   532,   546,   496,   390,   535,   547,   500,   550,   548,
     552,   553,   554,   555,   557,   253,   567,   506,   507,   568,
     254,   570,   504,   686,   571,   574,   572,   513,   514,   515,
     575,   577,   518,   578,   580,   253,   582,   585,   583,   253,
     254,   586,   587,   303,   254,   608,   303,   590,   591,   603,
     605,   390,   390,   538,   606,   609,  -126,   617,   621,   615,
     627,   616,   626,   278,   629,   630,   631,   186,   632,   634,
     187,   636,   638,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   639,   640,   662,   659,
     191,   667,   669,   192,    28,   672,   675,   253,   676,   179,
     678,   682,   254,   198,   269,   297,   685,   687,   303,   303,
     688,   689,   690,   691,   692,   581,   693,   694,   695,   696,
     177,   698,   283,   697,   700,   702,   703,   707,   711,   704,
     710,   712,   602,   713,   714,   715,   390,   724,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   726,   131,   727,   729,   730,   733,   734,   736,   737,
     151,   298,   299,   699,   300,   660,   348,   386,   335,   701,
     135,   290,   487,   732,   278,   465,   142,     0,   339,     0,
     637,   187,   224,   303,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   181,     0,     0,
       0,   191,     0,     0,     0,    28,   538,     0,     0,     0,
     179,   663,   664,     0,   198,   269,     0,     0,   661,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   679,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,     0,   720,   720,     0,     0,
       0,     0,     0,     0,   720,     0,     0,     0,     0,     0,
       0,   121,     1,     2,     3,     4,     5,     6,     7,   720,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,    28,     0,    29,     0,   122,    30,    31,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    82,    83,     0,    84,    85,    86,    87,
      88,    89,    90,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   116,     1,     2,     3,     4,     5,
       6,     7,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,    28,     0,    29,     0,     0,
      30,     0,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    82,    83,     0,     0,
      85,    86,    87,    88,    89,    90,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     1,     2,     3,
       4,     5,     6,     7,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,    27,    28,     0,    29,
       0,     0,    30,    31,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,    83,
       0,    84,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,     1,
       2,     3,     4,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,    27,    28,
       0,    29,     0,     0,    30,     0,    32,    33,    34,    35,
      36,    37,     0,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,     0,
      82,    83,     0,     0,    85,    86,    87,    88,    89,    90,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   185,   169,   170,   171,   186,     0,     0,   187,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   188,   189,   190,     0,   191,     0,
       0,   192,    28,   193,   194,   195,   130,   179,   196,     0,
     197,   198,   199,   200,     0,   201,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,     0,     0,  -236,     0,   186,     0,     0,   187,     0,
     224,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,   191,     0,
       0,   192,    28,     0,     0,     0,   130,   179,     0,     0,
       0,   198,   269,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   339,
       0,     0,   187,    34,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   191,     0,     0,     0,    28,     0,     0,     0,
     224,   179,     0,     0,     0,   198,   269,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,   267,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,   191,     0,     0,     0,    28,     0,     0,
       0,     0,   179,     0,   224,     0,   268,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,   292,     0,     0,     0,     0,
       0,     0,   267,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   293,   294,
     295,     0,   191,     0,     0,   270,    28,     0,     0,     0,
       0,   179,     0,     0,     0,   268,   269,   296,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,   287,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   288,   289,     0,     0,
     191,     0,     0,     0,    28,     0,     0,     0,     0,   179,
       0,     0,     0,   268,   199,   200,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   129,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,   150,     0,     0,     0,   460,   461,
       0,    34,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   462,     0,     0,    85,
      86,    87,    88,    89,   463,     0,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   267,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,   191,     0,     0,     0,    28,
       0,     0,     0,     0,   179,     0,     0,     0,   268,   269,
     540,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   541,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   267,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,   191,     0,     0,     0,
      28,     0,     0,     0,     0,   179,     0,     0,   267,   268,
     269,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,   191,     0,
       0,     0,    28,     0,     0,     0,     0,   179,     0,     0,
       0,   268,     0,     0,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   267,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,   179,     0,
       7,     0,   268,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,     7,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78
};

static const yytype_int16 yycheck[] =
{
      31,    77,   173,   243,   244,   471,   133,   173,   179,    10,
     271,   133,    10,   179,   271,   301,   264,     3,   193,   503,
      77,     0,    46,   150,   545,     3,   174,   697,   150,     9,
      10,    11,    12,    46,   704,   627,   303,   174,   559,   118,
      81,   114,    43,   119,    10,    43,    10,   174,    10,    10,
     534,    10,   174,    39,   193,   194,   117,   194,   117,   186,
      38,   236,   119,    43,   186,   192,   193,   194,   195,   196,
     192,   193,   194,   195,   196,   117,   560,    43,   226,    43,
     672,    43,    43,   124,    43,   116,   117,   125,   259,   226,
     351,   262,   116,   249,   351,   115,   262,   236,   254,   226,
     124,   272,    31,    32,   226,   626,    46,    10,   348,   236,
     266,   124,   113,   380,   236,   113,   243,   244,   274,     3,
     276,   243,   244,   371,   372,    10,   387,    30,   126,   127,
     387,    10,   119,   304,   120,   619,   263,   264,   304,    10,
      43,   263,   264,   404,    10,   284,    10,   404,   128,   113,
      40,    41,   113,   174,   113,    39,   115,   284,    43,   118,
     126,   127,   284,    10,    43,   186,   197,   126,   127,   308,
     120,   192,   193,   194,   195,   196,   116,    43,   118,   113,
      46,   308,   666,    77,    50,    51,   308,    10,    77,   121,
      36,   477,   119,    83,   451,   452,    43,   126,   127,    45,
      90,   119,   121,    50,    51,   226,   119,   474,   126,   127,
      77,   677,   339,   126,   127,   236,    39,   339,    77,   109,
      43,   348,   116,   266,   119,   119,   348,   116,   495,   129,
     119,   274,   499,   276,   113,   391,   484,     4,     5,     6,
     724,   131,   263,   264,   371,   372,   121,   126,   127,   371,
     372,    10,   408,   409,   410,   237,   238,   239,   124,   545,
     113,   119,   115,   284,   118,   118,   422,   423,   126,   127,
     160,    30,   303,   117,   174,   113,   115,   121,   564,   536,
     118,   116,    10,   116,    43,   185,    10,   308,   188,   189,
     116,    50,    51,   193,   194,   126,   127,    10,   280,   281,
     116,   283,    30,   285,   286,    33,    30,   574,   351,    33,
     577,     9,    10,    11,    12,    43,   116,    30,   339,    43,
      33,   114,    50,    51,   224,    10,   226,   126,   127,   456,
      43,   126,   127,   116,   456,   116,   236,   116,   175,   176,
     116,   627,   385,   116,   584,    43,   116,   247,    33,   380,
     371,   372,   395,   193,   194,   116,   399,   484,    43,   116,
     117,   116,   484,   116,   116,   408,   409,   410,   411,   116,
     270,   271,   639,   640,   116,   116,   503,    10,   278,   116,
     116,   503,   282,   273,   284,   275,   672,   287,   288,   289,
     116,   116,   292,   293,   294,   116,   116,    30,    10,   118,
      36,   119,   642,   119,   121,   116,   118,   534,   308,   309,
      43,   118,   534,   313,   314,   118,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     116,   115,   123,   560,   123,   118,   114,   118,   560,   121,
     330,   121,   342,   474,   120,   120,   336,   714,   116,   118,
     114,   351,   118,   353,   354,   113,   113,   584,   629,   630,
     113,   117,   584,   484,   495,   117,   588,   589,   499,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     118,   121,   121,   117,   121,   117,   121,   387,   117,   379,
     121,   121,   619,   121,   121,   121,   121,   619,   121,   121,
     121,   121,   118,   393,   404,   114,   124,   397,   125,   124,
     117,   117,     9,    30,     9,   642,   120,   417,   418,   120,
     642,   114,   412,   645,   118,   114,   118,   427,   428,   429,
     118,   114,   432,   118,   114,   662,   117,   121,   117,   666,
     662,   117,   117,   574,   666,   116,   577,   121,   121,   118,
     118,   451,   452,   453,   121,   117,   121,   116,   118,   125,
     121,   125,   125,     3,    77,    77,   118,     7,   118,   118,
      10,   117,   114,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   116,   116,   121,   117,
      30,   118,   117,    33,    34,   121,   118,   724,   118,    39,
     118,   117,   724,    43,    44,   196,   117,   117,   639,   640,
     117,   117,   117,   117,   117,   505,   117,   117,   117,   121,
     168,   117,   194,   121,   117,   117,   117,   117,   117,   123,
     118,   117,   532,   117,   121,   117,   536,   116,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   117,   108,   118,   118,   118,   117,   117,   117,   117,
     133,   196,   196,   660,   196,   606,   244,   270,   226,   662,
     115,   195,   378,   719,     3,   352,   124,    -1,     7,    -1,
     580,    10,   122,   714,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   173,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,   606,    -1,    -1,    -1,
      39,   611,   612,    -1,    43,    44,    -1,    -1,   608,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   638,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,    -1,   696,   697,    -1,    -1,
      -1,    -1,    -1,    -1,   704,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,   719,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    33,    34,    -1,    36,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,    -1,   118,   119,   120,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    -1,    36,    -1,    -1,
      39,    -1,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,    -1,    -1,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     4,     5,     6,
       7,     8,     9,    10,    -1,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    33,    34,    -1,    36,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,   116,
      -1,   118,   119,   120,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    34,
      -1,    36,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,    46,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,   116,    -1,    -1,   119,   120,   121,   122,   123,   124,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,     3,     4,     5,     6,     7,    -1,    -1,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    30,    -1,
      -1,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,   115,    -1,     7,    -1,    -1,    10,    -1,
     122,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    33,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     7,
      -1,    -1,    10,    43,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
     122,    39,    -1,    -1,    -1,    43,    44,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    -1,   122,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    30,    -1,    -1,   122,    34,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    -1,    -1,    -1,    48,    49,
      -1,    43,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,    -1,   119,
     120,   121,   122,   123,   124,    -1,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    10,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    76,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    10,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    10,    43,
      44,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    10,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,
      10,    -1,    43,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    33,    34,    36,
      39,    40,    41,    42,    43,    44,    45,    46,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,   113,   115,   116,   118,   119,   120,   121,   122,   123,
     124,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   137,   210,   211,   212,   214,   216,   247,   248,   252,
     253,   254,   255,   256,   257,   215,     3,   253,   258,   248,
     248,     3,    38,   250,   251,   252,   248,   248,     0,     3,
      38,   139,   140,   154,   248,   216,   258,   258,   118,   117,
     117,   114,   250,   117,   125,    10,    43,   189,   119,   248,
      36,   140,   210,   214,   141,     3,    39,   120,   155,   138,
     139,   210,   214,   115,   217,    10,    10,   120,   248,     4,
       5,     6,   218,   220,   113,   121,   121,   138,    10,    39,
      43,   205,   207,   208,   221,     3,     7,    10,    26,    27,
      28,    30,    33,    35,    36,    37,    40,    42,    43,    44,
      45,    47,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   122,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   152,   153,   154,   156,   157,   158,
     159,   175,   178,   187,   188,   189,   197,   203,   204,   205,
     207,   208,   209,   210,   214,   220,   224,   155,   155,    77,
     207,   208,    77,   119,   119,   219,   189,    10,    43,    44,
     122,   203,    77,   113,   189,   113,   189,   203,     3,   150,
     157,   158,   203,   153,   154,   157,   158,     3,    26,    27,
     197,   203,     3,    26,    27,    28,    45,   144,   145,   146,
     147,   203,   249,   253,    77,    36,    45,   118,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   183,   185,   189,   114,   142,   113,   118,   190,     7,
     150,   157,   203,   190,   190,   190,   176,   204,   187,   204,
     116,    30,    33,    50,    51,   163,   166,   169,   173,   189,
     198,   200,   126,   127,   213,   126,   127,   213,   115,   118,
     207,   119,   119,   207,   208,   203,   206,   206,   121,   113,
     115,   118,   151,   189,   198,   213,   183,    30,   163,   169,
     189,   207,   248,   113,   198,   213,   248,   113,   198,   213,
     116,   189,   190,   190,    30,   190,   190,   190,   189,   189,
     189,    30,   113,   189,   189,   189,   118,    50,    51,   200,
     118,   249,   207,   208,   118,   157,   189,   226,   228,   229,
     189,   189,   233,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   248,   184,   116,
     248,   203,    30,   115,   180,   204,   179,   163,   169,   198,
      48,    49,   116,   124,   246,   247,   189,   189,   123,   164,
     123,   170,    46,   116,   124,   201,   118,   121,    31,    32,
     126,   127,   206,   206,   121,   120,   120,   218,   248,   249,
     118,   198,   163,   169,   213,   114,   248,   118,   198,   114,
     248,   118,   198,   160,   248,   113,   189,   189,   118,   213,
     213,   117,   121,   189,   189,   189,   121,   121,   189,   235,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     117,   117,   121,   117,   186,   114,    30,   182,   189,   177,
      45,    76,   191,   192,   194,   203,   118,   124,   124,   117,
     125,   167,   117,   117,     9,    30,   172,     9,   172,   202,
     174,   249,   199,   200,   213,   126,   127,   120,   120,   206,
     114,   118,   118,   249,   114,   118,   249,   114,   118,   191,
     114,   248,   117,   117,   225,   121,   117,   117,   230,   232,
     121,   121,   236,   238,   240,   242,   237,   239,   241,   243,
     244,   245,   189,   118,   191,   118,   121,   181,   116,   117,
     193,    50,    51,   200,   201,   125,   125,   116,    46,   116,
     118,   118,   165,   171,   201,   191,   125,   121,   200,    77,
      77,   118,   118,   249,   118,   249,   117,   189,   114,   116,
     116,   204,   227,   214,   214,   234,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   117,   121,   117,
     182,   248,   121,   189,   189,   195,   168,   118,   191,   117,
     201,   199,   121,   207,   207,   118,   118,   161,   118,   189,
     249,   249,   117,   204,   231,   117,   214,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   121,   121,   117,   181,
     117,   192,   117,   117,   123,   196,   191,   117,   199,   172,
     118,   117,   117,   117,   121,   117,     9,    11,    12,   128,
     189,   222,   223,   222,   116,   222,   117,   118,   162,   118,
     118,   249,   223,   117,   117,   191,   117,   117
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
        case 11:

/* Line 1455 of yacc.c  */
#line 339 "vtkParse.y"
    {
        start_class((yyvsp[(2) - (2)].str));
      }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 359 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 360 "vtkParse.y"
    { reject_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 361 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 362 "vtkParse.y"
    { output_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 363 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 364 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 365 "vtkParse.y"
    { reject_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 366 "vtkParse.y"
    { reject_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 367 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 411 "vtkParse.y"
    { preSig("~"); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 412 "vtkParse.y"
    { preSig("virtual ~"); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 415 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 419 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 423 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 428 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 435 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 439 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 443 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 447 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 452 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 457 "vtkParse.y"
    { postSig("("); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 458 "vtkParse.y"
    { postSig(")"); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 459 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 460 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(2) - (9)].integer);
      openSig = 1;
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      preSig("operator ");
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 469 "vtkParse.y"
    { postSig(")"); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 469 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 470 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(2) - (4)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (4)].str));
    }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 476 "vtkParse.y"
    {
      postSig(") = 0;");
      currentFunction->Name = (yyvsp[(2) - (3)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (3)].str));
      currentFunction->IsPureVirtual = 1;
      if (mainClass)
        {
        data.IsAbstract = 1;
        }
    }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 487 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 488 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
    }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 494 "vtkParse.y"
    { postSig(")"); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 494 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 495 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 501 "vtkParse.y"
    {
      postSig(") = 0;");
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (3)].str));
      currentFunction->IsPureVirtual = 1;
      if (mainClass)
        {
        data.IsAbstract = 1;
        }
    }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 512 "vtkParse.y"
    {postSig(" const");}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 514 "vtkParse.y"
    {postSig("("); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 516 "vtkParse.y"
    { postSig(")"); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 517 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 518 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 524 "vtkParse.y"
    { postSig("("); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 532 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 533 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + 2);
      currentFunction->Name[0] = '~';
      strcpy(&currentFunction->Name[1], (yyvsp[(1) - (2)].str));
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 541 "vtkParse.y"
    { postSig("(");}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 543 "vtkParse.y"
    {postSig("const ");}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 545 "vtkParse.y"
    {postSig("static ");}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 546 "vtkParse.y"
    {postSig("static ");}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 548 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 548 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 556 "vtkParse.y"
    { currentFunction->NumberOfArguments++;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 557 "vtkParse.y"
    { currentFunction->NumberOfArguments++; postSig(", ");}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 560 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 567 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 574 "vtkParse.y"
    {
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_FUNCTION;
    }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 584 "vtkParse.y"
    {delSig();}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 585 "vtkParse.y"
    {delSig();}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 586 "vtkParse.y"
    {delSig();}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 587 "vtkParse.y"
    {delSig();}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 588 "vtkParse.y"
    {delSig();}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 589 "vtkParse.y"
    {delSig();}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 590 "vtkParse.y"
    {delSig();}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 591 "vtkParse.y"
    {delSig();}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 592 "vtkParse.y"
    {delSig();}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 593 "vtkParse.y"
    {delSig();}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 594 "vtkParse.y"
    {delSig();}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 595 "vtkParse.y"
    {delSig();}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 596 "vtkParse.y"
    {delSig();}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 597 "vtkParse.y"
    {delSig();}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 606 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 614 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 615 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 617 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_POINTER + (VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) + ((yyvsp[(3) - (3)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 619 "vtkParse.y"
    { postSig("[]"); (yyval.integer) = VTK_PARSE_POINTER + ((yyvsp[(4) - (4)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 621 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_CONST + (yyvsp[(2) - (2)].integer);}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 622 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 623 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_STATIC + (yyvsp[(2) - (2)].integer);}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 624 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | VTK_PARSE_STATIC) + (yyvsp[(3) - (3)].integer);}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 626 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 628 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer);}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 629 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 651 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 652 "vtkParse.y"
    { postSig("&"); (yyval.integer) = (yyvsp[(1) - (2)].integer);}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 653 "vtkParse.y"
    { postSig("*"); (yyval.integer) = (VTK_PARSE_REF + VTK_PARSE_POINTER) + (yyvsp[(1) - (2)].integer);}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 655 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 656 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 658 "vtkParse.y"
    { postSig("vtkStdString "); (yyval.integer) = (VTK_PARSE_STRING); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    { postSig("vtkUnicodeString "); (yyval.integer) = (VTK_PARSE_UNICODE_STRING); }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 669 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 670 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 671 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 672 "vtkParse.y"
    { postSig("* const&"); (yyval.integer) = VTK_PARSE_POINTER_CONST_REF;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 673 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 674 "vtkParse.y"
    { postSig("* const*"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 675 "vtkParse.y"
    { postSig("**&"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 676 "vtkParse.y"
    { postSig("***"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 678 "vtkParse.y"
    {postSig("unsigned ");}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 679 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_UNSIGNED + (yyvsp[(3) - (3)].integer);}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 680 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 683 "vtkParse.y"
    { postSig("vtkTypeInt8 "); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 684 "vtkParse.y"
    { postSig("vtkTypeUInt8 "); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
    { postSig("vtkTypeInt16 "); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 686 "vtkParse.y"
    { postSig("vtkTypeUInt16 "); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 687 "vtkParse.y"
    { postSig("vtkTypeInt32 "); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    { postSig("vtkTypeUInt32 "); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 689 "vtkParse.y"
    { postSig("vtkTypeInt64 "); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 690 "vtkParse.y"
    { postSig("vtkTypeUInt64 "); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    { postSig("vtkTypeFloat32 "); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 692 "vtkParse.y"
    { postSig("vtkTypeFloat64 "); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 693 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 694 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 695 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 696 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 698 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 701 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_UNKNOWN;
    }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_VTK_OBJECT;
      currentFunction->ArgClasses[currentFunction->NumberOfArguments] =
        vtkstrdup((yyvsp[(1) - (1)].str));
      /* store the string into the return value just in case we need it */
      /* this is a parsing hack because the first "type" parser will */
      /* possibly be ht ereturn type of the first argument */
      if ((!currentFunction->ReturnClass) &&
          (!currentFunction->NumberOfArguments))
        {
        currentFunction->ReturnClass = vtkstrdup((yyvsp[(1) - (1)].str));
        }
    }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 726 "vtkParse.y"
    { postSig("vtkIdType "); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 727 "vtkParse.y"
    { postSig("long long "); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 728 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 729 "vtkParse.y"
    { postSig("signed char "); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 730 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 735 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 743 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 752 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 753 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 760 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 761 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 762 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 763 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 768 "vtkParse.y"
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

  case 251:

/* Line 1455 of yacc.c  */
#line 778 "vtkParse.y"
    {postSig("Get");}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 778 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 780 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(7) - (8)].integer);
   output_function();
   }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 787 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 788 "vtkParse.y"
    {
   postSig("(char *);");
   sprintf(temps,"Set%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_CHAR_PTR;
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();
   }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 798 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 799 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   output_function();
   }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 808 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
    {postSig(");"); openSig = 0;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 810 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sscanf(currentFunction->Signature, "%*s %*s(%s);", local);
   sprintf(temps,"Set%s",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (10)].integer);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%s Get%sMinValue();",local,(yyvsp[(3) - (10)].str));
   sprintf(temps,"Get%sMinValue",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(6) - (10)].integer);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%s Get%sMaxValue();",local,(yyvsp[(3) - (10)].str));
   sprintf(temps,"Get%sMaxValue",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(6) - (10)].integer);
   output_function();
   }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 840 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 841 "vtkParse.y"
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

  case 263:

/* Line 1455 of yacc.c  */
#line 851 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 852 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 853 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   output_function();
   }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 861 "vtkParse.y"
    {preSig("void "); postSig("On();"); openSig = 0; }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 863 "vtkParse.y"
    {
   sprintf(temps,"%sOn",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VOID;
   output_function();
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"void %sOff();",(yyvsp[(3) - (7)].str));
   sprintf(temps,"%sOff",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   output_function();
   }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 878 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 883 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s(%s, %s);",(yyvsp[(3) - (7)].str),
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
   sprintf(currentFunction->Signature,"void Set%s(%s a[2]);",(yyvsp[(3) - (7)].str),
     local);
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 2;
   output_function();
   }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 908 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 913 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 2;
   output_function();
   }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 925 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 930 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s(%s, %s, %s);",
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
   sprintf(currentFunction->Signature,"void Set%s(%s a[3]);",(yyvsp[(3) - (7)].str),
     local);
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 3;
   output_function();
   }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 3;
   output_function();
   }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 974 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 979 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s(%s, %s, %s, %s);",
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
   sprintf(currentFunction->Signature,"void Set%s(%s a[4]);",(yyvsp[(3) - (7)].str),
     local);
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 4;
   output_function();
   }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1008 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1013 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 4;
   output_function();
   }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1025 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1030 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s(%s, %s, %s, %s, %s, %s);",
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
   sprintf(currentFunction->Signature,"void Set%s(%s a[6]);",(yyvsp[(3) - (7)].str),
     local);
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->ArgCounts[0] = 6;
   output_function();
   }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1063 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1068 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (7)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 6;
   output_function();
   }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1080 "vtkParse.y"
    {
      free(currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1085 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s(%s [%i]);",(yyvsp[(3) - (9)].str),
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

  case 286:

/* Line 1455 of yacc.c  */
#line 1098 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1103 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (9)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_POINTER + (yyvsp[(6) - (9)].integer);
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = (yyvsp[(8) - (9)].integer);
   output_function();
   }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1115 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
       (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ReturnClass = vtkstrdup("vtkCoordinate");
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double, double);",
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
     sprintf(currentFunction->Signature,"void Set%s(double a[2]);",
       (yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgCounts[0] = 2;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s();", (yyvsp[(3) - (4)].str));
     sprintf(temps,"Get%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 2;
     output_function();
   }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1162 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
       (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ReturnClass = vtkstrdup("vtkCoordinate");
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double, double, double);",
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
     sprintf(currentFunction->Signature,"void Set%s(double a[3]);",
       (yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgCounts[0] = 3;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s();", (yyvsp[(3) - (4)].str));
     sprintf(temps,"Get%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 3;
     output_function();
   }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1211 "vtkParse.y"
    {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,
           "int IsA(const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance();",
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
     sprintf(currentFunction->Signature, "%s *SafeDownCast(vtkObject* o);",
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

  case 291:

/* Line 1455 of yacc.c  */
#line 1262 "vtkParse.y"
    {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,
           "int IsA(const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance();",
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
     sprintf(currentFunction->Signature, "%s *SafeDownCast(vtkObject* o);",
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

  case 292:

/* Line 1455 of yacc.c  */
#line 1318 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1319 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1320 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1321 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1324 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1325 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1325 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1326 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1326 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1327 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1327 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1328 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1328 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1329 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1329 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1330 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1330 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1331 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1332 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1333 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1335 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1336 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1337 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1338 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1339 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1340 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1343 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1344 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1345 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1346 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1347 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1348 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1349 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1350 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1351 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1352 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1353 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1354 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1355 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 4923 "vtkParse.tab.c"
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
#line 1386 "vtkParse.y"

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

/* check whether this is the class we are looking for */
void start_class(const char *classname)
{
  if (!strcmp(data.ClassName, classname))
    {
    mainClass = 1;
    currentFunction = data.Functions;
    data.NumberOfFunctions = 0;
    }
  else
    {
    mainClass = 0;
    currentFunction = &throwAwayFunction;
    }
  InitFunction(currentFunction);
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

/* reject the function, do not output it */
void reject_function()
{
  InitFunction(currentFunction);
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
    if (mainClass)
      {
      data.HasDelete = 1;
      }
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
    switch (currentFunction->ArgTypes[i] & VTK_PARSE_INDIRECT)
      {
      case VTK_PARSE_ARRAY_2D:
      case VTK_PARSE_ARRAY_3D:
      case VTK_PARSE_BAD_INDIRECT:
        currentFunction->ArrayFailure = 1;
        break;
      }
    }

  if (HaveComment)
    {
    currentFunction->Comment = vtkstrdup(CommentText);
    }

  if (mainClass)
    {
    data.NumberOfFunctions++;
    currentFunction = data.Functions + data.NumberOfFunctions;
    }

  InitFunction(currentFunction);
}

extern void vtkParseOutput(FILE *,FileInfo *);

int main(int argc,char *argv[])
{
  int i, j;
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

  /* The class name should be the file name */
  i = strlen(data.FileName);
  j = i;
  while (i > 0)
    {
    --i;
    if (data.FileName[i] == '.')
      {
      j = i;
      }
    if (data.FileName[i] == '/' || data.FileName[i] == '\\')
      {
      i++;
      break;
      }
    }
  data.ClassName = (char *)malloc(j-i + 1);
  strncpy(data.ClassName, &data.FileName[i], j-i);
  data.ClassName[j-i] = '\0';

  /* This will be set to 1 while parsing the main class */
  mainClass = 0;

  currentFunction = &throwAwayFunction;

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

