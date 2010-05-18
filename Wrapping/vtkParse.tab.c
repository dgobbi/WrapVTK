
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
#define YYLAST   2558

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  395
/* YYNRULES -- Number of states.  */
#define YYNSTATES  746

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
     414,   419,   423,   424,   426,   428,   429,   434,   435,   437,
     439,   441,   442,   447,   450,   451,   456,   458,   459,   465,
     466,   467,   477,   478,   481,   486,   492,   497,   503,   508,
     514,   518,   523,   526,   530,   536,   542,   549,   558,   560,
     564,   566,   570,   573,   578,   581,   582,   583,   587,   592,
     595,   597,   600,   604,   606,   609,   611,   613,   616,   620,
     625,   629,   634,   638,   643,   648,   653,   661,   669,   671,
     675,   677,   681,   683,   687,   691,   693,   696,   699,   701,
     703,   705,   707,   709,   711,   714,   717,   720,   723,   727,
     731,   732,   736,   738,   740,   742,   744,   746,   748,   750,
     752,   754,   756,   758,   760,   762,   764,   766,   768,   770,
     772,   774,   776,   778,   780,   782,   784,   786,   788,   790,
     791,   794,   797,   798,   804,   805,   807,   809,   811,   813,
     815,   817,   820,   822,   824,   826,   828,   830,   831,   839,
     840,   841,   850,   851,   857,   858,   864,   865,   866,   877,
     878,   886,   887,   888,   897,   898,   906,   907,   915,   916,
     924,   925,   933,   934,   942,   943,   951,   952,   960,   961,
     969,   970,   978,   979,   989,   990,  1000,  1005,  1010,  1017,
    1025,  1028,  1031,  1035,  1039,  1041,  1043,  1045,  1047,  1049,
    1051,  1053,  1055,  1057,  1059,  1061,  1063,  1065,  1067,  1069,
    1071,  1073,  1075,  1077,  1079,  1081,  1083,  1085,  1087,  1089,
    1091,  1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,  1109,
    1111,  1113,  1115,  1117,  1119,  1121,  1122,  1125,  1126,  1129,
    1130,  1133,  1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,
    1151,  1153,  1155,  1157,  1159,  1161,  1163,  1165,  1167,  1169,
    1171,  1173,  1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,
    1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,  1209,  1213,
    1217,  1221,  1225,  1229,  1230,  1233
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     137,     0,    -1,   254,   139,   254,   138,    -1,    -1,   139,
     254,   138,    -1,   154,   220,    -1,   154,   216,    -1,   154,
      36,   220,    -1,   154,    36,   216,    -1,   154,   140,    -1,
     140,    -1,    -1,     3,   189,   141,   223,   113,   142,   114,
      -1,    -1,   143,   142,    -1,   226,   115,    -1,   203,    -1,
      37,   203,    -1,   145,    -1,   144,    -1,   147,    -1,   146,
      -1,   148,    -1,   152,    -1,   150,    -1,    35,   150,    -1,
     149,    -1,    28,    -1,   158,   190,    -1,    35,   158,   190,
      -1,    36,   158,   190,    -1,   157,   190,    -1,    35,   157,
     190,    -1,    36,   157,   190,    -1,   153,   190,    -1,    36,
     153,   190,    -1,   156,   190,    -1,   112,   116,   254,   117,
     118,    -1,   230,   118,    -1,   230,    -1,    26,   189,   113,
     254,   114,   255,   118,    -1,    26,   113,   254,   114,   255,
     118,    -1,    27,   189,   113,   254,   114,   255,   118,    -1,
      27,   113,   254,   114,   255,   118,    -1,    42,   255,   118,
      -1,   154,   150,    -1,     3,   189,   151,    -1,   118,    -1,
     113,   254,   114,   118,    -1,   115,   255,   118,    -1,    40,
     209,   206,   118,    -1,    40,    28,    -1,    40,     3,   189,
     113,   254,   114,   189,   118,    -1,    40,     3,   113,   254,
     114,   189,   118,    -1,    40,   209,    50,   189,   117,   116,
     255,   117,   118,    -1,    40,   209,    51,   189,   117,   116,
     255,   117,   118,    -1,    40,   145,    -1,    40,   144,    -1,
      40,   147,    -1,    40,   146,    -1,    40,    45,   118,    -1,
     154,   157,    -1,    38,   119,   120,    -1,    38,   119,   155,
     120,    -1,     3,    10,    -1,     3,    10,   121,   155,    -1,
      39,    10,    -1,    39,    10,   121,   155,    -1,    47,   116,
     157,   117,    -1,   122,   183,    -1,     7,   122,   183,    -1,
     175,    -1,   209,   169,    -1,   209,    30,   169,    -1,     7,
     209,    30,   169,    -1,     7,   209,   169,    -1,   159,    -1,
     209,   163,    -1,   209,    30,   163,    -1,     7,   209,    30,
     163,    -1,     7,   209,   163,    -1,    -1,    -1,    -1,    33,
     209,   116,   160,   194,   117,   161,   172,   162,    -1,    -1,
      -1,   166,   164,   172,   165,    -1,   166,   123,     9,    -1,
      -1,    -1,    33,   252,   167,   116,   168,   194,   117,    -1,
      -1,    -1,   173,   170,   172,   171,    -1,   173,   123,     9,
      -1,    -1,    30,    -1,    -1,   189,   116,   174,   194,   117,
      -1,    -1,    -1,   178,   176,   180,   177,    -1,    -1,   189,
     116,   179,   194,   117,    -1,    -1,   115,   182,   181,    -1,
      -1,   121,   182,   181,    -1,   189,   116,   254,   117,    -1,
      -1,   185,   184,    -1,    -1,   189,   116,   186,   194,   117,
      -1,    30,    -1,    44,    -1,    44,    36,    -1,    43,    -1,
      10,    -1,   118,    -1,   113,   254,   114,   118,    -1,   113,
     254,   114,    -1,    -1,   192,    -1,   197,    -1,    -1,   197,
     193,   121,   192,    -1,    -1,   195,    -1,    76,    -1,   197,
      -1,    -1,   197,   196,   121,   195,    -1,   209,   207,    -1,
      -1,   209,   206,   198,   202,    -1,    45,    -1,    -1,   209,
      51,   199,   189,   117,    -1,    -1,    -1,   209,    50,   200,
     189,   117,   116,   201,   191,   117,    -1,    -1,   123,   228,
      -1,     3,   189,   204,   118,    -1,     3,   189,   219,   204,
     118,    -1,    26,   189,   204,   118,    -1,    26,   189,   219,
     204,   118,    -1,    27,   189,   204,   118,    -1,    27,   189,
     219,   204,   118,    -1,   209,   204,   118,    -1,   209,    30,
     204,   118,    -1,    45,   118,    -1,    44,    45,   118,    -1,
     209,    51,   189,   117,   118,    -1,   209,    50,   189,   117,
     118,    -1,   209,    50,   189,   117,    46,   118,    -1,   209,
      50,   189,   117,   116,   191,   117,   118,    -1,   206,    -1,
     206,   121,   205,    -1,   206,    -1,   206,   121,   205,    -1,
     219,   206,    -1,   219,   206,   121,   205,    -1,   189,   207,
      -1,    -1,    -1,    46,   208,   207,    -1,   124,   255,   125,
     207,    -1,   187,   210,    -1,   210,    -1,   188,   210,    -1,
     188,   187,   210,    -1,   220,    -1,   220,   219,    -1,   215,
      -1,   211,    -1,   211,   219,    -1,    10,    77,   213,    -1,
      10,    77,   213,   219,    -1,    43,    77,   213,    -1,    43,
      77,   213,   219,    -1,    43,    77,   214,    -1,    43,    77,
     214,   219,    -1,   214,   119,   212,   120,    -1,   213,   119,
     212,   120,    -1,    39,   214,   119,   212,   120,    77,   213,
      -1,    39,   213,   119,   212,   120,    77,   213,    -1,   209,
      -1,   209,   121,   212,    -1,    10,    -1,    10,    77,   213,
      -1,    43,    -1,    43,    77,   213,    -1,    43,    77,   214,
      -1,   216,    -1,   216,   126,    -1,   216,   127,    -1,   217,
      -1,   218,    -1,    89,    -1,    90,    -1,   126,    -1,   127,
      -1,   127,   126,    -1,   127,    32,    -1,   127,   127,    -1,
     127,    31,    -1,   127,   127,   126,    -1,   127,   127,   127,
      -1,    -1,    34,   221,   222,    -1,   222,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,
      84,    -1,    85,    -1,    86,    -1,    87,    -1,    14,    -1,
      20,    -1,    21,    -1,    13,    -1,    15,    -1,    16,    -1,
      19,    -1,    24,    -1,    25,    -1,    10,    -1,    43,    -1,
      88,    -1,    17,    -1,    18,    -1,    22,    -1,    23,    -1,
      -1,   115,   224,    -1,   226,   227,    -1,    -1,   226,   227,
     225,   121,   224,    -1,    -1,     4,    -1,     5,    -1,     6,
      -1,   213,    -1,   214,    -1,   211,    -1,   128,   229,    -1,
     229,    -1,     9,    -1,    11,    -1,    12,    -1,   189,    -1,
      -1,    91,   116,   189,   121,   231,   210,   117,    -1,    -1,
      -1,    92,   116,   232,   189,   121,   233,   210,   117,    -1,
      -1,    93,   116,   234,   189,   117,    -1,    -1,    94,   116,
     235,   189,   117,    -1,    -1,    -1,    95,   116,   189,   121,
     236,   220,   237,   121,   255,   117,    -1,    -1,    96,   116,
     189,   121,   238,   220,   117,    -1,    -1,    -1,    97,   116,
     239,   189,   121,   240,   220,   117,    -1,    -1,    98,   116,
     189,   241,   121,   220,   117,    -1,    -1,    99,   116,   189,
     121,   242,   220,   117,    -1,    -1,   103,   116,   189,   121,
     243,   220,   117,    -1,    -1,   100,   116,   189,   121,   244,
     220,   117,    -1,    -1,   104,   116,   189,   121,   245,   220,
     117,    -1,    -1,   101,   116,   189,   121,   246,   220,   117,
      -1,    -1,   105,   116,   189,   121,   247,   220,   117,    -1,
      -1,   102,   116,   189,   121,   248,   220,   117,    -1,    -1,
     106,   116,   189,   121,   249,   220,   117,    -1,    -1,   107,
     116,   189,   121,   250,   220,   121,   228,   117,    -1,    -1,
     108,   116,   189,   121,   251,   220,   121,   228,   117,    -1,
     109,   116,   189,   117,    -1,   110,   116,   189,   117,    -1,
     111,   116,   189,   121,   189,   117,    -1,   111,   116,   189,
     121,   189,   121,   117,    -1,   116,   117,    -1,   124,   125,
      -1,    48,   124,   125,    -1,    49,   124,   125,    -1,   253,
      -1,   123,    -1,   127,    -1,   129,    -1,   128,    -1,   130,
      -1,   131,    -1,   122,    -1,   121,    -1,   119,    -1,   120,
      -1,   126,    -1,   132,    -1,   133,    -1,   134,    -1,    48,
      -1,    49,    -1,    52,    -1,    53,    -1,    54,    -1,    55,
      -1,    56,    -1,    57,    -1,    60,    -1,    61,    -1,    62,
      -1,    63,    -1,    64,    -1,    58,    -1,    59,    -1,    65,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    -1,   258,   254,    -1,    -1,   259,   255,    -1,    -1,
     257,   256,    -1,     3,    -1,    38,    -1,   258,    -1,   118,
      -1,   259,    -1,   263,    -1,    29,    -1,   260,    -1,   261,
      -1,   262,    -1,   253,    -1,   115,    -1,   135,    -1,     8,
      -1,   220,    -1,   216,    -1,    77,    -1,     9,    -1,    12,
      -1,    28,    -1,    30,    -1,    33,    -1,    44,    -1,    36,
      -1,     7,    -1,    26,    -1,    27,    -1,    39,    -1,    46,
      -1,    45,    -1,    76,    -1,     4,    -1,     6,    -1,     5,
      -1,    41,    -1,    42,    -1,   113,   256,   114,    -1,   116,
     254,   117,    -1,    50,   254,   117,    -1,    51,   254,   117,
      -1,   124,   254,   125,    -1,    40,   264,   118,    -1,    -1,
       3,   264,    -1,   259,   264,    -1
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
     551,   552,   554,   554,   556,   556,   556,   558,   558,   560,
     560,   561,   561,   563,   571,   570,   577,   583,   583,   589,
     590,   589,   597,   597,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   614,   614,
     616,   617,   618,   619,   621,   629,   630,   630,   633,   636,
     637,   638,   639,   641,   642,   644,   645,   646,   647,   648,
     649,   650,   651,   652,   654,   655,   656,   657,   659,   659,
     661,   661,   663,   663,   664,   666,   667,   668,   670,   671,
     673,   675,   684,   685,   686,   687,   688,   689,   690,   691,
     693,   693,   695,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   714,
     715,   716,   717,   724,   741,   742,   743,   744,   745,   747,
     747,   749,   758,   757,   766,   767,   768,   769,   771,   771,
     771,   773,   773,   775,   776,   777,   778,   782,   781,   793,
     793,   793,   802,   802,   813,   813,   823,   824,   822,   855,
     854,   866,   867,   866,   876,   875,   893,   892,   923,   922,
     940,   939,   972,   971,   989,   988,  1023,  1022,  1040,  1039,
    1078,  1077,  1095,  1094,  1113,  1112,  1129,  1176,  1225,  1276,
    1333,  1334,  1335,  1336,  1337,  1339,  1340,  1340,  1341,  1341,
    1342,  1342,  1343,  1343,  1344,  1344,  1345,  1345,  1346,  1347,
    1348,  1349,  1350,  1351,  1352,  1353,  1354,  1355,  1356,  1357,
    1358,  1359,  1360,  1361,  1362,  1363,  1364,  1365,  1366,  1367,
    1368,  1369,  1370,  1371,  1372,  1377,  1377,  1378,  1378,  1379,
    1379,  1381,  1381,  1381,  1383,  1383,  1383,  1385,  1385,  1385,
    1385,  1385,  1386,  1386,  1386,  1386,  1386,  1386,  1387,  1387,
    1387,  1387,  1387,  1387,  1388,  1388,  1388,  1388,  1388,  1388,
    1388,  1389,  1389,  1389,  1389,  1389,  1389,  1391,  1392,  1393,
    1394,  1395,  1396,  1398,  1398,  1399
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
  "func_body", "ignore_args_list", "ignore_more_args", "$@17", "args_list",
  "more_args", "$@18", "arg", "$@19", "$@20", "$@21", "$@22",
  "opt_var_assign", "var", "var_ids", "maybe_indirect_var_ids", "var_id",
  "var_array", "$@23", "type", "type_red1", "templated_id", "types",
  "scoped_id", "vtk_scoped_id", "type_string1", "type_string2",
  "type_string3", "type_string4", "type_indirection", "type_red2", "$@24",
  "type_primitive", "optional_scope", "scope_list", "$@25", "scope_type",
  "superclass_id", "float_num", "float_prim", "macro", "$@26", "$@27",
  "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36",
  "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45",
  "$@46", "op_token", "op_token_no_delim", "maybe_other",
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
     190,   190,   191,   191,   192,   193,   192,   194,   194,   195,
     195,   196,   195,   197,   198,   197,   197,   199,   197,   200,
     201,   197,   202,   202,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   204,   204,
     205,   205,   205,   205,   206,   207,   208,   207,   207,   209,
     209,   209,   209,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   211,   211,   211,   211,   212,   212,
     213,   213,   214,   214,   214,   215,   215,   215,   216,   216,
     217,   218,   219,   219,   219,   219,   219,   219,   219,   219,
     221,   220,   220,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   223,
     223,   224,   225,   224,   226,   226,   226,   226,   227,   227,
     227,   228,   228,   229,   229,   229,   229,   231,   230,   232,
     233,   230,   234,   230,   235,   230,   236,   237,   230,   238,
     230,   239,   240,   230,   241,   230,   242,   230,   243,   230,
     244,   230,   245,   230,   246,   230,   247,   230,   248,   230,
     249,   230,   250,   230,   251,   230,   230,   230,   230,   230,
     252,   252,   252,   252,   252,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   254,   254,   255,   255,   256,
     256,   257,   257,   257,   258,   258,   258,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   259,   259,   259,
     259,   259,   259,   259,   259,   259,   259,   260,   261,   261,
     261,   262,   263,   264,   264,   264
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
       4,     3,     0,     1,     1,     0,     4,     0,     1,     1,
       1,     0,     4,     2,     0,     4,     1,     0,     5,     0,
       0,     9,     0,     2,     4,     5,     4,     5,     4,     5,
       3,     4,     2,     3,     5,     5,     6,     8,     1,     3,
       1,     3,     2,     4,     2,     0,     0,     3,     4,     2,
       1,     2,     3,     1,     2,     1,     1,     2,     3,     4,
       3,     4,     3,     4,     4,     4,     7,     7,     1,     3,
       1,     3,     1,     3,     3,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     3,     3,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     2,     0,     5,     0,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     0,     7,     0,
       0,     8,     0,     5,     0,     5,     0,     0,    10,     0,
       7,     0,     0,     8,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     9,     0,     9,     4,     4,     6,     7,
       2,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     3,     0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     345,   382,   384,   383,   375,   364,   368,   232,   369,   226,
     223,   227,   228,   235,   236,   229,   224,   225,   237,   238,
     230,   231,   376,   377,   370,   357,   371,   372,   210,   374,
     378,   393,   385,   386,   233,   373,   380,   379,   319,   320,
     345,   345,   321,   322,   323,   324,   325,   326,   332,   333,
     327,   328,   329,   330,   331,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   381,   367,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   234,   200,
     201,   349,   362,   345,   354,   313,   314,   312,   311,   305,
     345,   315,   306,   308,   307,   309,   310,   316,   317,   318,
     363,     0,   366,   198,   199,   365,   212,   361,     0,   345,
     355,   358,   359,   360,   356,     0,   393,   393,     0,     0,
       0,   351,   352,     0,   349,   353,     0,     0,     1,     0,
       0,   345,    10,     0,   346,   211,   394,   395,   392,   389,
     390,   387,   350,   388,   391,   118,   117,    11,     0,     3,
       0,     9,     6,     5,   239,     0,     0,    62,     0,     2,
     345,     8,     7,   244,     0,    64,    66,    63,     3,   245,
     246,   247,   240,     0,    13,     0,     0,     4,   190,     0,
     192,   250,   248,   249,   241,     0,     0,   232,     0,     0,
      27,   114,     0,     0,     0,     0,     0,   347,   233,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    19,    18,    21,
      20,    22,    26,    24,    23,     0,     0,     0,     0,     0,
      76,    71,   100,     0,     0,     0,    16,     0,   170,   176,
       0,     0,   175,   195,   173,     0,    39,    65,    67,     0,
       0,     0,     0,     0,     0,     0,     0,   232,   233,   115,
       0,     0,     0,   345,     0,   345,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,    51,     0,    57,    56,    59,
      58,     0,     0,   347,     0,   116,     0,   152,     0,     0,
     259,   262,   264,     0,     0,   271,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     345,    69,   110,     0,    12,    14,   345,   119,    34,     0,
      45,    61,     0,    36,    31,    28,   105,   169,     0,   171,
     103,     0,     0,     0,     0,    77,    85,    72,    92,   165,
       0,   158,   202,   203,   177,   196,   197,   174,    15,    38,
     191,     0,     0,   193,   194,   188,     0,     0,   244,   345,
     347,    47,    46,   165,     0,     0,    70,     0,    80,    75,
       0,   178,     0,   345,     0,     0,     0,   345,     0,     0,
      81,     0,    32,    29,     0,    35,    33,    30,     0,     0,
       0,     0,   345,     0,     0,     0,    60,     0,     0,     0,
      44,   348,   180,   182,   153,     0,     0,     0,     0,     0,
       0,     0,     0,   274,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,   112,
       0,     0,     0,     0,   101,   172,   127,    78,    73,     0,
     319,   320,     0,     0,    89,   304,     0,     0,     0,    96,
       0,    96,   166,    98,   347,   164,   150,     0,   207,   205,
     204,   206,     0,     0,     0,   185,   184,   243,     0,     0,
     144,     0,    79,    74,   179,   347,     0,   146,     0,   347,
       0,   148,     0,   127,     0,   345,     0,     0,    50,   181,
     183,    68,   257,     0,     0,     0,   266,   269,     0,     0,
     276,   280,   284,   288,   278,   282,   286,   290,   292,   294,
     296,   297,     0,     0,   127,   121,     0,   107,     0,   102,
     136,   129,     0,   128,   130,   165,   151,     0,     0,   300,
     301,     0,     0,     0,    88,    97,    86,    95,    93,   165,
     127,     0,   159,   160,     0,   208,   209,     0,     0,   189,
       0,    49,   145,     0,   347,   147,     0,   347,   149,     0,
       0,     0,     0,     0,     0,   260,   263,   265,     0,     0,
     272,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    37,     0,   120,     0,   106,   345,   104,
       0,   139,   137,   134,   133,   302,   303,    90,     0,   122,
     155,   154,    87,    94,   167,     0,   165,     0,   162,     0,
       0,    48,    41,     0,    43,     0,    82,     0,     0,   347,
     347,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   298,     0,   113,
     107,     0,     0,     0,     0,   142,   127,   156,     0,   123,
     124,    99,   168,   161,     0,   187,   186,    40,    42,    96,
      53,     0,     0,     0,   258,     0,     0,   270,     0,   275,
     277,   281,   285,   289,   279,   283,   287,   291,     0,     0,
     299,   108,   109,   132,     0,     0,     0,   135,     0,     0,
       0,   163,    83,    52,     0,     0,   261,   347,   273,   253,
     254,   255,     0,   256,     0,   252,     0,     0,   138,   143,
      91,   157,     0,    84,    54,    55,     0,   251,   293,   295,
     140,   126,   268,   122,     0,   141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   101,   159,   160,   132,   154,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   382,   234,   235,   133,   158,
     237,   238,   239,   240,   503,   679,   733,   355,   469,   622,
     356,   551,   666,   357,   471,   623,   556,   358,   560,   241,
     346,   539,   242,   456,   454,   607,   537,   331,   448,   332,
     534,   243,   244,   383,   338,   668,   669,   710,   542,   543,
     610,   544,   665,   664,   663,   743,   707,   246,   360,   562,
     361,   475,   559,   545,   248,   249,   376,   250,   251,   252,
     102,   103,   104,   564,   105,   115,   106,   164,   172,   265,
     173,   184,   724,   725,   256,   584,   427,   642,   428,   429,
     588,   686,   589,   432,   645,   519,   592,   596,   593,   597,
     594,   598,   595,   599,   600,   601,   464,   107,   108,   302,
     123,   124,   109,   110,   111,   112,   113,   114,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -614
static const yytype_int16 yypact[] =
{
    1076,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,   944,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    1076,  1076,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,   811,  -614,  1076,  -614,  -614,  -614,  -614,  -614,  -614,
    1076,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,    56,  -614,  -614,  -614,  -614,  -614,  -614,    45,  1076,
    -614,  -614,  -614,  -614,  -614,  1588,   944,   944,   -86,   -14,
     -11,  -614,  -614,     4,   811,  -614,     7,    23,  -614,   151,
       1,  1076,  -614,  1966,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,    15,    45,
    2389,  -614,  -614,  -614,    29,   148,   177,  -614,    72,  -614,
    1076,  -614,  -614,   327,    86,    89,    92,  -614,    45,  -614,
    -614,  -614,  -614,    88,  1341,   108,   108,  -614,   130,   185,
     145,  -614,   105,   113,   118,   151,  1701,   -38,     2,     6,
    -614,  -614,  2245,   644,  1536,  1878,  1790,  1208,    33,   119,
     128,   136,   146,   150,   157,   170,   179,   190,   194,   197,
     209,   219,   221,   226,   229,   232,   240,   244,   245,   248,
     249,   250,   253,   256,   151,   230,  1341,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,   -60,  1451,   -60,   -60,   -60,
    -614,  -614,  -614,  2358,  2277,   257,  -614,   266,  -614,   142,
     105,   113,  -614,   171,   142,   260,   261,  -614,  -614,   353,
     267,   272,   185,  2245,  2245,   259,    41,   -39,   -37,   354,
     151,   168,   353,  1076,    19,  1076,    50,   279,   151,  -614,
     -60,   -60,   271,   -60,  1620,   -60,   -60,   151,   151,   151,
    -614,   210,    12,     2,     6,  -614,   278,  -614,  -614,  -614,
    -614,   204,   280,  1208,   185,  -614,   281,  -614,  1620,   151,
    -614,  -614,  -614,   151,   151,  -614,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
    1076,  -614,  -614,   284,  -614,  -614,  1076,  -614,  -614,  1701,
    -614,  -614,   173,  -614,  -614,  -614,   282,  -614,  2358,  -614,
    -614,   175,  1958,   151,   151,  -614,   283,  -614,   287,   -19,
     285,   290,  -614,   138,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  2245,  2245,  -614,  -614,   294,   310,   314,   327,  1076,
    1208,  -614,  -614,   -29,   286,   151,  -614,   175,  -614,  -614,
     289,   181,   288,  1076,   317,   151,   322,  1076,   319,   151,
    -614,   228,  -614,  -614,   175,  -614,  -614,  -614,     3,     3,
       3,   151,  1076,   331,   334,   335,  -614,   151,   151,   332,
    -614,  -614,   193,   196,  -614,   338,   328,   151,   151,   151,
     339,   340,   151,  -614,   344,   359,   360,   361,   362,   363,
     364,   365,   367,   369,   374,   376,   373,   378,  -614,  -614,
     342,   241,   151,   151,  -614,  -614,  2083,  -614,  -614,   380,
     277,   372,   382,   375,  -614,  -614,   384,   385,   443,   475,
     497,   475,  -614,  -614,  1208,  -614,  -614,     3,  -614,  -614,
    -614,   201,   388,   389,  2245,  -614,  -614,  -614,   396,   393,
    -614,   394,  -614,  -614,  -614,  1208,   399,  -614,   401,  1208,
     400,  -614,   403,  2083,   410,  1076,   408,   409,  -614,  -614,
    -614,  -614,  -614,   412,   413,   414,  -614,  -614,   415,   416,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,   151,   420,  2083,   423,   151,   421,   418,  -614,
    -614,  -614,   428,  -614,   426,   187,  -614,   424,   429,  -614,
    -614,   432,   -22,   437,  -614,  -614,  -614,  -614,  -614,   -29,
    2083,   431,  -614,   436,   151,  -614,  -614,   481,   482,  -614,
     444,  -614,  -614,   445,  1208,  -614,   447,  1208,  -614,   449,
     151,   453,   452,   454,  2358,  -614,  -614,  -614,  2470,  2470,
    -614,  2470,  2470,  2470,  2470,  2470,  2470,  2470,  2470,  2470,
    2470,  2470,   -91,  -614,   455,  -614,   151,  -614,  1076,  -614,
     440,  -614,  -614,  -614,  -614,  -614,  -614,  -614,   451,  2164,
    -614,  -614,  -614,  -614,  -614,   460,   -29,     3,   450,   353,
     353,  -614,  -614,   461,  -614,   462,  -614,   463,   151,  1208,
    1208,   465,  2358,  -614,   466,  2470,   467,   468,   469,   470,
     471,   472,   473,   474,   476,   457,   477,  -614,   478,  -614,
     421,   479,  2083,   151,   151,   480,  2083,  -614,   483,  -614,
     485,  -614,  -614,  -614,     3,  -614,  -614,  -614,  -614,   475,
    -614,   484,   487,   490,  -614,   494,   491,  -614,   496,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,    32,    32,
    -614,  -614,  -614,  -614,   500,   501,    32,  -614,   502,   504,
     493,  -614,  -614,  -614,   505,   506,  -614,  1208,  -614,  -614,
    -614,  -614,   247,  -614,   503,  -614,   508,   510,  -614,  -614,
    -614,  -614,  2164,  -614,  -614,  -614,   511,  -614,  -614,  -614,
    -614,  -614,  -614,  2164,   512,  -614
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -614,  -614,   433,   486,   459,  -614,   371,  -614,   434,   435,
     438,   439,  -614,  -614,  -173,  -614,  -614,   405,  -137,   116,
    -614,    -5,   161,  -614,  -614,  -614,  -614,  -264,  -614,  -614,
    -614,  -614,  -614,  -261,  -614,  -614,  -470,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,   -33,    27,   368,  -614,  -614,
    -614,   395,  -614,   100,    -3,  -106,   -92,  -614,  -484,   -20,
    -614,  -604,  -614,  -614,  -614,  -614,  -614,   446,   165,  -613,
    -297,  -524,  -614,   -21,  -210,   498,  -259,  -171,  -170,  -614,
    -127,  -614,  -614,   -70,  -122,  -614,   528,  -614,   268,  -614,
    -149,  -614,  -599,   -78,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,   293,   110,  -272,
     524,  -614,   -45,   -31,  -614,  -614,  -614,  -614,   242
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -245
static const yytype_int16 yytable[] =
{
     117,   558,   182,   183,   419,   377,   152,   388,   260,   261,
     389,   153,   145,   145,   673,   670,   145,   472,   155,   579,
     279,   614,   145,   161,   618,   255,   657,   472,   162,   145,
     658,   421,   138,   347,   349,   624,   125,   236,   272,   272,
     304,   719,   145,   720,   721,   146,   146,   253,   129,   146,
     604,   145,   254,   336,   156,   146,   128,   284,   337,   253,
     145,   711,   146,   340,   254,   253,   253,   253,   253,   253,
     254,   254,   254,   254,   254,   146,   625,   255,  -118,   125,
    -190,  -190,  -192,   130,   146,   117,   117,   457,   370,   236,
     458,   373,   374,   146,   619,   474,   620,   473,   178,   253,
     726,   391,   672,   139,   254,   474,   140,   729,   489,   253,
     304,   155,   482,   483,   254,   273,   253,   253,   141,   275,
     148,   254,   254,   492,   143,   412,   493,   179,   670,   362,
     363,   180,   393,   422,   423,   157,   253,   253,   455,   670,
     457,   254,   254,   458,   163,   362,   363,   156,   144,  -117,
     119,   120,  -192,   247,   379,   305,   380,   253,   165,   381,
     722,   145,   254,   397,   306,   271,   303,   362,   363,   478,
     479,   277,   282,   282,   291,   301,   362,   363,   145,   364,
     563,   253,   708,   145,   367,   145,   254,   166,   280,   285,
     389,   458,   167,   126,   146,   178,   385,   145,   387,   174,
     127,   352,   561,   452,   395,   247,   399,   259,   352,   712,
     175,   146,   253,   176,   145,   342,   146,   254,   146,   134,
     145,   253,   262,   573,   263,   569,   254,   576,   180,   147,
     146,   341,   264,   472,   343,   344,   345,   611,   612,  -242,
     411,   149,   375,   375,   253,   253,   307,   146,   613,   254,
     254,   145,   308,   146,   417,   418,   719,   145,   720,   721,
     353,   354,   309,   342,   480,   481,   310,   628,   362,   363,
     168,   536,   303,   311,   245,   493,   145,   402,   403,   341,
     405,   145,   406,   407,   146,   266,   312,   342,   274,   276,
     146,   257,   258,   245,   245,   313,   351,   365,   366,   352,
    -191,   404,   633,   425,   352,   635,   314,   362,   363,   146,
     315,   474,  -193,   316,   146,  -194,   353,   354,   451,   362,
     363,   494,   362,   363,   333,   317,   245,   565,   566,   253,
     563,   169,   170,   171,   254,   318,   245,   319,   385,   395,
     399,   379,   320,   380,   334,   321,   381,   359,   322,   303,
     375,   375,   509,   510,   281,   286,   323,   253,   136,   137,
     324,   325,   254,   178,   326,   327,   328,   682,   683,   329,
     333,   390,   330,   350,   641,   368,   253,   563,   401,   369,
     378,   254,   390,   392,   245,   396,   371,   408,   409,   410,
     305,   372,   413,   414,   415,   400,   416,   453,   420,   424,
     449,   547,   495,   476,   490,   473,   468,   253,   245,   426,
     470,   477,   254,   430,   431,   484,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     485,   384,   685,   253,   486,   497,   499,   501,   254,   394,
     447,   398,   390,   303,   505,   736,   450,   393,   397,   512,
     508,   359,   554,   466,   467,   511,   535,   253,   675,   676,
     516,   517,   254,   375,   303,   520,   643,   644,   303,   646,
     647,   648,   649,   650,   651,   652,   653,   654,   655,   656,
     521,   522,   523,   524,   525,   526,   527,   390,   528,   488,
     529,   530,   253,   531,   532,   533,   548,   254,   546,   549,
     550,   552,   553,   496,   390,   555,   557,   500,   567,   568,
     570,   571,   572,   574,   577,   253,   459,   506,   507,   575,
     254,   578,   504,   688,   580,   582,   583,   513,   514,   515,
     586,   587,   518,   585,   608,   253,   590,   591,   603,   253,
     254,   605,   606,   303,   254,   609,   303,  -131,   617,   615,
     491,   390,   390,   538,   616,   621,   626,   627,   629,   630,
     498,   662,   631,   632,   502,   634,   636,   638,   639,   667,
     640,   674,   659,   384,   394,   398,   459,   671,   698,   677,
     678,   680,   684,   687,   689,   690,   691,   692,   693,   694,
     695,   696,   151,   697,   131,   700,   702,   335,   699,   283,
     709,   177,   713,   706,   714,   253,  -125,   715,   303,   303,
     254,   716,   717,   718,   732,   581,   253,   727,   728,   730,
     738,   254,   731,   734,   735,   739,   740,   701,   742,   745,
     297,   298,   602,   660,   299,   300,   390,   744,   386,   348,
     741,   290,   703,   135,   737,   465,   487,   278,   142,     0,
       0,   186,     0,     0,   187,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,   181,     0,     0,   191,     0,     0,   192,    28,     0,
     637,     0,     0,   179,     0,     0,   303,   198,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   538,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   661,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,     0,   681,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   704,   705,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   723,   723,
       0,     0,     0,     0,     0,     0,   723,     0,     0,     0,
       0,     0,     0,     0,   121,     1,     2,     3,     4,     5,
       6,     7,   723,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,     0,     0,    27,    28,     0,    29,     0,   122,
      30,    31,    32,    33,    34,    35,    36,    37,     0,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    81,     0,    82,    83,     0,    84,
      85,    86,    87,    88,    89,    90,     0,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   116,     1,     2,
       3,     4,     5,     6,     7,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,    28,     0,
      29,     0,     0,    30,     0,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,    82,
      83,     0,     0,    85,    86,    87,    88,    89,    90,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
       1,     2,     3,     4,     5,     6,     7,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,     0,     0,    27,
      28,     0,    29,     0,     0,    30,    31,    32,    33,    34,
      35,    36,    37,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,    82,    83,     0,    84,    85,    86,    87,    88,    89,
      90,     0,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,     1,     2,     3,     4,     5,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,    27,    28,     0,    29,     0,     0,    30,     0,    32,
      33,    34,    35,    36,    37,     0,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    82,    83,     0,     0,    85,    86,    87,
      88,    89,    90,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   185,   169,   170,   171,   186,     0,
       0,   187,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   188,   189,   190,
       0,   191,     0,     0,   192,    28,   193,   194,   195,   130,
     179,   196,     0,   197,   198,   199,   200,     0,   201,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   278,     0,  -244,     0,   339,     0,
       0,   187,     0,   224,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,   191,     0,     0,     0,    28,     0,     0,     0,     0,
     179,     0,     0,     0,   198,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,   186,     0,     0,   187,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,   191,     0,     0,   192,
      28,     0,     0,   224,   130,   179,     0,     0,     0,   198,
     269,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,   339,     0,     0,
     187,    34,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
     191,     0,     0,     0,    28,     0,     0,     0,   224,   179,
       0,     0,     0,   198,   269,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   267,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,   191,     0,     0,     0,    28,     0,     0,     0,     0,
     179,     0,   224,     0,   268,   269,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,   292,     0,     0,     0,     0,     0,     0,
     267,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   293,   294,   295,     0,
     191,     0,     0,   270,    28,     0,     0,     0,     0,   179,
       0,     0,     0,   268,   269,   296,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,   287,     0,     0,     0,     0,     0,     0,   267,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   288,   289,     0,     0,   191,     0,
       0,     0,    28,     0,     0,     0,     0,   179,     0,     0,
       0,   268,   199,   200,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   129,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
      28,     0,   150,     0,     0,     0,   460,   461,     0,    34,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   462,     0,     0,    85,    86,    87,
      88,    89,   463,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   267,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,   191,     0,     0,     0,    28,     0,     0,
       0,     0,   179,     0,     0,     0,   268,   269,   540,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   541,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   267,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,   191,     0,     0,     0,    28,     0,
       0,     0,     0,   179,     0,     0,     0,   268,   269,   540,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   267,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,   191,     0,     0,     0,    28,
       0,     0,     0,     0,   179,     0,     0,   267,   268,   269,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,   191,     0,     0,
       0,    28,     0,     0,     0,     0,   179,     0,     0,     0,
     268,     0,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,   267,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,     0,     0,
       0,     0,    28,     0,     0,     0,     0,   179,     0,     7,
       0,   268,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,    28,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       7,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78
};

static const yytype_int16 yycheck[] =
{
      31,   471,   173,   173,   301,   264,   133,   271,   179,   179,
     271,   133,    10,    10,   627,   619,    10,    46,     3,   503,
     193,   545,    10,   150,    46,   174,   117,    46,   150,    10,
     121,   303,   118,   243,   244,   559,    81,   174,    77,    77,
      77,     9,    10,    11,    12,    43,    43,   174,     3,    43,
     534,    10,   174,   113,    39,    43,     0,   194,   118,   186,
      10,   674,    43,   236,   186,   192,   193,   194,   195,   196,
     192,   193,   194,   195,   196,    43,   560,   226,   116,   124,
     119,   119,   119,    38,    43,   116,   117,   351,   259,   226,
     351,   262,   262,    43,   116,   124,   118,   116,    10,   226,
     699,   272,   626,   117,   226,   124,   117,   706,   380,   236,
      77,     3,   371,   372,   236,   113,   243,   244,   114,   113,
     119,   243,   244,   387,   117,   113,   387,    39,   732,   126,
     127,    43,   113,   304,   304,   120,   263,   264,   348,   743,
     404,   263,   264,   404,   115,   126,   127,    39,   125,   116,
      40,    41,   119,   174,   113,    36,   115,   284,    10,   118,
     128,    10,   284,   113,    45,   186,   197,   126,   127,    31,
      32,   192,   193,   194,   195,   196,   126,   127,    10,   249,
     477,   308,   666,    10,   254,    10,   308,    10,   193,   194,
     451,   452,   120,    83,    43,    10,   266,    10,    30,   113,
      90,    33,   474,    30,   274,   226,   276,    77,    33,   679,
     121,    43,   339,   121,    10,   236,    43,   339,    43,   109,
      10,   348,    77,   495,   119,   484,   348,   499,    43,   129,
      43,   236,   119,    46,   237,   238,   239,    50,    51,   121,
      30,   131,   263,   264,   371,   372,   118,    43,   545,   371,
     372,    10,   116,    43,    50,    51,     9,    10,    11,    12,
      50,    51,   116,   284,   126,   127,   116,   564,   126,   127,
     160,    30,   303,   116,   174,   536,    10,   280,   281,   284,
     283,    10,   285,   286,    43,   185,   116,   308,   188,   189,
      43,   175,   176,   193,   194,   116,    30,   126,   127,    33,
     119,    30,   574,   308,    33,   577,   116,   126,   127,    43,
     116,   124,   119,   116,    43,   119,    50,    51,   339,   126,
     127,   391,   126,   127,   224,   116,   226,   126,   127,   456,
     627,     4,     5,     6,   456,   116,   236,   116,   408,   409,
     410,   113,   116,   115,   114,   116,   118,   247,   116,   380,
     371,   372,   422,   423,   193,   194,   116,   484,   116,   117,
     116,   116,   484,    10,   116,   116,   116,   639,   640,   116,
     270,   271,   116,   116,   584,   115,   503,   674,   278,   118,
     121,   503,   282,   273,   284,   275,   119,   287,   288,   289,
      36,   119,   292,   293,   294,   116,   118,   115,   118,   118,
     116,   124,   114,   118,   118,   116,   123,   534,   308,   309,
     123,   121,   534,   313,   314,   121,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     120,   266,   642,   560,   120,   118,   114,   118,   560,   274,
     330,   276,   342,   474,   113,   717,   336,   113,   113,   121,
     118,   351,     9,   353,   354,   117,   114,   584,   629,   630,
     121,   121,   584,   484,   495,   121,   588,   589,   499,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     121,   121,   121,   121,   121,   121,   121,   387,   121,   379,
     121,   117,   619,   117,   121,   117,   124,   619,   118,   117,
     125,   117,   117,   393,   404,    30,     9,   397,   120,   120,
     114,   118,   118,   114,   114,   642,   351,   417,   418,   118,
     642,   118,   412,   645,   114,   117,   117,   427,   428,   429,
     117,   117,   432,   121,   116,   662,   121,   121,   118,   666,
     662,   118,   121,   574,   666,   117,   577,   121,   116,   125,
     385,   451,   452,   453,   125,   118,   125,   121,    77,    77,
     395,   121,   118,   118,   399,   118,   117,   114,   116,   118,
     116,   121,   117,   408,   409,   410,   411,   117,   121,   118,
     118,   118,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   133,   117,   108,   117,   117,   226,   121,   194,
     117,   168,   118,   123,   117,   732,   121,   117,   639,   640,
     732,   117,   121,   117,   121,   505,   743,   117,   117,   117,
     117,   743,   118,   118,   118,   117,   116,   660,   117,   117,
     196,   196,   532,   606,   196,   196,   536,   743,   270,   244,
     732,   195,   662,   115,   722,   352,   378,     3,   124,    -1,
      -1,     7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,   173,    -1,    -1,    30,    -1,    -1,    33,    34,    -1,
     580,    -1,    -1,    39,    -1,    -1,   717,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   606,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   608,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,   638,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   663,   664,    -1,   122,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   698,   699,
      -1,    -1,    -1,    -1,    -1,    -1,   706,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,   722,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    33,    34,    -1,    36,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,   116,    -1,   118,
     119,   120,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    33,    34,    -1,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,    -1,    -1,   119,   120,   121,   122,   123,   124,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       4,     5,     6,     7,     8,     9,    10,    -1,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    33,
      34,    -1,    36,    -1,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,
      -1,   115,   116,    -1,   118,   119,   120,   121,   122,   123,
     124,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    33,    34,    -1,    36,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   113,    -1,   115,   116,    -1,    -1,   119,   120,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,     3,     4,     5,     6,     7,    -1,
      -1,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    30,    -1,    -1,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,     3,    -1,   115,    -1,     7,    -1,
      -1,    10,    -1,   122,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,     7,    -1,    -1,    10,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,
      34,    -1,    -1,   122,    38,    39,    -1,    -1,    -1,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,     7,    -1,    -1,
      10,    43,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,   122,    39,
      -1,    -1,    -1,    43,    44,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,    -1,   122,    -1,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      30,    -1,    -1,   122,    34,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,     3,
      -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      34,    -1,    36,    -1,    -1,    -1,    48,    49,    -1,    43,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,   119,   120,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    10,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    39,    -1,    -1,    10,    43,    44,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,
      43,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    10,
      -1,    43,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88
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
     135,   137,   216,   217,   218,   220,   222,   253,   254,   258,
     259,   260,   261,   262,   263,   221,     3,   259,   264,   254,
     254,     3,    38,   256,   257,   258,   254,   254,     0,     3,
      38,   139,   140,   154,   254,   222,   264,   264,   118,   117,
     117,   114,   256,   117,   125,    10,    43,   189,   119,   254,
      36,   140,   216,   220,   141,     3,    39,   120,   155,   138,
     139,   216,   220,   115,   223,    10,    10,   120,   254,     4,
       5,     6,   224,   226,   113,   121,   121,   138,    10,    39,
      43,   211,   213,   214,   227,     3,     7,    10,    26,    27,
      28,    30,    33,    35,    36,    37,    40,    42,    43,    44,
      45,    47,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   122,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   152,   153,   154,   156,   157,   158,
     159,   175,   178,   187,   188,   189,   203,   209,   210,   211,
     213,   214,   215,   216,   220,   226,   230,   155,   155,    77,
     213,   214,    77,   119,   119,   225,   189,    10,    43,    44,
     122,   209,    77,   113,   189,   113,   189,   209,     3,   150,
     157,   158,   209,   153,   154,   157,   158,     3,    26,    27,
     203,   209,     3,    26,    27,    28,    45,   144,   145,   146,
     147,   209,   255,   259,    77,    36,    45,   118,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   183,   185,   189,   114,   142,   113,   118,   190,     7,
     150,   157,   209,   190,   190,   190,   176,   210,   187,   210,
     116,    30,    33,    50,    51,   163,   166,   169,   173,   189,
     204,   206,   126,   127,   219,   126,   127,   219,   115,   118,
     213,   119,   119,   213,   214,   209,   212,   212,   121,   113,
     115,   118,   151,   189,   204,   219,   183,    30,   163,   169,
     189,   213,   254,   113,   204,   219,   254,   113,   204,   219,
     116,   189,   190,   190,    30,   190,   190,   190,   189,   189,
     189,    30,   113,   189,   189,   189,   118,    50,    51,   206,
     118,   255,   213,   214,   118,   157,   189,   232,   234,   235,
     189,   189,   239,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   254,   184,   116,
     254,   209,    30,   115,   180,   210,   179,   163,   169,   204,
      48,    49,   116,   124,   252,   253,   189,   189,   123,   164,
     123,   170,    46,   116,   124,   207,   118,   121,    31,    32,
     126,   127,   212,   212,   121,   120,   120,   224,   254,   255,
     118,   204,   163,   169,   219,   114,   254,   118,   204,   114,
     254,   118,   204,   160,   254,   113,   189,   189,   118,   219,
     219,   117,   121,   189,   189,   189,   121,   121,   189,   241,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     117,   117,   121,   117,   186,   114,    30,   182,   189,   177,
      45,    76,   194,   195,   197,   209,   118,   124,   124,   117,
     125,   167,   117,   117,     9,    30,   172,     9,   172,   208,
     174,   255,   205,   206,   219,   126,   127,   120,   120,   212,
     114,   118,   118,   255,   114,   118,   255,   114,   118,   194,
     114,   254,   117,   117,   231,   121,   117,   117,   236,   238,
     121,   121,   242,   244,   246,   248,   243,   245,   247,   249,
     250,   251,   189,   118,   194,   118,   121,   181,   116,   117,
     196,    50,    51,   206,   207,   125,   125,   116,    46,   116,
     118,   118,   165,   171,   207,   194,   125,   121,   206,    77,
      77,   118,   118,   255,   118,   255,   117,   189,   114,   116,
     116,   210,   233,   220,   220,   240,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   117,   121,   117,
     182,   254,   121,   200,   199,   198,   168,   118,   191,   192,
     197,   117,   207,   205,   121,   213,   213,   118,   118,   161,
     118,   189,   255,   255,   117,   210,   237,   117,   220,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   121,   121,
     117,   181,   117,   195,   189,   189,   123,   202,   194,   117,
     193,   205,   172,   118,   117,   117,   117,   121,   117,     9,
      11,    12,   128,   189,   228,   229,   228,   117,   117,   228,
     117,   118,   121,   162,   118,   118,   255,   229,   117,   117,
     116,   192,   117,   201,   191,   117
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
    { postSig(", ");}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 560 "vtkParse.y"
    { currentFunction->NumberOfArguments++;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 561 "vtkParse.y"
    { currentFunction->NumberOfArguments++; postSig(", ");}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 564 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 571 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 578 "vtkParse.y"
    {
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_FUNCTION;
    }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 583 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 584 "vtkParse.y"
    {
      postSig(") ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 589 "vtkParse.y"
    { postSig("(*"); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 590 "vtkParse.y"
    { postSig(")("); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 591 "vtkParse.y"
    {
      postSig(")");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 599 "vtkParse.y"
    {delSig();}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 600 "vtkParse.y"
    {delSig();}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 601 "vtkParse.y"
    {delSig();}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 602 "vtkParse.y"
    {delSig();}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 603 "vtkParse.y"
    {delSig();}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 604 "vtkParse.y"
    {delSig();}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 605 "vtkParse.y"
    {delSig();}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 606 "vtkParse.y"
    {delSig();}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 607 "vtkParse.y"
    {delSig();}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 608 "vtkParse.y"
    {delSig();}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 609 "vtkParse.y"
    {delSig();}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 610 "vtkParse.y"
    {delSig();}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 611 "vtkParse.y"
    {delSig();}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 612 "vtkParse.y"
    {delSig();}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 621 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 629 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 630 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 632 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_POINTER + (VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) + ((yyvsp[(3) - (3)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 634 "vtkParse.y"
    { postSig("[]"); (yyval.integer) = VTK_PARSE_POINTER + ((yyvsp[(4) - (4)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 636 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_CONST + (yyvsp[(2) - (2)].integer);}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 637 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 638 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_STATIC + (yyvsp[(2) - (2)].integer);}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 639 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | VTK_PARSE_STATIC) + (yyvsp[(3) - (3)].integer);}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 641 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 643 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer);}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 644 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 667 "vtkParse.y"
    { postSig("&"); (yyval.integer) = (yyvsp[(1) - (2)].integer);}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 668 "vtkParse.y"
    { postSig("*"); (yyval.integer) = (VTK_PARSE_REF + VTK_PARSE_POINTER) + (yyvsp[(1) - (2)].integer);}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 670 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 671 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 673 "vtkParse.y"
    { postSig("vtkStdString "); (yyval.integer) = (VTK_PARSE_STRING); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 675 "vtkParse.y"
    { postSig("vtkUnicodeString "); (yyval.integer) = (VTK_PARSE_UNICODE_STRING); }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 684 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 686 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 687 "vtkParse.y"
    { postSig("* const&"); (yyval.integer) = VTK_PARSE_POINTER_CONST_REF;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 689 "vtkParse.y"
    { postSig("* const*"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 690 "vtkParse.y"
    { postSig("**&"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    { postSig("***"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 693 "vtkParse.y"
    {postSig("unsigned ");}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 694 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_UNSIGNED + (yyvsp[(3) - (3)].integer);}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 695 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 698 "vtkParse.y"
    { postSig("vtkTypeInt8 "); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    { postSig("vtkTypeUInt8 "); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    { postSig("vtkTypeInt16 "); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 701 "vtkParse.y"
    { postSig("vtkTypeUInt16 "); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    { postSig("vtkTypeInt32 "); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    { postSig("vtkTypeUInt32 "); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    { postSig("vtkTypeInt64 "); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    { postSig("vtkTypeUInt64 "); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    { postSig("vtkTypeFloat32 "); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 707 "vtkParse.y"
    { postSig("vtkTypeFloat64 "); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 711 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 715 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 716 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_UNKNOWN;
    }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 725 "vtkParse.y"
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

  case 234:

/* Line 1455 of yacc.c  */
#line 741 "vtkParse.y"
    { postSig("vtkIdType "); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 742 "vtkParse.y"
    { postSig("long long "); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 743 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 744 "vtkParse.y"
    { postSig("signed char "); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 766 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 768 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 769 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 775 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 776 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 777 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 778 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 782 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 783 "vtkParse.y"
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

  case 259:

/* Line 1455 of yacc.c  */
#line 793 "vtkParse.y"
    {postSig("Get");}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 793 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 795 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(7) - (8)].integer);
   output_function();
   }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 802 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 803 "vtkParse.y"
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

  case 264:

/* Line 1455 of yacc.c  */
#line 813 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 814 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   output_function();
   }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 823 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    {postSig(");"); openSig = 0;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 825 "vtkParse.y"
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

  case 269:

/* Line 1455 of yacc.c  */
#line 855 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 856 "vtkParse.y"
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

  case 271:

/* Line 1455 of yacc.c  */
#line 866 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 867 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 868 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   output_function();
   }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 876 "vtkParse.y"
    {preSig("void "); postSig("On();"); openSig = 0; }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 878 "vtkParse.y"
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

  case 276:

/* Line 1455 of yacc.c  */
#line 893 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 898 "vtkParse.y"
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

  case 278:

/* Line 1455 of yacc.c  */
#line 923 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 928 "vtkParse.y"
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

  case 280:

/* Line 1455 of yacc.c  */
#line 940 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 945 "vtkParse.y"
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

  case 282:

/* Line 1455 of yacc.c  */
#line 972 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 977 "vtkParse.y"
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

  case 284:

/* Line 1455 of yacc.c  */
#line 989 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 994 "vtkParse.y"
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

  case 286:

/* Line 1455 of yacc.c  */
#line 1023 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1028 "vtkParse.y"
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

  case 288:

/* Line 1455 of yacc.c  */
#line 1040 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1045 "vtkParse.y"
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

  case 290:

/* Line 1455 of yacc.c  */
#line 1078 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1083 "vtkParse.y"
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

  case 292:

/* Line 1455 of yacc.c  */
#line 1095 "vtkParse.y"
    {
      free(currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1100 "vtkParse.y"
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

  case 294:

/* Line 1455 of yacc.c  */
#line 1113 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1118 "vtkParse.y"
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

  case 296:

/* Line 1455 of yacc.c  */
#line 1130 "vtkParse.y"
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

  case 297:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
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

  case 298:

/* Line 1455 of yacc.c  */
#line 1226 "vtkParse.y"
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

  case 299:

/* Line 1455 of yacc.c  */
#line 1277 "vtkParse.y"
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

  case 300:

/* Line 1455 of yacc.c  */
#line 1333 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1335 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1336 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1339 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1340 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1340 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1343 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1343 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1344 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1344 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1345 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1345 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1346 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1347 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1348 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1349 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1350 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1351 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1352 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1353 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1354 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1355 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1358 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1359 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1360 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1361 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1362 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1363 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1364 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1365 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1366 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1367 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1368 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1369 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1370 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1371 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1372 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 5017 "vtkParse.tab.c"
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
#line 1401 "vtkParse.y"

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

