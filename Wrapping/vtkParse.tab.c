
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
    if (strlen(currentFunction->Signature) + strlen(arg) + 5 >
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
      strcpy(currentFunction->Signature, arg);
      }
    else if (openSig)
      {
      int m, n;
      char *cp;
      checkSigSize(arg);
      cp = currentFunction->Signature;
      m = strlen(cp);
      n = strlen(arg);
      memmove(&cp[n], cp, m+1);
      strncpy(cp, arg, n);
      }
    }
  void postSig(const char *arg)
    {
    if (!currentFunction->Signature)
      {
      currentFunction->Signature = (char*)malloc(2048);
      sigAllocatedLength = 2048;
      strcpy(currentFunction->Signature, arg);
      }
    else if (openSig)
      {
      int m, n;
      char *cp;
      checkSigSize(arg);
      cp = currentFunction->Signature;
      m = strlen(cp);
      n = strlen(arg);
      if (invertSig)
        {
        memmove(&cp[n], cp, m+1);
        strncpy(cp, arg, n);
        }
      else
        {
        strncpy(&cp[m], arg, n+1);
        }
      }
    }
  void preScopeSig(const char *arg)
    {
    if (!currentFunction->Signature)
      {
      currentFunction->Signature = (char*)malloc(2048);
      sigAllocatedLength = 2048;
      strcpy(currentFunction->Signature, arg);
      }
    else if (openSig)
      {
      int i, m, n;
      char *cp;
      checkSigSize(arg);
      cp = currentFunction->Signature;
      m = strlen(cp);
      n = strlen(arg);
      i = m - 1;
      while (i > 0 &&
            ((cp[i] >= 'a' && cp[i] <= 'z') ||
             (cp[i] >= 'A' && cp[i] <= 'Z') ||
             (cp[i] >= '0' && cp[i] <= '9') ||
             cp[i] == '_' || cp[i] == ':'))
        {
        i--;
        }
      memmove(&cp[i+n+2], &cp[i], m+1);
      strncpy(&cp[i], arg, n);
      strncpy(&cp[i+n], "::", 2);
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
#line 302 "vtkParse.tab.c"

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
     CONST_EQUAL = 288,
     OPERATOR = 289,
     UNSIGNED = 290,
     FRIEND = 291,
     INLINE = 292,
     MUTABLE = 293,
     TEMPLATE = 294,
     TYPENAME = 295,
     TYPEDEF = 296,
     NAMESPACE = 297,
     USING = 298,
     VTK_ID = 299,
     STATIC = 300,
     VAR_FUNCTION = 301,
     ARRAY_NUM = 302,
     VTK_LEGACY = 303,
     NEW = 304,
     DELETE = 305,
     LPAREN_POINTER = 306,
     LPAREN_AMPERSAND = 307,
     OP_LSHIFT_EQ = 308,
     OP_RSHIFT_EQ = 309,
     OP_LSHIFT = 310,
     OP_RSHIFT = 311,
     OP_ARROW_POINTER = 312,
     OP_ARROW = 313,
     OP_INCR = 314,
     OP_DECR = 315,
     OP_PLUS_EQ = 316,
     OP_MINUS_EQ = 317,
     OP_TIMES_EQ = 318,
     OP_DIVIDE_EQ = 319,
     OP_REMAINDER_EQ = 320,
     OP_AND_EQ = 321,
     OP_OR_EQ = 322,
     OP_XOR_EQ = 323,
     OP_LOGIC_AND_EQ = 324,
     OP_LOGIC_OR_EQ = 325,
     OP_LOGIC_AND = 326,
     OP_LOGIC_OR = 327,
     OP_LOGIC_EQ = 328,
     OP_LOGIC_NEQ = 329,
     OP_LOGIC_LEQ = 330,
     OP_LOGIC_GEQ = 331,
     ELLIPSIS = 332,
     DOUBLE_COLON = 333,
     TypeInt8 = 334,
     TypeUInt8 = 335,
     TypeInt16 = 336,
     TypeUInt16 = 337,
     TypeInt32 = 338,
     TypeUInt32 = 339,
     TypeInt64 = 340,
     TypeUInt64 = 341,
     TypeFloat32 = 342,
     TypeFloat64 = 343,
     IdType = 344,
     StdString = 345,
     UnicodeString = 346,
     SetMacro = 347,
     GetMacro = 348,
     SetStringMacro = 349,
     GetStringMacro = 350,
     SetClampMacro = 351,
     SetObjectMacro = 352,
     GetObjectMacro = 353,
     BooleanMacro = 354,
     SetVector2Macro = 355,
     SetVector3Macro = 356,
     SetVector4Macro = 357,
     SetVector6Macro = 358,
     GetVector2Macro = 359,
     GetVector3Macro = 360,
     GetVector4Macro = 361,
     GetVector6Macro = 362,
     SetVectorMacro = 363,
     GetVectorMacro = 364,
     ViewportCoordinateMacro = 365,
     WorldCoordinateMacro = 366,
     TypeMacro = 367,
     VTK_BYTE_SWAP_DECL = 368
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 243 "vtkParse.y"

  char *str;
  int   integer;



/* Line 214 of yacc.c  */
#line 571 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 583 "vtkParse.tab.c"

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
#define YYLAST   2592

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  137
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  145
/* YYNRULES -- Number of rules.  */
#define YYNRULES  412
/* YYNRULES -- Number of states.  */
#define YYNSTATES  763

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   368

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   132,     2,     2,     2,   135,   127,     2,
     117,   118,   128,   131,   122,   129,   136,   130,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   116,   119,
     120,   124,   121,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   125,     2,   126,   134,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   114,   133,   115,   123,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   111,   112,   113
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
     302,   306,   307,   308,   309,   319,   320,   321,   326,   329,
     330,   331,   339,   340,   341,   346,   349,   352,   355,   356,
     358,   359,   365,   366,   367,   372,   373,   379,   380,   384,
     385,   389,   394,   395,   398,   399,   405,   407,   409,   412,
     414,   416,   418,   423,   427,   428,   430,   432,   433,   438,
     439,   441,   443,   445,   446,   451,   454,   455,   460,   462,
     463,   469,   470,   471,   481,   482,   485,   490,   496,   501,
     507,   512,   518,   522,   527,   530,   534,   540,   546,   553,
     562,   564,   568,   570,   574,   577,   582,   585,   586,   587,
     591,   596,   599,   601,   604,   608,   610,   613,   615,   617,
     618,   622,   626,   627,   633,   637,   638,   644,   648,   649,
     655,   656,   662,   663,   669,   670,   671,   672,   673,   685,
     686,   687,   688,   689,   701,   703,   704,   709,   711,   715,
     717,   721,   725,   727,   730,   733,   735,   737,   739,   741,
     743,   745,   748,   751,   754,   757,   761,   765,   766,   770,
     772,   774,   776,   778,   780,   782,   784,   786,   788,   790,
     792,   794,   796,   798,   800,   802,   804,   806,   808,   810,
     812,   814,   816,   818,   820,   822,   824,   825,   828,   831,
     832,   838,   839,   841,   843,   845,   847,   849,   851,   854,
     856,   858,   860,   862,   864,   865,   873,   874,   875,   884,
     885,   891,   892,   898,   899,   900,   911,   912,   920,   921,
     922,   931,   932,   940,   941,   949,   950,   958,   959,   967,
     968,   976,   977,   985,   986,   994,   995,  1003,  1004,  1012,
    1013,  1023,  1024,  1034,  1039,  1044,  1051,  1059,  1062,  1065,
    1069,  1073,  1075,  1077,  1079,  1081,  1083,  1085,  1087,  1089,
    1091,  1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,  1109,
    1111,  1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,  1129,
    1131,  1133,  1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,
    1151,  1153,  1155,  1156,  1159,  1160,  1163,  1164,  1167,  1169,
    1171,  1173,  1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,
    1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,  1207,  1209,
    1211,  1213,  1215,  1217,  1219,  1221,  1223,  1225,  1227,  1229,
    1231,  1233,  1235,  1237,  1239,  1243,  1247,  1251,  1255,  1259,
    1263,  1264,  1267
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     138,     0,    -1,   271,   140,   271,   139,    -1,    -1,   140,
     271,   139,    -1,   155,   237,    -1,   155,   233,    -1,   155,
      37,   237,    -1,   155,    37,   233,    -1,   155,   141,    -1,
     141,    -1,    -1,     3,   191,   142,   240,   114,   143,   115,
      -1,    -1,   144,   143,    -1,   243,   116,    -1,   205,    -1,
      38,   205,    -1,   146,    -1,   145,    -1,   148,    -1,   147,
      -1,   149,    -1,   153,    -1,   151,    -1,    36,   151,    -1,
     150,    -1,    28,    -1,   159,   192,    -1,    36,   159,   192,
      -1,    37,   159,   192,    -1,   158,   192,    -1,    36,   158,
     192,    -1,    37,   158,   192,    -1,   154,   192,    -1,    37,
     154,   192,    -1,   157,   192,    -1,   113,   117,   271,   118,
     119,    -1,   247,   119,    -1,   247,    -1,    26,   191,   114,
     271,   115,   272,   119,    -1,    26,   114,   271,   115,   272,
     119,    -1,    27,   191,   114,   271,   115,   272,   119,    -1,
      27,   114,   271,   115,   272,   119,    -1,    43,   272,   119,
      -1,   155,   151,    -1,     3,   191,   152,    -1,   119,    -1,
     114,   271,   115,   119,    -1,   116,   272,   119,    -1,    41,
     211,   208,   119,    -1,    41,    28,    -1,    41,     3,   191,
     114,   271,   115,   191,   119,    -1,    41,     3,   114,   271,
     115,   191,   119,    -1,    41,   211,    51,   191,   118,   117,
     272,   118,   119,    -1,    41,   211,    52,   191,   118,   117,
     272,   118,   119,    -1,    41,   146,    -1,    41,   145,    -1,
      41,   148,    -1,    41,   147,    -1,    41,    46,   119,    -1,
     155,   158,    -1,    39,   120,   121,    -1,    39,   120,   156,
     121,    -1,     3,    10,    -1,     3,    10,   122,   156,    -1,
      40,    10,    -1,    40,    10,   122,   156,    -1,    48,   117,
     158,   118,    -1,   123,   185,    -1,     7,   123,   185,    -1,
     177,    -1,   211,   170,    -1,   211,    30,   170,    -1,     7,
     211,    30,   170,    -1,     7,   211,   170,    -1,   160,    -1,
     211,   164,    -1,   211,    30,   164,    -1,     7,   211,    30,
     164,    -1,     7,   211,   164,    -1,    -1,    -1,    -1,    34,
     211,   117,   161,   196,   118,   162,   174,   163,    -1,    -1,
      -1,   167,   165,   174,   166,    -1,   167,   173,    -1,    -1,
      -1,    34,   269,   168,   117,   169,   196,   118,    -1,    -1,
      -1,   175,   171,   174,   172,    -1,   175,   173,    -1,   124,
       9,    -1,    33,     9,    -1,    -1,    30,    -1,    -1,   191,
     117,   176,   196,   118,    -1,    -1,    -1,   180,   178,   182,
     179,    -1,    -1,   191,   117,   181,   196,   118,    -1,    -1,
     116,   184,   183,    -1,    -1,   122,   184,   183,    -1,   191,
     117,   271,   118,    -1,    -1,   187,   186,    -1,    -1,   191,
     117,   188,   196,   118,    -1,    30,    -1,    45,    -1,    45,
      37,    -1,    44,    -1,    10,    -1,   119,    -1,   114,   271,
     115,   119,    -1,   114,   271,   115,    -1,    -1,   194,    -1,
     199,    -1,    -1,   199,   195,   122,   194,    -1,    -1,   197,
      -1,    77,    -1,   199,    -1,    -1,   199,   198,   122,   197,
      -1,   211,   209,    -1,    -1,   211,   208,   200,   204,    -1,
      46,    -1,    -1,   211,    52,   201,   191,   118,    -1,    -1,
      -1,   211,    51,   202,   191,   118,   117,   203,   193,   118,
      -1,    -1,   124,   245,    -1,     3,   191,   206,   119,    -1,
       3,   191,   236,   206,   119,    -1,    26,   191,   206,   119,
      -1,    26,   191,   236,   206,   119,    -1,    27,   191,   206,
     119,    -1,    27,   191,   236,   206,   119,    -1,   211,   206,
     119,    -1,   211,    30,   206,   119,    -1,    46,   119,    -1,
      45,    46,   119,    -1,   211,    52,   191,   118,   119,    -1,
     211,    51,   191,   118,   119,    -1,   211,    51,   191,   118,
      47,   119,    -1,   211,    51,   191,   118,   117,   193,   118,
     119,    -1,   208,    -1,   208,   122,   207,    -1,   208,    -1,
     208,   122,   207,    -1,   236,   208,    -1,   236,   208,   122,
     207,    -1,   191,   209,    -1,    -1,    -1,    47,   210,   209,
      -1,   125,   272,   126,   209,    -1,   189,   212,    -1,   212,
      -1,   190,   212,    -1,   190,   189,   212,    -1,   237,    -1,
     237,   236,    -1,   232,    -1,   217,    -1,    -1,   217,   213,
     236,    -1,    10,    78,   230,    -1,    -1,    10,    78,   230,
     214,   236,    -1,    44,    78,   230,    -1,    -1,    44,    78,
     230,   215,   236,    -1,    44,    78,   231,    -1,    -1,    44,
      78,   231,   216,   236,    -1,    -1,   231,   120,   218,   228,
     121,    -1,    -1,   230,   120,   219,   228,   121,    -1,    -1,
      -1,    -1,    -1,    40,   220,   231,   120,   221,   228,   121,
     222,    78,   223,   230,    -1,    -1,    -1,    -1,    -1,    40,
     224,   230,   120,   225,   228,   121,   226,    78,   227,   230,
      -1,   211,    -1,    -1,   211,   122,   229,   228,    -1,    10,
      -1,    10,    78,   230,    -1,    44,    -1,    44,    78,   230,
      -1,    44,    78,   231,    -1,   233,    -1,   233,   127,    -1,
     233,   128,    -1,   234,    -1,   235,    -1,    90,    -1,    91,
      -1,   127,    -1,   128,    -1,   128,   127,    -1,   128,    32,
      -1,   128,   128,    -1,   128,    31,    -1,   128,   128,   127,
      -1,   128,   128,   128,    -1,    -1,    35,   238,   239,    -1,
     239,    -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,
      83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,
      88,    -1,    14,    -1,    20,    -1,    21,    -1,    13,    -1,
      15,    -1,    16,    -1,    19,    -1,    24,    -1,    25,    -1,
      10,    -1,    44,    -1,    89,    -1,    17,    -1,    18,    -1,
      22,    -1,    23,    -1,    -1,   116,   241,    -1,   243,   244,
      -1,    -1,   243,   244,   242,   122,   241,    -1,    -1,     4,
      -1,     5,    -1,     6,    -1,   230,    -1,   231,    -1,   217,
      -1,   129,   246,    -1,   246,    -1,     9,    -1,    11,    -1,
      12,    -1,   191,    -1,    -1,    92,   117,   191,   122,   248,
     212,   118,    -1,    -1,    -1,    93,   117,   249,   191,   122,
     250,   212,   118,    -1,    -1,    94,   117,   251,   191,   118,
      -1,    -1,    95,   117,   252,   191,   118,    -1,    -1,    -1,
      96,   117,   191,   122,   253,   237,   254,   122,   272,   118,
      -1,    -1,    97,   117,   191,   122,   255,   237,   118,    -1,
      -1,    -1,    98,   117,   256,   191,   122,   257,   237,   118,
      -1,    -1,    99,   117,   191,   258,   122,   237,   118,    -1,
      -1,   100,   117,   191,   122,   259,   237,   118,    -1,    -1,
     104,   117,   191,   122,   260,   237,   118,    -1,    -1,   101,
     117,   191,   122,   261,   237,   118,    -1,    -1,   105,   117,
     191,   122,   262,   237,   118,    -1,    -1,   102,   117,   191,
     122,   263,   237,   118,    -1,    -1,   106,   117,   191,   122,
     264,   237,   118,    -1,    -1,   103,   117,   191,   122,   265,
     237,   118,    -1,    -1,   107,   117,   191,   122,   266,   237,
     118,    -1,    -1,   108,   117,   191,   122,   267,   237,   122,
     245,   118,    -1,    -1,   109,   117,   191,   122,   268,   237,
     122,   245,   118,    -1,   110,   117,   191,   118,    -1,   111,
     117,   191,   118,    -1,   112,   117,   191,   122,   191,   118,
      -1,   112,   117,   191,   122,   191,   122,   118,    -1,   117,
     118,    -1,   125,   126,    -1,    49,   125,   126,    -1,    50,
     125,   126,    -1,   270,    -1,   124,    -1,   128,    -1,   130,
      -1,   129,    -1,   131,    -1,   132,    -1,   123,    -1,   122,
      -1,   120,    -1,   121,    -1,   127,    -1,   133,    -1,   134,
      -1,   135,    -1,    49,    -1,    50,    -1,    53,    -1,    54,
      -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    59,
      -1,    60,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    -1,   275,   271,    -1,    -1,
     276,   272,    -1,    -1,   274,   273,    -1,     3,    -1,    39,
      -1,   275,    -1,   119,    -1,   276,    -1,   280,    -1,    29,
      -1,   277,    -1,   278,    -1,   279,    -1,   270,    -1,   116,
      -1,   136,    -1,     8,    -1,   237,    -1,   233,    -1,    78,
      -1,     9,    -1,    12,    -1,    28,    -1,    30,    -1,    34,
      -1,    45,    -1,    37,    -1,     7,    -1,    26,    -1,    27,
      -1,    40,    -1,    47,    -1,    46,    -1,    77,    -1,     4,
      -1,     6,    -1,     5,    -1,    42,    -1,    43,    -1,   114,
     273,   115,    -1,   117,   271,   118,    -1,    51,   271,   118,
      -1,    52,   271,   118,    -1,   125,   271,   126,    -1,    41,
     281,   119,    -1,    -1,     3,   281,    -1,   276,   281,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   367,   367,   369,   369,   371,   371,   372,   372,   373,
     373,   376,   375,   381,   381,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     409,   411,   413,   415,   417,   419,   421,   423,   424,   425,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   439,   441,   441,   443,   443,   444,   444,   446,   448,
     449,   450,   451,   455,   459,   464,   471,   475,   479,   483,
     488,   494,   495,   496,   494,   506,   506,   506,   512,   523,
     524,   523,   530,   530,   530,   536,   547,   548,   550,   550,
     552,   552,   554,   555,   554,   562,   562,   564,   564,   566,
     566,   568,   570,   570,   579,   579,   581,   583,   584,   586,
     586,   588,   589,   590,   592,   592,   594,   594,   594,   596,
     596,   598,   598,   599,   599,   601,   609,   608,   615,   621,
     621,   627,   628,   627,   635,   635,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     652,   652,   654,   655,   656,   657,   659,   667,   668,   668,
     671,   674,   675,   676,   677,   679,   680,   682,   683,   684,
     684,   686,   690,   689,   692,   696,   695,   698,   702,   701,
     705,   705,   706,   706,   707,   708,   709,   710,   707,   711,
     712,   713,   714,   711,   716,   716,   716,   718,   719,   721,
     722,   723,   725,   726,   727,   729,   730,   732,   734,   743,
     744,   745,   746,   747,   748,   749,   750,   752,   752,   754,
     757,   758,   759,   760,   761,   762,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   775,   776,
     783,   800,   801,   802,   803,   804,   806,   806,   808,   817,
     816,   825,   826,   827,   828,   830,   830,   830,   832,   832,
     834,   835,   836,   837,   841,   840,   852,   852,   852,   861,
     861,   872,   872,   882,   883,   881,   914,   913,   925,   926,
     925,   935,   934,   952,   951,   982,   981,   999,   998,  1031,
    1030,  1048,  1047,  1082,  1081,  1099,  1098,  1137,  1136,  1154,
    1153,  1172,  1171,  1188,  1235,  1284,  1335,  1392,  1393,  1394,
    1395,  1396,  1398,  1399,  1399,  1400,  1400,  1401,  1401,  1402,
    1402,  1403,  1403,  1404,  1404,  1405,  1406,  1407,  1408,  1409,
    1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,
    1420,  1421,  1422,  1423,  1424,  1425,  1426,  1427,  1428,  1429,
    1430,  1431,  1436,  1436,  1437,  1437,  1438,  1438,  1440,  1440,
    1440,  1442,  1442,  1442,  1444,  1444,  1444,  1444,  1444,  1445,
    1445,  1445,  1445,  1445,  1445,  1446,  1446,  1446,  1446,  1446,
    1446,  1447,  1447,  1447,  1447,  1447,  1447,  1447,  1448,  1448,
    1448,  1448,  1448,  1448,  1450,  1451,  1452,  1453,  1454,  1455,
    1457,  1457,  1458
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
  "CONST_EQUAL", "OPERATOR", "UNSIGNED", "FRIEND", "INLINE", "MUTABLE",
  "TEMPLATE", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "VTK_ID",
  "STATIC", "VAR_FUNCTION", "ARRAY_NUM", "VTK_LEGACY", "NEW", "DELETE",
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
  "op_sig", "$@7", "$@8", "func", "$@9", "$@10", "pure_virtual",
  "maybe_const", "func_sig", "$@11", "constructor", "$@12", "$@13",
  "constructor_sig", "$@14", "maybe_initializers", "more_initializers",
  "initializer", "destructor", "$@15", "destructor_sig", "$@16",
  "const_mod", "static_mod", "any_id", "func_body", "ignore_args_list",
  "ignore_more_args", "$@17", "args_list", "more_args", "$@18", "arg",
  "$@19", "$@20", "$@21", "$@22", "opt_var_assign", "var", "var_ids",
  "maybe_indirect_var_ids", "var_id", "var_array", "$@23", "type",
  "type_red1", "$@24", "$@25", "$@26", "$@27", "templated_id", "$@28",
  "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "$@35", "$@36", "$@37",
  "types", "$@38", "scoped_id", "vtk_scoped_id", "type_string1",
  "type_string2", "type_string3", "type_string4", "type_indirection",
  "type_red2", "$@39", "type_primitive", "optional_scope", "scope_list",
  "$@40", "scope_type", "superclass_id", "float_num", "float_prim",
  "macro", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48",
  "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57",
  "$@58", "$@59", "$@60", "$@61", "op_token", "op_token_no_delim",
  "maybe_other", "maybe_other_no_semi", "maybe_other_class",
  "other_stuff_or_class", "other_stuff", "other_stuff_no_semi", "braces",
  "parens", "brackets", "typedef_ignore", "typedef_ignore_body", 0
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
     365,   366,   367,   368,   123,   125,    58,    40,    41,    59,
      60,    62,    44,   126,    61,    91,    93,    38,    42,    45,
      47,    43,    33,   124,    94,    37,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   137,   138,   139,   139,   140,   140,   140,   140,   140,
     140,   142,   141,   143,   143,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   152,   152,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   154,   155,   155,   156,   156,   156,   156,   157,   158,
     158,   158,   158,   158,   158,   158,   159,   159,   159,   159,
     159,   161,   162,   163,   160,   165,   166,   164,   164,   168,
     169,   167,   171,   172,   170,   170,   173,   173,   174,   174,
     176,   175,   178,   179,   177,   181,   180,   182,   182,   183,
     183,   184,   186,   185,   188,   187,   189,   190,   190,   191,
     191,   192,   192,   192,   193,   193,   194,   195,   194,   196,
     196,   197,   197,   198,   197,   199,   200,   199,   199,   201,
     199,   202,   203,   199,   204,   204,   205,   205,   205,   205,
     205,   205,   205,   205,   205,   205,   205,   205,   205,   205,
     206,   206,   207,   207,   207,   207,   208,   209,   210,   209,
     209,   211,   211,   211,   211,   212,   212,   212,   212,   213,
     212,   212,   214,   212,   212,   215,   212,   212,   216,   212,
     218,   217,   219,   217,   220,   221,   222,   223,   217,   224,
     225,   226,   227,   217,   228,   229,   228,   230,   230,   231,
     231,   231,   232,   232,   232,   233,   233,   234,   235,   236,
     236,   236,   236,   236,   236,   236,   236,   238,   237,   237,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     239,   239,   239,   239,   239,   239,   240,   240,   241,   242,
     241,   243,   243,   243,   243,   244,   244,   244,   245,   245,
     246,   246,   246,   246,   248,   247,   249,   250,   247,   251,
     247,   252,   247,   253,   254,   247,   255,   247,   256,   257,
     247,   258,   247,   259,   247,   260,   247,   261,   247,   262,
     247,   263,   247,   264,   247,   265,   247,   266,   247,   267,
     247,   268,   247,   247,   247,   247,   247,   269,   269,   269,
     269,   269,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   271,   271,   272,   272,   273,   273,   274,   274,
     274,   275,   275,   275,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   277,   278,   278,   278,   279,   280,
     281,   281,   281
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
       3,     0,     0,     0,     9,     0,     0,     4,     2,     0,
       0,     7,     0,     0,     4,     2,     2,     2,     0,     1,
       0,     5,     0,     0,     4,     0,     5,     0,     3,     0,
       3,     4,     0,     2,     0,     5,     1,     1,     2,     1,
       1,     1,     4,     3,     0,     1,     1,     0,     4,     0,
       1,     1,     1,     0,     4,     2,     0,     4,     1,     0,
       5,     0,     0,     9,     0,     2,     4,     5,     4,     5,
       4,     5,     3,     4,     2,     3,     5,     5,     6,     8,
       1,     3,     1,     3,     2,     4,     2,     0,     0,     3,
       4,     2,     1,     2,     3,     1,     2,     1,     1,     0,
       3,     3,     0,     5,     3,     0,     5,     3,     0,     5,
       0,     5,     0,     5,     0,     0,     0,     0,    11,     0,
       0,     0,     0,    11,     1,     0,     4,     1,     3,     1,
       3,     3,     1,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     3,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     2,     0,
       5,     0,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     0,     7,     0,     0,     8,     0,
       5,     0,     5,     0,     0,    10,     0,     7,     0,     0,
       8,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       9,     0,     9,     4,     4,     6,     7,     2,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3,     3,
       0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     362,   399,   401,   400,   392,   381,   385,   249,   386,   243,
     240,   244,   245,   252,   253,   246,   241,   242,   254,   255,
     247,   248,   393,   394,   387,   374,   388,   389,   227,   391,
     395,   410,   402,   403,   250,   390,   397,   396,   336,   337,
     362,   362,   338,   339,   340,   341,   342,   343,   349,   350,
     344,   345,   346,   347,   348,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   398,   384,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   251,   217,
     218,   366,   379,   362,   371,   330,   331,   329,   328,   322,
     362,   332,   323,   325,   324,   326,   327,   333,   334,   335,
     380,     0,   383,   215,   216,   382,   229,   378,     0,   362,
     372,   375,   376,   377,   373,     0,   410,   410,     0,     0,
       0,   368,   369,     0,   366,   370,     0,     0,     1,     0,
       0,   362,    10,     0,   363,   228,   411,   412,   409,   406,
     407,   404,   367,   405,   408,   120,   119,    11,     0,     3,
       0,     9,     6,     5,   256,     0,     0,    62,     0,     2,
     362,     8,     7,   261,     0,    64,    66,    63,     3,   262,
     263,   264,   257,     0,    13,     0,     0,     4,   207,   194,
     209,   267,   265,   266,   258,     0,     0,   249,     0,     0,
      27,   116,     0,     0,     0,     0,     0,   364,   250,   117,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    19,    18,    21,
      20,    22,    26,    24,    23,     0,     0,     0,     0,     0,
      76,    71,   102,     0,     0,     0,    16,     0,   172,   178,
       0,     0,   177,   212,   175,     0,    39,    65,    67,     0,
       0,     0,     0,   192,   190,     0,     0,   249,   250,   117,
       0,     0,     0,   362,     0,   362,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,    51,     0,    57,    56,    59,
      58,     0,     0,   364,     0,   118,     0,   154,     0,     0,
     276,   279,   281,     0,     0,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     362,    69,   112,     0,    12,    14,   362,   121,    34,     0,
      45,    61,     0,    36,    31,    28,   107,   171,     0,   173,
     105,     0,     0,     0,     0,    77,    85,    72,    92,   167,
       0,   160,     0,   213,   214,   219,   220,   176,    15,    38,
     208,     0,     0,   210,   211,     0,     0,   261,   362,   364,
      47,    46,   167,     0,     0,    70,     0,    80,    75,     0,
     181,     0,   362,     0,     0,     0,   362,     0,     0,    81,
       0,    32,    29,     0,    35,    33,    30,     0,     0,     0,
       0,   362,     0,     0,     0,    60,     0,     0,     0,    44,
     365,   184,   187,   155,     0,     0,     0,     0,     0,     0,
       0,     0,   291,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   113,   114,     0,
       0,     0,     0,   103,   174,   129,    78,    73,     0,   336,
     337,     0,     0,    89,   321,     0,     0,     0,     0,    98,
      88,    98,    95,   168,   100,   364,   166,   152,     0,   180,
     224,   222,   221,   223,   195,   200,   204,     0,     0,   260,
       0,     0,   146,     0,    79,    74,     0,   364,     0,   148,
       0,   364,     0,   150,     0,   129,     0,   362,     0,     0,
      50,     0,     0,    68,   274,     0,     0,     0,   283,   286,
       0,     0,   293,   297,   301,   305,   295,   299,   303,   307,
     309,   311,   313,   314,     0,     0,   129,   123,     0,   109,
       0,   104,   138,   131,     0,   130,   132,   167,   153,     0,
       0,   317,   318,     0,     0,     0,    97,    96,    99,    86,
      93,   167,   129,     0,   161,   162,     0,   225,   226,     0,
       0,   205,   193,   191,     0,    49,   147,   183,     0,   364,
     149,     0,   364,   151,     0,     0,     0,     0,     0,   186,
     189,     0,   277,   280,   282,     0,     0,   289,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,   122,     0,   108,   362,   106,     0,   141,   139,
     136,   135,   319,   320,    90,     0,   124,   157,   156,    87,
      94,   169,     0,   167,     0,   164,     0,     0,     0,    48,
      41,     0,    43,     0,    82,     0,     0,   364,   364,     0,
       0,   284,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   315,     0,   115,   109,     0,
       0,     0,     0,   144,   129,   158,     0,   125,   126,   101,
     170,   163,     0,   196,   201,   206,    40,    42,    98,    53,
       0,     0,     0,   275,     0,     0,   287,     0,   292,   294,
     298,   302,   306,   296,   300,   304,   308,     0,     0,   316,
     110,   111,   134,     0,     0,     0,   137,     0,     0,     0,
     165,     0,     0,    83,    52,     0,     0,   278,   364,   290,
     270,   271,   272,     0,   273,     0,   269,     0,     0,   140,
     145,    91,   159,     0,   197,   202,    84,    54,    55,     0,
     268,   310,   312,   142,   128,     0,     0,   285,   124,   198,
     203,     0,   143
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   101,   159,   160,   132,   154,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   381,   234,   235,   133,   158,
     237,   238,   239,   240,   505,   688,   746,   355,   469,   629,
     356,   553,   674,   357,   471,   630,   470,   559,   358,   562,
     241,   346,   541,   242,   455,   453,   614,   539,   331,   447,
     332,   536,   243,   244,   382,   338,   676,   677,   719,   544,
     545,   617,   546,   673,   672,   671,   758,   716,   246,   360,
     564,   361,   476,   561,   547,   248,   362,   496,   511,   512,
     249,   376,   375,   260,   569,   721,   755,   261,   570,   722,
     756,   487,   638,   250,   251,   252,   102,   103,   104,   566,
     105,   115,   106,   164,   172,   265,   173,   184,   735,   736,
     256,   591,   426,   650,   427,   428,   595,   695,   596,   431,
     653,   521,   599,   603,   600,   604,   601,   605,   602,   606,
     607,   608,   463,   107,   108,   302,   123,   124,   109,   110,
     111,   112,   113,   114,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -685
static const yytype_int16 yypact[] =
{
    1375,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  1242,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    1375,  1375,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  1108,  -685,  1375,  -685,  -685,  -685,  -685,  -685,  -685,
    1375,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,    11,  -685,  -685,  -685,  -685,  -685,  -685,   178,  1375,
    -685,  -685,  -685,  -685,  -685,  1694,  1242,  1242,   -92,   -67,
     -30,  -685,  -685,    -2,  1108,  -685,    21,    15,  -685,   201,
      42,  1375,  -685,  2072,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,    12,   178,
    2501,  -685,  -685,  -685,    87,   187,   197,  -685,   115,  -685,
    1375,  -685,  -685,   302,   139,   141,   161,  -685,   178,  -685,
    -685,  -685,  -685,   254,   846,    20,    20,  -685,   183,   286,
     226,  -685,   195,   205,   199,   201,  1894,   -62,    81,    85,
    -685,  -685,  2354,   960,  1727,  1983,   739,  1508,    58,    -9,
     214,   210,   223,   232,   233,   234,   235,   236,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   248,   249,   250,
     251,   252,   255,   257,   201,   260,   846,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,    74,  1642,    74,    74,    74,
    -685,  -685,  -685,  2469,  2387,   262,  -685,   258,  -685,    64,
     195,   205,  -685,   106,   190,   264,   259,  -685,  -685,   354,
     327,   354,   270,  -685,  -685,   263,    49,   -43,    38,   336,
     201,   267,   354,  1375,     3,  1375,    10,   265,   201,  -685,
      74,    74,   269,    74,  1812,    74,    74,   201,   201,   201,
    -685,   188,   100,    81,    85,  -685,   268,  -685,  -685,  -685,
    -685,   179,   271,  1508,   270,  -685,   272,  -685,  1812,   201,
    -685,  -685,  -685,   201,   201,  -685,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,   201,   201,
    1375,  -685,  -685,   266,  -685,  -685,  1375,  -685,  -685,  1894,
    -685,  -685,   225,  -685,  -685,  -685,   276,  -685,  2469,  -685,
    -685,   261,  2064,   201,   201,  -685,   -19,  -685,   -19,   112,
     274,   273,   190,  -685,  -685,  -685,   122,  -685,  -685,  -685,
    -685,   277,   278,  -685,  -685,  2354,  2354,   302,  1375,  1508,
    -685,  -685,   -22,   275,   201,  -685,   261,  -685,  -685,   279,
      93,   284,  1375,   281,   201,   287,  1375,   282,   201,  -685,
     218,  -685,  -685,   261,  -685,  -685,  -685,    29,    29,    29,
     201,  1375,   290,   291,   292,  -685,   201,   201,   289,  -685,
    -685,   192,   196,  -685,   293,   288,   201,   201,   201,   294,
     295,   201,  -685,   296,   297,   298,   299,   300,   301,   303,
     304,   306,   307,   312,   313,   310,   316,  -685,  -685,   309,
     256,   201,   201,  -685,  -685,  2190,  -685,  -685,   317,   314,
     318,   319,   283,  -685,  -685,   324,   329,   368,   377,   384,
    -685,   384,  -685,  -685,  -685,  1508,  -685,  -685,    29,  -685,
    -685,  -685,  -685,   208,  -685,  -685,   326,   328,   330,  -685,
     320,   331,  -685,   333,  -685,  -685,   190,  1508,   338,  -685,
     335,  1508,   340,  -685,   337,  2190,   342,  1375,   341,   343,
    -685,   190,   190,  -685,  -685,   346,   345,   347,  -685,  -685,
     351,   363,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,   201,   339,  2190,   350,   201,   364,
     370,  -685,  -685,  -685,   371,  -685,   366,   157,  -685,   334,
     365,  -685,  -685,   373,   -13,   374,  -685,  -685,  -685,  -685,
    -685,   -22,  2190,   369,  -685,   372,   201,  -685,  -685,  2354,
    2354,  -685,  -685,  -685,   379,  -685,  -685,  -685,   381,  1508,
    -685,   382,  1508,  -685,   378,   201,   349,   375,   387,  -685,
    -685,  2469,  -685,  -685,  -685,   993,   993,  -685,   993,   993,
     993,   993,   993,   993,   993,   993,   993,   993,   993,   126,
    -685,   385,  -685,   201,  -685,  1375,  -685,   383,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,   388,  2272,  -685,  -685,  -685,
    -685,  -685,   390,   -22,    29,   389,   391,   392,  2354,  -685,
    -685,   397,  -685,   398,  -685,   399,   201,  1508,  1508,   401,
    2469,  -685,   402,   993,   404,   407,   409,   410,   412,   413,
     414,   415,   416,   417,   418,  -685,   419,  -685,   364,   420,
    2190,   201,   201,   411,  2190,  -685,   424,  -685,   421,  -685,
    -685,  -685,    29,  -685,  -685,  -685,  -685,  -685,   384,  -685,
     425,   429,   431,  -685,   434,   432,  -685,   435,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,    32,    32,  -685,
    -685,  -685,  -685,   437,   438,    32,  -685,   439,   440,   436,
    -685,   428,   458,  -685,  -685,   442,   443,  -685,  1508,  -685,
    -685,  -685,  -685,   247,  -685,   445,  -685,   446,   393,  -685,
    -685,  -685,  -685,  2272,  -685,  -685,  -685,  -685,  -685,   447,
    -685,  -685,  -685,  -685,  -685,   354,   354,  -685,  2272,  -685,
    -685,   448,  -685
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -685,  -685,   400,   459,   444,  -685,   189,  -685,   376,   380,
     394,   395,  -685,  -685,  -140,  -685,  -685,   403,  -145,   163,
    -685,  -114,   149,  -685,  -685,  -685,  -685,  -252,  -685,  -685,
    -685,  -685,  -685,  -268,  -685,  -685,   211,  -466,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,   -98,   -40,   308,  -685,
    -685,  -685,   344,  -685,   386,     4,  -177,  -161,  -685,  -488,
     -85,  -685,  -616,  -685,  -685,  -685,  -685,  -685,   405,  -182,
    -573,  -293,  -525,  -685,   -46,  -237,  -685,  -685,  -685,  -685,
     422,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -364,  -685,  -172,  -117,  -685,  -129,  -685,  -685,  -236,
    -124,  -685,   471,  -685,   212,  -685,  -128,  -685,  -684,  -146,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,  -685,
    -685,  -685,  -685,   253,    -8,  -301,   469,  -685,    40,   -31,
    -685,  -685,  -685,  -685,   228
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -262
static const yytype_int16 yytable[] =
{
     117,   182,   420,   388,   152,   560,   347,   349,   418,   153,
     678,   128,   488,   145,   467,   155,   272,   584,   367,   387,
     145,   161,   621,   155,   737,   473,   162,   138,   305,   236,
     384,   740,   119,   120,   625,   272,   631,   306,   394,   145,
     398,   730,   145,   731,   732,   253,   255,   146,   611,   284,
     254,   139,   156,   279,   146,  -120,   183,   253,  -207,   145,
     156,   681,   254,   253,   253,   253,   253,   253,   254,   254,
     254,   254,   254,   146,   632,   126,   146,  -207,   491,   280,
     285,   236,   127,   457,   383,   117,   117,   370,   140,   372,
     373,   145,   393,   146,   397,   145,   340,   253,   255,   456,
     390,   134,   254,   475,   626,   468,   627,   253,   680,   720,
     145,   454,   254,   141,   253,   253,   304,   392,   495,   254,
     254,   125,   341,   149,   396,   146,   479,   678,   247,   146,
     365,   366,   421,   157,   494,   457,   304,   365,   366,   143,
     271,   144,   678,   371,   146,   374,   277,   282,   282,   291,
     301,   456,   168,   480,   481,   253,   365,   366,  -209,   473,
     254,   733,   148,   378,   125,   379,   303,   145,   380,   458,
     341,   384,   394,   398,   563,  -119,   365,   366,  -209,   253,
     247,   129,   388,   457,   254,   565,   717,   422,   336,   145,
     342,  -179,  -179,   337,   424,   273,   578,   165,   145,   275,
     581,   146,   493,   163,   473,   636,   637,   166,   618,   619,
     253,   145,   500,  -208,   411,   254,   504,   130,   410,   253,
    -182,  -182,   723,   146,   254,   383,   393,   397,   458,   474,
     416,   417,   146,   363,   364,   145,   167,   475,   342,   353,
     354,   343,   344,   345,   665,   146,   253,   253,   666,   482,
     483,   254,   254,   174,   620,   451,   730,   145,   731,   732,
     577,   259,   342,   175,   178,   391,   145,   395,   145,   146,
     495,   145,   303,   635,   685,   589,   590,   145,   641,   145,
     178,   643,   475,   176,   401,   402,   538,   404,   351,   405,
     406,   146,   352,   450,   179,   352,  -199,   386,   180,   403,
     146,   352,   146,   352,   262,   146,   169,   170,   171,   353,
     354,   146,  -210,   146,   180,   263,  -211,   365,   366,  -185,
    -185,  -259,   446,  -188,  -188,   264,   253,   308,   449,   486,
     486,   254,   378,   307,   379,   567,   568,   380,   257,   258,
     309,   565,   281,   286,   136,   137,   691,   692,   303,   310,
     311,   312,   313,   314,   649,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   178,   324,   325,   326,   327,   328,
     490,   180,   329,   305,   330,   334,   253,   556,   369,   350,
     368,   254,   399,   448,   498,   377,   557,   415,   502,   565,
     419,   423,   452,   477,   492,   478,   474,   484,   485,   497,
     499,   503,   501,   506,   507,   392,   396,   253,   510,   552,
     514,   513,   254,   694,   558,   335,   518,   519,   522,   523,
     524,   525,   526,   527,   537,   528,   529,   749,   530,   531,
     532,   533,   534,   253,   535,   574,   548,   551,   254,   549,
     253,   253,   554,   550,   303,   254,   254,   555,   571,   572,
     575,   573,   576,   579,   580,   582,   583,   585,   610,   587,
     622,   588,   253,   593,   646,   594,   303,   254,   592,   612,
     303,   651,   652,   597,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   598,   613,   615,  -133,   616,
     624,   623,   647,   628,   634,   633,   644,   253,   639,   586,
     640,   642,   254,   667,   648,   670,   744,   675,   679,   253,
     753,   682,   683,   684,   254,   147,   686,   687,   689,   693,
     696,   253,   698,   486,   486,   699,   254,   700,   701,   697,
     702,   703,   704,   705,   706,   715,   745,   709,   711,   707,
     708,   253,   718,  -127,   724,   253,   254,   725,   303,   726,
     254,   303,   727,   729,   728,   738,   739,   741,   743,   742,
     245,   747,   748,   751,   752,   757,   762,   131,   177,   472,
     710,   266,   297,   668,   274,   276,   298,   151,   385,   245,
     245,   761,   754,   759,   760,   712,   135,   750,   348,   489,
     299,   300,   486,   142,     0,   181,     0,   283,     0,     0,
     290,     0,     0,     0,     0,   464,     0,   669,     0,     0,
     333,     0,   245,     0,   253,     0,   303,   303,     0,   254,
       0,     0,   245,     0,     0,     0,     0,     0,     0,   253,
       0,     0,     0,   359,   254,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   333,   389,     0,     0,
       0,     0,     0,     0,   400,     0,     0,     0,   389,     0,
     245,     0,     0,   407,   408,   409,     0,     0,   412,   413,
     414,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   245,   425,     0,   303,     0,   429,
     430,     0,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   389,     0,
       0,     0,     0,     0,     0,     0,     0,   359,     0,   465,
     466,     0,   292,     0,     0,     0,     0,     0,     0,   267,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   293,   294,   295,     0,   191,
       0,     0,   389,     0,    28,     0,     0,     0,     0,   179,
       0,     0,     0,   268,   269,   296,     0,     0,     0,   389,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   508,   509,     0,     0,     0,     0,     0,     0,
       0,     0,   515,   516,   517,     0,     0,   520,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,   389,   389,   540,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   185,
     169,   170,   171,   186,     0,     0,   187,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,   188,   189,   190,     0,   191,     0,     0,     0,
     192,    28,   193,   194,   195,   130,   179,   196,     0,   197,
     198,   199,   200,     0,   201,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     609,     0,     0,     0,   389,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
       0,     0,  -261,   278,     0,     0,     0,   186,     0,   224,
     187,   645,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
     191,     0,     0,     0,   192,    28,     0,     0,     0,   540,
     179,     0,     0,     7,   198,   269,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,   690,     0,     0,     0,     0,    34,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,   713,   714,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   734,   734,     0,     0,     0,     0,     0,
       0,   734,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   121,     1,     2,     3,     4,     5,     6,     7,   734,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,     0,
       0,     0,    27,    28,     0,    29,     0,   122,    30,    31,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,    83,     0,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   116,     1,     2,     3,     4,
       5,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,     0,     0,     0,    27,    28,     0,    29,
       0,     0,    30,     0,    32,    33,    34,    35,    36,    37,
       0,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    81,     0,    82,    83,
       0,     0,    85,    86,    87,    88,    89,    90,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,     1,
       2,     3,     4,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,     0,     0,     0,    27,
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
       0,     0,    27,    28,     0,    29,     0,     0,    30,     0,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,    83,     0,     0,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   278,     0,     0,     0,   339,
       0,     0,   187,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   191,     0,     0,     0,     0,    28,     0,     0,
       0,     0,   179,     0,     0,     0,   198,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   186,     0,     0,   187,    34,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,   191,     0,     0,
       0,   192,    28,     0,     0,   224,   130,   179,     0,     0,
       0,   198,   269,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   339,
       0,     0,   187,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   191,     0,     0,     0,     0,    28,     0,     0,
     224,     0,   179,     0,     0,     0,   198,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   267,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,   191,     0,     0,     0,     0,    28,
       0,     0,     0,     0,   179,   224,     0,     0,   268,   269,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,   287,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   288,
     289,     0,     0,   191,     0,     0,     0,   270,    28,     0,
       0,     0,     0,   179,     0,     0,     0,   268,   199,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,   129,     0,     0,     0,     0,
       0,     0,     7,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,   150,
       0,     0,     0,   459,   460,     0,    34,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   461,     0,     0,    85,    86,    87,    88,    89,   462,
       0,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     267,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
     191,     0,     0,     0,     0,    28,     0,     0,     0,     0,
     179,     0,     0,     0,   268,   269,   542,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   543,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,   267,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   191,     0,     0,     0,     0,    28,     0,     0,
       0,     0,   179,     0,     0,     0,   268,   269,   542,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   267,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,   191,     0,     0,     0,     0,    28,
       0,     0,     0,     0,   179,     0,     0,   267,   268,   269,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,   191,     0,     0,
       0,     0,    28,     0,     0,     0,     0,   179,     0,     0,
       0,   268,     0,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   267,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    28,     0,     0,     0,     0,   179,
       0,     7,     0,   268,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,     0,     0,    34,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80
};

static const yytype_int16 yycheck[] =
{
      31,   173,   303,   271,   133,   471,   243,   244,   301,   133,
     626,     0,   376,    10,    33,     3,    78,   505,   254,   271,
      10,   150,   547,     3,   708,    47,   150,   119,    37,   174,
     266,   715,    40,    41,    47,    78,   561,    46,   274,    10,
     276,     9,    10,    11,    12,   174,   174,    44,   536,   194,
     174,   118,    40,   193,    44,   117,   173,   186,   120,    10,
      40,   634,   186,   192,   193,   194,   195,   196,   192,   193,
     194,   195,   196,    44,   562,    83,    44,   120,   379,   193,
     194,   226,    90,   351,   266,   116,   117,   259,   118,   261,
     262,    10,   274,    44,   276,    10,   236,   226,   226,   351,
     272,   109,   226,   125,   117,   124,   119,   236,   633,   682,
      10,   348,   236,   115,   243,   244,    78,   114,   386,   243,
     244,    81,   236,   131,   114,    44,   362,   743,   174,    44,
     127,   128,   304,   121,   386,   403,    78,   127,   128,   118,
     186,   126,   758,   260,    44,   262,   192,   193,   194,   195,
     196,   403,   160,    31,    32,   284,   127,   128,   120,    47,
     284,   129,   120,   114,   124,   116,   197,    10,   119,   351,
     284,   407,   408,   409,   475,   117,   127,   128,   120,   308,
     226,     3,   450,   451,   308,   478,   674,   304,   114,    10,
     236,   127,   128,   119,   308,   114,   497,    10,    10,   114,
     501,    44,   384,   116,    47,   569,   570,    10,    51,    52,
     339,    10,   394,   120,   114,   339,   398,    39,    30,   348,
     127,   128,   688,    44,   348,   407,   408,   409,   410,   117,
      51,    52,    44,   127,   128,    10,   121,   125,   284,    51,
      52,   237,   238,   239,   118,    44,   375,   376,   122,   127,
     128,   375,   376,   114,   547,    30,     9,    10,    11,    12,
     496,    78,   308,   122,    10,   273,    10,   275,    10,    44,
     538,    10,   303,   566,   638,   511,   512,    10,   579,    10,
      10,   582,   125,   122,   280,   281,    30,   283,    30,   285,
     286,    44,    34,   339,    40,    34,    10,    30,    44,    30,
      44,    34,    44,    34,    78,    44,     4,     5,     6,    51,
      52,    44,   120,    44,    44,   120,   120,   127,   128,   127,
     128,   122,   330,   127,   128,   120,   455,   117,   336,   375,
     376,   455,   114,   119,   116,   127,   128,   119,   175,   176,
     117,   634,   193,   194,   116,   117,   647,   648,   379,   117,
     117,   117,   117,   117,   591,   117,   117,   117,   117,   117,
     117,   117,   117,   117,    10,   117,   117,   117,   117,   117,
     378,    44,   117,    37,   117,   115,   505,     9,   119,   117,
     116,   505,   117,   117,   392,   122,     9,   119,   396,   682,
     119,   119,   116,   119,   119,   122,   117,   120,   120,   115,
     119,   119,   115,   411,   114,   114,   114,   536,   119,   126,
     122,   118,   536,   650,    30,   226,   122,   122,   122,   122,
     122,   122,   122,   122,   115,   122,   122,   728,   122,   122,
     118,   118,   122,   562,   118,   115,   119,   118,   562,   125,
     569,   570,   118,   125,   475,   569,   570,   118,   122,   121,
     119,   121,   119,   115,   119,   115,   119,   115,   119,   118,
     126,   118,   591,   118,   115,   118,   497,   591,   122,   119,
     501,   595,   596,   122,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   607,   608,   122,   122,   117,   122,   118,
     117,   126,   117,   119,   122,   126,   118,   626,   119,   507,
     119,   119,   626,   118,   117,   122,    78,   119,   118,   638,
     117,   122,   121,   121,   638,   129,   119,   119,   119,   118,
     118,   650,   118,   569,   570,   118,   650,   118,   118,   653,
     118,   118,   118,   118,   118,   124,    78,   118,   118,   122,
     122,   670,   118,   122,   119,   674,   670,   118,   579,   118,
     674,   582,   118,   118,   122,   118,   118,   118,   122,   119,
     174,   119,   119,   118,   118,   118,   118,   108,   168,   358,
     668,   185,   196,   613,   188,   189,   196,   133,   270,   193,
     194,   758,   743,   755,   756,   670,   115,   733,   244,   377,
     196,   196,   638,   124,    -1,   173,    -1,   194,    -1,    -1,
     195,    -1,    -1,    -1,    -1,   352,    -1,   615,    -1,    -1,
     224,    -1,   226,    -1,   743,    -1,   647,   648,    -1,   743,
      -1,    -1,   236,    -1,    -1,    -1,    -1,    -1,    -1,   758,
      -1,    -1,    -1,   247,   758,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   270,   271,    -1,    -1,
      -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,   282,    -1,
     284,    -1,    -1,   287,   288,   289,    -1,    -1,   292,   293,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   308,   309,    -1,   728,    -1,   313,
     314,    -1,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   351,    -1,   353,
     354,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    30,
      -1,    -1,   386,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,   403,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   416,   417,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   426,   427,   428,    -1,    -1,   431,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,   450,   451,   452,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    -1,    -1,    10,    -1,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    30,    -1,    -1,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     534,    -1,    -1,    -1,   538,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,   116,     3,    -1,    -1,    -1,     7,    -1,   123,
      10,   585,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34,    35,    -1,    -1,    -1,   613,
      40,    -1,    -1,    10,    44,    45,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      -1,    -1,   646,    -1,    -1,    -1,    -1,    44,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,   671,   672,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,   123,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   707,   708,    -1,    -1,    -1,    -1,    -1,
      -1,   715,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,   733,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    -1,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,   117,    -1,   119,   120,   121,
     122,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    34,    35,    -1,    37,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
      -1,    -1,   120,   121,   122,   123,   124,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    34,
      35,    -1,    37,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,   117,    -1,   119,   120,   121,   122,   123,   124,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    34,    35,    -1,    37,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,   117,    -1,    -1,   120,   121,
     122,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,     3,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     7,    -1,    -1,    10,    44,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    -1,    -1,   123,    39,    40,    -1,    -1,
      -1,    44,    45,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,     7,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
     123,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,   123,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    30,    -1,    -1,    -1,   123,    35,    -1,
      -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    37,
      -1,    -1,    -1,    49,    50,    -1,    44,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,    -1,    -1,   120,   121,   122,   123,   124,   125,
      -1,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    10,    44,    45,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    10,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    10,    -1,    44,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    34,    35,    37,
      40,    41,    42,    43,    44,    45,    46,    47,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,   114,   116,   117,   119,   120,   121,   122,   123,   124,
     125,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   138,   233,   234,   235,   237,   239,   270,   271,   275,
     276,   277,   278,   279,   280,   238,     3,   276,   281,   271,
     271,     3,    39,   273,   274,   275,   271,   271,     0,     3,
      39,   140,   141,   155,   271,   239,   281,   281,   119,   118,
     118,   115,   273,   118,   126,    10,    44,   191,   120,   271,
      37,   141,   233,   237,   142,     3,    40,   121,   156,   139,
     140,   233,   237,   116,   240,    10,    10,   121,   271,     4,
       5,     6,   241,   243,   114,   122,   122,   139,    10,    40,
      44,   217,   230,   231,   244,     3,     7,    10,    26,    27,
      28,    30,    34,    36,    37,    38,    41,    43,    44,    45,
      46,    48,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   123,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   153,   154,   155,   157,   158,   159,
     160,   177,   180,   189,   190,   191,   205,   211,   212,   217,
     230,   231,   232,   233,   237,   243,   247,   156,   156,    78,
     220,   224,    78,   120,   120,   242,   191,    10,    44,    45,
     123,   211,    78,   114,   191,   114,   191,   211,     3,   151,
     158,   159,   211,   154,   155,   158,   159,     3,    26,    27,
     205,   211,     3,    26,    27,    28,    46,   145,   146,   147,
     148,   211,   272,   276,    78,    37,    46,   119,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   185,   187,   191,   115,   143,   114,   119,   192,     7,
     151,   158,   211,   192,   192,   192,   178,   212,   189,   212,
     117,    30,    34,    51,    52,   164,   167,   170,   175,   191,
     206,   208,   213,   127,   128,   127,   128,   236,   116,   119,
     230,   231,   230,   230,   231,   219,   218,   122,   114,   116,
     119,   152,   191,   206,   236,   185,    30,   164,   170,   191,
     230,   271,   114,   206,   236,   271,   114,   206,   236,   117,
     191,   192,   192,    30,   192,   192,   192,   191,   191,   191,
      30,   114,   191,   191,   191,   119,    51,    52,   208,   119,
     272,   230,   231,   119,   158,   191,   249,   251,   252,   191,
     191,   256,   191,   191,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   271,   186,   117,   271,
     211,    30,   116,   182,   212,   181,   164,   170,   206,    49,
      50,   117,   125,   269,   270,   191,   191,    33,   124,   165,
     173,   171,   173,    47,   117,   125,   209,   119,   122,   236,
      31,    32,   127,   128,   120,   120,   211,   228,   228,   241,
     271,   272,   119,   206,   164,   170,   214,   115,   271,   119,
     206,   115,   271,   119,   206,   161,   271,   114,   191,   191,
     119,   215,   216,   118,   122,   191,   191,   191,   122,   122,
     191,   258,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   118,   118,   122,   118,   188,   115,    30,   184,
     191,   179,    46,    77,   196,   197,   199,   211,   119,   125,
     125,   118,   126,   168,   118,   118,     9,     9,    30,   174,
     174,   210,   176,   272,   207,   208,   236,   127,   128,   221,
     225,   122,   121,   121,   115,   119,   119,   236,   272,   115,
     119,   272,   115,   119,   196,   115,   271,   118,   118,   236,
     236,   248,   122,   118,   118,   253,   255,   122,   122,   259,
     261,   263,   265,   260,   262,   264,   266,   267,   268,   191,
     119,   196,   119,   122,   183,   117,   118,   198,    51,    52,
     208,   209,   126,   126,   117,    47,   117,   119,   119,   166,
     172,   209,   196,   126,   122,   208,   228,   228,   229,   119,
     119,   272,   119,   272,   118,   191,   115,   117,   117,   212,
     250,   237,   237,   257,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   118,   122,   118,   184,   271,
     122,   202,   201,   200,   169,   119,   193,   194,   199,   118,
     209,   207,   122,   121,   121,   228,   119,   119,   162,   119,
     191,   272,   272,   118,   212,   254,   118,   237,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   122,   122,   118,
     183,   118,   197,   191,   191,   124,   204,   196,   118,   195,
     207,   222,   226,   174,   119,   118,   118,   118,   122,   118,
       9,    11,    12,   129,   191,   245,   246,   245,   118,   118,
     245,   118,   119,   122,    78,    78,   163,   119,   119,   272,
     246,   118,   118,   117,   194,   223,   227,   118,   203,   230,
     230,   193,   118
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
#line 376 "vtkParse.y"
    {
        start_class((yyvsp[(2) - (2)].str));
      }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 396 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 397 "vtkParse.y"
    { reject_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 398 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 399 "vtkParse.y"
    { output_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 400 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 401 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 402 "vtkParse.y"
    { reject_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 403 "vtkParse.y"
    { reject_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 404 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 448 "vtkParse.y"
    { preSig("~"); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 449 "vtkParse.y"
    { preSig("virtual ~"); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 452 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 456 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 460 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 465 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 472 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 476 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 480 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 484 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 489 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 494 "vtkParse.y"
    { postSig("("); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 495 "vtkParse.y"
    { postSig(")"); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 496 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 497 "vtkParse.y"
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
#line 506 "vtkParse.y"
    { postSig(")"); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 506 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 507 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(2) - (4)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (4)].str));
    }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 513 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(2) - (2)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (2)].str));
      currentFunction->IsPureVirtual = 1;
      if (mainClass)
        {
        data.IsAbstract = 1;
        }
    }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 523 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 524 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
    }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 530 "vtkParse.y"
    { postSig(")"); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 530 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 531 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 537 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (2)].str));
      currentFunction->IsPureVirtual = 1;
      if (mainClass)
        {
        data.IsAbstract = 1;
        }
    }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 547 "vtkParse.y"
    {postSig(") = 0;");}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 548 "vtkParse.y"
    {postSig(") const = 0;");}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 550 "vtkParse.y"
    {postSig(" const");}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 552 "vtkParse.y"
    {postSig("("); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 554 "vtkParse.y"
    { postSig(")"); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 555 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 556 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 562 "vtkParse.y"
    { postSig("("); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 570 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 571 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + 2);
      currentFunction->Name[0] = '~';
      strcpy(&currentFunction->Name[1], (yyvsp[(1) - (2)].str));
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 579 "vtkParse.y"
    { postSig("(");}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 581 "vtkParse.y"
    {postSig("const ");}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 583 "vtkParse.y"
    {postSig("static ");}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 584 "vtkParse.y"
    {postSig("static ");}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 586 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 586 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 594 "vtkParse.y"
    { postSig(", ");}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 598 "vtkParse.y"
    { currentFunction->NumberOfArguments++;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 599 "vtkParse.y"
    { currentFunction->NumberOfArguments++; postSig(", ");}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 602 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 609 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 616 "vtkParse.y"
    {
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_FUNCTION;
    }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 621 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 622 "vtkParse.y"
    {
      postSig(") ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 627 "vtkParse.y"
    { postSig("(*"); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 628 "vtkParse.y"
    { postSig(")("); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 629 "vtkParse.y"
    {
      postSig(")");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 637 "vtkParse.y"
    {delSig();}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 638 "vtkParse.y"
    {delSig();}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 639 "vtkParse.y"
    {delSig();}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 640 "vtkParse.y"
    {delSig();}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 641 "vtkParse.y"
    {delSig();}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 642 "vtkParse.y"
    {delSig();}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 643 "vtkParse.y"
    {delSig();}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 644 "vtkParse.y"
    {delSig();}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 645 "vtkParse.y"
    {delSig();}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 646 "vtkParse.y"
    {delSig();}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 647 "vtkParse.y"
    {delSig();}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 648 "vtkParse.y"
    {delSig();}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 649 "vtkParse.y"
    {delSig();}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 650 "vtkParse.y"
    {delSig();}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 667 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 668 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 670 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_POINTER + (VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) + ((yyvsp[(3) - (3)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 672 "vtkParse.y"
    { postSig("[]"); (yyval.integer) = VTK_PARSE_POINTER + ((yyvsp[(4) - (4)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 674 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_CONST + (yyvsp[(2) - (2)].integer);}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 675 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 676 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_STATIC + (yyvsp[(2) - (2)].integer);}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 677 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | VTK_PARSE_STATIC) + (yyvsp[(3) - (3)].integer);}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 679 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 681 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer);}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 682 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 683 "vtkParse.y"
    {postSig(" "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 684 "vtkParse.y"
    {postSig(" ");}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 687 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");
            (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 690 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 693 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");
            (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 696 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");
            (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    {postSig("<");}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    {postSig(">");}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    {postSig("<");}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    {postSig(">");}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 707 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    {postSig("<");}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    {postSig(">");}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    {postSig("::");}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 711 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    {postSig("<");}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    {postSig(">");}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    {postSig("::");}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 716 "vtkParse.y"
    {postSig(", ");}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 719 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str));}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 721 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 722 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str));}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 723 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str));}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 725 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 726 "vtkParse.y"
    { postSig("&"); (yyval.integer) = (yyvsp[(1) - (2)].integer);}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 727 "vtkParse.y"
    { postSig("*"); (yyval.integer) = (VTK_PARSE_REF + VTK_PARSE_POINTER) + (yyvsp[(1) - (2)].integer);}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 729 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 730 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 732 "vtkParse.y"
    { postSig("vtkStdString "); (yyval.integer) = (VTK_PARSE_STRING); }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 734 "vtkParse.y"
    { postSig("vtkUnicodeString "); (yyval.integer) = (VTK_PARSE_UNICODE_STRING); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 743 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 744 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 746 "vtkParse.y"
    { postSig("* const&"); (yyval.integer) = VTK_PARSE_POINTER_CONST_REF;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 748 "vtkParse.y"
    { postSig("* const*"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 749 "vtkParse.y"
    { postSig("**&"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    { postSig("***"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 752 "vtkParse.y"
    {postSig("unsigned ");}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 753 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_UNSIGNED + (yyvsp[(3) - (3)].integer);}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { postSig("vtkTypeInt8 "); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { postSig("vtkTypeUInt8 "); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 759 "vtkParse.y"
    { postSig("vtkTypeInt16 "); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 760 "vtkParse.y"
    { postSig("vtkTypeUInt16 "); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 761 "vtkParse.y"
    { postSig("vtkTypeInt32 "); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 762 "vtkParse.y"
    { postSig("vtkTypeUInt32 "); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 763 "vtkParse.y"
    { postSig("vtkTypeInt64 "); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 764 "vtkParse.y"
    { postSig("vtkTypeUInt64 "); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 765 "vtkParse.y"
    { postSig("vtkTypeFloat32 "); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 766 "vtkParse.y"
    { postSig("vtkTypeFloat64 "); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 768 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 769 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 774 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 775 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 777 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_UNKNOWN;
    }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 784 "vtkParse.y"
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

  case 251:

/* Line 1455 of yacc.c  */
#line 800 "vtkParse.y"
    { postSig("vtkIdType "); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 801 "vtkParse.y"
    { postSig("long long "); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 802 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 803 "vtkParse.y"
    { postSig("signed char "); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 804 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 817 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 825 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 826 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 827 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 828 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 834 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 835 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 836 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 837 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 841 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 842 "vtkParse.y"
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

  case 276:

/* Line 1455 of yacc.c  */
#line 852 "vtkParse.y"
    {postSig("Get");}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 852 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 854 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(7) - (8)].integer);
   output_function();
   }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 861 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 862 "vtkParse.y"
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

  case 281:

/* Line 1455 of yacc.c  */
#line 872 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 873 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   output_function();
   }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 882 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 883 "vtkParse.y"
    {postSig(");"); openSig = 0;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 884 "vtkParse.y"
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

  case 286:

/* Line 1455 of yacc.c  */
#line 914 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 915 "vtkParse.y"
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

  case 288:

/* Line 1455 of yacc.c  */
#line 925 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 926 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 927 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   output_function();
   }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 935 "vtkParse.y"
    {preSig("void "); postSig("On();"); openSig = 0; }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 937 "vtkParse.y"
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

  case 293:

/* Line 1455 of yacc.c  */
#line 952 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
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

  case 295:

/* Line 1455 of yacc.c  */
#line 982 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 987 "vtkParse.y"
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

  case 297:

/* Line 1455 of yacc.c  */
#line 999 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1004 "vtkParse.y"
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

  case 299:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1036 "vtkParse.y"
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

  case 301:

/* Line 1455 of yacc.c  */
#line 1048 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1053 "vtkParse.y"
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

  case 303:

/* Line 1455 of yacc.c  */
#line 1082 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1087 "vtkParse.y"
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

  case 305:

/* Line 1455 of yacc.c  */
#line 1099 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1104 "vtkParse.y"
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

  case 307:

/* Line 1455 of yacc.c  */
#line 1137 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1142 "vtkParse.y"
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

  case 309:

/* Line 1455 of yacc.c  */
#line 1154 "vtkParse.y"
    {
      free(currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1159 "vtkParse.y"
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

  case 311:

/* Line 1455 of yacc.c  */
#line 1172 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
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

  case 313:

/* Line 1455 of yacc.c  */
#line 1189 "vtkParse.y"
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

  case 314:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
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

  case 315:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
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

  case 316:

/* Line 1455 of yacc.c  */
#line 1336 "vtkParse.y"
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

  case 317:

/* Line 1455 of yacc.c  */
#line 1392 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1393 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1394 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1395 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1398 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1400 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1400 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1401 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1401 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1402 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1402 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1403 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1403 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1404 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1404 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1405 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1406 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1407 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1408 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1409 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1410 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1411 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1412 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1413 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1414 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1415 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1417 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1418 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1419 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1420 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1421 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1422 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1423 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1424 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1425 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1426 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1427 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1428 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1429 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1430 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1431 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 5311 "vtkParse.tab.c"
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
#line 1460 "vtkParse.y"

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

