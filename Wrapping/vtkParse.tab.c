
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
#line 243 "vtkParse.y"

  char *str;
  int   integer;



/* Line 214 of yacc.c  */
#line 569 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 581 "vtkParse.tab.c"

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
#define YYLAST   2574

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  136
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  144
/* YYNRULES -- Number of rules.  */
#define YYNRULES  410
/* YYNRULES -- Number of states.  */
#define YYNSTATES  761

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
     595,   597,   600,   604,   606,   609,   611,   613,   614,   618,
     622,   623,   629,   633,   634,   640,   644,   645,   651,   652,
     658,   659,   665,   666,   667,   668,   669,   681,   682,   683,
     684,   685,   697,   699,   700,   705,   707,   711,   713,   717,
     721,   723,   726,   729,   731,   733,   735,   737,   739,   741,
     744,   747,   750,   753,   757,   761,   762,   766,   768,   770,
     772,   774,   776,   778,   780,   782,   784,   786,   788,   790,
     792,   794,   796,   798,   800,   802,   804,   806,   808,   810,
     812,   814,   816,   818,   820,   821,   824,   827,   828,   834,
     835,   837,   839,   841,   843,   845,   847,   850,   852,   854,
     856,   858,   860,   861,   869,   870,   871,   880,   881,   887,
     888,   894,   895,   896,   907,   908,   916,   917,   918,   927,
     928,   936,   937,   945,   946,   954,   955,   963,   964,   972,
     973,   981,   982,   990,   991,   999,  1000,  1008,  1009,  1019,
    1020,  1030,  1035,  1040,  1047,  1055,  1058,  1061,  1065,  1069,
    1071,  1073,  1075,  1077,  1079,  1081,  1083,  1085,  1087,  1089,
    1091,  1093,  1095,  1097,  1099,  1101,  1103,  1105,  1107,  1109,
    1111,  1113,  1115,  1117,  1119,  1121,  1123,  1125,  1127,  1129,
    1131,  1133,  1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,
    1151,  1152,  1155,  1156,  1159,  1160,  1163,  1165,  1167,  1169,
    1171,  1173,  1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,
    1191,  1193,  1195,  1197,  1199,  1201,  1203,  1205,  1207,  1209,
    1211,  1213,  1215,  1217,  1219,  1221,  1223,  1225,  1227,  1229,
    1231,  1233,  1235,  1239,  1243,  1247,  1251,  1255,  1259,  1260,
    1263
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     137,     0,    -1,   269,   139,   269,   138,    -1,    -1,   139,
     269,   138,    -1,   154,   235,    -1,   154,   231,    -1,   154,
      36,   235,    -1,   154,    36,   231,    -1,   154,   140,    -1,
     140,    -1,    -1,     3,   189,   141,   238,   113,   142,   114,
      -1,    -1,   143,   142,    -1,   241,   115,    -1,   203,    -1,
      37,   203,    -1,   145,    -1,   144,    -1,   147,    -1,   146,
      -1,   148,    -1,   152,    -1,   150,    -1,    35,   150,    -1,
     149,    -1,    28,    -1,   158,   190,    -1,    35,   158,   190,
      -1,    36,   158,   190,    -1,   157,   190,    -1,    35,   157,
     190,    -1,    36,   157,   190,    -1,   153,   190,    -1,    36,
     153,   190,    -1,   156,   190,    -1,   112,   116,   269,   117,
     118,    -1,   245,   118,    -1,   245,    -1,    26,   189,   113,
     269,   114,   270,   118,    -1,    26,   113,   269,   114,   270,
     118,    -1,    27,   189,   113,   269,   114,   270,   118,    -1,
      27,   113,   269,   114,   270,   118,    -1,    42,   270,   118,
      -1,   154,   150,    -1,     3,   189,   151,    -1,   118,    -1,
     113,   269,   114,   118,    -1,   115,   270,   118,    -1,    40,
     209,   206,   118,    -1,    40,    28,    -1,    40,     3,   189,
     113,   269,   114,   189,   118,    -1,    40,     3,   113,   269,
     114,   189,   118,    -1,    40,   209,    50,   189,   117,   116,
     270,   117,   118,    -1,    40,   209,    51,   189,   117,   116,
     270,   117,   118,    -1,    40,   145,    -1,    40,   144,    -1,
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
      -1,    -1,    33,   267,   167,   116,   168,   194,   117,    -1,
      -1,    -1,   173,   170,   172,   171,    -1,   173,   123,     9,
      -1,    -1,    30,    -1,    -1,   189,   116,   174,   194,   117,
      -1,    -1,    -1,   178,   176,   180,   177,    -1,    -1,   189,
     116,   179,   194,   117,    -1,    -1,   115,   182,   181,    -1,
      -1,   121,   182,   181,    -1,   189,   116,   269,   117,    -1,
      -1,   185,   184,    -1,    -1,   189,   116,   186,   194,   117,
      -1,    30,    -1,    44,    -1,    44,    36,    -1,    43,    -1,
      10,    -1,   118,    -1,   113,   269,   114,   118,    -1,   113,
     269,   114,    -1,    -1,   192,    -1,   197,    -1,    -1,   197,
     193,   121,   192,    -1,    -1,   195,    -1,    76,    -1,   197,
      -1,    -1,   197,   196,   121,   195,    -1,   209,   207,    -1,
      -1,   209,   206,   198,   202,    -1,    45,    -1,    -1,   209,
      51,   199,   189,   117,    -1,    -1,    -1,   209,    50,   200,
     189,   117,   116,   201,   191,   117,    -1,    -1,   123,   243,
      -1,     3,   189,   204,   118,    -1,     3,   189,   234,   204,
     118,    -1,    26,   189,   204,   118,    -1,    26,   189,   234,
     204,   118,    -1,    27,   189,   204,   118,    -1,    27,   189,
     234,   204,   118,    -1,   209,   204,   118,    -1,   209,    30,
     204,   118,    -1,    45,   118,    -1,    44,    45,   118,    -1,
     209,    51,   189,   117,   118,    -1,   209,    50,   189,   117,
     118,    -1,   209,    50,   189,   117,    46,   118,    -1,   209,
      50,   189,   117,   116,   191,   117,   118,    -1,   206,    -1,
     206,   121,   205,    -1,   206,    -1,   206,   121,   205,    -1,
     234,   206,    -1,   234,   206,   121,   205,    -1,   189,   207,
      -1,    -1,    -1,    46,   208,   207,    -1,   124,   270,   125,
     207,    -1,   187,   210,    -1,   210,    -1,   188,   210,    -1,
     188,   187,   210,    -1,   235,    -1,   235,   234,    -1,   230,
      -1,   215,    -1,    -1,   215,   211,   234,    -1,    10,    77,
     228,    -1,    -1,    10,    77,   228,   212,   234,    -1,    43,
      77,   228,    -1,    -1,    43,    77,   228,   213,   234,    -1,
      43,    77,   229,    -1,    -1,    43,    77,   229,   214,   234,
      -1,    -1,   229,   119,   216,   226,   120,    -1,    -1,   228,
     119,   217,   226,   120,    -1,    -1,    -1,    -1,    -1,    39,
     218,   229,   119,   219,   226,   120,   220,    77,   221,   228,
      -1,    -1,    -1,    -1,    -1,    39,   222,   228,   119,   223,
     226,   120,   224,    77,   225,   228,    -1,   209,    -1,    -1,
     209,   121,   227,   226,    -1,    10,    -1,    10,    77,   228,
      -1,    43,    -1,    43,    77,   228,    -1,    43,    77,   229,
      -1,   231,    -1,   231,   126,    -1,   231,   127,    -1,   232,
      -1,   233,    -1,    89,    -1,    90,    -1,   126,    -1,   127,
      -1,   127,   126,    -1,   127,    32,    -1,   127,   127,    -1,
     127,    31,    -1,   127,   127,   126,    -1,   127,   127,   127,
      -1,    -1,    34,   236,   237,    -1,   237,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,
      84,    -1,    85,    -1,    86,    -1,    87,    -1,    14,    -1,
      20,    -1,    21,    -1,    13,    -1,    15,    -1,    16,    -1,
      19,    -1,    24,    -1,    25,    -1,    10,    -1,    43,    -1,
      88,    -1,    17,    -1,    18,    -1,    22,    -1,    23,    -1,
      -1,   115,   239,    -1,   241,   242,    -1,    -1,   241,   242,
     240,   121,   239,    -1,    -1,     4,    -1,     5,    -1,     6,
      -1,   228,    -1,   229,    -1,   215,    -1,   128,   244,    -1,
     244,    -1,     9,    -1,    11,    -1,    12,    -1,   189,    -1,
      -1,    91,   116,   189,   121,   246,   210,   117,    -1,    -1,
      -1,    92,   116,   247,   189,   121,   248,   210,   117,    -1,
      -1,    93,   116,   249,   189,   117,    -1,    -1,    94,   116,
     250,   189,   117,    -1,    -1,    -1,    95,   116,   189,   121,
     251,   235,   252,   121,   270,   117,    -1,    -1,    96,   116,
     189,   121,   253,   235,   117,    -1,    -1,    -1,    97,   116,
     254,   189,   121,   255,   235,   117,    -1,    -1,    98,   116,
     189,   256,   121,   235,   117,    -1,    -1,    99,   116,   189,
     121,   257,   235,   117,    -1,    -1,   103,   116,   189,   121,
     258,   235,   117,    -1,    -1,   100,   116,   189,   121,   259,
     235,   117,    -1,    -1,   104,   116,   189,   121,   260,   235,
     117,    -1,    -1,   101,   116,   189,   121,   261,   235,   117,
      -1,    -1,   105,   116,   189,   121,   262,   235,   117,    -1,
      -1,   102,   116,   189,   121,   263,   235,   117,    -1,    -1,
     106,   116,   189,   121,   264,   235,   117,    -1,    -1,   107,
     116,   189,   121,   265,   235,   121,   243,   117,    -1,    -1,
     108,   116,   189,   121,   266,   235,   121,   243,   117,    -1,
     109,   116,   189,   117,    -1,   110,   116,   189,   117,    -1,
     111,   116,   189,   121,   189,   117,    -1,   111,   116,   189,
     121,   189,   121,   117,    -1,   116,   117,    -1,   124,   125,
      -1,    48,   124,   125,    -1,    49,   124,   125,    -1,   268,
      -1,   123,    -1,   127,    -1,   129,    -1,   128,    -1,   130,
      -1,   131,    -1,   122,    -1,   121,    -1,   119,    -1,   120,
      -1,   126,    -1,   132,    -1,   133,    -1,   134,    -1,    48,
      -1,    49,    -1,    52,    -1,    53,    -1,    54,    -1,    55,
      -1,    56,    -1,    57,    -1,    60,    -1,    61,    -1,    62,
      -1,    63,    -1,    64,    -1,    58,    -1,    59,    -1,    65,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    -1,   273,   269,    -1,    -1,   274,   270,    -1,    -1,
     272,   271,    -1,     3,    -1,    38,    -1,   273,    -1,   118,
      -1,   274,    -1,   278,    -1,    29,    -1,   275,    -1,   276,
      -1,   277,    -1,   268,    -1,   115,    -1,   135,    -1,     8,
      -1,   235,    -1,   231,    -1,    77,    -1,     9,    -1,    12,
      -1,    28,    -1,    30,    -1,    33,    -1,    44,    -1,    36,
      -1,     7,    -1,    26,    -1,    27,    -1,    39,    -1,    46,
      -1,    45,    -1,    76,    -1,     4,    -1,     6,    -1,     5,
      -1,    41,    -1,    42,    -1,   113,   271,   114,    -1,   116,
     269,   117,    -1,    50,   269,   117,    -1,    51,   269,   117,
      -1,   124,   269,   125,    -1,    40,   279,   118,    -1,    -1,
       3,   279,    -1,   274,   279,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   366,   366,   368,   368,   370,   370,   371,   371,   372,
     372,   375,   374,   380,   380,   382,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     408,   410,   412,   414,   416,   418,   420,   422,   423,   424,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   438,   440,   440,   442,   442,   443,   443,   445,   447,
     448,   449,   450,   454,   458,   463,   470,   474,   478,   482,
     487,   493,   494,   495,   493,   505,   505,   505,   511,   523,
     524,   523,   530,   530,   530,   536,   548,   548,   550,   550,
     552,   553,   552,   560,   560,   562,   562,   564,   564,   566,
     568,   568,   577,   577,   579,   581,   582,   584,   584,   586,
     587,   588,   590,   590,   592,   592,   592,   594,   594,   596,
     596,   597,   597,   599,   607,   606,   613,   619,   619,   625,
     626,   625,   633,   633,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   650,   650,
     652,   653,   654,   655,   657,   665,   666,   666,   669,   672,
     673,   674,   675,   677,   678,   680,   681,   682,   682,   684,
     688,   687,   690,   694,   693,   696,   700,   699,   703,   703,
     704,   704,   705,   706,   707,   708,   705,   709,   710,   711,
     712,   709,   714,   714,   714,   716,   717,   719,   720,   721,
     723,   724,   725,   727,   728,   730,   732,   741,   742,   743,
     744,   745,   746,   747,   748,   750,   750,   752,   755,   756,
     757,   758,   759,   760,   761,   762,   763,   764,   765,   766,
     767,   768,   769,   770,   771,   772,   773,   774,   781,   798,
     799,   800,   801,   802,   804,   804,   806,   815,   814,   823,
     824,   825,   826,   828,   828,   828,   830,   830,   832,   833,
     834,   835,   839,   838,   850,   850,   850,   859,   859,   870,
     870,   880,   881,   879,   912,   911,   923,   924,   923,   933,
     932,   950,   949,   980,   979,   997,   996,  1029,  1028,  1046,
    1045,  1080,  1079,  1097,  1096,  1135,  1134,  1152,  1151,  1170,
    1169,  1186,  1233,  1282,  1333,  1390,  1391,  1392,  1393,  1394,
    1396,  1397,  1397,  1398,  1398,  1399,  1399,  1400,  1400,  1401,
    1401,  1402,  1402,  1403,  1404,  1405,  1406,  1407,  1408,  1409,
    1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,
    1420,  1421,  1422,  1423,  1424,  1425,  1426,  1427,  1428,  1429,
    1434,  1434,  1435,  1435,  1436,  1436,  1438,  1438,  1438,  1440,
    1440,  1440,  1442,  1442,  1442,  1442,  1442,  1443,  1443,  1443,
    1443,  1443,  1443,  1444,  1444,  1444,  1444,  1444,  1444,  1445,
    1445,  1445,  1445,  1445,  1445,  1445,  1446,  1446,  1446,  1446,
    1446,  1446,  1448,  1449,  1450,  1451,  1452,  1453,  1455,  1455,
    1456
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
  "var_array", "$@23", "type", "type_red1", "$@24", "$@25", "$@26", "$@27",
  "templated_id", "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34",
  "$@35", "$@36", "$@37", "types", "$@38", "scoped_id", "vtk_scoped_id",
  "type_string1", "type_string2", "type_string3", "type_string4",
  "type_indirection", "type_red2", "$@39", "type_primitive",
  "optional_scope", "scope_list", "$@40", "scope_type", "superclass_id",
  "float_num", "float_prim", "macro", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
  "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "$@60", "$@61",
  "op_token", "op_token_no_delim", "maybe_other", "maybe_other_no_semi",
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
     209,   209,   209,   210,   210,   210,   210,   211,   210,   210,
     212,   210,   210,   213,   210,   210,   214,   210,   216,   215,
     217,   215,   218,   219,   220,   221,   215,   222,   223,   224,
     225,   215,   226,   227,   226,   228,   228,   229,   229,   229,
     230,   230,   230,   231,   231,   232,   233,   234,   234,   234,
     234,   234,   234,   234,   234,   236,   235,   235,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   237,   237,   238,   238,   239,   240,   239,   241,
     241,   241,   241,   242,   242,   242,   243,   243,   244,   244,
     244,   244,   246,   245,   247,   248,   245,   249,   245,   250,
     245,   251,   252,   245,   253,   245,   254,   255,   245,   256,
     245,   257,   245,   258,   245,   259,   245,   260,   245,   261,
     245,   262,   245,   263,   245,   264,   245,   265,   245,   266,
     245,   245,   245,   245,   245,   267,   267,   267,   267,   267,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     269,   269,   270,   270,   271,   271,   272,   272,   272,   273,
     273,   273,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   275,   276,   276,   276,   277,   278,   279,   279,
     279
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
       1,     2,     3,     1,     2,     1,     1,     0,     3,     3,
       0,     5,     3,     0,     5,     3,     0,     5,     0,     5,
       0,     5,     0,     0,     0,     0,    11,     0,     0,     0,
       0,    11,     1,     0,     4,     1,     3,     1,     3,     3,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     3,     3,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     2,     0,     5,     0,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     0,     7,     0,     0,     8,     0,     5,     0,
       5,     0,     0,    10,     0,     7,     0,     0,     8,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     9,     0,
       9,     4,     4,     6,     7,     2,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     0,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     360,   397,   399,   398,   390,   379,   383,   247,   384,   241,
     238,   242,   243,   250,   251,   244,   239,   240,   252,   253,
     245,   246,   391,   392,   385,   372,   386,   387,   225,   389,
     393,   408,   400,   401,   248,   388,   395,   394,   334,   335,
     360,   360,   336,   337,   338,   339,   340,   341,   347,   348,
     342,   343,   344,   345,   346,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   396,   382,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   249,   215,
     216,   364,   377,   360,   369,   328,   329,   327,   326,   320,
     360,   330,   321,   323,   322,   324,   325,   331,   332,   333,
     378,     0,   381,   213,   214,   380,   227,   376,     0,   360,
     370,   373,   374,   375,   371,     0,   408,   408,     0,     0,
       0,   366,   367,     0,   364,   368,     0,     0,     1,     0,
       0,   360,    10,     0,   361,   226,   409,   410,   407,   404,
     405,   402,   365,   403,   406,   118,   117,    11,     0,     3,
       0,     9,     6,     5,   254,     0,     0,    62,     0,     2,
     360,     8,     7,   259,     0,    64,    66,    63,     3,   260,
     261,   262,   255,     0,    13,     0,     0,     4,   205,   192,
     207,   265,   263,   264,   256,     0,     0,   247,     0,     0,
      27,   114,     0,     0,     0,     0,     0,   362,   248,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    19,    18,    21,
      20,    22,    26,    24,    23,     0,     0,     0,     0,     0,
      76,    71,   100,     0,     0,     0,    16,     0,   170,   176,
       0,     0,   175,   210,   173,     0,    39,    65,    67,     0,
       0,     0,     0,   190,   188,     0,     0,   247,   248,   115,
       0,     0,     0,   360,     0,   360,     0,     0,     0,    25,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,    51,     0,    57,    56,    59,
      58,     0,     0,   362,     0,   116,     0,   152,     0,     0,
     274,   277,   279,     0,     0,   286,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     360,    69,   110,     0,    12,    14,   360,   119,    34,     0,
      45,    61,     0,    36,    31,    28,   105,   169,     0,   171,
     103,     0,     0,     0,     0,    77,    85,    72,    92,   165,
       0,   158,     0,   211,   212,   217,   218,   174,    15,    38,
     206,     0,     0,   208,   209,     0,     0,   259,   360,   362,
      47,    46,   165,     0,     0,    70,     0,    80,    75,     0,
     179,     0,   360,     0,     0,     0,   360,     0,     0,    81,
       0,    32,    29,     0,    35,    33,    30,     0,     0,     0,
       0,   360,     0,     0,     0,    60,     0,     0,     0,    44,
     363,   182,   185,   153,     0,     0,     0,     0,     0,     0,
       0,     0,   289,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,   112,     0,
       0,     0,     0,   101,   172,   127,    78,    73,     0,   334,
     335,     0,     0,    89,   319,     0,     0,     0,    96,     0,
      96,   166,    98,   362,   164,   150,     0,   178,   222,   220,
     219,   221,   193,   198,   202,     0,     0,   258,     0,     0,
     144,     0,    79,    74,     0,   362,     0,   146,     0,   362,
       0,   148,     0,   127,     0,   360,     0,     0,    50,     0,
       0,    68,   272,     0,     0,     0,   281,   284,     0,     0,
     291,   295,   299,   303,   293,   297,   301,   305,   307,   309,
     311,   312,     0,     0,   127,   121,     0,   107,     0,   102,
     136,   129,     0,   128,   130,   165,   151,     0,     0,   315,
     316,     0,     0,     0,    88,    97,    86,    95,    93,   165,
     127,     0,   159,   160,     0,   223,   224,     0,     0,   203,
     191,   189,     0,    49,   145,   181,     0,   362,   147,     0,
     362,   149,     0,     0,     0,     0,     0,   184,   187,     0,
     275,   278,   280,     0,     0,   287,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,     0,
     120,     0,   106,   360,   104,     0,   139,   137,   134,   133,
     317,   318,    90,     0,   122,   155,   154,    87,    94,   167,
       0,   165,     0,   162,     0,     0,     0,    48,    41,     0,
      43,     0,    82,     0,     0,   362,   362,     0,     0,   282,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   313,     0,   113,   107,     0,     0,     0,
       0,   142,   127,   156,     0,   123,   124,    99,   168,   161,
       0,   194,   199,   204,    40,    42,    96,    53,     0,     0,
       0,   273,     0,     0,   285,     0,   290,   292,   296,   300,
     304,   294,   298,   302,   306,     0,     0,   314,   108,   109,
     132,     0,     0,     0,   135,     0,     0,     0,   163,     0,
       0,    83,    52,     0,     0,   276,   362,   288,   268,   269,
     270,     0,   271,     0,   267,     0,     0,   138,   143,    91,
     157,     0,   195,   200,    84,    54,    55,     0,   266,   308,
     310,   140,   126,     0,     0,   283,   122,   196,   201,     0,
     141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   101,   159,   160,   132,   154,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   381,   234,   235,   133,   158,
     237,   238,   239,   240,   503,   686,   744,   355,   468,   627,
     356,   551,   672,   357,   470,   628,   556,   358,   560,   241,
     346,   539,   242,   455,   453,   612,   537,   331,   447,   332,
     534,   243,   244,   382,   338,   674,   675,   717,   542,   543,
     615,   544,   671,   670,   669,   756,   714,   246,   360,   562,
     361,   474,   559,   545,   248,   362,   494,   509,   510,   249,
     376,   375,   260,   567,   719,   753,   261,   568,   720,   754,
     485,   636,   250,   251,   252,   102,   103,   104,   564,   105,
     115,   106,   164,   172,   265,   173,   184,   733,   734,   256,
     589,   426,   648,   427,   428,   593,   693,   594,   431,   651,
     519,   597,   601,   598,   602,   599,   603,   600,   604,   605,
     606,   463,   107,   108,   302,   123,   124,   109,   110,   111,
     112,   113,   114,   118
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -612
static const yytype_int16 yypact[] =
{
    1369,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  1237,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    1369,  1369,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  1104,  -612,  1369,  -612,  -612,  -612,  -612,  -612,  -612,
    1369,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,    93,  -612,  -612,  -612,  -612,  -612,  -612,   167,  1369,
    -612,  -612,  -612,  -612,  -612,   991,  1237,  1237,   -69,    -9,
      20,  -612,  -612,    11,  1104,  -612,    42,    63,  -612,    37,
      72,  1369,  -612,  2061,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,    16,   167,
    2484,  -612,  -612,  -612,    82,   189,   203,  -612,   107,  -612,
    1369,  -612,  -612,   371,   177,   114,   191,  -612,   167,  -612,
    -612,  -612,  -612,   216,   843,   130,   130,  -612,   215,   304,
     244,  -612,   204,   206,   211,    37,  1884,    77,     8,    95,
    -612,  -612,  2340,   959,  1719,  1973,   738,  1501,   118,   106,
     209,   231,   235,   240,   256,   257,   262,   264,   265,   266,
     267,   269,   270,   271,   274,   276,   279,   280,   282,   283,
     284,   285,   286,   290,    37,   241,   843,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,   -82,  1634,   -82,   -82,   -82,
    -612,  -612,  -612,  2453,  2372,   291,  -612,   303,  -612,   134,
     204,   206,  -612,   148,   154,   278,   294,  -612,  -612,   387,
     365,   387,   171,  -612,  -612,   288,    74,   -43,    57,   377,
      37,   223,   387,  1369,    30,  1369,    51,   298,    37,  -612,
     -82,   -82,   361,   -82,  1803,   -82,   -82,    37,    37,    37,
    -612,   307,    96,     8,    95,  -612,   297,  -612,  -612,  -612,
    -612,   207,   300,  1501,   171,  -612,   301,  -612,  1803,    37,
    -612,  -612,  -612,    37,    37,  -612,    37,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    37,    37,    37,
    1369,  -612,  -612,   305,  -612,  -612,  1369,  -612,  -612,  1884,
    -612,  -612,   239,  -612,  -612,  -612,   302,  -612,  2453,  -612,
    -612,   306,  2053,    37,    37,  -612,   293,  -612,   309,   112,
     308,   312,   154,  -612,  -612,  -612,   -17,  -612,  -612,  -612,
    -612,   310,   311,  -612,  -612,  2340,  2340,   371,  1369,  1501,
    -612,  -612,    -2,   316,    37,  -612,   306,  -612,  -612,   319,
     -84,   313,  1369,   322,    37,   314,  1369,   323,    37,  -612,
     225,  -612,  -612,   306,  -612,  -612,  -612,    48,    48,    48,
      37,  1369,   324,   332,   333,  -612,    37,    37,   329,  -612,
    -612,   -73,   151,  -612,   331,   328,    37,    37,    37,   330,
     334,    37,  -612,   335,   336,   337,   338,   340,   341,   342,
     345,   346,   350,   366,   367,   364,   369,  -612,  -612,   339,
     277,    37,    37,  -612,  -612,  2178,  -612,  -612,   370,   296,
     326,   372,   327,  -612,  -612,   373,   374,   413,   393,   415,
     393,  -612,  -612,  1501,  -612,  -612,    48,  -612,  -612,  -612,
    -612,   192,  -612,  -612,   375,   378,   379,  -612,   380,   383,
    -612,   385,  -612,  -612,   154,  1501,   388,  -612,   386,  1501,
     391,  -612,   390,  2178,   392,  1369,   376,   394,  -612,   154,
     154,  -612,  -612,   389,   397,   398,  -612,  -612,   395,   396,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,    37,   400,  2178,   402,    37,   404,   407,  -612,
    -612,  -612,   409,  -612,   408,   161,  -612,   362,   403,  -612,
    -612,   414,    49,   416,  -612,  -612,  -612,  -612,  -612,    -2,
    2178,   406,  -612,   411,    37,  -612,  -612,  2340,  2340,  -612,
    -612,  -612,   417,  -612,  -612,  -612,   418,  1501,  -612,   419,
    1501,  -612,   421,    37,   426,   425,   429,  -612,  -612,  2453,
    -612,  -612,  -612,   281,   281,  -612,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   122,  -612,   430,
    -612,    37,  -612,  1369,  -612,   412,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,   424,  2259,  -612,  -612,  -612,  -612,  -612,
     433,    -2,    48,   431,   434,   435,  2340,  -612,  -612,   438,
    -612,   439,  -612,   441,    37,  1501,  1501,   436,  2453,  -612,
     443,   281,   444,   445,   446,   447,   448,   449,   450,   451,
     453,   454,   455,  -612,   457,  -612,   404,   462,  2178,    37,
      37,   428,  2178,  -612,   463,  -612,   464,  -612,  -612,  -612,
      48,  -612,  -612,  -612,  -612,  -612,   393,  -612,   465,   467,
     469,  -612,   470,   468,  -612,   471,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,    13,    13,  -612,  -612,  -612,
    -612,   474,   475,    13,  -612,   476,   477,   473,  -612,   432,
     494,  -612,  -612,   478,   479,  -612,  1501,  -612,  -612,  -612,
    -612,   299,  -612,   481,  -612,   482,   484,  -612,  -612,  -612,
    -612,  2259,  -612,  -612,  -612,  -612,  -612,   485,  -612,  -612,
    -612,  -612,  -612,   387,   387,  -612,  2259,  -612,  -612,   486,
    -612
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -612,  -612,   456,   493,   321,  -612,   381,  -612,   410,   420,
     422,   423,  -612,  -612,  -177,  -612,  -612,   427,   -95,    47,
    -612,  -155,   141,  -612,  -612,  -612,  -612,  -259,  -612,  -612,
    -612,  -612,  -612,  -268,  -612,  -612,  -465,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,  -174,    -7,   343,  -612,  -612,
    -612,   382,  -612,   384,     3,  -147,  -130,  -612,  -486,   -45,
    -612,  -611,  -612,  -612,  -612,  -612,  -612,   440,  -178,  -603,
    -291,  -518,  -612,   -46,  -237,  -612,  -612,  -612,  -612,   452,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -365,  -612,  -172,  -136,  -612,  -129,  -612,  -612,  -246,  -124,
    -612,   507,  -612,   251,  -612,  -122,  -612,  -488,  -102,  -612,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,  -612,
    -612,  -612,   287,    -8,  -301,   506,  -612,   -21,   -31,  -612,
    -612,  -612,  -612,   128
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -260
static const yytype_int16 yytable[] =
{
     117,   182,   420,   388,   152,   558,   347,   349,   367,   153,
     418,   486,   387,   676,   478,   479,   279,   582,   145,   155,
     384,   161,   728,   145,   729,   730,   162,   619,   394,   679,
     398,   336,   119,   120,   272,  -206,   337,   183,   280,   285,
     145,   629,  -180,  -180,   471,   253,  -208,   145,   609,   138,
     254,   146,   255,  -183,  -183,   156,   146,   253,   145,   340,
     125,   145,   254,   253,   253,   253,   253,   253,   254,   254,
     254,   254,   254,   146,   630,   126,  -205,   718,   489,   236,
     146,   341,   127,   457,   145,   117,   117,   370,   383,   372,
     373,   146,   456,   128,   146,   623,   393,   253,   397,   284,
     390,   134,   254,   125,   255,   145,   145,   253,   139,   480,
     481,   454,   254,   678,   253,   253,   477,   146,   493,   254,
     254,   273,   473,   149,   371,   141,   374,   492,   247,   341,
     676,   236,   421,   155,   304,   457,   157,   140,   146,   146,
     271,   731,   305,   392,   456,   676,   277,   282,   282,   291,
     301,   306,   168,   424,   272,   253,   365,   366,   471,   143,
     254,   384,   394,   398,   396,   624,   303,   625,   422,   156,
     129,   145,   561,   458,   365,   366,  -207,   365,   366,   253,
     247,   178,   388,   457,   254,   563,   715,   378,   144,   379,
     342,   148,   380,  -118,   576,   304,  -205,   163,   579,   165,
     365,   366,   634,   635,   146,   130,   491,   471,   275,   411,
     253,   616,   617,   166,   180,   254,   498,   145,   735,   253,
     502,   721,   257,   258,   254,   738,   178,   167,   472,   383,
     393,   397,   458,   145,  -117,   175,   473,  -207,   342,   663,
     343,   344,   345,   664,   136,   137,   253,   253,   575,   145,
     146,   254,   254,   386,   618,   179,   352,   416,   417,   180,
    -177,  -177,   342,   587,   588,   391,   146,   395,   493,   451,
    -209,   683,   303,   633,   363,   364,   639,  -186,  -186,   641,
     365,   366,   146,   401,   402,   473,   404,   145,   405,   406,
     174,     7,   259,   450,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   536,   728,   145,
     729,   730,   176,   145,  -197,    28,   145,   145,   565,   566,
     146,   262,   446,   263,    34,   264,   253,   307,   449,   484,
     484,   254,  -257,   351,   281,   286,   352,   410,   378,   352,
     379,   563,   146,   380,   689,   690,   146,   308,   303,   146,
     146,   309,   647,   353,   354,   334,   310,   353,   354,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
     488,   145,   311,   312,   253,   169,   170,   171,   313,   254,
     314,   315,   316,   317,   496,   318,   319,   320,   500,   563,
     321,   403,   322,   368,   352,   323,   324,   178,   325,   326,
     327,   328,   329,   504,   146,   253,   330,   350,   180,   377,
     254,   692,   369,   305,   399,   415,   467,   452,   419,   423,
     547,   448,   554,   555,   557,   747,   475,   495,   499,   482,
     483,   253,   469,   476,   490,   472,   254,   505,   253,   253,
     497,   501,   303,   254,   254,   392,   396,   508,   511,   512,
     548,   516,   550,   535,   151,   517,   520,   521,   522,   523,
     253,   524,   525,   526,   303,   254,   527,   528,   303,   649,
     650,   529,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   530,   531,   532,   533,   620,   546,   549,
     552,   553,   708,   585,   572,   253,   569,   584,   570,   571,
     254,   573,   577,   574,   578,   580,   583,   253,   581,   742,
     590,   586,   254,   147,   591,   592,   595,   596,   608,   253,
     610,   484,   484,   613,   254,   611,   614,   695,   621,  -131,
     622,   631,   632,   668,   626,   637,   638,   640,   642,   253,
     644,   645,   673,   253,   254,   646,   303,   665,   254,   303,
     677,   713,   680,   691,   681,   682,   684,   685,   245,   687,
     694,   696,   697,   698,   699,   700,   701,   702,   703,   266,
     704,   743,   274,   276,   707,   705,   706,   245,   245,   709,
     716,   757,   758,   722,   723,  -125,   724,   725,   727,   726,
     484,   736,   737,   739,   741,   740,   745,   746,   749,   750,
     751,   131,   755,   760,   666,   667,   297,   335,   333,   759,
     245,   752,   253,   385,   303,   303,   298,   254,   299,   300,
     245,   283,   135,   710,   177,   181,   348,   253,   487,   748,
     142,   359,   254,     0,     0,   290,     0,     0,     0,   464,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   333,   389,     0,     0,     0,     0,
       0,     0,   400,     0,     0,     0,   389,     0,   245,     0,
       0,   407,   408,   409,     0,     0,   412,   413,   414,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   245,   425,     0,   303,     0,   429,   430,     0,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   389,     0,     0,     0,
       0,     0,     0,     0,     0,   359,     0,   465,   466,     0,
       0,   292,     0,     0,     0,     0,     0,     0,   267,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   293,   294,   295,     0,   191,     0,
     389,     0,    28,     0,     0,     0,     0,   179,     0,     0,
       0,   268,   269,   296,     0,     0,     0,   389,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     506,   507,     0,     0,     0,     0,     0,     0,     0,     0,
     513,   514,   515,     0,     0,   518,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,     0,
       0,     0,     0,     0,   389,   389,   538,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   185,   169,   170,   171,
     186,     0,     0,   187,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   188,
     189,   190,     0,   191,     0,     0,   192,    28,   193,   194,
     195,   130,   179,   196,     0,   197,   198,   199,   200,     0,
     201,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   607,     0,     0,     0,
     389,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,     0,     0,  -259,     0,
       0,     0,   278,     0,     0,   224,   186,   643,     0,   187,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,   191,
       0,     0,   192,    28,     0,   538,     0,     0,   179,     0,
       0,     7,   198,   269,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   688,     0,
       0,     0,     0,     0,    34,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,     0,   711,   712,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
       0,   224,     0,     0,     0,     0,     0,     0,     0,   732,
     732,     0,     0,     0,     0,     0,     0,   732,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   121,     1,     2,
       3,     4,     5,     6,     7,   732,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,     0,     0,    27,    28,     0,
      29,     0,   122,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,    82,
      83,     0,    84,    85,    86,    87,    88,    89,    90,     0,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     116,     1,     2,     3,     4,     5,     6,     7,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
      27,    28,     0,    29,     0,     0,    30,     0,    32,    33,
      34,    35,    36,    37,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      81,     0,    82,    83,     0,     0,    85,    86,    87,    88,
      89,    90,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,     1,     2,     3,     4,     5,     6,     7,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
       0,     0,    27,    28,     0,    29,     0,     0,    30,    31,
      32,    33,    34,    35,    36,    37,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,    82,    83,     0,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,     1,     2,     3,     4,     5,
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
      94,    95,    96,    97,    98,    99,   100,   278,     0,     0,
       0,   339,     0,     0,   187,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,   191,     0,     0,     0,    28,     0,
       0,     0,     0,   179,     0,     0,     0,   198,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,   186,     0,     0,   187,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,   191,
       0,     0,   192,    28,     0,     0,   224,   130,   179,     0,
       0,     0,   198,   269,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
     339,     0,     0,   187,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,   191,     0,     0,     0,    28,     0,     0,
       0,   224,   179,     0,     0,     0,   198,   269,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   267,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,   191,     0,     0,     0,    28,     0,
       0,     0,     0,   179,     0,   224,     0,   268,   269,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,     0,   287,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   288,
     289,     0,     0,   191,     0,     0,   270,    28,     0,     0,
       0,     0,   179,     0,     0,     0,   268,   199,   200,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,   129,     0,     0,     0,     0,     0,
       0,     7,     0,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,   150,     0,     0,
       0,   459,   460,     0,    34,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   461,
       0,     0,    85,    86,    87,    88,    89,   462,     0,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   267,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,     0,     0,     0,   191,     0,
       0,     0,    28,     0,     0,     0,     0,   179,     0,     0,
       0,   268,   269,   540,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   541,     0,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,   267,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,   191,
       0,     0,     0,    28,     0,     0,     0,     0,   179,     0,
       0,     0,   268,   269,   540,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
     267,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,     0,     0,     0,     0,
     191,     0,     0,     0,    28,     0,     0,     0,     0,   179,
       0,     0,   267,   268,   269,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   191,     0,     0,     0,    28,     0,     0,     0,
       0,   179,     0,     0,     0,   268,     0,     0,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,   267,     0,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,    28,     0,     0,
       0,     0,   179,     0,     7,     0,   268,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80
};

static const yytype_int16 yycheck[] =
{
      31,   173,   303,   271,   133,   470,   243,   244,   254,   133,
     301,   376,   271,   624,    31,    32,   193,   503,    10,     3,
     266,   150,     9,    10,    11,    12,   150,   545,   274,   632,
     276,   113,    40,    41,    77,   119,   118,   173,   193,   194,
      10,   559,   126,   127,    46,   174,   119,    10,   534,   118,
     174,    43,   174,   126,   127,    39,    43,   186,    10,   236,
      81,    10,   186,   192,   193,   194,   195,   196,   192,   193,
     194,   195,   196,    43,   560,    83,   119,   680,   379,   174,
      43,   236,    90,   351,    10,   116,   117,   259,   266,   261,
     262,    43,   351,     0,    43,    46,   274,   226,   276,   194,
     272,   109,   226,   124,   226,    10,    10,   236,   117,   126,
     127,   348,   236,   631,   243,   244,   362,    43,   386,   243,
     244,   113,   124,   131,   260,   114,   262,   386,   174,   284,
     741,   226,   304,     3,    77,   403,   120,   117,    43,    43,
     186,   128,    36,   113,   403,   756,   192,   193,   194,   195,
     196,    45,   160,   308,    77,   284,   126,   127,    46,   117,
     284,   407,   408,   409,   113,   116,   197,   118,   304,    39,
       3,    10,   473,   351,   126,   127,   119,   126,   127,   308,
     226,    10,   450,   451,   308,   476,   672,   113,   125,   115,
     236,   119,   118,   116,   495,    77,   119,   115,   499,    10,
     126,   127,   567,   568,    43,    38,   384,    46,   113,   113,
     339,    50,    51,    10,    43,   339,   394,    10,   706,   348,
     398,   686,   175,   176,   348,   713,    10,   120,   116,   407,
     408,   409,   410,    10,   116,   121,   124,   119,   284,   117,
     237,   238,   239,   121,   116,   117,   375,   376,   494,    10,
      43,   375,   376,    30,   545,    39,    33,    50,    51,    43,
     126,   127,   308,   509,   510,   273,    43,   275,   536,    30,
     119,   636,   303,   564,   126,   127,   577,   126,   127,   580,
     126,   127,    43,   280,   281,   124,   283,    10,   285,   286,
     113,    10,    77,   339,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    30,     9,    10,
      11,    12,   121,    10,    10,    34,    10,    10,   126,   127,
      43,    77,   330,   119,    43,   119,   455,   118,   336,   375,
     376,   455,   121,    30,   193,   194,    33,    30,   113,    33,
     115,   632,    43,   118,   645,   646,    43,   116,   379,    43,
      43,   116,   589,    50,    51,   114,   116,    50,    51,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
     378,    10,   116,   116,   503,     4,     5,     6,   116,   503,
     116,   116,   116,   116,   392,   116,   116,   116,   396,   680,
     116,    30,   116,   115,    33,   116,   116,    10,   116,   116,
     116,   116,   116,   411,    43,   534,   116,   116,    43,   121,
     534,   648,   118,    36,   116,   118,   123,   115,   118,   118,
     124,   116,     9,    30,     9,   726,   118,   114,   114,   119,
     119,   560,   123,   121,   118,   116,   560,   113,   567,   568,
     118,   118,   473,   567,   568,   113,   113,   118,   117,   121,
     124,   121,   125,   114,   133,   121,   121,   121,   121,   121,
     589,   121,   121,   121,   495,   589,   121,   121,   499,   593,
     594,   121,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   117,   117,   121,   117,   125,   118,   117,
     117,   117,   666,   117,   114,   624,   121,   505,   120,   120,
     624,   118,   114,   118,   118,   114,   114,   636,   118,    77,
     121,   117,   636,   129,   117,   117,   121,   121,   118,   648,
     118,   567,   568,   116,   648,   121,   117,   651,   125,   121,
     116,   125,   121,   121,   118,   118,   118,   118,   117,   668,
     114,   116,   118,   672,   668,   116,   577,   117,   672,   580,
     117,   123,   121,   117,   120,   120,   118,   118,   174,   118,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   185,
     117,    77,   188,   189,   117,   121,   121,   193,   194,   117,
     117,   753,   754,   118,   117,   121,   117,   117,   117,   121,
     636,   117,   117,   117,   121,   118,   118,   118,   117,   117,
     116,   108,   117,   117,   611,   613,   196,   226,   224,   756,
     226,   741,   741,   270,   645,   646,   196,   741,   196,   196,
     236,   194,   115,   668,   168,   173,   244,   756,   377,   731,
     124,   247,   756,    -1,    -1,   195,    -1,    -1,    -1,   352,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   270,   271,    -1,    -1,    -1,    -1,
      -1,    -1,   278,    -1,    -1,    -1,   282,    -1,   284,    -1,
      -1,   287,   288,   289,    -1,    -1,   292,   293,   294,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   308,   309,    -1,   726,    -1,   313,   314,    -1,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   342,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   351,    -1,   353,   354,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    30,    -1,
     386,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    45,    -1,    -1,    -1,   403,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     416,   417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     426,   427,   428,    -1,    -1,   431,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    -1,
      -1,    -1,    -1,    -1,   450,   451,   452,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    30,    -1,    -1,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   532,    -1,    -1,    -1,
     536,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   115,    -1,
      -1,    -1,     3,    -1,    -1,   122,     7,   583,    -1,    10,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    -1,   611,    -1,    -1,    39,    -1,
      -1,    10,    43,    44,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   644,    -1,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,   669,   670,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      -1,   122,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   705,
     706,    -1,    -1,    -1,    -1,    -1,    -1,   713,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,   731,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    33,    34,    -1,
      36,    -1,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,   115,
     116,    -1,   118,   119,   120,   121,   122,   123,   124,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    34,    -1,    36,    -1,    -1,    39,    -1,    41,    42,
      43,    44,    45,    46,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,   116,    -1,    -1,   119,   120,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,     4,     5,     6,     7,     8,     9,    10,
      -1,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    34,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   113,    -1,   115,   116,    -1,   118,   119,   120,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     4,     5,     6,     7,     8,
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
     129,   130,   131,   132,   133,   134,   135,     3,    -1,    -1,
      -1,     7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,     7,    -1,    -1,    10,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    34,    -1,    -1,   122,    38,    39,    -1,
      -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
       7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,
      -1,   122,    39,    -1,    -1,    -1,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    -1,   122,    -1,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    -1,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    30,    -1,    -1,   122,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    10,    -1,    -1,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    36,    -1,    -1,
      -1,    48,    49,    -1,    43,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,   119,   120,   121,   122,   123,   124,    -1,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    -1,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    10,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,
      -1,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      10,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      -1,    -1,    10,    43,    44,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    43,    -1,    -1,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    10,    -1,    -1,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    -1,    10,    -1,    43,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90
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
     135,   137,   231,   232,   233,   235,   237,   268,   269,   273,
     274,   275,   276,   277,   278,   236,     3,   274,   279,   269,
     269,     3,    38,   271,   272,   273,   269,   269,     0,     3,
      38,   139,   140,   154,   269,   237,   279,   279,   118,   117,
     117,   114,   271,   117,   125,    10,    43,   189,   119,   269,
      36,   140,   231,   235,   141,     3,    39,   120,   155,   138,
     139,   231,   235,   115,   238,    10,    10,   120,   269,     4,
       5,     6,   239,   241,   113,   121,   121,   138,    10,    39,
      43,   215,   228,   229,   242,     3,     7,    10,    26,    27,
      28,    30,    33,    35,    36,    37,    40,    42,    43,    44,
      45,    47,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   122,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   152,   153,   154,   156,   157,   158,
     159,   175,   178,   187,   188,   189,   203,   209,   210,   215,
     228,   229,   230,   231,   235,   241,   245,   155,   155,    77,
     218,   222,    77,   119,   119,   240,   189,    10,    43,    44,
     122,   209,    77,   113,   189,   113,   189,   209,     3,   150,
     157,   158,   209,   153,   154,   157,   158,     3,    26,    27,
     203,   209,     3,    26,    27,    28,    45,   144,   145,   146,
     147,   209,   270,   274,    77,    36,    45,   118,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   183,   185,   189,   114,   142,   113,   118,   190,     7,
     150,   157,   209,   190,   190,   190,   176,   210,   187,   210,
     116,    30,    33,    50,    51,   163,   166,   169,   173,   189,
     204,   206,   211,   126,   127,   126,   127,   234,   115,   118,
     228,   229,   228,   228,   229,   217,   216,   121,   113,   115,
     118,   151,   189,   204,   234,   183,    30,   163,   169,   189,
     228,   269,   113,   204,   234,   269,   113,   204,   234,   116,
     189,   190,   190,    30,   190,   190,   190,   189,   189,   189,
      30,   113,   189,   189,   189,   118,    50,    51,   206,   118,
     270,   228,   229,   118,   157,   189,   247,   249,   250,   189,
     189,   254,   189,   189,   189,   189,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   269,   184,   116,   269,
     209,    30,   115,   180,   210,   179,   163,   169,   204,    48,
      49,   116,   124,   267,   268,   189,   189,   123,   164,   123,
     170,    46,   116,   124,   207,   118,   121,   234,    31,    32,
     126,   127,   119,   119,   209,   226,   226,   239,   269,   270,
     118,   204,   163,   169,   212,   114,   269,   118,   204,   114,
     269,   118,   204,   160,   269,   113,   189,   189,   118,   213,
     214,   117,   121,   189,   189,   189,   121,   121,   189,   256,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     117,   117,   121,   117,   186,   114,    30,   182,   189,   177,
      45,    76,   194,   195,   197,   209,   118,   124,   124,   117,
     125,   167,   117,   117,     9,    30,   172,     9,   172,   208,
     174,   270,   205,   206,   234,   126,   127,   219,   223,   121,
     120,   120,   114,   118,   118,   234,   270,   114,   118,   270,
     114,   118,   194,   114,   269,   117,   117,   234,   234,   246,
     121,   117,   117,   251,   253,   121,   121,   257,   259,   261,
     263,   258,   260,   262,   264,   265,   266,   189,   118,   194,
     118,   121,   181,   116,   117,   196,    50,    51,   206,   207,
     125,   125,   116,    46,   116,   118,   118,   165,   171,   207,
     194,   125,   121,   206,   226,   226,   227,   118,   118,   270,
     118,   270,   117,   189,   114,   116,   116,   210,   248,   235,
     235,   255,   235,   235,   235,   235,   235,   235,   235,   235,
     235,   235,   235,   117,   121,   117,   182,   269,   121,   200,
     199,   198,   168,   118,   191,   192,   197,   117,   207,   205,
     121,   120,   120,   226,   118,   118,   161,   118,   189,   270,
     270,   117,   210,   252,   117,   235,   117,   117,   117,   117,
     117,   117,   117,   117,   117,   121,   121,   117,   181,   117,
     195,   189,   189,   123,   202,   194,   117,   193,   205,   220,
     224,   172,   118,   117,   117,   117,   121,   117,     9,    11,
      12,   128,   189,   243,   244,   243,   117,   117,   243,   117,
     118,   121,    77,    77,   162,   118,   118,   270,   244,   117,
     117,   116,   192,   221,   225,   117,   201,   228,   228,   191,
     117
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
#line 375 "vtkParse.y"
    {
        start_class((yyvsp[(2) - (2)].str));
      }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 395 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 396 "vtkParse.y"
    { reject_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 397 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 398 "vtkParse.y"
    { output_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 399 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 400 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 401 "vtkParse.y"
    { reject_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 402 "vtkParse.y"
    { reject_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 403 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 447 "vtkParse.y"
    { preSig("~"); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 448 "vtkParse.y"
    { preSig("virtual ~"); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 451 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 455 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 459 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 464 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 471 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 475 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 479 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 483 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 488 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 493 "vtkParse.y"
    { postSig("("); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 494 "vtkParse.y"
    { postSig(")"); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 495 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 496 "vtkParse.y"
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
#line 505 "vtkParse.y"
    { postSig(")"); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 505 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 506 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(2) - (4)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (4)].str));
    }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 512 "vtkParse.y"
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
#line 548 "vtkParse.y"
    {postSig(" const");}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 550 "vtkParse.y"
    {postSig("("); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 552 "vtkParse.y"
    { postSig(")"); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 553 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 554 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 560 "vtkParse.y"
    { postSig("("); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 568 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 569 "vtkParse.y"
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
#line 577 "vtkParse.y"
    { postSig("(");}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 579 "vtkParse.y"
    {postSig("const ");}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 581 "vtkParse.y"
    {postSig("static ");}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 582 "vtkParse.y"
    {postSig("static ");}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 584 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 584 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 592 "vtkParse.y"
    { postSig(", ");}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 596 "vtkParse.y"
    { currentFunction->NumberOfArguments++;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 597 "vtkParse.y"
    { currentFunction->NumberOfArguments++; postSig(", ");}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 600 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 607 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 614 "vtkParse.y"
    {
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_FUNCTION;
    }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 619 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 620 "vtkParse.y"
    {
      postSig(") ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 625 "vtkParse.y"
    { postSig("(*"); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 626 "vtkParse.y"
    { postSig(")("); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 627 "vtkParse.y"
    {
      postSig(")");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 635 "vtkParse.y"
    {delSig();}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 636 "vtkParse.y"
    {delSig();}
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

  case 164:

/* Line 1455 of yacc.c  */
#line 657 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 665 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 668 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_POINTER + (VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) + ((yyvsp[(3) - (3)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 670 "vtkParse.y"
    { postSig("[]"); (yyval.integer) = VTK_PARSE_POINTER + ((yyvsp[(4) - (4)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 672 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_CONST + (yyvsp[(2) - (2)].integer);}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 673 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 674 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_STATIC + (yyvsp[(2) - (2)].integer);}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 675 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | VTK_PARSE_STATIC) + (yyvsp[(3) - (3)].integer);}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 677 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 679 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer);}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 680 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 681 "vtkParse.y"
    {postSig(" "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 682 "vtkParse.y"
    {postSig(" ");}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 683 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");
            (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 689 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");
            (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 694 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 695 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");
            (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str)); postSig(" ");}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 701 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {postSig("<");}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {postSig(">");}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    {postSig("<");}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    {postSig(">");}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    {postSig("<");}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 707 "vtkParse.y"
    {postSig(">");}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    {postSig("::");}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    {postSig("<");}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 711 "vtkParse.y"
    {postSig(">");}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    {postSig("::");}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    {postSig(", ");}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 716 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 717 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str));}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 719 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 720 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str));}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 721 "vtkParse.y"
    {preScopeSig((yyvsp[(1) - (3)].str));}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 723 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 724 "vtkParse.y"
    { postSig("&"); (yyval.integer) = (yyvsp[(1) - (2)].integer);}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 725 "vtkParse.y"
    { postSig("*"); (yyval.integer) = (VTK_PARSE_REF + VTK_PARSE_POINTER) + (yyvsp[(1) - (2)].integer);}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 727 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 728 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 730 "vtkParse.y"
    { postSig("vtkStdString "); (yyval.integer) = (VTK_PARSE_STRING); }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 732 "vtkParse.y"
    { postSig("vtkUnicodeString "); (yyval.integer) = (VTK_PARSE_UNICODE_STRING); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 741 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 742 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 743 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 744 "vtkParse.y"
    { postSig("* const&"); (yyval.integer) = VTK_PARSE_POINTER_CONST_REF;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 746 "vtkParse.y"
    { postSig("* const*"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    { postSig("**&"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 748 "vtkParse.y"
    { postSig("***"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    {postSig("unsigned ");}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_UNSIGNED + (yyvsp[(3) - (3)].integer);}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 752 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 755 "vtkParse.y"
    { postSig("vtkTypeInt8 "); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    { postSig("vtkTypeUInt8 "); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { postSig("vtkTypeInt16 "); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { postSig("vtkTypeUInt16 "); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 759 "vtkParse.y"
    { postSig("vtkTypeInt32 "); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 760 "vtkParse.y"
    { postSig("vtkTypeUInt32 "); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 761 "vtkParse.y"
    { postSig("vtkTypeInt64 "); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 762 "vtkParse.y"
    { postSig("vtkTypeUInt64 "); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 763 "vtkParse.y"
    { postSig("vtkTypeFloat32 "); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 764 "vtkParse.y"
    { postSig("vtkTypeFloat64 "); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 765 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 766 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 768 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 769 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 775 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_UNKNOWN;
    }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 782 "vtkParse.y"
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

  case 249:

/* Line 1455 of yacc.c  */
#line 798 "vtkParse.y"
    { postSig("vtkIdType "); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 799 "vtkParse.y"
    { postSig("long long "); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 800 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 801 "vtkParse.y"
    { postSig("signed char "); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 802 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 807 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 815 "vtkParse.y"
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
#line 823 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 825 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 826 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 832 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 833 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 834 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 835 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 839 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 840 "vtkParse.y"
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

  case 274:

/* Line 1455 of yacc.c  */
#line 850 "vtkParse.y"
    {postSig("Get");}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 850 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 852 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(7) - (8)].integer);
   output_function();
   }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 859 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 860 "vtkParse.y"
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

  case 279:

/* Line 1455 of yacc.c  */
#line 870 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 871 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   output_function();
   }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 880 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 881 "vtkParse.y"
    {postSig(");"); openSig = 0;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 882 "vtkParse.y"
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

  case 284:

/* Line 1455 of yacc.c  */
#line 912 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 913 "vtkParse.y"
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

  case 286:

/* Line 1455 of yacc.c  */
#line 923 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 924 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 925 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   output_function();
   }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 933 "vtkParse.y"
    {preSig("void "); postSig("On();"); openSig = 0; }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 935 "vtkParse.y"
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

  case 291:

/* Line 1455 of yacc.c  */
#line 950 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 955 "vtkParse.y"
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

  case 293:

/* Line 1455 of yacc.c  */
#line 980 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 985 "vtkParse.y"
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

  case 295:

/* Line 1455 of yacc.c  */
#line 997 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1002 "vtkParse.y"
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

  case 297:

/* Line 1455 of yacc.c  */
#line 1029 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1034 "vtkParse.y"
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

  case 299:

/* Line 1455 of yacc.c  */
#line 1046 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1051 "vtkParse.y"
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

  case 301:

/* Line 1455 of yacc.c  */
#line 1080 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1085 "vtkParse.y"
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

  case 303:

/* Line 1455 of yacc.c  */
#line 1097 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1102 "vtkParse.y"
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

  case 305:

/* Line 1455 of yacc.c  */
#line 1135 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1140 "vtkParse.y"
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

  case 307:

/* Line 1455 of yacc.c  */
#line 1152 "vtkParse.y"
    {
      free(currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1157 "vtkParse.y"
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

  case 309:

/* Line 1455 of yacc.c  */
#line 1170 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1175 "vtkParse.y"
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

  case 311:

/* Line 1455 of yacc.c  */
#line 1187 "vtkParse.y"
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

  case 312:

/* Line 1455 of yacc.c  */
#line 1234 "vtkParse.y"
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

  case 313:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
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

  case 314:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
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

  case 315:

/* Line 1455 of yacc.c  */
#line 1390 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1391 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1392 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1393 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1396 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1397 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1397 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1398 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1398 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1400 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1400 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1401 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1401 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1402 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1402 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1403 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1404 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1405 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1406 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1407 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1408 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1409 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1410 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1411 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1412 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1413 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1414 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1415 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1417 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1418 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1419 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1420 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1421 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1422 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1423 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1424 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1425 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1426 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1427 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1428 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1429 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 5293 "vtkParse.tab.c"
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
#line 1458 "vtkParse.y"

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

