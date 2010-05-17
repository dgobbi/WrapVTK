
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
#define YYLAST   2209

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  130
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  348
/* YYNRULES -- Number of states.  */
#define YYNSTATES  651

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
     231,   234,   238,   240,   243,   247,   252,   256,   258,   261,
     265,   270,   274,   275,   276,   277,   287,   288,   289,   294,
     298,   299,   300,   308,   309,   310,   315,   319,   320,   322,
     323,   329,   330,   333,   334,   340,   341,   344,   345,   351,
     353,   355,   358,   360,   362,   364,   369,   373,   377,   378,
     380,   382,   384,   385,   390,   393,   394,   399,   401,   409,
     410,   413,   417,   422,   425,   434,   436,   440,   442,   446,
     449,   454,   457,   458,   459,   463,   468,   471,   473,   476,
     480,   482,   485,   487,   489,   492,   496,   501,   505,   510,
     514,   519,   524,   529,   531,   535,   537,   541,   543,   547,
     551,   553,   556,   559,   561,   563,   565,   567,   569,   571,
     574,   577,   578,   582,   584,   586,   588,   590,   592,   594,
     596,   598,   600,   602,   604,   606,   608,   610,   612,   614,
     616,   618,   620,   622,   624,   626,   628,   630,   632,   634,
     636,   637,   640,   643,   644,   650,   652,   654,   656,   659,
     661,   663,   667,   669,   670,   678,   679,   680,   689,   690,
     696,   697,   703,   704,   705,   716,   717,   725,   726,   727,
     736,   737,   745,   746,   754,   755,   763,   764,   772,   773,
     781,   782,   790,   791,   799,   800,   808,   809,   817,   818,
     828,   829,   839,   844,   849,   856,   864,   867,   870,   874,
     878,   880,   882,   884,   886,   888,   890,   892,   894,   896,
     898,   900,   902,   904,   906,   908,   910,   912,   914,   916,
     918,   920,   922,   924,   926,   928,   930,   932,   934,   936,
     938,   940,   942,   944,   946,   948,   950,   952,   954,   956,
     958,   959,   962,   963,   966,   967,   970,   972,   974,   976,
     978,   980,   982,   984,   986,   988,   990,   992,   994,   996,
     998,  1000,  1002,  1004,  1006,  1008,  1010,  1012,  1014,  1016,
    1018,  1020,  1022,  1024,  1026,  1028,  1030,  1032,  1034,  1036,
    1038,  1040,  1044,  1048,  1052,  1056,  1060,  1061,  1064
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     131,     0,    -1,   238,   132,   238,    -1,   133,    -1,   135,
      -1,    -1,   149,     3,    39,   134,   208,   107,   137,   108,
      -1,    -1,     3,    39,   136,   208,   107,   137,   108,    -1,
     138,    -1,   138,   137,    -1,   211,   109,    -1,   188,    -1,
      33,   188,    -1,   140,    -1,   139,    -1,   142,    -1,   141,
      -1,   143,    -1,   147,    -1,   145,    -1,    31,   145,    -1,
     144,    -1,    26,    -1,   153,   181,    -1,    31,   153,   181,
      -1,    32,   153,   181,    -1,   152,   181,    -1,    31,   152,
     181,    -1,    32,   152,   181,    -1,   148,   181,    -1,    32,
     148,   181,    -1,   151,   181,    -1,   106,   110,   238,   111,
     112,    -1,   214,   112,    -1,   214,    -1,    24,   180,   107,
     238,   108,   239,   112,    -1,    24,   107,   238,   108,   239,
     112,    -1,    25,   180,   107,   238,   108,   239,   112,    -1,
      25,   107,   238,   108,   239,   112,    -1,    38,   239,   112,
      -1,   149,   145,    -1,     3,   180,   146,    -1,   112,    -1,
     107,   238,   108,   112,    -1,   109,   239,   112,    -1,    36,
     194,   191,   112,    -1,    36,    26,    -1,    36,     3,   180,
     107,   238,   108,   180,   112,    -1,    36,     3,   107,   238,
     108,   180,   112,    -1,    36,   194,    46,   180,   111,   110,
     239,   111,   112,    -1,    36,    41,   112,    -1,   149,   152,
      -1,    34,   113,   114,    -1,    34,   113,   150,   114,    -1,
       3,    10,    -1,     3,    10,   115,   150,    -1,    35,    10,
      -1,    35,    10,   115,   150,    -1,    43,   110,   152,   111,
      -1,   116,   174,    -1,     7,   116,   174,    -1,   170,    -1,
     194,   164,    -1,   194,    28,   164,    -1,     7,   194,    28,
     164,    -1,     7,   194,   164,    -1,   154,    -1,   194,   158,
      -1,   194,    28,   158,    -1,     7,   194,    28,   158,    -1,
       7,   194,   158,    -1,    -1,    -1,    -1,    29,   194,   110,
     155,   182,   111,   156,   167,   157,    -1,    -1,    -1,   161,
     159,   167,   160,    -1,   161,   117,     9,    -1,    -1,    -1,
      29,   236,   162,   110,   163,   182,   111,    -1,    -1,    -1,
     168,   165,   167,   166,    -1,   168,   117,     9,    -1,    -1,
      28,    -1,    -1,   180,   110,   169,   182,   111,    -1,    -1,
     172,   171,    -1,    -1,   180,   110,   173,   182,   111,    -1,
      -1,   176,   175,    -1,    -1,   180,   110,   177,   182,   111,
      -1,    28,    -1,    40,    -1,    40,    32,    -1,    39,    -1,
      10,    -1,   112,    -1,   107,   238,   108,   112,    -1,   107,
     238,   108,    -1,   109,   239,   112,    -1,    -1,   183,    -1,
      70,    -1,   185,    -1,    -1,   185,   184,   115,   183,    -1,
     194,   192,    -1,    -1,   194,   191,   186,   187,    -1,    41,
      -1,   194,    46,   180,   111,   110,   182,   111,    -1,    -1,
     117,   212,    -1,   194,   189,   112,    -1,   194,    28,   189,
     112,    -1,    41,   112,    -1,   194,    46,   180,   111,   110,
     182,   111,   112,    -1,   191,    -1,   191,   115,   190,    -1,
     191,    -1,   191,   115,   190,    -1,   204,   191,    -1,   204,
     191,   115,   190,    -1,   180,   192,    -1,    -1,    -1,    42,
     193,   192,    -1,   118,   239,   119,   192,    -1,   178,   195,
      -1,   195,    -1,   179,   195,    -1,   179,   178,   195,    -1,
     205,    -1,   205,   204,    -1,   200,    -1,   196,    -1,   196,
     204,    -1,    10,    71,   198,    -1,    10,    71,   198,   204,
      -1,    39,    71,   198,    -1,    39,    71,   198,   204,    -1,
      39,    71,   199,    -1,    39,    71,   199,   204,    -1,   199,
     113,   197,   114,    -1,   198,   113,   197,   114,    -1,   194,
      -1,   194,   115,   197,    -1,    10,    -1,    10,    71,   198,
      -1,    39,    -1,    39,    71,   198,    -1,    39,    71,   199,
      -1,   201,    -1,   201,   120,    -1,   201,   121,    -1,   202,
      -1,   203,    -1,    83,    -1,    84,    -1,   120,    -1,   121,
      -1,   120,   204,    -1,   121,   204,    -1,    -1,    30,   206,
     207,    -1,   207,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,
      80,    -1,    81,    -1,    12,    -1,    18,    -1,    19,    -1,
      11,    -1,    13,    -1,    14,    -1,    17,    -1,    22,    -1,
      23,    -1,    10,    -1,    39,    -1,    82,    -1,    15,    -1,
      16,    -1,    20,    -1,    21,    -1,    -1,   109,   209,    -1,
     211,    39,    -1,    -1,   211,    39,   210,   115,   209,    -1,
       4,    -1,     5,    -1,     6,    -1,   122,   213,    -1,   213,
      -1,     9,    -1,     9,   123,     9,    -1,   180,    -1,    -1,
      85,   110,   180,   115,   215,   195,   111,    -1,    -1,    -1,
      86,   110,   216,   180,   115,   217,   195,   111,    -1,    -1,
      87,   110,   218,   180,   111,    -1,    -1,    88,   110,   219,
     180,   111,    -1,    -1,    -1,    89,   110,   180,   115,   220,
     205,   221,   115,   239,   111,    -1,    -1,    90,   110,   180,
     115,   222,   205,   111,    -1,    -1,    -1,    91,   110,   223,
     180,   115,   224,   205,   111,    -1,    -1,    92,   110,   180,
     225,   115,   205,   111,    -1,    -1,    93,   110,   180,   115,
     226,   205,   111,    -1,    -1,    97,   110,   180,   115,   227,
     205,   111,    -1,    -1,    94,   110,   180,   115,   228,   205,
     111,    -1,    -1,    98,   110,   180,   115,   229,   205,   111,
      -1,    -1,    95,   110,   180,   115,   230,   205,   111,    -1,
      -1,    99,   110,   180,   115,   231,   205,   111,    -1,    -1,
      96,   110,   180,   115,   232,   205,   111,    -1,    -1,   100,
     110,   180,   115,   233,   205,   111,    -1,    -1,   101,   110,
     180,   115,   234,   205,   115,   212,   111,    -1,    -1,   102,
     110,   180,   115,   235,   205,   115,   212,   111,    -1,   103,
     110,   180,   111,    -1,   104,   110,   180,   111,    -1,   105,
     110,   180,   115,   180,   111,    -1,   105,   110,   180,   115,
     180,   115,   111,    -1,   110,   111,    -1,   118,   119,    -1,
      44,   118,   119,    -1,    45,   118,   119,    -1,   237,    -1,
     117,    -1,   121,    -1,   124,    -1,   122,    -1,   125,    -1,
     126,    -1,   116,    -1,   115,    -1,   113,    -1,   114,    -1,
     120,    -1,   127,    -1,   128,    -1,   129,    -1,    44,    -1,
      45,    -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,
      51,    -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,
      58,    -1,    52,    -1,    53,    -1,    59,    -1,    60,    -1,
      61,    -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,
      66,    -1,    67,    -1,    68,    -1,    69,    -1,    -1,   242,
     238,    -1,    -1,   243,   239,    -1,    -1,   241,   240,    -1,
       3,    -1,    34,    -1,   242,    -1,   112,    -1,   243,    -1,
     247,    -1,    27,    -1,   244,    -1,   245,    -1,   246,    -1,
     237,    -1,   109,    -1,   123,    -1,     8,    -1,   205,    -1,
     201,    -1,    71,    -1,     9,    -1,    26,    -1,    28,    -1,
      29,    -1,    40,    -1,    32,    -1,     7,    -1,    24,    -1,
      25,    -1,    35,    -1,    42,    -1,    41,    -1,    70,    -1,
       4,    -1,     6,    -1,     5,    -1,    37,    -1,    38,    -1,
     107,   240,   108,    -1,   110,   238,   111,    -1,    46,   238,
     111,    -1,   118,   238,   119,    -1,    36,   248,   112,    -1,
      -1,     3,   248,    -1,   243,   248,    -1
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
     398,   399,   400,   401,   405,   409,   414,   421,   425,   429,
     433,   438,   444,   445,   446,   444,   456,   456,   456,   462,
     471,   472,   471,   478,   478,   478,   484,   493,   493,   495,
     495,   497,   497,   504,   504,   506,   506,   515,   515,   517,
     519,   520,   522,   522,   524,   525,   526,   527,   529,   529,
     531,   531,   532,   532,   534,   542,   541,   548,   554,   556,
     556,   558,   559,   560,   561,   563,   563,   565,   566,   567,
     568,   570,   578,   579,   579,   582,   585,   586,   587,   588,
     590,   591,   593,   594,   595,   596,   597,   598,   599,   600,
     601,   603,   604,   606,   606,   608,   608,   609,   609,   610,
     612,   613,   614,   616,   617,   619,   621,   630,   631,   632,
     633,   635,   635,   637,   640,   641,   642,   643,   644,   645,
     646,   647,   648,   649,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   666,   683,   684,   685,   686,   687,
     689,   689,   691,   697,   696,   702,   703,   704,   706,   706,
     708,   709,   709,   713,   712,   724,   724,   724,   733,   733,
     744,   744,   754,   755,   753,   786,   785,   797,   798,   797,
     807,   806,   824,   823,   854,   853,   871,   870,   903,   902,
     920,   919,   954,   953,   971,   970,  1009,  1008,  1026,  1025,
    1044,  1043,  1060,  1107,  1156,  1207,  1264,  1265,  1266,  1267,
    1268,  1270,  1271,  1271,  1272,  1272,  1273,  1273,  1274,  1274,
    1275,  1275,  1276,  1276,  1277,  1278,  1279,  1280,  1281,  1282,
    1283,  1284,  1285,  1286,  1287,  1288,  1289,  1290,  1291,  1292,
    1293,  1294,  1295,  1296,  1297,  1298,  1299,  1300,  1301,  1302,
    1307,  1307,  1308,  1308,  1309,  1309,  1311,  1311,  1311,  1313,
    1313,  1313,  1315,  1315,  1315,  1315,  1315,  1316,  1316,  1316,
    1316,  1316,  1316,  1317,  1317,  1317,  1317,  1317,  1317,  1317,
    1318,  1318,  1318,  1318,  1318,  1318,  1319,  1319,  1319,  1319,
    1319,  1321,  1322,  1322,  1323,  1324,  1326,  1326,  1327
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
  "template_args", "legacy_function", "function", "operator",
  "typecast_op_func", "$@3", "$@4", "$@5", "op_func", "@6", "$@7",
  "op_sig", "$@8", "$@9", "func", "$@10", "$@11", "maybe_const",
  "func_sig", "$@12", "constructor", "$@13", "constructor_sig", "$@14",
  "destructor", "$@15", "destructor_sig", "$@16", "const_mod",
  "static_mod", "any_id", "func_body", "args_list", "more_args", "$@17",
  "arg", "$@18", "opt_var_assign", "var", "var_ids",
  "maybe_indirect_var_ids", "var_id", "var_array", "$@19", "type",
  "type_red1", "type_templated", "types", "scoped_id", "vtk_scoped_id",
  "type_string1", "type_string2", "type_string3", "type_string4",
  "type_indirection", "type_red2", "$@20", "type_primitive",
  "optional_scope", "scope_list", "$@21", "scope_type", "float_num",
  "float_prim", "macro", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27",
  "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36",
  "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "op_token",
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
     152,   152,   152,   152,   152,   152,   152,   153,   153,   153,
     153,   153,   155,   156,   157,   154,   159,   160,   158,   158,
     162,   163,   161,   165,   166,   164,   164,   167,   167,   169,
     168,   171,   170,   173,   172,   175,   174,   177,   176,   178,
     179,   179,   180,   180,   181,   181,   181,   181,   182,   182,
     183,   183,   184,   183,   185,   186,   185,   185,   185,   187,
     187,   188,   188,   188,   188,   189,   189,   190,   190,   190,
     190,   191,   192,   193,   192,   192,   194,   194,   194,   194,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   195,
     195,   196,   196,   197,   197,   198,   198,   199,   199,   199,
     200,   200,   200,   201,   201,   202,   203,   204,   204,   204,
     204,   206,   205,   205,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     208,   208,   209,   210,   209,   211,   211,   211,   212,   212,
     213,   213,   213,   215,   214,   216,   217,   214,   218,   214,
     219,   214,   220,   221,   214,   222,   214,   223,   224,   214,
     225,   214,   226,   214,   227,   214,   228,   214,   229,   214,
     230,   214,   231,   214,   232,   214,   233,   214,   234,   214,
     235,   214,   214,   214,   214,   214,   236,   236,   236,   236,
     236,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     238,   238,   239,   239,   240,   240,   241,   241,   241,   242,
     242,   242,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   243,   243,   243,   243,   243,
     243,   244,   245,   245,   246,   247,   248,   248,   248
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
       2,     3,     1,     2,     3,     4,     3,     1,     2,     3,
       4,     3,     0,     0,     0,     9,     0,     0,     4,     3,
       0,     0,     7,     0,     0,     4,     3,     0,     1,     0,
       5,     0,     2,     0,     5,     0,     2,     0,     5,     1,
       1,     2,     1,     1,     1,     4,     3,     3,     0,     1,
       1,     1,     0,     4,     2,     0,     4,     1,     7,     0,
       2,     3,     4,     2,     8,     1,     3,     1,     3,     2,
       4,     2,     0,     0,     3,     4,     2,     1,     2,     3,
       1,     2,     1,     1,     2,     3,     4,     3,     4,     3,
       4,     4,     4,     1,     3,     1,     3,     1,     3,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     2,     0,     5,     1,     1,     1,     2,     1,
       1,     3,     1,     0,     7,     0,     0,     8,     0,     5,
       0,     5,     0,     0,    10,     0,     7,     0,     0,     8,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     9,
       0,     9,     4,     4,     6,     7,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     300,   336,   338,   337,   329,   319,   323,   193,   187,   184,
     188,   189,   196,   197,   190,   185,   186,   198,   199,   191,
     192,   330,   331,   324,   312,   325,   326,   171,   328,   332,
     346,   339,   340,   194,   327,   334,   333,   275,   276,   300,
     277,   278,   279,   280,   281,   287,   288,   282,   283,   284,
     285,   286,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   335,   322,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   195,   165,   166,   304,   317,
     300,   309,   269,   270,   268,   267,   261,   300,   271,   262,
     264,   318,   263,   265,   266,   272,   273,   274,     0,   321,
     163,   164,   320,   173,   316,     0,   300,   310,   313,   314,
     315,   311,     0,   346,   346,     0,     0,   306,   307,     0,
     304,   308,     0,     0,     1,     0,     0,   300,     3,     4,
       0,   301,   172,   347,   348,   345,   343,   341,   305,   342,
     344,     7,     0,     2,     0,   200,     0,     0,    53,     0,
       5,     0,     0,    55,    57,    54,   200,   205,   206,   207,
     201,     0,     0,     0,     0,     0,   202,     0,     0,   193,
       0,     0,    23,    99,     0,     0,     0,     0,     0,   302,
     194,   100,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    15,
      14,    17,    16,    18,    22,    20,    19,     0,     0,     0,
       0,     0,    67,    62,    91,     0,     0,     0,    12,     0,
     137,   143,     0,     0,   142,   160,   140,     0,    35,    56,
      58,     0,     0,   103,   102,     0,   193,   194,     0,     0,
       0,   300,     0,   300,     0,     0,    21,     0,     0,     0,
       0,     0,     0,     0,    13,     0,     0,    47,     0,     0,
       0,   302,     0,   101,   123,     0,     0,   215,   218,   220,
       0,     0,   227,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   300,    60,    95,
       0,     8,    10,   300,   302,   104,    30,     0,    41,    52,
       0,    32,    27,    24,    92,   136,     0,   138,    93,     0,
       0,     0,    68,    76,    63,    83,   132,     0,   125,   167,
     168,   144,     0,     0,   161,   162,   141,    11,    34,     0,
       0,   300,   302,    43,    42,    61,     0,    71,    66,     0,
     155,   145,     0,   300,     0,   300,    72,    28,    25,     0,
      31,    29,    26,     0,   132,   300,     0,    51,     0,     0,
      40,   303,   157,   147,   149,     0,     0,     0,     0,     0,
       0,     0,     0,   230,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    96,    97,
       0,     0,     0,     0,   139,   108,    69,    64,     0,   275,
     276,     0,     0,    80,   260,     0,     0,    87,     0,    87,
     133,    89,   302,   131,   121,     0,   169,   170,   153,     0,
       0,     6,   204,     0,     0,    70,    65,     0,   146,   302,
       0,   302,     0,   108,     0,   300,     0,    46,     0,   148,
     150,    59,   213,     0,     0,     0,   222,   225,     0,     0,
     232,   236,   240,   244,   234,   238,   242,   246,   248,   250,
     252,   253,     0,     0,   108,   106,   107,     0,   117,   110,
       0,   109,   111,   132,   122,     0,     0,   256,   257,     0,
       0,    79,    88,    77,    86,    84,   132,   108,     0,   126,
     127,     0,     0,   152,   151,     0,    45,   156,     0,   302,
       0,   302,     0,     0,     0,     0,   158,   159,     0,   216,
     219,   221,     0,     0,   228,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,   105,
      94,     0,     0,   115,   114,   258,   259,    81,   108,    78,
      85,   134,     0,   132,     0,   129,   154,    44,    37,     0,
      39,     0,    73,     0,     0,   302,     0,     0,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   254,     0,    98,     0,     0,   119,   108,     0,
      90,   135,   128,     0,    36,    38,    87,    49,     0,     0,
     214,     0,     0,   226,     0,   231,   233,   237,   241,   245,
     235,   239,   243,   247,     0,     0,   255,   113,     0,     0,
     116,     0,     0,   130,    74,    48,     0,   217,   302,   229,
     210,     0,   212,     0,   209,     0,   108,   120,    82,   124,
      75,    50,     0,     0,   208,   249,   251,     0,   224,   211,
     118
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    98,   127,   128,   156,   129,   145,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   344,   216,   217,   218,
     149,   219,   220,   221,   222,   443,   596,   640,   322,   417,
     549,   323,   489,   588,   324,   419,   550,   493,   325,   497,
     223,   314,   224,   405,   298,   398,   299,   474,   225,   226,
     227,   306,   480,   481,   541,   482,   587,   620,   228,   327,
     499,   328,   423,   496,   483,   230,   231,   429,   232,   233,
     234,    99,   100,   101,   501,   102,   112,   103,   152,   160,
     242,   237,   633,   634,   238,   518,   377,   567,   378,   379,
     522,   602,   523,   382,   570,   459,   526,   530,   527,   531,
     528,   532,   529,   533,   534,   535,   413,   104,   105,   270,
     119,   120,   106,   107,   108,   109,   110,   111,   115
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -459
static const yytype_int16 yypact[] =
{
    1135,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    1009,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  1135,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,   882,  -459,
    1135,  -459,  -459,  -459,  -459,  -459,  -459,  1135,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,    37,  -459,
    -459,  -459,  -459,  -459,  -459,   125,  1135,  -459,  -459,  -459,
    -459,  -459,  2127,  1009,  1009,   -60,   -12,  -459,  -459,     0,
     882,  -459,    15,    -5,  -459,   112,    45,  1135,  -459,  -459,
     167,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,    16,  -459,   135,    72,   175,   181,  -459,    88,
    -459,   226,    97,   105,   119,  -459,    72,  -459,  -459,  -459,
    -459,   183,  1388,   104,   104,   120,   133,   107,  1604,   -39,
      24,    29,  -459,  -459,  1946,   566,  1495,  1871,  1721,  1261,
     -38,   206,   128,   142,   169,   170,   171,   172,   177,   178,
     182,   185,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   197,   198,   199,   201,   203,   107,   186,  1388,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,   144,   698,   144,
     144,   144,  -459,  -459,  -459,  2052,  1977,   205,  -459,   180,
    -459,    93,   164,   165,  -459,   141,    93,   176,   204,  -459,
    -459,  1388,   202,  -459,  -459,   161,   -43,   -35,   107,   196,
     280,  1135,   211,  1135,   212,   210,  -459,   144,   144,   200,
     144,  1526,   144,   144,  -459,   138,    54,  -459,   209,    63,
     214,  1261,   166,  -459,  -459,  1526,   107,  -459,  -459,  -459,
     107,   107,  -459,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,  1135,  -459,  -459,
     217,  -459,  -459,  1135,  1261,  -459,  -459,  1604,  -459,  -459,
     143,  -459,  -459,  -459,  -459,  -459,  2052,  -459,  -459,   159,
    1601,   107,  -459,   207,  -459,   213,    -7,   216,   218,    93,
      93,  -459,  1946,  1946,  -459,  -459,  -459,  -459,  -459,   221,
     226,  1135,  1261,  -459,  -459,  -459,   159,  -459,  -459,   222,
     235,   123,   223,  1135,   228,  1135,  -459,  -459,  -459,   159,
    -459,  -459,  -459,   107,   -20,  1135,   227,  -459,   107,   231,
    -459,  -459,   239,   129,   145,   229,   224,   107,   107,   107,
     232,   233,   107,  -459,   234,   236,   237,   240,   241,   242,
     244,   245,   246,   249,   243,   266,   263,   269,  -459,  -459,
     230,   238,   168,   107,  -459,  1796,  -459,  -459,   270,   265,
     267,   273,   174,  -459,  -459,   276,   335,   318,   380,   318,
    -459,  -459,  1261,  -459,  -459,    21,  -459,  -459,   275,   281,
     282,  -459,  -459,   286,   287,  -459,  -459,   280,  -459,  1261,
     290,  1261,   292,  1796,   293,  1135,   291,  -459,   166,  -459,
    -459,  -459,  -459,   289,   294,   295,  -459,  -459,   297,   298,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,   107,   296,  1796,   302,  -459,   107,  -459,  -459,
     304,  -459,   303,     3,  -459,   300,   307,  -459,  -459,   311,
     312,  -459,  -459,  -459,  -459,  -459,   -20,  1796,   310,  -459,
     315,   107,  1946,  -459,  -459,   305,  -459,  -459,   319,  1261,
     320,  1261,   322,   107,   326,   325,  -459,  -459,  2052,  -459,
    -459,  -459,  2082,  2082,  -459,  2082,  2082,  2082,  2082,  2082,
    2082,  2082,  2082,  2082,  2082,  2082,    23,  -459,   327,  -459,
    -459,   321,   107,  -459,  -459,  -459,  -459,  -459,  1796,  -459,
    -459,  -459,   328,   -20,    21,   329,  -459,  -459,  -459,   330,
    -459,   331,  -459,   333,   107,  1261,   336,  2052,  -459,   337,
    2082,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,  -459,   349,  -459,  1796,   350,   323,  1796,   354,
    -459,  -459,  -459,    21,  -459,  -459,   318,  -459,   356,   355,
    -459,   358,   357,  -459,   359,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,    11,    11,  -459,  -459,   361,    11,
    -459,   362,   363,  -459,  -459,  -459,   365,  -459,  1261,  -459,
     314,   184,  -459,   367,  -459,   369,  1796,  -459,  -459,  -459,
    -459,  -459,   373,   432,  -459,  -459,  -459,   374,  -459,  -459,
    -459
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -128,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -149,  -459,  -459,   313,   -81,
     100,  -459,  -132,    96,  -459,  -459,  -459,  -459,  -209,  -459,
    -459,  -459,  -459,  -459,  -240,  -459,  -459,  -413,  -459,  -459,
    -459,  -459,  -459,  -459,   247,  -459,  -459,  -459,   248,  -459,
     253,    -3,  -436,  -127,  -459,  -459,  -459,  -459,   309,  -296,
    -458,  -268,  -437,  -459,   -86,  -222,  -459,  -323,  -245,  -261,
    -459,  -121,  -459,  -459,  -206,  -160,  -459,   375,   332,   150,
    -459,  -139,  -455,  -140,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,  -459,
    -459,  -459,  -459,  -459,  -459,  -459,  -459,   173,    38,  -242,
     372,  -459,     7,   -30,  -459,  -459,  -459,  -459,   162
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -204
static const yytype_int16 yytable[] =
{
     114,   369,   236,   315,   317,   351,   495,   512,   236,   348,
     430,   374,   161,   243,   236,   236,   236,   236,   236,   146,
     630,   243,   420,   408,   130,   331,   256,   373,   250,   371,
     336,   243,   250,   272,   243,   420,   272,   124,   538,   243,
     347,   235,   244,   257,   262,   420,   544,   235,   236,   542,
     244,   147,   135,   235,   235,   235,   235,   235,   236,   551,
     244,   552,   401,   244,   243,   236,   236,   408,   244,   308,
    -155,  -103,  -102,   243,  -155,  -157,   229,   116,  -157,   407,
     302,   236,   249,   114,   114,   121,   309,   235,   255,   259,
     259,   265,   269,   244,   404,   261,   592,   235,   422,   136,
     434,   236,   244,   421,   235,   235,   436,   146,   137,   368,
     406,   422,   589,   339,   140,   236,   591,   243,   122,   407,
     235,   422,   229,   426,   427,   123,   139,   121,   125,   309,
     148,   251,   310,   631,   582,   623,   253,   435,   583,   147,
     235,   329,   330,   375,   131,   438,   244,   236,   243,   271,
     406,   141,   621,   243,   235,   229,   236,   500,   142,   126,
     635,   365,   348,   407,   637,   143,   363,   449,   450,   243,
     144,   403,   236,   236,   150,   310,   350,   244,   243,   556,
     498,   151,   244,   624,   321,   153,   235,   517,   320,   310,
     243,   154,   507,   630,   243,   235,   477,   508,   244,   510,
     647,   161,   155,   516,   162,   372,   243,   244,   319,   320,
     243,   235,   235,   329,   330,   543,   311,   312,   313,   244,
     163,   402,   166,   244,   346,   320,   321,   241,   359,   320,
     157,   158,   159,   555,   164,   244,  -156,   436,   273,   244,
     274,   271,  -158,   329,   330,   236,   428,   428,  -203,   329,
     330,   303,   275,   304,   357,   358,   305,   360,  -159,   361,
     362,   334,   335,   239,   240,   329,   330,   559,   341,   561,
     342,   258,   263,   343,   271,   133,   134,   332,   333,   276,
     277,   278,   279,   236,   235,   337,   500,   280,   281,   352,
     350,   354,   282,   488,   301,   283,   566,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   437,   293,   294,   295,
     448,   296,   271,   297,   236,   318,   338,   340,   353,   355,
     356,   367,   235,   599,   416,   500,   370,   399,   424,   431,
     418,   439,   421,   425,   445,   397,   441,   236,   475,   452,
     451,   400,   236,   447,   491,   601,   492,   456,   457,   460,
     476,   461,   462,   235,   470,   463,   464,   465,   236,   466,
     467,   468,   568,   569,   469,   571,   572,   573,   574,   575,
     576,   577,   578,   579,   580,   581,   235,   471,   472,   433,
     473,   235,   484,   485,   487,   486,   642,   490,   236,   494,
     502,   440,   271,   442,   505,   503,   504,   235,   509,   506,
     511,   513,   515,   444,   519,   520,   521,   236,   537,   271,
     604,   271,   524,   525,   539,   540,   428,   557,  -112,   545,
     245,   547,   548,   252,   254,   236,   546,   235,   236,   553,
     554,   558,   560,   562,   564,   565,   585,   643,   584,   590,
     619,   649,   594,   595,   593,   597,   235,   600,   603,   605,
     606,   607,   608,   609,   610,   611,   612,   613,   617,   300,
     616,   618,   614,   615,   235,   622,   626,   235,   625,   627,
     629,   636,   628,   638,   316,   639,   236,   641,   645,   271,
     646,   271,   326,   514,   648,   650,   264,   132,   165,   260,
     432,   644,   138,   414,     0,   345,     0,     0,     0,     0,
       0,   300,   349,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   349,     0,     0,   235,     0,     0,   364,   366,
       0,     0,   364,     0,     0,     0,     0,     0,     0,   376,
       0,     0,     0,   380,   381,   271,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   349,     0,     0,     0,     0,     0,   167,
       0,     0,   326,   168,   415,     0,   169,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,   173,   174,    27,     0,   271,   349,
       0,     0,     0,     0,     0,   180,   181,     0,     0,     0,
       0,     0,   349,     0,     0,     0,   364,     0,     0,     0,
       0,   446,     0,     0,     0,     0,     0,     0,     0,     0,
     453,   454,   455,     0,     0,   458,     0,     0,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,   349,   349,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   364,     0,
       0,     0,   206,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   167,     0,     0,     0,   307,     0,     0,   169,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,     0,     0,     0,   536,   173,     0,    27,     0,
     349,     0,     0,     0,     0,     0,   364,   180,   181,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   364,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   563,     0,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   586,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   364,     0,     0,
       0,     0,     0,     0,   206,     0,     0,   598,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   364,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   632,   632,     0,
       0,     0,   632,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   632,   117,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     0,    28,     0,   118,    29,    30,    31,
      32,    33,    34,    35,    36,     0,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,    79,    80,     0,    81,    82,    83,    84,    85,    86,
      87,     0,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,   113,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
       0,    28,     0,     0,    29,     0,    31,    32,    33,    34,
      35,    36,     0,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,     0,    79,    80,
       0,     0,    82,    83,    84,    85,    86,    87,     0,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,     0,    28,     0,     0,
      29,    30,    31,    32,    33,    34,    35,    36,     0,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,     0,    79,    80,     0,    81,    82,    83,
      84,    85,    86,    87,     0,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,     0,    28,     0,     0,    29,     0,    31,    32,
      33,    34,    35,    36,     0,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,     0,
      79,    80,     0,     0,    82,    83,    84,    85,    86,    87,
       0,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,   167,   157,   158,   159,   168,     0,     0,   169,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   170,   171,   172,     0,   173,   174,    27,   175,
     176,   177,   126,     0,   178,     0,   179,   180,   181,   182,
       0,   183,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,     0,     0,     0,     0,     0,
       0,     0,   168,     0,   206,   169,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,   173,   174,    27,     0,     0,     0,   126,
       0,     0,     0,   307,   180,   181,   169,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,   173,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,   180,   181,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,   206,     0,     0,   246,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,     0,   173,     0,    27,     0,     0,     0,     0,     0,
       0,     0,   206,   247,   181,   409,   410,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   411,     0,     0,    82,    83,    84,    85,    86,   412,
     248,    88,    89,    90,   266,    92,    93,    94,    95,    96,
      97,   246,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,   267,     0,   173,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
     247,   181,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   246,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,   173,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,   247,   181,   478,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   479,     0,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,   246,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,     0,   173,
       0,    27,     0,     0,     0,     0,     0,     0,     0,     0,
     247,   181,   182,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,   246,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,   173,     0,    27,     0,     0,     0,
       0,     0,     0,     0,     0,   247,   181,   246,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,   173,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,   247,     0,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,   246,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,   247,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,    27,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75
};

static const yytype_int16 yycheck[] =
{
      30,   269,   162,   225,   226,   250,   419,   443,   168,   249,
     333,   272,   151,    10,   174,   175,   176,   177,   178,     3,
       9,    10,    42,   319,   105,   231,   175,   272,    71,   271,
     236,    10,    71,    71,    10,    42,    71,     0,   474,    10,
     249,   162,    39,   175,   176,    42,   483,   168,   208,    46,
      39,    35,   112,   174,   175,   176,   177,   178,   218,   496,
      39,   497,   304,    39,    10,   225,   226,   363,    39,   218,
     113,   110,   110,    10,   113,   113,   162,    39,   113,   319,
     208,   241,   168,   113,   114,    78,   218,   208,   174,   175,
     176,   177,   178,    39,   316,   176,   554,   218,   118,   111,
     342,   261,    39,   110,   225,   226,   346,     3,   108,    46,
     319,   118,   548,   241,   119,   275,   553,    10,    80,   359,
     241,   118,   208,   329,   330,    87,   111,   120,     3,   261,
     114,   107,   218,   122,   111,   593,   107,   346,   115,    35,
     261,   120,   121,   275,   106,   351,    39,   307,    10,   179,
     359,    39,   588,    10,   275,   241,   316,   425,   113,    34,
     615,   107,   402,   403,   619,   127,    28,   373,   374,    10,
       3,    28,   332,   333,    39,   261,    10,    39,    10,   502,
     422,   109,    39,   596,    46,    10,   307,   448,    29,   275,
      10,    10,   437,     9,    10,   316,    28,   439,    39,   441,
     636,   340,   114,   448,   107,    39,    10,    39,    28,    29,
      10,   332,   333,   120,   121,   483,   219,   220,   221,    39,
     115,   307,    39,    39,    28,    29,    46,   107,    28,    29,
       4,     5,     6,   501,   115,    39,   113,   477,    32,    39,
     112,   271,   113,   120,   121,   405,   332,   333,   115,   120,
     121,   107,   110,   109,   257,   258,   112,   260,   113,   262,
     263,   120,   121,   163,   164,   120,   121,   509,   107,   511,
     109,   175,   176,   112,   304,   113,   114,   113,   113,   110,
     110,   110,   110,   443,   405,   109,   554,   110,   110,   251,
      10,   253,   110,   119,   108,   110,   518,   110,   110,   110,
     110,   110,   110,   110,   110,   110,    71,   110,   110,   110,
      71,   110,   342,   110,   474,   110,   112,   115,   107,   107,
     110,   112,   443,   565,   117,   593,   112,   110,   112,   108,
     117,   108,   110,   115,   107,   297,   108,   497,   108,   115,
     111,   303,   502,   112,     9,   567,    28,   115,   115,   115,
     112,   115,   115,   474,   111,   115,   115,   115,   518,   115,
     115,   115,   522,   523,   115,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   497,   111,   115,   341,
     111,   502,   112,   118,   111,   118,   628,   111,   548,     9,
     115,   353,   422,   355,   108,   114,   114,   518,   108,   112,
     108,   108,   111,   365,   115,   111,   111,   567,   112,   439,
     570,   441,   115,   115,   112,   111,   502,   112,   115,   119,
     167,   110,   110,   170,   171,   585,   119,   548,   588,   119,
     115,   112,   112,   111,   108,   110,   115,   123,   111,   111,
     117,     9,   112,   112,   115,   112,   567,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   585,   206,
     111,   111,   115,   115,   585,   111,   111,   588,   112,   111,
     111,   110,   115,   111,   226,   112,   636,   112,   111,   509,
     111,   511,   229,   445,   111,   111,   177,   112,   156,   176,
     340,   631,   120,   320,    -1,   248,    -1,    -1,    -1,    -1,
      -1,   248,   249,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   259,    -1,    -1,   636,    -1,    -1,   265,   266,
      -1,    -1,   269,    -1,    -1,    -1,    -1,    -1,    -1,   276,
      -1,    -1,    -1,   280,   281,   565,   283,   284,   285,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,   319,     7,   321,    -1,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    29,    30,    -1,   628,   346,
      -1,    -1,    -1,    -1,    -1,    39,    40,    -1,    -1,    -1,
      -1,    -1,   359,    -1,    -1,    -1,   363,    -1,    -1,    -1,
      -1,   368,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     377,   378,   379,    -1,    -1,   382,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,   402,   403,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,
      -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    -1,    -1,    -1,   472,    28,    -1,    30,    -1,
     477,    -1,    -1,    -1,    -1,    -1,   483,    39,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   513,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   542,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   554,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,    -1,   564,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   593,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   614,   615,    -1,
      -1,    -1,   619,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   631,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,    -1,   112,   113,   114,   115,   116,   117,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    32,    -1,    -1,    35,    -1,    37,    38,    39,    40,
      41,    42,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
      -1,    -1,   113,   114,   115,   116,   117,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,    -1,   112,   113,   114,
     115,   116,   117,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    35,    -1,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,    -1,    -1,   113,   114,   115,   116,   117,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    28,    29,    30,    31,
      32,    33,    34,    -1,    36,    -1,    38,    39,    40,    41,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     7,    -1,   116,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    28,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    -1,     7,    39,    40,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   116,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    -1,    28,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    39,    40,    44,    45,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    -1,    -1,    -1,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   110,    -1,    -1,   113,   114,   115,   116,   117,   118,
     116,   120,   121,   122,     3,   124,   125,   126,   127,   128,
     129,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    26,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,    28,
      -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    40,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    28,    -1,    30,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    -1,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82
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
     122,   123,   124,   125,   126,   127,   128,   129,   131,   201,
     202,   203,   205,   207,   237,   238,   242,   243,   244,   245,
     246,   247,   206,     3,   243,   248,   238,     3,    34,   240,
     241,   242,   238,   238,     0,     3,    34,   132,   133,   135,
     149,   238,   207,   248,   248,   112,   111,   108,   240,   111,
     119,    39,   113,   238,     3,   136,     3,    35,   114,   150,
      39,   109,   208,    10,    10,   114,   134,     4,     5,     6,
     209,   211,   107,   115,   115,   208,    39,     3,     7,    10,
      24,    25,    26,    28,    29,    31,    32,    33,    36,    38,
      39,    40,    41,    43,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   116,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   147,   148,   149,   151,
     152,   153,   154,   170,   172,   178,   179,   180,   188,   194,
     195,   196,   198,   199,   200,   201,   205,   211,   214,   150,
     150,   107,   210,    10,    39,   180,    10,    39,   116,   194,
      71,   107,   180,   107,   180,   194,   145,   152,   153,   194,
     148,   149,   152,   153,   188,   194,     3,    26,    41,   194,
     239,   243,    71,    32,   112,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   110,   110,   110,   174,   176,
     180,   108,   137,   107,   109,   112,   181,     7,   145,   152,
     194,   181,   181,   181,   171,   195,   178,   195,   110,    28,
      29,    46,   158,   161,   164,   168,   180,   189,   191,   120,
     121,   204,   113,   113,   120,   121,   204,   109,   112,   137,
     115,   107,   109,   112,   146,   174,    28,   158,   164,   180,
      10,   198,   238,   107,   238,   107,   110,   181,   181,    28,
     181,   181,   181,    28,   180,   107,   180,   112,    46,   191,
     112,   239,    39,   198,   199,   152,   180,   216,   218,   219,
     180,   180,   223,   180,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   238,   175,   110,
     238,   239,   194,    28,   195,   173,   158,   164,   189,    44,
      45,   110,   118,   236,   237,   180,   117,   159,   117,   165,
      42,   110,   118,   192,   112,   115,   204,   204,   194,   197,
     197,   108,   209,   238,   239,   158,   164,    71,   204,   108,
     238,   108,   238,   155,   238,   107,   180,   112,    71,   204,
     204,   111,   115,   180,   180,   180,   115,   115,   180,   225,
     115,   115,   115,   115,   115,   115,   115,   115,   115,   115,
     111,   111,   115,   111,   177,   108,   112,    28,    41,    70,
     182,   183,   185,   194,   112,   118,   118,   111,   119,   162,
     111,     9,    28,   167,     9,   167,   193,   169,   239,   190,
     191,   204,   115,   114,   114,   108,   112,   198,   239,   108,
     239,   108,   182,   108,   238,   111,   198,   199,   215,   115,
     111,   111,   220,   222,   115,   115,   226,   228,   230,   232,
     227,   229,   231,   233,   234,   235,   180,   112,   182,   112,
     111,   184,    46,   191,   192,   119,   119,   110,   110,   160,
     166,   192,   182,   119,   115,   191,   197,   112,   112,   239,
     112,   239,   111,   180,   108,   110,   195,   217,   205,   205,
     224,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     205,   205,   111,   115,   111,   115,   180,   186,   163,   182,
     111,   192,   190,   115,   112,   112,   156,   112,   180,   239,
     111,   195,   221,   111,   205,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   115,   115,   111,   183,   111,   117,
     187,   182,   111,   190,   167,   112,   111,   111,   115,   111,
       9,   122,   180,   212,   213,   212,   110,   212,   111,   112,
     157,   112,   239,   123,   213,   111,   111,   182,   111,     9,
     111
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
#line 422 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
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
    { postSig("("); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 445 "vtkParse.y"
    { postSig(")"); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 446 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 447 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(2) - (9)].integer);
      openSig = 1;
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      preSig("operator ");
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 456 "vtkParse.y"
    { postSig(")"); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 456 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 457 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(2) - (4)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (4)].str));
    }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 463 "vtkParse.y"
    {
      postSig(") = 0;");
      currentFunction->Name = (yyvsp[(2) - (3)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (3)].str));
      currentFunction->IsPureVirtual = 1;
      data.IsAbstract = 1;
    }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 471 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 472 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
    }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 478 "vtkParse.y"
    { postSig(")"); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 478 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 479 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 485 "vtkParse.y"
    {
      postSig(") = 0;");
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (3)].str));
      currentFunction->IsPureVirtual = 1;
      data.IsAbstract = 1;
    }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 493 "vtkParse.y"
    {postSig(" const");}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 495 "vtkParse.y"
    {postSig("("); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 497 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 498 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (2)].str));
    }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 504 "vtkParse.y"
    { postSig((yyvsp[(1) - (2)].str)); postSig("(");}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 506 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 507 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + 2);
      currentFunction->Name[0] = '~';
      strcpy(&currentFunction->Name[1], (yyvsp[(1) - (2)].str));
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 515 "vtkParse.y"
    { postSig((yyvsp[(1) - (2)].str)); postSig("(");}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 517 "vtkParse.y"
    {postSig("const ");}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 519 "vtkParse.y"
    {postSig("static ");}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 520 "vtkParse.y"
    {postSig("static ");}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 522 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 522 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 531 "vtkParse.y"
    { currentFunction->NumberOfArguments++;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 532 "vtkParse.y"
    { currentFunction->NumberOfArguments++; postSig(", ");}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 535 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 542 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 549 "vtkParse.y"
    {
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_FUNCTION;
    }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 558 "vtkParse.y"
    {delSig();}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 559 "vtkParse.y"
    {delSig();}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 560 "vtkParse.y"
    {delSig();}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 561 "vtkParse.y"
    {delSig();}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 570 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 578 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 579 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 581 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_POINTER + (VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) + ((yyvsp[(3) - (3)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 583 "vtkParse.y"
    { postSig("[]"); (yyval.integer) = VTK_PARSE_POINTER + ((yyvsp[(4) - (4)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 585 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_CONST + (yyvsp[(2) - (2)].integer);}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 586 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 587 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_STATIC + (yyvsp[(2) - (2)].integer);}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 588 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | VTK_PARSE_STATIC) + (yyvsp[(3) - (3)].integer);}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 590 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 592 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer);}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 593 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 612 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 613 "vtkParse.y"
    { postSig("&"); (yyval.integer) = (yyvsp[(1) - (2)].integer);}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 614 "vtkParse.y"
    { postSig("*"); (yyval.integer) = (VTK_PARSE_REF + VTK_PARSE_POINTER) + (yyvsp[(1) - (2)].integer);}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 616 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 617 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 619 "vtkParse.y"
    { postSig("vtkStdString "); (yyval.integer) = (VTK_PARSE_STRING); }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 621 "vtkParse.y"
    { postSig("vtkUnicodeString "); (yyval.integer) = (VTK_PARSE_UNICODE_STRING); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 630 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 631 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 632 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_REF + (yyvsp[(2) - (2)].integer);}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 633 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_REF + VTK_PARSE_POINTER) + (yyvsp[(2) - (2)].integer);}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 635 "vtkParse.y"
    {postSig("unsigned ");}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 636 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_UNSIGNED + (yyvsp[(3) - (3)].integer);}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 637 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 640 "vtkParse.y"
    { postSig("vtkTypeInt8 "); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 641 "vtkParse.y"
    { postSig("vtkTypeUInt8 "); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 642 "vtkParse.y"
    { postSig("vtkTypeInt16 "); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 643 "vtkParse.y"
    { postSig("vtkTypeUInt16 "); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 644 "vtkParse.y"
    { postSig("vtkTypeInt32 "); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 645 "vtkParse.y"
    { postSig("vtkTypeUInt32 "); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 646 "vtkParse.y"
    { postSig("vtkTypeInt64 "); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 647 "vtkParse.y"
    { postSig("vtkTypeUInt64 "); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 648 "vtkParse.y"
    { postSig("vtkTypeFloat32 "); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 649 "vtkParse.y"
    { postSig("vtkTypeFloat64 "); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 650 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 651 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 652 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 653 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 654 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 655 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 656 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 657 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 658 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_UNKNOWN;
    }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 667 "vtkParse.y"
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

  case 195:

/* Line 1455 of yacc.c  */
#line 683 "vtkParse.y"
    { postSig("vtkIdType "); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 684 "vtkParse.y"
    { postSig("long long "); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 686 "vtkParse.y"
    { postSig("signed char "); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 687 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 692 "vtkParse.y"
    {
      data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
      data.NumberOfSuperClasses++;
    }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    {
      data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
      data.NumberOfSuperClasses++;
    }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    {preSig("void Set"); postSig(" ("); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
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

  case 215:

/* Line 1455 of yacc.c  */
#line 724 "vtkParse.y"
    {postSig("Get");}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 724 "vtkParse.y"
    {postSig(" ();"); invertSig = 1;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 726 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(7) - (8)].integer);
   output_function();
   }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 733 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 734 "vtkParse.y"
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

  case 220:

/* Line 1455 of yacc.c  */
#line 744 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    {
   postSig(" ();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   output_function();
   }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    {preSig("void Set"); postSig(" ("); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 755 "vtkParse.y"
    {postSig(");"); openSig = 0;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
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

  case 225:

/* Line 1455 of yacc.c  */
#line 786 "vtkParse.y"
    {preSig("void Set"); postSig(" ("); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 787 "vtkParse.y"
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

  case 227:

/* Line 1455 of yacc.c  */
#line 797 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 798 "vtkParse.y"
    {postSig(" ();"); invertSig = 1;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 799 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   output_function();
   }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 807 "vtkParse.y"
    {preSig("void "); postSig("On ();"); openSig = 0; }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
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

  case 232:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 829 "vtkParse.y"
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

  case 234:

/* Line 1455 of yacc.c  */
#line 854 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 859 "vtkParse.y"
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

  case 236:

/* Line 1455 of yacc.c  */
#line 871 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 876 "vtkParse.y"
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

  case 238:

/* Line 1455 of yacc.c  */
#line 903 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 908 "vtkParse.y"
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

  case 240:

/* Line 1455 of yacc.c  */
#line 920 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 925 "vtkParse.y"
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

  case 242:

/* Line 1455 of yacc.c  */
#line 954 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 959 "vtkParse.y"
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

  case 244:

/* Line 1455 of yacc.c  */
#line 971 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 976 "vtkParse.y"
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

  case 246:

/* Line 1455 of yacc.c  */
#line 1009 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1014 "vtkParse.y"
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

  case 248:

/* Line 1455 of yacc.c  */
#line 1026 "vtkParse.y"
    {
      free (currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
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

  case 250:

/* Line 1455 of yacc.c  */
#line 1044 "vtkParse.y"
    {
     free (currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1049 "vtkParse.y"
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

  case 252:

/* Line 1455 of yacc.c  */
#line 1061 "vtkParse.y"
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

  case 253:

/* Line 1455 of yacc.c  */
#line 1108 "vtkParse.y"
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

  case 254:

/* Line 1455 of yacc.c  */
#line 1157 "vtkParse.y"
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

  case 255:

/* Line 1455 of yacc.c  */
#line 1208 "vtkParse.y"
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

  case 256:

/* Line 1455 of yacc.c  */
#line 1264 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1267 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1272 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1272 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1273 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1273 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1274 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1274 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1275 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1275 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1276 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1276 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1277 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1278 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1279 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1281 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1282 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1286 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1287 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1288 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1289 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1292 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1293 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1295 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1296 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1297 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1298 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1299 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1300 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1301 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1302 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 4683 "vtkParse.tab.c"
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
#line 1329 "vtkParse.y"

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



