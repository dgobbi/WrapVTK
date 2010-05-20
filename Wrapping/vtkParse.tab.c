
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
#define YYFINAL  129
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2567

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  137
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  137
/* YYNRULES -- Number of rules.  */
#define YYNRULES  405
/* YYNRULES -- Number of states.  */
#define YYNSTATES  750

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
     119,   120,   128,   131,   122,   129,   136,   130,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   118,   121,
     116,   124,   117,     2,     2,     2,     2,     2,     2,     2,
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
       0,     0,     3,     6,     7,    11,    14,    18,    21,    23,
      24,    32,    33,    44,    45,    48,    51,    53,    56,    58,
      60,    62,    64,    66,    68,    70,    73,    75,    77,    80,
      84,    88,    91,    95,    98,   102,   106,   109,   113,   116,
     122,   125,   127,   135,   142,   150,   157,   161,   164,   168,
     170,   175,   179,   184,   187,   196,   204,   214,   224,   227,
     230,   233,   236,   240,   243,   246,   250,   255,   257,   261,
     264,   267,   269,   271,   273,   278,   281,   285,   287,   290,
     294,   299,   303,   305,   308,   312,   317,   321,   322,   323,
     324,   334,   335,   336,   341,   344,   345,   346,   354,   355,
     356,   361,   364,   367,   370,   371,   373,   374,   380,   381,
     382,   387,   388,   394,   395,   399,   400,   404,   409,   410,
     413,   414,   420,   422,   424,   427,   429,   431,   433,   438,
     442,   443,   445,   447,   448,   453,   454,   456,   458,   460,
     461,   466,   469,   470,   475,   477,   478,   484,   485,   486,
     496,   497,   499,   500,   503,   508,   514,   519,   525,   530,
     536,   540,   545,   548,   552,   558,   564,   571,   580,   582,
     586,   588,   592,   595,   600,   603,   604,   605,   609,   614,
     617,   619,   622,   626,   628,   631,   633,   634,   638,   640,
     641,   645,   648,   649,   654,   655,   661,   662,   668,   670,
     671,   676,   678,   680,   682,   684,   688,   692,   696,   698,
     700,   703,   706,   709,   712,   716,   720,   722,   724,   726,
     728,   730,   732,   734,   736,   738,   740,   742,   744,   746,
     748,   749,   753,   755,   757,   759,   761,   763,   765,   767,
     769,   771,   773,   775,   777,   779,   781,   783,   785,   787,
     789,   790,   793,   796,   797,   803,   804,   806,   808,   810,
     813,   815,   817,   819,   821,   823,   824,   832,   833,   834,
     843,   844,   850,   851,   857,   858,   859,   870,   871,   879,
     880,   881,   890,   891,   899,   900,   908,   909,   917,   918,
     926,   927,   935,   936,   944,   945,   953,   954,   962,   963,
     971,   972,   982,   983,   993,   998,  1003,  1010,  1018,  1021,
    1024,  1028,  1032,  1034,  1036,  1038,  1040,  1042,  1044,  1046,
    1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,
    1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1086,
    1088,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,  1106,
    1108,  1110,  1112,  1114,  1115,  1118,  1119,  1122,  1123,  1126,
    1128,  1130,  1132,  1134,  1136,  1138,  1140,  1142,  1144,  1146,
    1148,  1150,  1152,  1154,  1156,  1158,  1160,  1162,  1164,  1166,
    1168,  1170,  1172,  1174,  1176,  1178,  1180,  1182,  1184,  1186,
    1188,  1190,  1192,  1194,  1196,  1198,  1200,  1202,  1206,  1210,
    1214,  1218,  1222,  1226,  1227,  1230
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     138,     0,    -1,   263,   139,    -1,    -1,   140,   263,   139,
      -1,   157,   229,    -1,   157,    37,   229,    -1,   157,   141,
      -1,   141,    -1,    -1,     3,   195,   142,   233,   114,   144,
     115,    -1,    -1,     3,   195,   116,   224,   117,   143,   233,
     114,   144,   115,    -1,    -1,   145,   144,    -1,   236,   118,
      -1,   210,    -1,    38,   210,    -1,   147,    -1,   146,    -1,
     149,    -1,   148,    -1,   150,    -1,   154,    -1,   152,    -1,
      36,   152,    -1,   151,    -1,    28,    -1,   163,   196,    -1,
      36,   163,   196,    -1,    37,   163,   196,    -1,   156,   196,
      -1,    37,   156,   196,    -1,   162,   196,    -1,    36,   162,
     196,    -1,    37,   162,   196,    -1,   155,   196,    -1,    37,
     155,   196,    -1,   161,   196,    -1,   113,   119,   263,   120,
     121,    -1,   239,   121,    -1,   239,    -1,    26,   195,   114,
     263,   115,   264,   121,    -1,    26,   114,   263,   115,   264,
     121,    -1,    27,   195,   114,   263,   115,   264,   121,    -1,
      27,   114,   263,   115,   264,   121,    -1,    43,   264,   121,
      -1,   157,   152,    -1,     3,   195,   153,    -1,   121,    -1,
     114,   263,   115,   121,    -1,   118,   264,   121,    -1,    41,
     216,   213,   121,    -1,    41,    28,    -1,    41,     3,   195,
     114,   263,   115,   195,   121,    -1,    41,     3,   114,   263,
     115,   195,   121,    -1,    41,   216,    51,   195,   120,   119,
     264,   120,   121,    -1,    41,   216,    52,   195,   120,   119,
     264,   120,   121,    -1,    41,   147,    -1,    41,   146,    -1,
      41,   149,    -1,    41,   148,    -1,    41,    46,   121,    -1,
     157,   162,    -1,   157,   163,    -1,    39,   116,   117,    -1,
      39,   116,   158,   117,    -1,   159,    -1,   159,   122,   158,
      -1,   160,   208,    -1,   157,   208,    -1,    40,    -1,     3,
      -1,    13,    -1,    48,   119,   162,   120,    -1,   123,   189,
      -1,     7,   123,   189,    -1,   181,    -1,   216,   174,    -1,
     216,    30,   174,    -1,     7,   216,    30,   174,    -1,     7,
     216,   174,    -1,   164,    -1,   216,   168,    -1,   216,    30,
     168,    -1,     7,   216,    30,   168,    -1,     7,   216,   168,
      -1,    -1,    -1,    -1,    34,   216,   119,   165,   200,   120,
     166,   178,   167,    -1,    -1,    -1,   171,   169,   178,   170,
      -1,   171,   177,    -1,    -1,    -1,    34,   261,   172,   119,
     173,   200,   120,    -1,    -1,    -1,   179,   175,   178,   176,
      -1,   179,   177,    -1,   124,     9,    -1,    33,     9,    -1,
      -1,    30,    -1,    -1,   195,   119,   180,   200,   120,    -1,
      -1,    -1,   184,   182,   186,   183,    -1,    -1,   195,   119,
     185,   200,   120,    -1,    -1,   118,   188,   187,    -1,    -1,
     122,   188,   187,    -1,   195,   119,   263,   120,    -1,    -1,
     191,   190,    -1,    -1,   195,   119,   192,   200,   120,    -1,
      30,    -1,    45,    -1,    45,    37,    -1,    44,    -1,    10,
      -1,   121,    -1,   114,   263,   115,   121,    -1,   114,   263,
     115,    -1,    -1,   198,    -1,   203,    -1,    -1,   203,   199,
     122,   198,    -1,    -1,   201,    -1,    77,    -1,   203,    -1,
      -1,   203,   202,   122,   201,    -1,   216,   214,    -1,    -1,
     216,   213,   204,   209,    -1,    46,    -1,    -1,   216,    52,
     205,   208,   120,    -1,    -1,    -1,   216,    51,   206,   208,
     120,   119,   207,   197,   120,    -1,    -1,   195,    -1,    -1,
     124,   237,    -1,     3,   195,   211,   121,    -1,     3,   195,
     228,   211,   121,    -1,    26,   195,   211,   121,    -1,    26,
     195,   228,   211,   121,    -1,    27,   195,   211,   121,    -1,
      27,   195,   228,   211,   121,    -1,   216,   211,   121,    -1,
     216,    30,   211,   121,    -1,    46,   121,    -1,    45,    46,
     121,    -1,   216,    52,   195,   120,   121,    -1,   216,    51,
     195,   120,   121,    -1,   216,    51,   195,   120,    47,   121,
      -1,   216,    51,   195,   120,   119,   197,   120,   121,    -1,
     213,    -1,   213,   122,   212,    -1,   213,    -1,   213,   122,
     212,    -1,   228,   213,    -1,   228,   213,   122,   212,    -1,
     195,   214,    -1,    -1,    -1,    47,   215,   214,    -1,   125,
     264,   126,   214,    -1,   193,   217,    -1,   217,    -1,   194,
     217,    -1,   194,   193,   217,    -1,   229,    -1,   229,   228,
      -1,   221,    -1,    -1,   221,   218,   228,    -1,   227,    -1,
      -1,   227,   219,   228,    -1,    40,   227,    -1,    -1,    40,
     227,   220,   228,    -1,    -1,    44,   116,   222,   224,   117,
      -1,    -1,    10,   116,   223,   224,   117,    -1,   216,    -1,
      -1,   216,   122,   225,   224,    -1,    10,    -1,    44,    -1,
     221,    -1,   227,    -1,    10,    78,   226,    -1,    44,    78,
     226,    -1,   221,    78,   226,    -1,   127,    -1,   128,    -1,
     128,   127,    -1,   128,   128,    -1,   128,    32,    -1,   128,
      31,    -1,   128,   128,   127,    -1,   128,   128,   128,    -1,
      32,    -1,    31,    -1,   230,    -1,    24,    -1,    25,    -1,
      90,    -1,    91,    -1,    10,    -1,    44,    -1,    20,    -1,
      14,    -1,    19,    -1,    23,    -1,    22,    -1,    -1,    35,
     231,   232,    -1,   232,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    21,    -1,    13,    -1,    15,
      -1,    16,    -1,    89,    -1,    17,    -1,    18,    -1,    -1,
     118,   234,    -1,   236,   226,    -1,    -1,   236,   226,   235,
     122,   234,    -1,    -1,     4,    -1,     5,    -1,     6,    -1,
     129,   238,    -1,   238,    -1,     9,    -1,    11,    -1,    12,
      -1,   195,    -1,    -1,    92,   119,   195,   122,   240,   217,
     120,    -1,    -1,    -1,    93,   119,   241,   195,   122,   242,
     217,   120,    -1,    -1,    94,   119,   243,   195,   120,    -1,
      -1,    95,   119,   244,   195,   120,    -1,    -1,    -1,    96,
     119,   195,   122,   245,   229,   246,   122,   264,   120,    -1,
      -1,    97,   119,   195,   122,   247,   229,   120,    -1,    -1,
      -1,    98,   119,   248,   195,   122,   249,   229,   120,    -1,
      -1,    99,   119,   195,   250,   122,   229,   120,    -1,    -1,
     100,   119,   195,   122,   251,   229,   120,    -1,    -1,   104,
     119,   195,   122,   252,   229,   120,    -1,    -1,   101,   119,
     195,   122,   253,   229,   120,    -1,    -1,   105,   119,   195,
     122,   254,   229,   120,    -1,    -1,   102,   119,   195,   122,
     255,   229,   120,    -1,    -1,   106,   119,   195,   122,   256,
     229,   120,    -1,    -1,   103,   119,   195,   122,   257,   229,
     120,    -1,    -1,   107,   119,   195,   122,   258,   229,   120,
      -1,    -1,   108,   119,   195,   122,   259,   229,   122,   237,
     120,    -1,    -1,   109,   119,   195,   122,   260,   229,   122,
     237,   120,    -1,   110,   119,   195,   120,    -1,   111,   119,
     195,   120,    -1,   112,   119,   195,   122,   195,   120,    -1,
     112,   119,   195,   122,   195,   122,   120,    -1,   119,   120,
      -1,   125,   126,    -1,    49,   125,   126,    -1,    50,   125,
     126,    -1,   262,    -1,   124,    -1,   128,    -1,   130,    -1,
     129,    -1,   131,    -1,   132,    -1,   123,    -1,   122,    -1,
     116,    -1,   117,    -1,   127,    -1,   133,    -1,   134,    -1,
     135,    -1,    49,    -1,    50,    -1,    53,    -1,    54,    -1,
      55,    -1,    56,    -1,    57,    -1,    58,    -1,    61,    -1,
      62,    -1,    63,    -1,    64,    -1,    65,    -1,    59,    -1,
      60,    -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    -1,   267,   263,    -1,    -1,   268,
     264,    -1,    -1,   266,   265,    -1,     3,    -1,    39,    -1,
     267,    -1,   121,    -1,   268,    -1,   272,    -1,    29,    -1,
     269,    -1,   270,    -1,   271,    -1,   262,    -1,   118,    -1,
     136,    -1,     8,    -1,   229,    -1,    78,    -1,     9,    -1,
      12,    -1,    28,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    45,    -1,    37,    -1,     7,    -1,
      26,    -1,    27,    -1,    40,    -1,    47,    -1,    46,    -1,
      77,    -1,     4,    -1,     6,    -1,     5,    -1,    42,    -1,
      43,    -1,   114,   265,   115,    -1,   119,   263,   120,    -1,
      51,   263,   120,    -1,    52,   263,   120,    -1,   125,   263,
     126,    -1,    41,   273,   121,    -1,    -1,     3,   273,    -1,
     268,   273,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   367,   367,   369,   369,   371,   371,   372,   372,   375,
     374,   380,   379,   385,   385,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   415,   417,   419,   421,   423,   425,   427,   429,
     430,   431,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   445,   447,   449,   449,   451,   451,   453,
     453,   455,   455,   455,   457,   459,   460,   461,   462,   466,
     470,   475,   482,   486,   490,   494,   499,   505,   506,   507,
     505,   517,   517,   517,   523,   534,   535,   534,   541,   541,
     541,   547,   558,   559,   561,   561,   563,   563,   565,   566,
     565,   573,   573,   575,   575,   577,   577,   579,   581,   581,
     590,   590,   592,   594,   595,   597,   597,   599,   600,   601,
     603,   603,   605,   605,   605,   607,   607,   609,   609,   610,
     610,   612,   620,   619,   626,   632,   632,   638,   639,   638,
     646,   646,   648,   648,   650,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   665,   665,
     667,   668,   669,   670,   672,   680,   681,   681,   684,   687,
     688,   689,   690,   692,   693,   695,   696,   696,   698,   699,
     699,   701,   702,   702,   705,   705,   707,   707,   710,   710,
     710,   712,   713,   714,   715,   717,   723,   729,   743,   744,
     745,   746,   747,   749,   751,   752,   753,   754,   756,   757,
     758,   759,   760,   762,   769,   785,   786,   787,   788,   789,
     790,   790,   792,   795,   796,   797,   798,   799,   800,   801,
     802,   803,   804,   805,   806,   807,   808,   809,   810,   811,
     813,   813,   815,   824,   823,   832,   833,   834,   835,   837,
     837,   839,   840,   841,   842,   846,   845,   857,   857,   857,
     866,   866,   877,   877,   887,   888,   886,   919,   918,   930,
     931,   930,   940,   939,   957,   956,   987,   986,  1004,  1003,
    1036,  1035,  1053,  1052,  1087,  1086,  1104,  1103,  1142,  1141,
    1159,  1158,  1177,  1176,  1193,  1240,  1289,  1340,  1397,  1398,
    1399,  1400,  1401,  1403,  1404,  1404,  1405,  1405,  1406,  1406,
    1407,  1407,  1408,  1408,  1409,  1409,  1410,  1411,  1412,  1413,
    1414,  1415,  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1423,
    1424,  1425,  1426,  1427,  1428,  1429,  1430,  1431,  1432,  1433,
    1434,  1435,  1436,  1441,  1441,  1442,  1442,  1443,  1443,  1445,
    1445,  1445,  1447,  1447,  1447,  1449,  1449,  1449,  1449,  1450,
    1450,  1450,  1450,  1450,  1450,  1451,  1451,  1451,  1451,  1451,
    1452,  1452,  1452,  1452,  1452,  1452,  1453,  1453,  1453,  1453,
    1453,  1454,  1454,  1454,  1454,  1454,  1454,  1456,  1457,  1458,
    1459,  1460,  1461,  1463,  1463,  1464
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
  "VTK_BYTE_SWAP_DECL", "'{'", "'}'", "'<'", "'>'", "':'", "'('", "')'",
  "';'", "','", "'~'", "'='", "'['", "']'", "'&'", "'*'", "'-'", "'/'",
  "'+'", "'!'", "'|'", "'^'", "'%'", "'.'", "$accept", "strt",
  "maybe_classes", "maybe_template_class_def", "class_def", "$@1", "$@2",
  "class_def_body", "class_def_item", "named_enum", "enum", "named_union",
  "union", "using", "template_internal_class", "internal_class",
  "internal_class_body", "typedef", "template_function",
  "template_operator", "template", "template_args", "template_arg",
  "template_type", "legacy_function", "function", "operator",
  "typecast_op_func", "$@3", "$@4", "$@5", "op_func", "@6", "$@7",
  "op_sig", "$@8", "$@9", "func", "$@10", "$@11", "pure_virtual",
  "maybe_const", "func_sig", "$@12", "constructor", "$@13", "$@14",
  "constructor_sig", "$@15", "maybe_initializers", "more_initializers",
  "initializer", "destructor", "$@16", "destructor_sig", "$@17",
  "const_mod", "static_mod", "any_id", "func_body", "ignore_args_list",
  "ignore_more_args", "$@18", "args_list", "more_args", "$@19", "arg",
  "$@20", "$@21", "$@22", "$@23", "maybe_id", "opt_var_assign", "var",
  "var_ids", "maybe_indirect_var_ids", "var_id", "var_array", "$@24",
  "type", "type_red1", "$@25", "$@26", "$@27", "templated_id", "$@28",
  "$@29", "types", "$@30", "maybe_scoped_id", "scoped_id",
  "type_indirection", "type_red2", "type_primitive", "$@31",
  "type_integer", "optional_scope", "scope_list", "$@32", "scope_type",
  "float_num", "float_prim", "macro", "$@33", "$@34", "$@35", "$@36",
  "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45",
  "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
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
     365,   366,   367,   368,   123,   125,    60,    62,    58,    40,
      41,    59,    44,   126,    61,    91,    93,    38,    42,    45,
      47,    43,    33,   124,    94,    37,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   137,   138,   139,   139,   140,   140,   140,   140,   142,
     141,   143,   141,   144,   144,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     153,   153,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   155,   156,   157,   157,   158,   158,   159,
     159,   160,   160,   160,   161,   162,   162,   162,   162,   162,
     162,   162,   163,   163,   163,   163,   163,   165,   166,   167,
     164,   169,   170,   168,   168,   172,   173,   171,   175,   176,
     174,   174,   177,   177,   178,   178,   180,   179,   182,   183,
     181,   185,   184,   186,   186,   187,   187,   188,   190,   189,
     192,   191,   193,   194,   194,   195,   195,   196,   196,   196,
     197,   197,   198,   199,   198,   200,   200,   201,   201,   202,
     201,   203,   204,   203,   203,   205,   203,   206,   207,   203,
     208,   208,   209,   209,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   211,   211,
     212,   212,   212,   212,   213,   214,   215,   214,   214,   216,
     216,   216,   216,   217,   217,   217,   218,   217,   217,   219,
     217,   217,   220,   217,   222,   221,   223,   221,   224,   225,
     224,   226,   226,   226,   226,   227,   227,   227,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   229,   229,
     229,   229,   229,   229,   229,   230,   230,   230,   230,   230,
     231,   230,   230,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     233,   233,   234,   235,   234,   236,   236,   236,   236,   237,
     237,   238,   238,   238,   238,   240,   239,   241,   242,   239,
     243,   239,   244,   239,   245,   246,   239,   247,   239,   248,
     249,   239,   250,   239,   251,   239,   252,   239,   253,   239,
     254,   239,   255,   239,   256,   239,   257,   239,   258,   239,
     259,   239,   260,   239,   239,   239,   239,   239,   261,   261,
     261,   261,   261,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   266,   267,   267,   267,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   269,   270,   270,
     270,   271,   272,   273,   273,   273
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     2,     3,     2,     1,     0,
       7,     0,    10,     0,     2,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     3,
       3,     2,     3,     2,     3,     3,     2,     3,     2,     5,
       2,     1,     7,     6,     7,     6,     3,     2,     3,     1,
       4,     3,     4,     2,     8,     7,     9,     9,     2,     2,
       2,     2,     3,     2,     2,     3,     4,     1,     3,     2,
       2,     1,     1,     1,     4,     2,     3,     1,     2,     3,
       4,     3,     1,     2,     3,     4,     3,     0,     0,     0,
       9,     0,     0,     4,     2,     0,     0,     7,     0,     0,
       4,     2,     2,     2,     0,     1,     0,     5,     0,     0,
       4,     0,     5,     0,     3,     0,     3,     4,     0,     2,
       0,     5,     1,     1,     2,     1,     1,     1,     4,     3,
       0,     1,     1,     0,     4,     0,     1,     1,     1,     0,
       4,     2,     0,     4,     1,     0,     5,     0,     0,     9,
       0,     1,     0,     2,     4,     5,     4,     5,     4,     5,
       3,     4,     2,     3,     5,     5,     6,     8,     1,     3,
       1,     3,     2,     4,     2,     0,     0,     3,     4,     2,
       1,     2,     3,     1,     2,     1,     0,     3,     1,     0,
       3,     2,     0,     4,     0,     5,     0,     5,     1,     0,
       4,     1,     1,     1,     1,     3,     3,     3,     1,     1,
       2,     2,     2,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     2,     0,     5,     0,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     0,     7,     0,     0,     8,
       0,     5,     0,     5,     0,     0,    10,     0,     7,     0,
       0,     8,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     9,     0,     9,     4,     4,     6,     7,     2,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
     353,   392,   394,   393,   385,   372,   375,   223,   376,   244,
     226,   245,   246,   248,   249,   227,   225,   243,   229,   228,
     219,   220,   386,   387,   377,   365,   378,   379,   380,   381,
     382,   230,   384,   388,   403,   395,   396,   224,   383,   390,
     389,   327,   328,   353,   353,   329,   330,   331,   332,   333,
     334,   340,   341,   335,   336,   337,   338,   339,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   391,
     374,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   247,   221,   222,   357,   321,   322,   370,   353,   362,
     320,   319,   313,   353,   323,   314,   316,   315,   317,   318,
     324,   325,   326,   371,     0,   373,   218,   232,   369,     3,
     353,   363,   366,   367,   368,   364,     0,   403,   403,     0,
       0,     0,   359,   360,     0,   357,   361,     0,     0,     1,
       0,     0,     2,   353,     8,     0,   354,   231,   404,   405,
     402,   399,   400,   397,   358,   398,   401,   126,   125,     9,
       0,     3,     0,     7,     5,     0,   250,    72,    73,    71,
      65,   150,     0,    67,   150,     4,     6,   223,   122,     0,
     224,   123,     0,     0,   198,   180,   185,     0,   188,   183,
     255,     0,   151,    70,    66,     0,    69,     0,   196,     0,
       0,     0,   191,     0,   194,   124,   179,     0,   181,   199,
       0,     0,    11,     0,   217,   216,   208,   209,   184,   256,
     257,   258,   251,     0,    13,    68,   201,   202,   203,   205,
     204,     0,     0,   206,     0,   182,     0,   207,   187,   250,
     190,   213,   212,   210,   211,   252,     0,     0,   223,     0,
       0,    27,     0,     0,     0,     0,     0,   355,   224,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    19,    18,    21,
      20,    22,    26,    24,    23,     0,     0,     0,     0,     0,
       0,    82,    77,   108,     0,    16,     0,     0,    41,     0,
     193,     0,   200,     0,   214,   215,     0,     0,     0,     0,
     353,     0,   353,     0,     0,     0,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,    53,     0,    59,    58,    61,    60,     0,
       0,   355,     0,   162,     0,     0,   267,   270,   272,     0,
       0,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   353,    75,   118,     0,
      10,    14,   353,   127,    36,    31,    47,    63,    64,    38,
      33,    28,   113,   111,     0,     0,     0,     0,    83,    91,
      78,    98,   175,     0,   168,    15,    40,   197,   195,    13,
     255,   353,   355,    49,    48,   175,     0,     0,    76,     0,
      86,    81,     0,     0,   353,     0,     0,     0,   353,     0,
       0,    87,     0,    34,    29,     0,    37,    32,    35,    30,
       0,     0,     0,     0,   353,     0,     0,     0,    62,     0,
       0,     0,    46,   356,   163,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   282,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     119,   120,     0,     0,   109,   135,    84,    79,     0,   327,
     328,     0,     0,    95,   312,     0,     0,     0,     0,   104,
      94,   104,   101,   176,   106,   355,   174,   160,     0,     0,
     254,     0,     0,   154,     0,    85,    80,   355,     0,   156,
       0,   355,     0,   158,     0,   135,     0,   353,     0,     0,
      52,     0,    74,     0,   265,     0,     0,     0,   274,   277,
       0,     0,   284,   288,   292,   296,   286,   290,   294,   298,
     300,   302,   304,   305,     0,     0,   135,   129,   115,     0,
     110,   144,   137,     0,   136,   138,   175,   161,     0,     0,
     308,   309,     0,     0,     0,   103,   102,   105,    92,    99,
     175,   135,     0,   169,   170,     0,    12,     0,    51,   155,
       0,   355,   157,     0,   355,   159,     0,     0,     0,     0,
       0,     0,     0,   268,   271,   273,     0,     0,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,   128,     0,   114,   353,   112,     0,   147,
     145,   142,   141,   310,   311,    96,     0,   130,   165,   164,
      93,   100,   177,     0,   175,     0,   172,    50,    43,     0,
      45,     0,    88,     0,     0,   355,   355,     0,     0,   275,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,     0,   121,   115,     0,     0,   150,
     150,   152,   135,   166,     0,   131,   132,   107,   178,   171,
       0,    42,    44,   104,    55,     0,     0,     0,   266,     0,
       0,   278,     0,   283,   285,   289,   293,   297,   287,   291,
     295,   299,     0,     0,   307,   116,   117,   140,     0,     0,
       0,   143,     0,     0,     0,   173,    89,    54,     0,     0,
     269,   355,   281,   261,   262,   263,     0,   264,     0,   260,
       0,     0,   146,   153,    97,   167,     0,    90,    56,    57,
       0,   259,   301,   303,   148,   134,   276,   130,     0,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   104,   132,   133,   134,   156,   229,   275,   276,   277,
     278,   279,   280,   281,   282,   283,   404,   284,   285,   286,
     287,   162,   163,   164,   288,   289,   290,   291,   515,   683,
     737,   388,   489,   630,   389,   562,   672,   390,   491,   631,
     490,   568,   391,   571,   292,   382,   550,   293,   475,   474,
     615,   548,   367,   470,   368,   546,   172,   173,   405,   374,
     674,   675,   714,   553,   554,   618,   555,   671,   670,   669,
     747,   183,   711,   295,   393,   573,   394,   496,   570,   556,
     175,   201,   203,   222,   176,   224,   221,   177,   226,   219,
     178,   575,   105,   106,   116,   107,   181,   212,   306,   297,
     728,   729,   298,   592,   449,   648,   450,   451,   596,   690,
     597,   454,   651,   531,   600,   604,   601,   605,   602,   606,
     603,   607,   608,   609,   483,   108,   109,   340,   124,   125,
     110,   111,   112,   113,   114,   115,   119
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -616
static const yytype_int16 yypact[] =
{
    1265,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  1132,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  1265,  1265,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,   998,  -616,  -616,  -616,  1265,  -616,
    -616,  -616,  -616,  1265,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,    54,  -616,  -616,  -616,  -616,   133,
    1265,  -616,  -616,  -616,  -616,  -616,   268,  1132,  1132,   -30,
    -101,    36,  -616,  -616,    47,   998,  -616,    59,    40,  -616,
      41,    77,  -616,  1265,  -616,  2047,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,    88,
      33,   133,  2476,  -616,  -616,  2329,    90,  -616,  -616,  -616,
    -616,    41,    99,   103,    41,  -616,  -616,   -46,  -616,   204,
       1,   212,  2444,  2362,   119,  -616,   167,   127,    74,   107,
     357,   138,  -616,  -616,  -616,   277,  -616,   278,  -616,   -46,
       1,   183,   175,   278,  -616,  -616,  -616,  2444,  -616,  -616,
     278,   107,  -616,   107,  -616,  -616,  -616,   186,  -616,  -616,
    -616,  -616,  -616,   278,   754,  -616,   -46,     1,   183,  -616,
    -616,  2329,   107,  -616,  2329,  -616,  2329,  -616,  -616,    90,
    -616,  -616,  -616,  -616,   -78,   140,    41,  1869,   -38,    19,
      23,  -616,  2329,  1532,  1617,  1958,   885,  1398,   -16,     2,
     149,   160,   174,   196,   201,   202,   211,   215,   217,   218,
     222,   223,   225,   246,   248,   259,   260,   262,   263,   264,
     267,   269,   270,   271,    41,   276,   754,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,   -90,   -90,  1532,   -90,   -90,
     -90,  -616,  -616,  -616,   273,  -616,   257,   208,   274,   279,
    -616,   280,  -616,   285,  -616,  -616,   272,   137,    41,   289,
    1265,    64,  1265,   178,   281,    41,  -616,   -90,   -90,   336,
     -90,   -90,  1702,   -90,   -90,    41,    41,    41,  -616,   288,
      32,    19,    23,  -616,   284,  -616,  -616,  -616,  -616,   180,
     287,  1398,   290,  -616,  1787,    41,  -616,  -616,  -616,    41,
      41,  -616,    41,    41,    41,    41,    41,    41,    41,    41,
      41,    41,    41,    41,    41,    41,  1265,  -616,  -616,   282,
    -616,  -616,  1265,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,   296,  -616,   325,  2039,    41,    41,  -616,   -11,
    -616,   -11,   -31,   291,   293,  -616,  -616,  -616,  -616,   754,
     357,  1265,  1398,  -616,  -616,   -24,   295,    41,  -616,   325,
    -616,  -616,   298,   303,  1265,   299,    41,   304,  1265,   300,
      41,  -616,   139,  -616,  -616,   325,  -616,  -616,  -616,  -616,
      55,    55,    55,    41,  1265,   308,   309,   310,  -616,    41,
      41,   305,  -616,  -616,  -616,  1869,   265,   193,   306,    41,
      41,    41,   311,   312,    41,  -616,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   323,   307,   326,   327,   328,
    -616,  -616,   335,    41,  -616,  2165,  -616,  -616,   330,   331,
     332,   333,   329,  -616,  -616,   338,   339,   393,   421,   401,
    -616,   401,  -616,  -616,  -616,  1398,  -616,  -616,    55,   337,
    -616,   345,   341,  -616,   342,  -616,  -616,  1398,   349,  -616,
     344,  1398,   351,  -616,   346,  2165,   353,  1265,   350,   352,
    -616,   294,  -616,    41,  -616,   347,   354,   358,  -616,  -616,
     371,   372,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,    41,   374,  2165,   375,   376,   380,
    -616,  -616,  -616,   381,  -616,   378,   113,  -616,   377,   379,
    -616,  -616,   383,    -3,   387,  -616,  -616,  -616,  -616,  -616,
     -24,  2165,   385,  -616,   382,    41,  -616,   388,  -616,  -616,
     391,  1398,  -616,   392,  1398,  -616,   394,    41,   356,   396,
     397,    41,  2444,  -616,  -616,  -616,  2476,  2476,  -616,  2476,
    2476,  2476,  2476,  2476,  2476,  2476,  2476,  2476,  2476,  2476,
     207,  -616,   398,  -616,    41,  -616,  1265,  -616,   395,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,   399,  2247,  -616,  -616,
    -616,  -616,  -616,   404,   -24,    55,   403,  -616,  -616,   400,
    -616,   407,  -616,   408,    41,  1398,  1398,   410,  2444,  -616,
     412,  2476,   413,   415,   416,   417,   418,   419,   420,   422,
     423,   424,   426,  -616,   425,  -616,   376,   429,  2165,    41,
      41,   428,  2165,  -616,   433,  -616,   432,  -616,  -616,  -616,
      55,  -616,  -616,   401,  -616,   435,   438,   440,  -616,   441,
     442,  -616,   443,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,    16,    16,  -616,  -616,  -616,  -616,   445,   446,
      16,  -616,   447,   448,   449,  -616,  -616,  -616,   451,   452,
    -616,  1398,  -616,  -616,  -616,  -616,   266,  -616,   454,  -616,
     456,   458,  -616,  -616,  -616,  -616,  2247,  -616,  -616,  -616,
     460,  -616,  -616,  -616,  -616,  -616,  -616,  2247,   461,  -616
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -616,  -616,   390,  -616,   297,  -616,  -616,  -265,  -616,   322,
     340,   343,   348,  -616,  -616,  -230,  -616,  -616,   334,   355,
     -92,   359,  -616,  -616,  -616,  -133,   -68,  -616,  -616,  -616,
    -616,  -294,  -616,  -616,  -616,  -616,  -616,  -295,  -616,  -616,
     191,  -483,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -104,   -29,   275,  -616,  -616,  -616,   411,  -616,   283,    86,
    -160,  -148,  -616,  -505,   -75,  -616,  -615,  -616,  -616,  -616,
    -616,  -163,  -616,   361,  -236,  -598,  -335,  -536,  -616,  -102,
    -167,  -616,  -616,  -616,    43,  -616,  -616,    42,  -616,   171,
      46,  -158,  -117,  -616,  -616,   474,   366,   197,  -616,  -171,
    -552,  -130,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,   216,   -41,  -334,   475,  -616,
     -23,   -34,  -616,  -616,  -616,  -616,    69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -256
static const yytype_int16 yytable[] =
{
     118,   186,   120,   121,   441,   196,   198,   443,   569,   213,
     586,   371,   676,   316,   411,   410,   493,   135,   154,   141,
     622,   208,   487,   493,   372,   723,   147,   724,   725,   147,
     225,   373,   187,   147,   632,   166,   157,   679,   179,   195,
     187,   612,   147,   228,   626,   230,   158,   127,   342,   304,
     305,   147,   128,   174,   129,   179,   179,   376,   161,   135,
     148,   126,   193,   148,   300,   147,   633,   148,   502,   136,
     188,   406,   131,   159,   147,   415,   148,   419,   188,   193,
     179,  -126,   715,   118,   118,   148,   204,   205,   494,   477,
     476,   140,   151,   161,   495,   204,   205,   179,   678,   148,
     194,   495,   126,  -125,   179,  -189,  -189,   179,   148,   179,
     317,   323,   296,   488,   506,   505,   627,   194,   628,   174,
     179,   676,   174,   147,   174,   179,   179,   179,   179,   179,
     477,   476,   676,   310,   499,   309,   130,   312,   204,   205,
     314,   319,   319,   329,   339,   726,   434,   147,   478,   407,
     160,   730,   322,   416,   377,   420,   142,   148,   733,   179,
     493,   572,   143,   574,   619,   620,   146,   712,   204,   205,
     179,   504,   131,   580,   296,   318,   324,   583,   414,   145,
     510,   148,   206,   207,   514,   319,   138,   139,   147,   377,
     147,   206,   207,   150,   406,   415,   419,   478,  -186,  -186,
     716,  -189,  -189,   147,   155,   179,  -192,  -192,   180,   204,
     205,   446,   191,   341,   189,   192,   184,   231,   232,   378,
     319,   621,   148,   523,   148,   185,   411,   179,   477,   213,
     218,   439,   440,   220,   206,   207,   218,   148,   495,   220,
     636,   199,   447,   218,   202,   200,   220,   639,   190,   195,
     641,   401,   214,   401,   378,   402,   218,   402,   403,   220,
     403,   200,  -253,   299,   206,   207,   301,   147,   302,   413,
     343,   417,   407,   416,   420,   723,   147,   724,   725,   344,
     157,     9,   179,    11,    12,    13,    14,   384,   216,    17,
     158,   385,   418,   345,  -186,  -186,   506,   296,   147,   147,
     574,   148,  -192,  -192,   147,   206,   207,   341,   386,   387,
     148,   686,   687,   233,   234,   346,   131,   159,   433,   409,
     347,   348,   217,   385,   591,   469,   395,   663,   179,   664,
     349,   472,   148,   148,   350,   147,   351,   352,   148,   386,
     387,   353,   354,   521,   355,   574,   147,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,   179,   385,
     501,   209,   210,   211,   223,   356,   425,   357,   341,   148,
     385,   227,   375,   508,   379,   380,   381,   512,   358,   359,
     148,   360,   361,   362,   235,   522,   363,   740,   364,   365,
     366,   370,   383,   516,   400,   396,   397,   398,   179,   399,
     421,   471,   565,   423,   424,   438,   426,   427,   442,   428,
     429,   444,   497,   149,   473,   498,   503,   494,   507,   511,
     509,   513,   517,   414,   418,   647,   520,   542,   524,   179,
     566,   567,   153,   528,   529,   532,   533,   534,   535,   536,
     537,   538,   539,   540,   182,   541,   543,   182,   545,   544,
     547,   557,   576,   560,   179,   561,   558,   559,   563,   564,
     577,   341,   578,   579,   581,   582,   584,   585,   587,   593,
     589,   644,   590,   341,   594,   179,   588,   341,   595,   649,
     650,   689,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   598,   599,   611,   613,   294,   614,   616,
    -139,   617,   625,   623,   635,   624,   708,   709,   629,   637,
     179,   634,   638,   640,   642,   645,   646,   668,   665,   307,
     673,   681,   311,   313,   677,   680,   294,   294,   682,   684,
     688,   179,   691,   693,   692,   694,   695,   696,   697,   698,
     699,   165,   700,   701,   215,   704,   702,   341,   703,   706,
     341,   179,   710,   713,  -133,   179,   717,   369,   718,   294,
     719,   720,   705,   722,   721,   731,   732,   734,   335,   735,
     294,   736,   738,   739,   742,   667,   743,   744,   320,   392,
     746,   749,   492,   408,   197,   666,   336,   748,   745,   337,
     137,   369,   412,   707,   338,   303,   741,   500,   422,   321,
     144,   484,   412,     0,     0,   294,   328,     0,   430,   431,
     432,   341,   341,   435,   436,   437,     0,     0,     0,   179,
       0,     0,     0,     0,     0,     0,     0,   294,   448,     0,
     179,     0,   452,   453,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   392,     0,   485,
     486,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   294,     0,     0,     0,     0,   341,     0,     0,
       0,     0,   412,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   412,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   518,   519,     0,     0,     0,     0,     0,     0,
     412,     0,   525,   526,   527,     0,     0,   530,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   549,   236,   209,   210,
     211,   237,     0,     0,   238,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     239,   240,   241,     0,   168,     0,     0,     0,   242,    31,
     243,   244,   245,   131,   169,   246,     0,   247,   248,   249,
     250,     0,   251,     0,   412,     0,   412,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   610,     0,     0,
       0,     0,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     0,     0,
     643,     0,  -255,     0,   412,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   330,     0,
       0,     0,     0,     0,     0,   167,     0,   549,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   331,   332,   333,     0,   168,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   169,     0,   685,     0,   170,
     171,   334,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   182,   182,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,   727,   727,     0,     0,     0,
       0,     0,     0,   727,     0,     0,     0,     0,     0,     0,
       0,   122,     1,     2,     3,     4,     5,     6,     7,   727,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,    32,     0,   123,    33,    34,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,    85,    86,    87,    88,     0,    89,
      90,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   117,     1,     2,     3,     4,
       5,     6,     7,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,     0,    33,     0,    35,    36,    37,    38,    39,    40,
       0,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,     0,    85,    86,
      87,    88,     0,     0,    90,    91,    92,    93,     0,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,     1,
       2,     3,     4,     5,     6,     7,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     0,    32,     0,     0,    33,    34,    35,    36,    37,
      38,    39,    40,     0,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    84,
       0,    85,    86,    87,    88,     0,    89,    90,    91,    92,
      93,     0,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     1,     2,     3,     4,     5,     6,     7,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,    32,     0,     0,    33,     0,
      35,    36,    37,    38,    39,    40,     0,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,     0,    85,    86,    87,    88,     0,     0,
      90,    91,    92,    93,     0,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   315,     0,     0,     0,   237,
       0,     0,   238,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   168,     0,     0,     0,   242,    31,     0,     0,
       0,     0,   169,     0,     0,     0,   248,   171,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   237,     0,     0,   238,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,   168,     0,     0,
       0,   242,    31,     0,     0,   274,   131,   169,     0,     0,
       0,   248,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,   237,
       0,     0,   238,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   168,     0,     0,     0,   242,    31,     0,     0,
     274,     0,   169,     0,     0,     0,   248,   171,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   445,     0,     0,   238,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,   168,     0,     0,
       0,     0,    31,     0,     0,   274,     0,   169,     0,     0,
       0,   248,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,   167,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,   168,
       0,     0,     0,     0,    31,     0,     0,     0,     0,   169,
     274,     0,     0,   170,   171,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   325,     0,     0,     0,     0,     0,     0,   167,     0,
       0,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   326,   327,     0,     0,   168,     0,
       0,     0,   308,    31,     0,     0,     0,     0,   169,     0,
       0,     0,   170,   249,   250,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
     130,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,     0,   152,     0,     0,     0,   479,   480,
       0,    37,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,    86,     0,   481,     0,
       0,    90,    91,    92,   482,     0,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   167,     0,     0,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,     0,     0,     0,     0,   168,     0,     0,     0,     0,
      31,     0,     0,     0,     0,   169,     0,     0,     0,   170,
     171,   551,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   552,     0,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   167,     0,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,     0,     0,     0,     0,   168,     0,     0,
       0,     0,    31,     0,     0,     0,     0,   169,     0,     0,
       0,   170,   171,   551,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,   167,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,     0,     0,     0,     0,   168,
       0,     0,     0,     0,    31,     0,     0,     0,     0,   169,
       0,     0,   167,   170,   171,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,     0,     0,
       0,     0,   168,     0,     0,     0,     0,    31,     0,     0,
       0,     0,   169,     0,     0,     0,   170,     0,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   167,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,     0,   169,     0,     7,     0,   170,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,     0,     0,     0,     0,     0,     0,     0,     0,
      37,     0,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83
};

static const yytype_int16 yycheck[] =
{
      34,   164,    43,    44,   339,   172,   173,   341,   491,   180,
     515,   276,   627,   243,   309,   309,    47,   109,   135,   120,
     556,   179,    33,    47,   114,     9,    10,    11,    12,    10,
     197,   121,    78,    10,   570,   152,     3,   635,   155,    37,
      78,   546,    10,   201,    47,   203,    13,    88,    46,   127,
     128,    10,    93,   155,     0,   172,   173,   287,   150,   151,
      44,    84,    78,    44,   222,    10,   571,    44,   402,   110,
     116,   307,    39,    40,    10,   311,    44,   313,   116,    78,
     197,   119,   680,   117,   118,    44,    31,    32,   119,   384,
     384,   121,   133,   185,   125,    31,    32,   214,   634,    44,
     116,   125,   125,   119,   221,    31,    32,   224,    44,   226,
     243,   244,   214,   124,   409,   409,   119,   116,   121,   221,
     237,   736,   224,    10,   226,   242,   243,   244,   245,   246,
     425,   425,   747,   114,   399,   237,     3,   114,    31,    32,
     242,   243,   244,   245,   246,   129,   114,    10,   384,   307,
     117,   703,   244,   311,   287,   313,   120,    44,   710,   276,
      47,   495,   115,   498,    51,    52,   126,   672,    31,    32,
     287,   407,    39,   507,   276,   243,   244,   511,   114,   120,
     416,    44,   127,   128,   420,   287,   117,   118,    10,   322,
      10,   127,   128,   116,   430,   431,   432,   433,    31,    32,
     683,   127,   128,    10,   116,   322,    31,    32,   118,    31,
      32,   344,   169,   247,    10,   169,   117,    31,    32,   287,
     322,   556,    44,    30,    44,   122,   521,   344,   523,   400,
     187,    51,    52,   187,   127,   128,   193,    44,   125,   193,
     575,   122,   344,   200,   117,    78,   200,   581,    44,    37,
     584,   114,   114,   114,   322,   118,   213,   118,   121,   213,
     121,    78,   122,   221,   127,   128,   224,    10,   226,   310,
     121,   312,   430,   431,   432,     9,    10,    11,    12,   119,
       3,    13,   399,    15,    16,    17,    18,    30,    10,    21,
      13,    34,   114,   119,   127,   128,   591,   399,    10,    10,
     635,    44,   127,   128,    10,   127,   128,   341,    51,    52,
      44,   645,   646,   127,   128,   119,    39,    40,    30,    30,
     119,   119,    44,    34,    30,   366,   118,   120,   445,   122,
     119,   372,    44,    44,   119,    10,   119,   119,    44,    51,
      52,   119,   119,   445,   119,   680,    10,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,   475,    34,
     401,     4,     5,     6,   193,   119,    30,   119,   402,    44,
      34,   200,   286,   414,   288,   289,   290,   418,   119,   119,
      44,   119,   119,   119,   213,   120,   119,   721,   119,   119,
     119,   115,   119,   434,   122,   121,   117,   117,   515,   114,
     119,   119,     9,   317,   318,   121,   320,   321,   121,   323,
     324,   121,   121,   130,   118,   122,   121,   119,   115,   115,
     121,   121,   114,   114,   114,   592,   121,   120,   122,   546,
       9,    30,   135,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   161,   122,   120,   164,   120,   122,
     115,   121,   115,   120,   571,   126,   125,   125,   120,   120,
     115,   495,   121,   121,   115,   121,   115,   121,   115,   122,
     120,   115,   120,   507,   120,   592,   517,   511,   120,   596,
     597,   648,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   122,   122,   121,   121,   214,   122,   119,
     122,   120,   119,   126,   122,   126,   669,   670,   121,   121,
     627,   126,   121,   121,   120,   119,   119,   122,   120,   236,
     121,   121,   239,   240,   120,   122,   243,   244,   121,   121,
     120,   648,   120,   120,   651,   120,   120,   120,   120,   120,
     120,   151,   120,   120,   185,   120,   122,   581,   122,   120,
     584,   668,   124,   120,   122,   672,   121,   274,   120,   276,
     120,   120,   666,   120,   122,   120,   120,   120,   246,   121,
     287,   122,   121,   121,   120,   616,   120,   119,   244,   296,
     120,   120,   391,   308,   173,   614,   246,   747,   736,   246,
     116,   308,   309,   668,   246,   229,   726,   400,   315,   244,
     125,   385,   319,    -1,    -1,   322,   245,    -1,   325,   326,
     327,   645,   646,   330,   331,   332,    -1,    -1,    -1,   736,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   344,   345,    -1,
     747,    -1,   349,   350,    -1,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   384,    -1,   386,
     387,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   399,    -1,    -1,    -1,    -1,   721,    -1,    -1,
      -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   425,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,
     447,    -1,   449,   450,   451,    -1,    -1,   454,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   473,     3,     4,     5,
       6,     7,    -1,    -1,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    30,    -1,    -1,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    44,    45,
      46,    -1,    48,    -1,   521,    -1,   523,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   544,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
     587,    -1,   118,    -1,   591,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    10,    -1,   614,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    30,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,   644,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   669,   670,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   702,   703,    -1,    -1,    -1,
      -1,    -1,    -1,   710,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,   726,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,   117,   118,   119,    -1,   121,
     122,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      -1,    -1,    40,    -1,    42,    43,    44,    45,    46,    47,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,   117,
     118,   119,    -1,    -1,   122,   123,   124,   125,    -1,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,     4,
       5,     6,     7,     8,     9,    10,    -1,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    -1,    -1,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,
      -1,   116,   117,   118,   119,    -1,   121,   122,   123,   124,
     125,    -1,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     4,     5,     6,     7,     8,     9,    10,    -1,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    -1,    37,    -1,    -1,    40,    -1,
      42,    43,    44,    45,    46,    47,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   114,    -1,   116,   117,   118,   119,    -1,    -1,
     122,   123,   124,   125,    -1,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,     3,    -1,    -1,    -1,     7,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    34,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     7,    -1,    -1,    10,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    34,    35,    -1,    -1,   123,    39,    40,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,     7,
      -1,    -1,    10,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    34,    35,    -1,    -1,
     123,    -1,    40,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     7,    -1,    -1,    10,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,   123,    -1,    40,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    10,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
     123,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,     3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    30,    -1,
      -1,    -1,   123,    35,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    10,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    -1,    37,    -1,    -1,    -1,    49,    50,
      -1,    44,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   116,   117,    -1,   119,    -1,
      -1,   122,   123,   124,   125,    -1,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    10,    -1,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    10,    -1,    -1,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    44,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    10,
      -1,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    10,    44,    45,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    10,    -1,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    10,    -1,    44,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    37,    40,    41,    42,    43,    44,    45,    46,
      47,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,   114,   116,   117,   118,   119,   121,
     122,   123,   124,   125,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   138,   229,   230,   232,   262,   263,
     267,   268,   269,   270,   271,   272,   231,     3,   268,   273,
     263,   263,     3,    39,   265,   266,   267,   263,   263,     0,
       3,    39,   139,   140,   141,   157,   263,   232,   273,   273,
     121,   120,   120,   115,   265,   120,   126,    10,    44,   195,
     116,   263,    37,   141,   229,   116,   142,     3,    13,    40,
     117,   157,   158,   159,   160,   139,   229,    10,    30,    40,
      44,    45,   193,   194,   216,   217,   221,   224,   227,   229,
     118,   233,   195,   208,   117,   122,   208,    78,   116,    10,
      44,   221,   227,    78,   116,    37,   217,   193,   217,   122,
      78,   218,   117,   219,    31,    32,   127,   128,   228,     4,
       5,     6,   234,   236,   114,   158,    10,    44,   221,   226,
     227,   223,   220,   226,   222,   217,   225,   226,   228,   143,
     228,    31,    32,   127,   128,   226,     3,     7,    10,    26,
      27,    28,    34,    36,    37,    38,    41,    43,    44,    45,
      46,    48,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   123,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   154,   155,   156,   157,   161,   162,
     163,   164,   181,   184,   195,   210,   216,   236,   239,   224,
     228,   224,   224,   233,   127,   128,   235,   195,   123,   216,
     114,   195,   114,   195,   216,     3,   152,   162,   163,   216,
     155,   156,   157,   162,   163,     3,    26,    27,   210,   216,
       3,    26,    27,    28,    46,   146,   147,   148,   149,   216,
     264,   268,    46,   121,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   189,   191,   195,
     115,   144,   114,   121,   196,   196,   152,   162,   163,   196,
     196,   196,   182,   119,    30,    34,    51,    52,   168,   171,
     174,   179,   195,   211,   213,   118,   121,   117,   117,   114,
     122,   114,   118,   121,   153,   195,   211,   228,   189,    30,
     168,   174,   195,   263,   114,   211,   228,   263,   114,   211,
     228,   119,   195,   196,   196,    30,   196,   196,   196,   196,
     195,   195,   195,    30,   114,   195,   195,   195,   121,    51,
      52,   213,   121,   264,   121,     7,   162,   216,   195,   241,
     243,   244,   195,   195,   248,   195,   195,   195,   195,   195,
     195,   195,   195,   195,   195,   195,   195,   195,   195,   263,
     190,   119,   263,   118,   186,   185,   168,   174,   211,    49,
      50,   119,   125,   261,   262,   195,   195,    33,   124,   169,
     177,   175,   177,    47,   119,   125,   214,   121,   122,   144,
     234,   263,   264,   121,   211,   168,   174,   115,   263,   121,
     211,   115,   263,   121,   211,   165,   263,   114,   195,   195,
     121,   216,   120,    30,   122,   195,   195,   195,   122,   122,
     195,   250,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   120,   120,   122,   120,   192,   115,   188,   195,
     183,    46,    77,   200,   201,   203,   216,   121,   125,   125,
     120,   126,   172,   120,   120,     9,     9,    30,   178,   178,
     215,   180,   264,   212,   213,   228,   115,   115,   121,   121,
     264,   115,   121,   264,   115,   121,   200,   115,   263,   120,
     120,    30,   240,   122,   120,   120,   245,   247,   122,   122,
     251,   253,   255,   257,   252,   254,   256,   258,   259,   260,
     195,   121,   200,   121,   122,   187,   119,   120,   202,    51,
      52,   213,   214,   126,   126,   119,    47,   119,   121,   121,
     170,   176,   214,   200,   126,   122,   213,   121,   121,   264,
     121,   264,   120,   195,   115,   119,   119,   217,   242,   229,
     229,   249,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   229,   120,   122,   120,   188,   263,   122,   206,
     205,   204,   173,   121,   197,   198,   203,   120,   214,   212,
     122,   121,   121,   166,   121,   195,   264,   264,   120,   217,
     246,   120,   229,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   122,   122,   120,   187,   120,   201,   208,   208,
     124,   209,   200,   120,   199,   212,   178,   121,   120,   120,
     120,   122,   120,     9,    11,    12,   129,   195,   237,   238,
     237,   120,   120,   237,   120,   121,   122,   167,   121,   121,
     264,   238,   120,   120,   119,   198,   120,   207,   197,   120
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
        case 9:

/* Line 1455 of yacc.c  */
#line 375 "vtkParse.y"
    {
        start_class((yyvsp[(2) - (2)].str));
      }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 380 "vtkParse.y"
    {
        start_class((yyvsp[(2) - (5)].str));
      }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 400 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 401 "vtkParse.y"
    { reject_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 402 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 403 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 404 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 405 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 406 "vtkParse.y"
    { reject_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 407 "vtkParse.y"
    { output_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 408 "vtkParse.y"
    { reject_function(); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 409 "vtkParse.y"
    { reject_function(); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 410 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 459 "vtkParse.y"
    { preSig("~"); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 460 "vtkParse.y"
    { preSig("virtual ~"); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 463 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 467 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 471 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 476 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 483 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 487 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 491 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 495 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 500 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 505 "vtkParse.y"
    { postSig("("); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 506 "vtkParse.y"
    { postSig(")"); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 507 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 508 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(2) - (9)].integer);
      openSig = 1;
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      preSig("operator ");
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 517 "vtkParse.y"
    { postSig(")"); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 517 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 518 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(2) - (4)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (4)].str));
    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 524 "vtkParse.y"
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

  case 95:

/* Line 1455 of yacc.c  */
#line 534 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 535 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
    }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 541 "vtkParse.y"
    { postSig(")"); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 541 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 542 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 548 "vtkParse.y"
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

  case 102:

/* Line 1455 of yacc.c  */
#line 558 "vtkParse.y"
    {postSig(") = 0;");}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 559 "vtkParse.y"
    {postSig(") const = 0;");}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 561 "vtkParse.y"
    {postSig(" const");}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 563 "vtkParse.y"
    {postSig("("); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 565 "vtkParse.y"
    { postSig(")"); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 566 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 567 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 573 "vtkParse.y"
    { postSig("("); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 581 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 582 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + 2);
      currentFunction->Name[0] = '~';
      strcpy(&currentFunction->Name[1], (yyvsp[(1) - (2)].str));
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 590 "vtkParse.y"
    { postSig("(");}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 592 "vtkParse.y"
    {postSig("const ");}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 594 "vtkParse.y"
    {postSig("static ");}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 595 "vtkParse.y"
    {postSig("static ");}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 597 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 597 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 605 "vtkParse.y"
    { postSig(", ");}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 609 "vtkParse.y"
    { currentFunction->NumberOfArguments++;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 610 "vtkParse.y"
    { currentFunction->NumberOfArguments++; postSig(", ");}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 613 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 620 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START;
    }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 627 "vtkParse.y"
    {
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_FUNCTION;
    }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 632 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 633 "vtkParse.y"
    {
      postSig(") ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 638 "vtkParse.y"
    { postSig("(*"); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 639 "vtkParse.y"
    { postSig(")("); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 640 "vtkParse.y"
    {
      postSig(")");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 650 "vtkParse.y"
    {delSig();}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 651 "vtkParse.y"
    {delSig();}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 652 "vtkParse.y"
    {delSig();}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 653 "vtkParse.y"
    {delSig();}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 654 "vtkParse.y"
    {delSig();}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 655 "vtkParse.y"
    {delSig();}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 656 "vtkParse.y"
    {delSig();}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 657 "vtkParse.y"
    {delSig();}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 658 "vtkParse.y"
    {delSig();}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    {delSig();}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    {delSig();}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 661 "vtkParse.y"
    {delSig();}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 662 "vtkParse.y"
    {delSig();}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 663 "vtkParse.y"
    {delSig();}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 672 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 680 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 681 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 683 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_POINTER + (VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) + ((yyvsp[(3) - (3)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
    { postSig("[]"); (yyval.integer) = VTK_PARSE_POINTER + ((yyvsp[(4) - (4)].integer) & VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 687 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_CONST + (yyvsp[(2) - (2)].integer);}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 689 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_STATIC + (yyvsp[(2) - (2)].integer);}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 690 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | VTK_PARSE_STATIC) + (yyvsp[(3) - (3)].integer);}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 692 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 694 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (2)].integer) + (yyvsp[(2) - (2)].integer);}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 695 "vtkParse.y"
    {postSig(" "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 696 "vtkParse.y"
    {postSig(" ");}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 698 "vtkParse.y"
    {postSig(" "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    {postSig(" ");}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 701 "vtkParse.y"
    {postSig(" "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    {postSig(" ");}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); postSig(">");}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 707 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (5)].str); postSig(">");}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    {postSig(", ");}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 715 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 724 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 730 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 743 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 744 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 746 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 748 "vtkParse.y"
    { postSig("* const&"); (yyval.integer) = VTK_PARSE_POINTER_CONST_REF;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    { postSig("* const*"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    { postSig("**&"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 752 "vtkParse.y"
    { postSig("***"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 753 "vtkParse.y"
    { postSig("const&"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    { postSig("const*"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { postSig("istream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 759 "vtkParse.y"
    { postSig("vtkStdString "); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 761 "vtkParse.y"
    { postSig("vtkUnicodeString "); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 763 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_UNKNOWN;
    }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    {
      char ctmpid[2048];
      sprintf(ctmpid,"%s ",(yyvsp[(1) - (1)].str));
      postSig(ctmpid);
      (yyval.integer) = VTK_PARSE_VTK_OBJECT;
      currentFunction->ArgClasses[currentFunction->NumberOfArguments] =
        vtkstrdup((yyvsp[(1) - (1)].str));
      if ((!currentFunction->ReturnClass) &&
          (!currentFunction->NumberOfArguments))
        {
        currentFunction->ReturnClass = vtkstrdup((yyvsp[(1) - (1)].str));
        }
    }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 785 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 786 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 787 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 788 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 789 "vtkParse.y"
    {postSig("signed char "); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 790 "vtkParse.y"
    {postSig("unsigned ");}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 791 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_UNSIGNED + (yyvsp[(3) - (3)].integer);}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 792 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 795 "vtkParse.y"
    { postSig("vtkTypeInt8 "); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 796 "vtkParse.y"
    { postSig("vtkTypeUInt8 "); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 797 "vtkParse.y"
    { postSig("vtkTypeInt16 "); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 798 "vtkParse.y"
    { postSig("vtkTypeUInt16 "); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 799 "vtkParse.y"
    { postSig("vtkTypeInt32 "); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 800 "vtkParse.y"
    { postSig("vtkTypeUInt32 "); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 801 "vtkParse.y"
    { postSig("vtkTypeInt64 "); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 802 "vtkParse.y"
    { postSig("vtkTypeUInt64 "); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 803 "vtkParse.y"
    { postSig("vtkTypeFloat32 "); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 804 "vtkParse.y"
    { postSig("vtkTypeFloat64 "); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 805 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 806 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 807 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 808 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
    { postSig("vtkIdType "); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 810 "vtkParse.y"
    { postSig("long long "); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 811 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 816 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 832 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 833 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 834 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 835 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 839 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 840 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 841 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 842 "vtkParse.y"
    {(yyval.integer) = -1;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 846 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 847 "vtkParse.y"
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

  case 267:

/* Line 1455 of yacc.c  */
#line 857 "vtkParse.y"
    {postSig("Get");}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 857 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 859 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(7) - (8)].integer);
   output_function();
   }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 866 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 867 "vtkParse.y"
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

  case 272:

/* Line 1455 of yacc.c  */
#line 877 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 878 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   output_function();
   }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 887 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 888 "vtkParse.y"
    {postSig(");"); openSig = 0;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 889 "vtkParse.y"
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

  case 277:

/* Line 1455 of yacc.c  */
#line 919 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 920 "vtkParse.y"
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

  case 279:

/* Line 1455 of yacc.c  */
#line 930 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 931 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 932 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   output_function();
   }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 940 "vtkParse.y"
    {preSig("void "); postSig("On();"); openSig = 0; }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 942 "vtkParse.y"
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

  case 284:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
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

  case 286:

/* Line 1455 of yacc.c  */
#line 987 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 992 "vtkParse.y"
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

  case 288:

/* Line 1455 of yacc.c  */
#line 1004 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1009 "vtkParse.y"
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

  case 290:

/* Line 1455 of yacc.c  */
#line 1036 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1041 "vtkParse.y"
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

  case 292:

/* Line 1455 of yacc.c  */
#line 1053 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1058 "vtkParse.y"
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

  case 294:

/* Line 1455 of yacc.c  */
#line 1087 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1092 "vtkParse.y"
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

  case 296:

/* Line 1455 of yacc.c  */
#line 1104 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1109 "vtkParse.y"
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

  case 298:

/* Line 1455 of yacc.c  */
#line 1142 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1147 "vtkParse.y"
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

  case 300:

/* Line 1455 of yacc.c  */
#line 1159 "vtkParse.y"
    {
      free(currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1164 "vtkParse.y"
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

  case 302:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1182 "vtkParse.y"
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

  case 304:

/* Line 1455 of yacc.c  */
#line 1194 "vtkParse.y"
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

  case 305:

/* Line 1455 of yacc.c  */
#line 1241 "vtkParse.y"
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

  case 306:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
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

  case 307:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
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

  case 308:

/* Line 1455 of yacc.c  */
#line 1397 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1398 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1400 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1403 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1404 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1404 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1405 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1405 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1406 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1406 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1407 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1407 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1408 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1408 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1409 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1409 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1410 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1411 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1412 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1413 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1414 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1415 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1417 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1418 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1419 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1420 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1421 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1422 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1423 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1424 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1425 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1426 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1427 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1428 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1429 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1430 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1431 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1432 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1433 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1434 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1435 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1436 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 5235 "vtkParse.tab.c"
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
#line 1466 "vtkParse.y"

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

