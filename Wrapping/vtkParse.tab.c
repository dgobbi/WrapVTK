
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
      i = m;
      while (i > 0 &&
            ((cp[i-1] >= 'a' && cp[i-1] <= 'z') ||
             (cp[i-1] >= 'A' && cp[i-1] <= 'Z') ||
             (cp[i-1] >= '0' && cp[i-1] <= '9') ||
             cp[i-1] == '_' || cp[i-1] == ':'))
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
     ID = 263,
     STRING_LITERAL = 264,
     INT_LITERAL = 265,
     HEX_LITERAL = 266,
     FLOAT_LITERAL = 267,
     CHAR_LITERAL = 268,
     INT = 269,
     FLOAT = 270,
     SHORT = 271,
     LONG = 272,
     LONG_LONG = 273,
     INT64__ = 274,
     DOUBLE = 275,
     VOID = 276,
     CHAR = 277,
     SIGNED_CHAR = 278,
     BOOL = 279,
     OSTREAM = 280,
     ISTREAM = 281,
     ENUM = 282,
     UNION = 283,
     CLASS_REF = 284,
     OTHER = 285,
     CONST = 286,
     CONST_PTR = 287,
     CONST_REF = 288,
     CONST_EQUAL = 289,
     OPERATOR = 290,
     UNSIGNED = 291,
     FRIEND = 292,
     INLINE = 293,
     MUTABLE = 294,
     TEMPLATE = 295,
     TYPENAME = 296,
     TYPEDEF = 297,
     NAMESPACE = 298,
     USING = 299,
     VTK_ID = 300,
     STATIC = 301,
     VAR_FUNCTION = 302,
     ARRAY_NUM = 303,
     VTK_LEGACY = 304,
     NEW = 305,
     DELETE = 306,
     LPAREN_POINTER = 307,
     LPAREN_AMPERSAND = 308,
     OP_LSHIFT_EQ = 309,
     OP_RSHIFT_EQ = 310,
     OP_LSHIFT = 311,
     OP_RSHIFT = 312,
     OP_ARROW_POINTER = 313,
     OP_ARROW = 314,
     OP_INCR = 315,
     OP_DECR = 316,
     OP_PLUS_EQ = 317,
     OP_MINUS_EQ = 318,
     OP_TIMES_EQ = 319,
     OP_DIVIDE_EQ = 320,
     OP_REMAINDER_EQ = 321,
     OP_AND_EQ = 322,
     OP_OR_EQ = 323,
     OP_XOR_EQ = 324,
     OP_LOGIC_AND_EQ = 325,
     OP_LOGIC_OR_EQ = 326,
     OP_LOGIC_AND = 327,
     OP_LOGIC_OR = 328,
     OP_LOGIC_EQ = 329,
     OP_LOGIC_NEQ = 330,
     OP_LOGIC_LEQ = 331,
     OP_LOGIC_GEQ = 332,
     ELLIPSIS = 333,
     DOUBLE_COLON = 334,
     TypeInt8 = 335,
     TypeUInt8 = 336,
     TypeInt16 = 337,
     TypeUInt16 = 338,
     TypeInt32 = 339,
     TypeUInt32 = 340,
     TypeInt64 = 341,
     TypeUInt64 = 342,
     TypeFloat32 = 343,
     TypeFloat64 = 344,
     IdType = 345,
     StdString = 346,
     UnicodeString = 347,
     SetMacro = 348,
     GetMacro = 349,
     SetStringMacro = 350,
     GetStringMacro = 351,
     SetClampMacro = 352,
     SetObjectMacro = 353,
     GetObjectMacro = 354,
     BooleanMacro = 355,
     SetVector2Macro = 356,
     SetVector3Macro = 357,
     SetVector4Macro = 358,
     SetVector6Macro = 359,
     GetVector2Macro = 360,
     GetVector3Macro = 361,
     GetVector4Macro = 362,
     GetVector6Macro = 363,
     SetVectorMacro = 364,
     GetVectorMacro = 365,
     ViewportCoordinateMacro = 366,
     WorldCoordinateMacro = 367,
     TypeMacro = 368,
     VTK_BYTE_SWAP_DECL = 369
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
#line 573 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 585 "vtkParse.tab.c"

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
#define YYFINAL  131
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2476

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  138
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  144
/* YYNRULES -- Number of rules.  */
#define YYNRULES  422
/* YYNRULES -- Number of states.  */
#define YYNSTATES  774

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   369

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   133,     2,     2,     2,   136,   128,     2,
     120,   121,   129,   130,   123,   131,   137,   132,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   119,   122,
     117,   125,   118,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   126,     2,   127,   135,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   115,   134,   116,   124,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114
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
     496,   497,   499,   500,   502,   505,   510,   516,   521,   527,
     532,   538,   542,   547,   550,   554,   560,   566,   573,   582,
     591,   593,   597,   599,   603,   606,   611,   614,   617,   618,
     620,   621,   625,   630,   633,   635,   638,   642,   644,   647,
     649,   650,   654,   656,   657,   661,   664,   665,   670,   671,
     677,   678,   684,   686,   687,   692,   694,   696,   698,   700,
     704,   708,   712,   714,   716,   719,   722,   725,   728,   730,
     732,   733,   738,   739,   744,   745,   749,   750,   754,   756,
     758,   760,   762,   764,   766,   768,   770,   772,   774,   776,
     778,   780,   782,   784,   786,   788,   790,   792,   794,   796,
     798,   799,   803,   805,   807,   809,   811,   813,   815,   817,
     819,   820,   823,   826,   827,   833,   834,   836,   838,   840,
     842,   845,   848,   850,   854,   856,   858,   860,   862,   864,
     866,   867,   875,   876,   877,   886,   887,   893,   894,   900,
     901,   902,   913,   914,   922,   923,   924,   933,   934,   942,
     943,   951,   952,   960,   961,   969,   970,   978,   979,   987,
     988,   996,   997,  1005,  1006,  1014,  1015,  1025,  1026,  1036,
    1041,  1046,  1053,  1061,  1064,  1067,  1071,  1075,  1077,  1079,
    1081,  1083,  1085,  1087,  1089,  1091,  1093,  1095,  1097,  1099,
    1101,  1103,  1105,  1107,  1109,  1111,  1113,  1115,  1117,  1119,
    1121,  1123,  1125,  1127,  1129,  1131,  1133,  1135,  1137,  1139,
    1141,  1143,  1145,  1147,  1149,  1151,  1153,  1155,  1157,  1158,
    1161,  1162,  1165,  1166,  1169,  1171,  1173,  1175,  1177,  1179,
    1181,  1183,  1185,  1187,  1189,  1191,  1193,  1195,  1197,  1199,
    1201,  1203,  1205,  1207,  1209,  1211,  1213,  1215,  1217,  1219,
    1221,  1223,  1225,  1227,  1229,  1231,  1233,  1235,  1237,  1239,
    1241,  1243,  1245,  1247,  1249,  1253,  1257,  1261,  1265,  1269,
    1273,  1274,  1277
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     139,     0,    -1,   271,   140,    -1,    -1,   141,   271,   140,
      -1,   158,   237,    -1,   158,    38,   237,    -1,   158,   142,
      -1,   142,    -1,    -1,     3,   196,   143,   241,   115,   145,
     116,    -1,    -1,     3,   196,   117,   228,   118,   144,   241,
     115,   145,   116,    -1,    -1,   146,   145,    -1,   244,   119,
      -1,   212,    -1,    39,   212,    -1,   148,    -1,   147,    -1,
     150,    -1,   149,    -1,   151,    -1,   155,    -1,   153,    -1,
      37,   153,    -1,   152,    -1,    29,    -1,   164,   197,    -1,
      37,   164,   197,    -1,    38,   164,   197,    -1,   157,   197,
      -1,    38,   157,   197,    -1,   163,   197,    -1,    37,   163,
     197,    -1,    38,   163,   197,    -1,   156,   197,    -1,    38,
     156,   197,    -1,   162,   197,    -1,   114,   120,   271,   121,
     122,    -1,   247,   122,    -1,   247,    -1,    27,   196,   115,
     271,   116,   272,   122,    -1,    27,   115,   271,   116,   272,
     122,    -1,    28,   196,   115,   271,   116,   272,   122,    -1,
      28,   115,   271,   116,   272,   122,    -1,    44,   272,   122,
      -1,   158,   153,    -1,     3,   196,   154,    -1,   122,    -1,
     115,   271,   116,   122,    -1,   119,   272,   122,    -1,    42,
     220,   216,   122,    -1,    42,    29,    -1,    42,     3,   196,
     115,   271,   116,   196,   122,    -1,    42,     3,   115,   271,
     116,   196,   122,    -1,    42,   220,    52,   196,   121,   120,
     272,   121,   122,    -1,    42,   220,    53,   196,   121,   120,
     272,   121,   122,    -1,    42,   148,    -1,    42,   147,    -1,
      42,   150,    -1,    42,   149,    -1,    42,    47,   122,    -1,
     158,   163,    -1,   158,   164,    -1,    40,   117,   118,    -1,
      40,   117,   159,   118,    -1,   160,    -1,   160,   123,   159,
      -1,   161,   209,    -1,   158,   209,    -1,    41,    -1,     3,
      -1,    14,    -1,    49,   120,   163,   121,    -1,   124,   190,
      -1,     7,   124,   190,    -1,   182,    -1,   220,   175,    -1,
     220,    31,   175,    -1,     7,   220,    31,   175,    -1,     7,
     220,   175,    -1,   165,    -1,   220,   169,    -1,   220,    31,
     169,    -1,     7,   220,    31,   169,    -1,     7,   220,   169,
      -1,    -1,    -1,    -1,    35,   220,   120,   166,   201,   121,
     167,   179,   168,    -1,    -1,    -1,   172,   170,   179,   171,
      -1,   172,   178,    -1,    -1,    -1,    35,   269,   173,   120,
     174,   201,   121,    -1,    -1,    -1,   180,   176,   179,   177,
      -1,   180,   178,    -1,   125,    10,    -1,    34,    10,    -1,
      -1,    31,    -1,    -1,   196,   120,   181,   201,   121,    -1,
      -1,    -1,   185,   183,   187,   184,    -1,    -1,   196,   120,
     186,   201,   121,    -1,    -1,   119,   189,   188,    -1,    -1,
     123,   189,   188,    -1,   196,   120,   271,   121,    -1,    -1,
     192,   191,    -1,    -1,   196,   120,   193,   201,   121,    -1,
      31,    -1,    46,    -1,    46,    38,    -1,    45,    -1,     8,
      -1,   122,    -1,   115,   271,   116,   122,    -1,   115,   271,
     116,    -1,    -1,   199,    -1,   204,    -1,    -1,   204,   200,
     123,   199,    -1,    -1,   202,    -1,    78,    -1,   204,    -1,
      -1,   204,   203,   123,   202,    -1,   220,   217,    -1,    -1,
     220,   216,   205,   210,    -1,    47,    -1,    -1,   220,    53,
     206,   209,   121,    -1,    -1,    -1,   220,    52,   207,   209,
     121,   120,   208,   198,   121,    -1,    -1,   196,    -1,    -1,
     211,    -1,   125,   245,    -1,     3,   196,   213,   122,    -1,
       3,   196,   232,   213,   122,    -1,    27,   196,   213,   122,
      -1,    27,   196,   232,   213,   122,    -1,    28,   196,   213,
     122,    -1,    28,   196,   232,   213,   122,    -1,   220,   213,
     122,    -1,   220,    31,   213,   122,    -1,    47,   122,    -1,
      46,    47,   122,    -1,   220,    53,   196,   121,   122,    -1,
     220,    52,   196,   121,   122,    -1,   220,    52,   196,   121,
      48,   122,    -1,   220,    52,   196,   121,   126,   271,   127,
     122,    -1,   220,    52,   196,   121,   120,   198,   121,   122,
      -1,   215,    -1,   215,   123,   214,    -1,   215,    -1,   215,
     123,   214,    -1,   232,   215,    -1,   232,   215,   123,   214,
      -1,   216,   210,    -1,   196,   217,    -1,    -1,   218,    -1,
      -1,    48,   219,   217,    -1,   126,   272,   127,   217,    -1,
     194,   221,    -1,   221,    -1,   195,   221,    -1,   195,   194,
     221,    -1,   237,    -1,   237,   232,    -1,   225,    -1,    -1,
     225,   222,   232,    -1,   231,    -1,    -1,   231,   223,   232,
      -1,    41,   231,    -1,    -1,    41,   231,   224,   232,    -1,
      -1,    45,   117,   226,   228,   118,    -1,    -1,     8,   117,
     227,   228,   118,    -1,   220,    -1,    -1,   220,   123,   229,
     228,    -1,     8,    -1,    45,    -1,   225,    -1,   231,    -1,
       8,    79,   230,    -1,    45,    79,   230,    -1,   225,    79,
     230,    -1,   128,    -1,   129,    -1,   129,   128,    -1,   129,
     129,    -1,   129,    33,    -1,   129,    32,    -1,    33,    -1,
      32,    -1,    -1,   129,   129,   233,   232,    -1,    -1,   129,
     128,   234,   232,    -1,    -1,    33,   235,   232,    -1,    -1,
      32,   236,   232,    -1,   238,    -1,    91,    -1,    92,    -1,
      25,    -1,    26,    -1,     8,    -1,    45,    -1,    21,    -1,
      15,    -1,    20,    -1,    24,    -1,    23,    -1,    80,    -1,
      81,    -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,
      86,    -1,    87,    -1,    88,    -1,    89,    -1,    -1,    36,
     239,   240,    -1,   240,    -1,    22,    -1,    14,    -1,    16,
      -1,    17,    -1,    90,    -1,    18,    -1,    19,    -1,    -1,
     119,   242,    -1,   244,   230,    -1,    -1,   244,   230,   243,
     123,   242,    -1,    -1,     4,    -1,     5,    -1,     6,    -1,
     246,    -1,   130,   246,    -1,   131,   246,    -1,     9,    -1,
     120,   245,   121,    -1,    10,    -1,    11,    -1,    12,    -1,
      13,    -1,     8,    -1,    45,    -1,    -1,    93,   120,   196,
     123,   248,   221,   121,    -1,    -1,    -1,    94,   120,   249,
     196,   123,   250,   221,   121,    -1,    -1,    95,   120,   251,
     196,   121,    -1,    -1,    96,   120,   252,   196,   121,    -1,
      -1,    -1,    97,   120,   196,   123,   253,   237,   254,   123,
     272,   121,    -1,    -1,    98,   120,   196,   123,   255,   237,
     121,    -1,    -1,    -1,    99,   120,   256,   196,   123,   257,
     237,   121,    -1,    -1,   100,   120,   196,   258,   123,   237,
     121,    -1,    -1,   101,   120,   196,   123,   259,   237,   121,
      -1,    -1,   105,   120,   196,   123,   260,   237,   121,    -1,
      -1,   102,   120,   196,   123,   261,   237,   121,    -1,    -1,
     106,   120,   196,   123,   262,   237,   121,    -1,    -1,   103,
     120,   196,   123,   263,   237,   121,    -1,    -1,   107,   120,
     196,   123,   264,   237,   121,    -1,    -1,   104,   120,   196,
     123,   265,   237,   121,    -1,    -1,   108,   120,   196,   123,
     266,   237,   121,    -1,    -1,   109,   120,   196,   123,   267,
     237,   123,    10,   121,    -1,    -1,   110,   120,   196,   123,
     268,   237,   123,    10,   121,    -1,   111,   120,   196,   121,
      -1,   112,   120,   196,   121,    -1,   113,   120,   196,   123,
     196,   121,    -1,   113,   120,   196,   123,   196,   123,   121,
      -1,   120,   121,    -1,   126,   127,    -1,    50,   126,   127,
      -1,    51,   126,   127,    -1,   270,    -1,   125,    -1,   129,
      -1,   132,    -1,   131,    -1,   130,    -1,   133,    -1,   124,
      -1,   123,    -1,   117,    -1,   118,    -1,   128,    -1,   134,
      -1,   135,    -1,   136,    -1,    50,    -1,    51,    -1,    54,
      -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,    59,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,
      -1,    60,    -1,    61,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    -1,   275,   271,
      -1,    -1,   276,   272,    -1,    -1,   274,   273,    -1,     3,
      -1,    40,    -1,   275,    -1,   122,    -1,   276,    -1,   280,
      -1,    30,    -1,   277,    -1,   278,    -1,   279,    -1,   270,
      -1,   119,    -1,   137,    -1,   237,    -1,    79,    -1,    10,
      -1,    11,    -1,    12,    -1,    13,    -1,     9,    -1,    29,
      -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,    35,
      -1,    46,    -1,    38,    -1,     7,    -1,    27,    -1,    28,
      -1,    41,    -1,    48,    -1,    47,    -1,    78,    -1,     4,
      -1,     6,    -1,     5,    -1,    43,    -1,    44,    -1,   115,
     273,   116,    -1,   120,   271,   121,    -1,    52,   271,   121,
      -1,    53,   271,   121,    -1,   126,   271,   127,    -1,    42,
     281,   122,    -1,    -1,     3,   281,    -1,   276,   281,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   368,   368,   370,   370,   372,   372,   373,   373,   376,
     375,   381,   380,   386,   386,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   416,   418,   420,   422,   424,   426,   428,   430,
     431,   432,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   446,   448,   450,   450,   452,   452,   454,
     454,   456,   456,   456,   458,   460,   461,   462,   463,   467,
     471,   476,   483,   487,   491,   495,   500,   506,   507,   508,
     506,   518,   518,   518,   524,   535,   536,   535,   542,   542,
     542,   548,   559,   560,   562,   562,   564,   564,   566,   567,
     566,   574,   574,   576,   576,   578,   578,   580,   582,   582,
     591,   591,   593,   595,   596,   598,   598,   600,   601,   602,
     604,   604,   606,   606,   606,   608,   608,   610,   610,   611,
     611,   613,   621,   620,   627,   633,   633,   639,   640,   639,
     647,   647,   649,   649,   651,   653,   654,   655,   656,   657,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     669,   670,   672,   673,   674,   675,   678,   680,   688,   688,
     691,   691,   697,   702,   703,   704,   706,   709,   710,   712,
     713,   713,   715,   716,   716,   718,   719,   719,   722,   722,
     724,   724,   727,   727,   727,   729,   730,   731,   732,   734,
     740,   746,   762,   763,   764,   765,   766,   768,   770,   771,
     772,   772,   774,   774,   776,   776,   778,   778,   781,   782,
     783,   785,   786,   787,   793,   808,   809,   810,   811,   812,
     813,   814,   815,   816,   817,   818,   819,   820,   821,   822,
     823,   823,   825,   828,   829,   830,   831,   832,   833,   834,
     836,   836,   838,   847,   846,   855,   856,   857,   858,   860,
     861,   862,   864,   865,   867,   868,   869,   870,   871,   872,
     876,   875,   887,   887,   887,   896,   896,   907,   907,   917,
     918,   916,   949,   948,   960,   961,   960,   970,   969,   987,
     986,  1017,  1016,  1034,  1033,  1066,  1065,  1083,  1082,  1117,
    1116,  1134,  1133,  1172,  1171,  1189,  1188,  1207,  1206,  1223,
    1270,  1319,  1370,  1427,  1428,  1429,  1430,  1431,  1433,  1434,
    1434,  1435,  1435,  1436,  1436,  1437,  1437,  1438,  1438,  1439,
    1439,  1440,  1441,  1442,  1443,  1444,  1445,  1446,  1447,  1448,
    1449,  1450,  1451,  1452,  1453,  1454,  1455,  1456,  1457,  1458,
    1459,  1460,  1461,  1462,  1463,  1464,  1465,  1466,  1471,  1471,
    1472,  1472,  1473,  1473,  1475,  1475,  1475,  1477,  1477,  1477,
    1479,  1479,  1479,  1479,  1480,  1480,  1480,  1480,  1480,  1481,
    1481,  1481,  1481,  1482,  1482,  1482,  1482,  1482,  1482,  1483,
    1483,  1483,  1483,  1483,  1483,  1483,  1484,  1484,  1484,  1484,
    1484,  1484,  1485,  1485,  1487,  1488,  1489,  1490,  1491,  1492,
    1494,  1494,  1495
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PUBLIC", "PRIVATE",
  "PROTECTED", "VIRTUAL", "ID", "STRING_LITERAL", "INT_LITERAL",
  "HEX_LITERAL", "FLOAT_LITERAL", "CHAR_LITERAL", "INT", "FLOAT", "SHORT",
  "LONG", "LONG_LONG", "INT64__", "DOUBLE", "VOID", "CHAR", "SIGNED_CHAR",
  "BOOL", "OSTREAM", "ISTREAM", "ENUM", "UNION", "CLASS_REF", "OTHER",
  "CONST", "CONST_PTR", "CONST_REF", "CONST_EQUAL", "OPERATOR", "UNSIGNED",
  "FRIEND", "INLINE", "MUTABLE", "TEMPLATE", "TYPENAME", "TYPEDEF",
  "NAMESPACE", "USING", "VTK_ID", "STATIC", "VAR_FUNCTION", "ARRAY_NUM",
  "VTK_LEGACY", "NEW", "DELETE", "LPAREN_POINTER", "LPAREN_AMPERSAND",
  "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT", "OP_RSHIFT",
  "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR", "OP_DECR", "OP_PLUS_EQ",
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
  "VTK_BYTE_SWAP_DECL", "'{'", "'}'", "'<'", "'>'", "':'", "'('", "')'",
  "';'", "','", "'~'", "'='", "'['", "']'", "'&'", "'*'", "'+'", "'-'",
  "'/'", "'!'", "'|'", "'^'", "'%'", "'.'", "$accept", "strt",
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
  "$@20", "$@21", "$@22", "$@23", "maybe_id", "maybe_var_assign",
  "var_assign", "var", "var_ids", "maybe_indirect_var_ids",
  "var_id_maybe_assign", "var_id", "maybe_var_array", "var_array", "$@24",
  "type", "type_red1", "$@25", "$@26", "$@27", "templated_id", "$@28",
  "$@29", "types", "$@30", "maybe_scoped_id", "scoped_id",
  "type_indirection", "$@31", "$@32", "$@33", "$@34", "type_red2",
  "type_primitive", "$@35", "type_integer", "optional_scope", "scope_list",
  "$@36", "scope_type", "literal", "literal2", "macro", "$@37", "$@38",
  "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47",
  "$@48", "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56",
  "$@57", "op_token", "op_token_no_delim", "maybe_other",
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
     365,   366,   367,   368,   369,   123,   125,    60,    62,    58,
      40,    41,    59,    44,   126,    61,    91,    93,    38,    42,
      43,    45,    47,    33,   124,    94,    37,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   138,   139,   140,   140,   141,   141,   141,   141,   143,
     142,   144,   142,   145,   145,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     154,   154,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   156,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   161,   162,   163,   163,   163,   163,   163,
     163,   163,   164,   164,   164,   164,   164,   166,   167,   168,
     165,   170,   171,   169,   169,   173,   174,   172,   176,   177,
     175,   175,   178,   178,   179,   179,   181,   180,   183,   184,
     182,   186,   185,   187,   187,   188,   188,   189,   191,   190,
     193,   192,   194,   195,   195,   196,   196,   197,   197,   197,
     198,   198,   199,   200,   199,   201,   201,   202,   202,   203,
     202,   204,   205,   204,   204,   206,   204,   207,   208,   204,
     209,   209,   210,   210,   211,   212,   212,   212,   212,   212,
     212,   212,   212,   212,   212,   212,   212,   212,   212,   212,
     213,   213,   214,   214,   214,   214,   215,   216,   217,   217,
     219,   218,   218,   220,   220,   220,   220,   221,   221,   221,
     222,   221,   221,   223,   221,   221,   224,   221,   226,   225,
     227,   225,   228,   229,   228,   230,   230,   230,   230,   231,
     231,   231,   232,   232,   232,   232,   232,   232,   232,   232,
     233,   232,   234,   232,   235,   232,   236,   232,   237,   237,
     237,   237,   237,   237,   237,   238,   238,   238,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   238,   238,   238,
     239,   238,   238,   240,   240,   240,   240,   240,   240,   240,
     241,   241,   242,   243,   242,   244,   244,   244,   244,   245,
     245,   245,   245,   245,   246,   246,   246,   246,   246,   246,
     248,   247,   249,   250,   247,   251,   247,   252,   247,   253,
     254,   247,   255,   247,   256,   257,   247,   258,   247,   259,
     247,   260,   247,   261,   247,   262,   247,   263,   247,   264,
     247,   265,   247,   266,   247,   267,   247,   268,   247,   247,
     247,   247,   247,   269,   269,   269,   269,   269,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   271,   271,
     272,   272,   273,   273,   274,   274,   274,   275,   275,   275,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   276,   276,   276,   276,   276,   276,
     276,   276,   276,   276,   277,   278,   278,   278,   279,   280,
     281,   281,   281
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
       0,     1,     0,     1,     2,     4,     5,     4,     5,     4,
       5,     3,     4,     2,     3,     5,     5,     6,     8,     8,
       1,     3,     1,     3,     2,     4,     2,     2,     0,     1,
       0,     3,     4,     2,     1,     2,     3,     1,     2,     1,
       0,     3,     1,     0,     3,     2,     0,     4,     0,     5,
       0,     5,     1,     0,     4,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     2,     2,     2,     2,     1,     1,
       0,     4,     0,     4,     0,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     2,     0,     5,     0,     1,     1,     1,     1,
       2,     2,     1,     3,     1,     1,     1,     1,     1,     1,
       0,     7,     0,     0,     8,     0,     5,     0,     5,     0,
       0,    10,     0,     7,     0,     0,     8,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     9,     0,     9,     4,
       4,     6,     7,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
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
     368,   409,   411,   410,   402,   233,   393,   389,   390,   391,
     392,   254,   236,   255,   256,   258,   259,   237,   235,   253,
     239,   238,   231,   232,   403,   404,   394,   380,   395,   396,
     397,   398,   399,   250,   401,   405,   420,   412,   413,   234,
     400,   407,   406,   342,   343,   368,   368,   344,   345,   346,
     347,   348,   349,   355,   356,   350,   351,   352,   353,   354,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   408,   388,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   257,   229,   230,   372,   336,   337,   385,
     368,   377,   335,   334,   328,   368,   338,   329,   332,   331,
     330,   333,   339,   340,   341,   386,     0,   387,   228,   252,
     384,     3,   368,   378,   381,   382,   383,   379,     0,   420,
     420,     0,     0,     0,   374,   375,     0,   372,   376,     0,
       0,     1,     0,     0,     2,   368,     8,     0,   369,   251,
     421,   422,   419,   416,   417,   414,   373,   415,   418,   126,
     125,     9,     0,     3,     0,     7,     5,     0,   260,    72,
      73,    71,    65,   150,     0,    67,   150,     4,     6,   233,
     122,     0,   234,   123,     0,     0,   202,   184,   189,     0,
     192,   187,   265,     0,   151,    70,    66,     0,    69,     0,
     200,     0,     0,     0,   195,     0,   198,   124,   183,     0,
     185,   203,     0,     0,    11,     0,   219,   218,   212,   213,
     188,   266,   267,   268,   261,     0,    13,    68,   205,   206,
     207,   209,   208,     0,     0,   210,     0,   186,     0,   211,
     191,   260,   194,     0,     0,   217,   216,   214,   215,   262,
       0,     0,   233,     0,     0,    27,     0,     0,     0,     0,
       0,   370,   234,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,    19,    18,    21,    20,    22,    26,    24,    23,     0,
       0,     0,     0,     0,     0,    82,    77,   108,     0,    16,
       0,     0,    41,     0,   197,     0,   204,     0,   227,   225,
       0,     0,     0,     0,     0,     0,   368,     0,   368,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    17,     0,     0,     0,     0,    53,
       0,    59,    58,    61,    60,     0,     0,   370,     0,   163,
       0,     0,   282,   285,   287,     0,     0,   294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   368,    75,   118,     0,    10,    14,   368,   127,
      36,    31,    47,    63,    64,    38,    33,    28,   113,   111,
       0,     0,     0,     0,    83,    91,    78,    98,   178,     0,
     170,   152,    15,    40,   201,   199,    13,   223,   221,   265,
     368,   370,    49,    48,   178,     0,     0,    76,     0,    86,
      81,     0,     0,   368,     0,     0,     0,   368,     0,     0,
      87,     0,    34,    29,     0,    37,    32,    35,    30,     0,
       0,     0,     0,   368,     0,     0,     0,    62,     0,     0,
       0,    46,   371,   164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   297,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   119,
     120,     0,     0,   109,   135,    84,    79,     0,   342,   343,
       0,     0,    95,   327,     0,     0,     0,     0,   104,    94,
     104,   101,   180,   106,   370,   177,   179,   161,     0,     0,
     176,   153,     0,   264,     0,     0,   155,     0,    85,    80,
     370,     0,   157,     0,   370,     0,   159,     0,   135,     0,
     368,     0,     0,    52,     0,    74,     0,   280,     0,     0,
       0,   289,   292,     0,     0,   299,   303,   307,   311,   301,
     305,   309,   313,   315,   317,   319,   320,     0,     0,   135,
     129,   115,     0,   110,   144,   137,     0,   136,   138,   178,
     162,     0,     0,   323,   324,     0,     0,     0,   103,   102,
     105,    92,    99,   178,   135,     0,   171,   172,     0,   278,
     272,   274,   275,   276,   277,   279,     0,     0,     0,   154,
     269,    12,     0,    51,   156,     0,   370,   158,     0,   370,
     160,     0,     0,     0,     0,     0,     0,     0,   283,   286,
     288,     0,     0,   295,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,   128,     0,
     114,   368,   112,     0,   147,   145,   142,   141,   325,   326,
      96,     0,   130,   166,   368,   165,    93,   100,   181,     0,
     178,     0,   174,     0,   270,   271,    50,    43,     0,    45,
       0,    88,     0,     0,   370,   370,     0,     0,   290,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   321,     0,   121,   115,     0,     0,   150,   150,
     152,   135,   167,     0,   131,   132,     0,   107,   182,   173,
       0,   273,    42,    44,   104,    55,     0,     0,     0,   281,
       0,     0,   293,     0,   298,   300,   304,   308,   312,   302,
     306,   310,   314,     0,     0,   322,   116,   117,   140,     0,
       0,   143,     0,     0,     0,     0,   175,    89,    54,     0,
       0,   284,   370,   296,     0,     0,     0,   146,    97,   169,
       0,   168,    90,    56,    57,     0,   316,   318,   148,   134,
     291,   130,     0,   149
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   106,   134,   135,   136,   158,   231,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   413,   288,   289,   290,
     291,   164,   165,   166,   292,   293,   294,   295,   528,   714,
     762,   394,   498,   656,   395,   575,   701,   396,   500,   657,
     499,   581,   397,   584,   296,   388,   563,   297,   484,   483,
     640,   561,   373,   479,   374,   559,   174,   175,   414,   380,
     703,   704,   744,   566,   567,   643,   568,   700,   699,   698,
     771,   185,   510,   511,   299,   399,   586,   400,   401,   505,
     506,   583,   569,   177,   203,   205,   224,   178,   226,   223,
     179,   228,   221,   180,   588,   311,   310,   234,   233,   107,
     108,   118,   109,   183,   214,   312,   301,   599,   600,   302,
     617,   458,   677,   459,   460,   621,   721,   622,   463,   680,
     544,   625,   629,   626,   630,   627,   631,   628,   632,   633,
     634,   492,   110,   111,   346,   126,   127,   112,   113,   114,
     115,   116,   117,   121
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -637
static const yytype_int16 yypact[] =
{
    1038,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,   904,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  1038,  1038,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,   769,  -637,  -637,  -637,
    1038,  -637,  -637,  -637,  -637,  1038,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,    32,  -637,  -637,  -637,
    -637,    18,  1038,  -637,  -637,  -637,  -637,  -637,   433,   904,
     904,   -82,   -60,   -54,  -637,  -637,   -37,   769,  -637,   -18,
      46,  -637,    93,    22,  -637,  1038,  -637,  1891,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,    52,    68,    18,  2384,  -637,  -637,  2233,    92,  -637,
    -637,  -637,  -637,    93,    69,   118,    93,  -637,  -637,   -27,
    -637,   220,    -2,   154,  2352,  2267,   170,  -637,   126,   155,
      48,   130,   277,   184,  -637,  -637,  -637,   292,  -637,   223,
    -637,   -27,    -2,   217,   150,   223,  -637,  -637,  -637,  2352,
    -637,  -637,   223,   130,  -637,   130,   181,   185,  -637,   194,
    -637,  -637,  -637,  -637,  -637,   223,  1307,  -637,   -27,    -2,
     217,  -637,  -637,  2233,   130,  -637,  2233,  -637,  2233,  -637,
    -637,    92,  -637,   130,   130,  -637,  -637,   213,   215,   182,
      93,  1677,   172,    12,    14,  -637,  2233,   637,  1420,  1857,
    1767,  1172,   177,   195,   199,   205,   209,   211,   219,   226,
     229,   239,   242,   249,   250,   253,   254,   257,   258,   262,
     264,   265,   269,   275,   281,   286,   287,   291,    93,   191,
    1307,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,   142,
     142,   637,   142,   142,   142,  -637,  -637,  -637,   294,  -637,
     295,   293,   302,   297,  -637,   299,  -637,   310,  -637,  -637,
     130,   130,   303,    81,    93,   345,  1038,   115,  1038,   134,
     324,    93,  -637,   142,   142,   357,   142,   142,  1506,   142,
     142,    93,    93,    93,  -637,   208,    31,    12,    14,  -637,
     323,  -637,  -637,  -637,  -637,   232,   334,  1172,   335,  -637,
    1592,    93,  -637,  -637,  -637,    93,    93,  -637,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      93,    93,  1038,  -637,  -637,   326,  -637,  -637,  1038,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,   339,  -637,
     263,  1934,    93,    93,  -637,    65,  -637,    65,   160,   337,
     338,   341,  -637,  -637,  -637,  -637,  1307,  -637,  -637,   277,
    1038,  1172,  -637,  -637,   -22,   347,    93,  -637,   263,  -637,
    -637,   340,   351,  1038,   348,    93,   355,  1038,   350,    93,
    -637,   245,  -637,  -637,   263,  -637,  -637,  -637,  -637,    15,
      15,    15,    93,  1038,   358,   359,   360,  -637,    93,    93,
     354,  -637,  -637,  -637,  1677,   342,    42,   362,    93,    93,
      93,   366,   370,    93,  -637,   382,   384,   386,   389,   392,
     395,   396,   401,   402,   403,   361,   406,   410,   413,  -637,
    -637,   367,    93,  -637,  2063,  -637,  -637,   407,   412,   414,
     418,   415,  -637,  -637,   420,   422,   534,   535,   515,  -637,
     515,  -637,  -637,  -637,  1172,  -637,  -637,  -637,    15,    25,
    -637,  -637,   432,  -637,   435,   427,  -637,   430,  -637,  -637,
    1172,   437,  -637,   434,  1172,   439,  -637,   436,  2063,   441,
    1038,   438,   440,  -637,   221,  -637,    93,  -637,   442,   443,
     445,  -637,  -637,   446,   449,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,    93,   452,  2063,
     453,   454,   448,  -637,  -637,  -637,   455,  -637,   456,   149,
    -637,   451,   457,  -637,  -637,   460,    73,   459,  -637,  -637,
    -637,  -637,  -637,   -22,  2063,   458,  -637,   463,    93,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,    25,   408,   408,  -637,
    -637,  -637,   461,  -637,  -637,   465,  1172,  -637,   466,  1172,
    -637,   468,    93,   444,   462,   470,    93,  2352,  -637,  -637,
    -637,  2384,  2384,  -637,  2384,  2384,  2384,  2384,  2384,  2384,
    2384,  2384,  2384,  2384,  2384,   100,  -637,   471,  -637,    93,
    -637,  1038,  -637,   472,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,   469,  2148,  -637,  1038,  -637,  -637,  -637,  -637,   473,
     -22,    15,   475,   478,  -637,  -637,  -637,  -637,   474,  -637,
     479,  -637,   480,    93,  1172,  1172,   482,  2352,  -637,   483,
    2384,   484,   486,   488,   490,   491,   492,   493,   494,   495,
     477,   496,  -637,   497,  -637,   454,   499,  2063,    93,    93,
     341,  2063,  -637,   500,  -637,   501,   498,  -637,  -637,  -637,
      15,  -637,  -637,  -637,   515,  -637,   504,   502,   506,  -637,
     507,   508,  -637,   511,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,   552,   553,  -637,  -637,  -637,  -637,   512,
     513,  -637,   514,   520,   523,   521,  -637,  -637,  -637,   525,
     526,  -637,  1172,  -637,   516,   528,   530,  -637,  -637,  -637,
    2148,  -637,  -637,  -637,  -637,   543,  -637,  -637,  -637,  -637,
    -637,  2148,   544,  -637
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -637,  -637,   464,  -637,   485,  -637,  -637,  -270,  -637,   343,
     416,   417,   419,  -637,  -637,  -228,  -637,  -637,   388,   423,
     -99,   487,  -637,  -637,  -637,   -59,   -41,  -637,  -637,  -637,
    -637,  -250,  -637,  -637,  -637,  -637,  -637,  -312,  -637,  -637,
     273,  -489,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
     -20,    37,   363,  -637,  -637,  -637,   505,  -637,    72,   187,
     -92,   -79,  -637,  -510,   -12,  -637,  -636,  -637,  -637,  -637,
    -637,  -162,   -14,  -637,   447,  -288,  -618,  -491,  -332,  -555,
    -637,  -637,  -116,  -169,  -637,  -637,  -637,   156,  -637,  -637,
     168,  -637,  -140,   166,  -139,  -637,  -637,  -637,  -637,  -130,
    -637,  -637,   569,   467,   280,  -637,  -173,    94,  -280,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,  -637,
    -637,  -637,   300,   -44,  -339,   565,  -637,   -71,   -36,  -637,
    -637,  -637,  -637,   237
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -266
static const yytype_int16 yytable[] =
{
     120,   122,   123,   420,   188,   198,   200,   156,   452,   215,
     377,   582,   137,   450,   647,   128,   705,   587,   611,   322,
     149,   132,   149,   149,   168,   415,   502,   181,   658,   424,
     227,   428,   131,   589,   590,   591,   592,   593,   594,   149,
     142,   176,   210,   709,   181,   181,   129,   206,   207,   637,
     149,   130,   189,   163,   137,   225,   128,   150,   133,   150,
     150,   143,   229,   382,   230,   419,   232,   144,   138,   181,
     595,   159,   515,   536,   659,   239,   150,   195,   486,   145,
    -193,  -193,   160,   120,   120,   304,   181,   150,   163,   149,
     190,   153,   746,   181,   308,   309,   181,   662,   181,   496,
     300,   149,   487,   147,   504,   708,   519,   176,   133,   161,
     176,   181,   176,   206,   207,   196,   181,   181,   181,   181,
     181,   651,   486,   149,   705,   315,   150,   316,   517,   318,
     320,   325,   325,   335,   345,   705,   512,   523,   150,   152,
     485,   527,   149,   208,   209,   596,   443,   206,   207,   328,
     181,   415,   424,   428,   487,   597,   598,   149,  -190,  -190,
     150,   181,   206,   207,   300,   585,   206,   207,   518,   157,
     587,   407,   408,   148,   416,   325,  -193,  -193,   425,   150,
     429,   605,  -196,  -196,   485,   608,   162,   186,   323,   329,
     497,   742,   197,   652,   150,   653,   410,   502,   181,   654,
     411,   644,   645,   412,   151,   202,   324,   330,   502,   208,
     209,   182,   325,  -226,  -226,   347,   149,  -224,  -224,   587,
     181,   692,   420,   693,   486,   747,   235,   236,   191,   149,
     423,   218,   383,   197,   456,   184,   215,   646,   184,   442,
     149,   187,   348,   208,   209,  -222,  -222,  -220,  -220,   427,
     384,   189,   616,   150,  -190,  -190,   195,   378,   208,   209,
     392,   393,   208,   209,   379,   192,   150,   668,   219,   383,
     670,   149,   422,   204,   426,   504,   181,   150,  -196,  -196,
     503,   211,   212,   213,   448,   449,   504,   384,   298,   190,
     300,   455,  -126,   201,   196,   159,   202,  -125,   391,   216,
     416,   425,   429,   149,   519,  -263,   160,   376,   150,  -226,
    -226,   347,   313,  -224,  -224,   317,   319,   664,   665,   298,
     298,   349,   237,   238,   181,   350,   390,   193,   478,   351,
     391,   352,   133,   161,   481,   717,   718,   194,   534,   353,
     150,  -222,  -222,  -220,  -220,   220,   354,   392,   393,   355,
     375,   220,   298,   149,   181,   222,   140,   141,   220,   356,
     410,   222,   357,   298,   411,   149,   514,   412,   222,   358,
     359,   220,   398,   360,   361,   347,   418,   362,   363,   521,
     391,   222,   364,   525,   365,   366,   375,   421,   434,   367,
     150,   303,   391,   431,   305,   368,   306,   421,   181,   529,
     298,   369,   150,   439,   440,   441,   370,   371,   444,   445,
     446,   372,   402,   765,   389,   404,   589,   405,   591,   592,
     593,   594,   298,   457,   403,   406,   409,   461,   462,   181,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   430,   447,   480,    11,   676,    13,
      14,    15,    16,   595,   181,    19,   451,   453,   482,   507,
     503,   508,   398,   535,   494,   495,   509,   520,   347,   516,
     522,   524,   526,   530,   423,   427,   533,   381,   298,   385,
     386,   387,   555,   560,   347,   537,   613,   181,   347,   541,
     421,   678,   679,   542,   681,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   545,   421,   546,   720,   547,
     432,   433,   548,   435,   436,   549,   437,   438,   550,   551,
     531,   532,   181,    83,   552,   553,   554,   556,   421,   570,
     538,   539,   540,   557,   558,   543,   739,   740,   571,   573,
     572,   576,   574,   577,   578,   579,   580,   181,   601,   603,
     723,   602,   604,   606,   562,   609,   607,   612,   610,   614,
     673,   615,   754,   755,   619,   618,   620,   181,   641,   623,
     347,   181,   624,   347,   636,   638,   642,   639,   648,  -139,
     650,   655,   674,   666,   649,   660,   661,   667,   669,   671,
     675,   702,   694,   341,   707,   697,   712,   696,   710,   711,
     733,   713,   715,   719,   722,   724,   421,   725,   421,   726,
     706,   727,   728,   729,   730,   731,   732,   167,   735,   734,
     737,   743,   155,   749,  -133,   745,   748,   750,   751,   635,
     181,   752,   753,   756,   757,   758,   326,   766,   347,   347,
     321,   181,   759,   761,   241,   242,   760,   763,   764,   767,
     768,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   770,   773,   342,   343,   170,   344,
     501,   327,   246,    33,   217,   736,   695,   417,   171,   772,
     199,   769,   252,   173,   672,   738,   741,   139,   421,   513,
     663,   493,   146,     0,     0,     0,   334,     0,   307,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   562,     0,     0,     0,     0,   347,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   716,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   278,     0,     0,     0,     0,     0,     0,     0,     0,
     184,   184,   124,     1,     2,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     0,    34,     0,   125,
      35,    36,    37,    38,    39,    40,    41,    42,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,     0,    87,    88,    89,    90,
       0,    91,    92,    93,    94,    95,     0,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   119,     1,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     0,    34,     0,     0,    35,     0,    37,    38,    39,
      40,    41,    42,     0,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,    87,    88,    89,    90,     0,     0,    92,    93,    94,
      95,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,     1,     2,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     0,    34,     0,     0,    35,
      36,    37,    38,    39,    40,    41,    42,     0,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,    87,    88,    89,    90,     0,
      91,    92,    93,    94,    95,     0,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     0,
      34,     0,     0,    35,     0,    37,    38,    39,    40,    41,
      42,     0,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,     0,    87,
      88,    89,    90,     0,     0,    92,    93,    94,    95,     0,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     240,   211,   212,   213,   241,   242,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   243,   244,   245,     0,   170,     0,
       0,     0,   246,    33,   247,   248,   249,   133,   171,   250,
       0,   251,   252,   253,   254,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,     0,     0,     0,     0,  -265,   241,   242,     0,
       0,   278,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,     0,     0,
       0,   170,     0,     0,     0,   246,    33,     0,     0,     0,
     133,   171,     0,     0,     0,   252,   173,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   241,   242,     0,     0,     0,     0,     0,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,     0,     0,     0,   170,     0,     0,
       0,   246,    33,     0,   278,     0,     0,   171,     0,     0,
       0,   252,   173,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   454,
     242,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,   170,     0,     0,     0,     0,    33,     0,
     278,     0,     0,   171,     0,     0,     0,   252,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,   169,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,   170,     0,
       0,     0,     0,    33,     0,     0,   278,     0,   171,     0,
       0,     0,   172,   173,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     336,     0,     0,     0,     0,   169,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   337,   338,   339,     0,   170,     0,
       0,   314,     0,    33,     0,     0,     0,     0,   171,     0,
       0,     0,   172,   173,   340,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     331,     0,     0,     0,     0,   169,     0,     0,     0,     0,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,   332,   333,     0,     0,   170,     0,
       0,     0,     0,    33,   132,     0,     0,     0,   171,     5,
       0,     0,   172,   253,   254,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,   154,
       0,     0,     0,     0,     0,     0,    39,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,   488,   489,     0,     0,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,     0,   490,     0,     0,    92,    93,    94,
     491,     0,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   169,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,   170,     0,     0,     0,     0,    33,
       0,     0,     0,     0,   171,     0,     0,     0,   172,   173,
     564,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   565,     0,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   169,     0,     0,     0,
       0,     0,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,   170,
       0,     0,     0,     0,    33,     0,     0,     0,     0,   171,
       0,     0,     0,   172,   173,   564,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,   169,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,   170,     0,     0,     0,     0,    33,
       0,     0,     0,     0,   171,   169,     0,     0,   172,   173,
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,     0,     0,     0,   170,     0,
       0,     0,     0,    33,     0,     0,     0,     0,   171,     0,
       0,     0,   172,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     169,     0,     0,     0,     0,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     5,   171,     0,     0,     0,   172,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85
};

static const yytype_int16 yycheck[] =
{
      36,    45,    46,   315,   166,   174,   175,   137,   347,   182,
     280,   500,   111,   345,   569,    86,   652,   508,   528,   247,
       8,     3,     8,     8,   154,   313,    48,   157,   583,   317,
     199,   319,     0,     8,     9,    10,    11,    12,    13,     8,
     122,   157,   181,   661,   174,   175,    90,    32,    33,   559,
       8,    95,    79,   152,   153,   195,   127,    45,    40,    45,
      45,   121,   202,   291,   203,   315,   205,   121,   112,   199,
      45,     3,   411,    31,   584,   215,    45,    79,   390,   116,
      32,    33,    14,   119,   120,   224,   216,    45,   187,     8,
     117,   135,   710,   223,   233,   234,   226,   588,   228,    34,
     216,     8,   390,   121,   126,   660,   418,   223,    40,    41,
     226,   241,   228,    32,    33,   117,   246,   247,   248,   249,
     250,    48,   434,     8,   760,   241,    45,   115,   416,   115,
     246,   247,   248,   249,   250,   771,   406,   425,    45,   117,
     390,   429,     8,   128,   129,   120,   115,    32,    33,   248,
     280,   439,   440,   441,   442,   130,   131,     8,    32,    33,
      45,   291,    32,    33,   280,   504,    32,    33,   418,   117,
     661,   310,   311,   127,   313,   291,   128,   129,   317,    45,
     319,   520,    32,    33,   434,   524,   118,   118,   247,   248,
     125,   701,    38,   120,    45,   122,   115,    48,   328,   126,
     119,    52,    53,   122,   132,    79,   247,   248,    48,   128,
     129,   119,   328,    32,    33,   251,     8,    32,    33,   710,
     350,   121,   534,   123,   536,   714,    32,    33,     8,     8,
     115,     8,   291,    38,   350,   163,   409,   569,   166,    31,
       8,   123,    47,   128,   129,    32,    33,    32,    33,   115,
     291,    79,    31,    45,   128,   129,    79,   115,   128,   129,
      52,    53,   128,   129,   122,    45,    45,   606,    45,   328,
     609,     8,   316,   118,   318,   126,   406,    45,   128,   129,
     120,     4,     5,     6,    52,    53,   126,   328,   216,   117,
     406,   350,   120,   123,   117,     3,    79,   120,    35,   115,
     439,   440,   441,     8,   616,   123,    14,   116,    45,   128,
     129,   347,   240,   128,   129,   243,   244,   597,   598,   247,
     248,   122,   128,   129,   454,   120,    31,   171,   372,   120,
      35,   120,    40,    41,   378,   674,   675,   171,   454,   120,
      45,   128,   129,   128,   129,   189,   120,    52,    53,   120,
     278,   195,   280,     8,   484,   189,   119,   120,   202,   120,
     115,   195,   120,   291,   119,     8,   410,   122,   202,   120,
     120,   215,   300,   120,   120,   411,    31,   120,   120,   423,
      35,   215,   120,   427,   120,   120,   314,   315,    31,   120,
      45,   223,    35,   321,   226,   120,   228,   325,   528,   443,
     328,   120,    45,   331,   332,   333,   120,   120,   336,   337,
     338,   120,   119,   752,   120,   118,     8,   118,    10,    11,
      12,    13,   350,   351,   122,   115,   123,   355,   356,   559,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   120,   122,   120,    14,   617,    16,
      17,    18,    19,    45,   584,    22,   122,   122,   119,   122,
     120,   123,   390,   121,   392,   393,   125,   116,   504,   122,
     122,   116,   122,   115,   115,   115,   122,   290,   406,   292,
     293,   294,   121,   116,   520,   123,   530,   617,   524,   123,
     418,   621,   622,   123,   624,   625,   626,   627,   628,   629,
     630,   631,   632,   633,   634,   123,   434,   123,   677,   123,
     323,   324,   123,   326,   327,   123,   329,   330,   123,   123,
     448,   449,   652,    90,   123,   123,   123,   121,   456,   122,
     458,   459,   460,   123,   121,   463,   698,   699,   126,   121,
     126,   121,   127,   121,    10,    10,    31,   677,   116,   122,
     680,   116,   122,   116,   482,   116,   122,   116,   122,   121,
     116,   121,    10,    10,   121,   123,   121,   697,   120,   123,
     606,   701,   123,   609,   122,   122,   121,   123,   127,   123,
     120,   122,   120,   122,   127,   127,   123,   122,   122,   121,
     120,   122,   121,   250,   121,   123,   122,   641,   123,   121,
     123,   122,   122,   121,   121,   121,   534,   121,   536,   121,
     654,   121,   121,   121,   121,   121,   121,   153,   121,   123,
     121,   121,   137,   121,   123,   127,   122,   121,   121,   557,
     760,   123,   121,   121,   121,   121,   248,   121,   674,   675,
       3,   771,   122,   122,     7,     8,   123,   122,   122,   121,
     120,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,   121,   121,   250,   250,    31,   250,
     397,   248,    35,    36,   187,   695,   639,   314,    41,   771,
     175,   760,    45,    46,   612,   697,   700,   118,   616,   409,
     596,   391,   127,    -1,    -1,    -1,   249,    -1,   231,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   639,    -1,    -1,    -1,    -1,   752,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   673,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     698,   699,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,   117,   118,   119,   120,
      -1,   122,   123,   124,   125,   126,    -1,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,    -1,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,   126,    -1,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    -1,    43,    44,    45,    46,    47,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,    -1,   123,   124,   125,   126,    -1,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
       3,     4,     5,     6,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    -1,
      -1,    -1,    35,    36,    37,    38,    39,    40,    41,    42,
      -1,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,    -1,    -1,    -1,    -1,   119,     7,     8,    -1,
      -1,   124,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    36,    -1,   124,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,    -1,
     124,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,    -1,    -1,   124,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    -1,
      -1,   124,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,     3,    -1,    -1,    -1,    41,     8,
      -1,    -1,    45,    46,    47,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    50,    51,    -1,    -1,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,   118,    -1,   120,    -1,    -1,   123,   124,   125,
     126,    -1,   128,   129,   130,   131,   132,   133,   134,   135,
     136,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    78,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    41,     8,    -1,    -1,    45,    46,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
       8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,
      -1,    -1,     8,    41,    -1,    -1,    -1,    45,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    38,    41,    42,    43,    44,    45,
      46,    47,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,   115,   117,   118,   119,
     120,   122,   123,   124,   125,   126,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   139,   237,   238,   240,
     270,   271,   275,   276,   277,   278,   279,   280,   239,     3,
     276,   281,   271,   271,     3,    40,   273,   274,   275,   271,
     271,     0,     3,    40,   140,   141,   142,   158,   271,   240,
     281,   281,   122,   121,   121,   116,   273,   121,   127,     8,
      45,   196,   117,   271,    38,   142,   237,   117,   143,     3,
      14,    41,   118,   158,   159,   160,   161,   140,   237,     8,
      31,    41,    45,    46,   194,   195,   220,   221,   225,   228,
     231,   237,   119,   241,   196,   209,   118,   123,   209,    79,
     117,     8,    45,   225,   231,    79,   117,    38,   221,   194,
     221,   123,    79,   222,   118,   223,    32,    33,   128,   129,
     232,     4,     5,     6,   242,   244,   115,   159,     8,    45,
     225,   230,   231,   227,   224,   230,   226,   221,   229,   230,
     232,   144,   232,   236,   235,    32,    33,   128,   129,   230,
       3,     7,     8,    27,    28,    29,    35,    37,    38,    39,
      42,    44,    45,    46,    47,    49,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   124,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   155,   156,
     157,   158,   162,   163,   164,   165,   182,   185,   196,   212,
     220,   244,   247,   228,   232,   228,   228,   241,   232,   232,
     234,   233,   243,   196,   124,   220,   115,   196,   115,   196,
     220,     3,   153,   163,   164,   220,   156,   157,   158,   163,
     164,     3,    27,    28,   212,   220,     3,    27,    28,    29,
      47,   147,   148,   149,   150,   220,   272,   276,    47,   122,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   190,   192,   196,   116,   145,   115,   122,
     197,   197,   153,   163,   164,   197,   197,   197,   183,   120,
      31,    35,    52,    53,   169,   172,   175,   180,   196,   213,
     215,   216,   119,   122,   118,   118,   115,   232,   232,   123,
     115,   119,   122,   154,   196,   213,   232,   190,    31,   169,
     175,   196,   271,   115,   213,   232,   271,   115,   213,   232,
     120,   196,   197,   197,    31,   197,   197,   197,   197,   196,
     196,   196,    31,   115,   196,   196,   196,   122,    52,    53,
     216,   122,   272,   122,     7,   163,   220,   196,   249,   251,
     252,   196,   196,   256,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   271,   191,
     120,   271,   119,   187,   186,   169,   175,   213,    50,    51,
     120,   126,   269,   270,   196,   196,    34,   125,   170,   178,
     176,   178,    48,   120,   126,   217,   218,   122,   123,   125,
     210,   211,   145,   242,   271,   272,   122,   213,   169,   175,
     116,   271,   122,   213,   116,   271,   122,   213,   166,   271,
     115,   196,   196,   122,   220,   121,    31,   123,   196,   196,
     196,   123,   123,   196,   258,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   123,   121,   121,   123,   121,   193,
     116,   189,   196,   184,    47,    78,   201,   202,   204,   220,
     122,   126,   126,   121,   127,   173,   121,   121,    10,    10,
      31,   179,   179,   219,   181,   272,   214,   215,   232,     8,
       9,    10,    11,    12,    13,    45,   120,   130,   131,   245,
     246,   116,   116,   122,   122,   272,   116,   122,   272,   116,
     122,   201,   116,   271,   121,   121,    31,   248,   123,   121,
     121,   253,   255,   123,   123,   259,   261,   263,   265,   260,
     262,   264,   266,   267,   268,   196,   122,   201,   122,   123,
     188,   120,   121,   203,    52,    53,   216,   217,   127,   127,
     120,    48,   120,   122,   126,   122,   171,   177,   217,   201,
     127,   123,   215,   245,   246,   246,   122,   122,   272,   122,
     272,   121,   196,   116,   120,   120,   221,   250,   237,   237,
     257,   237,   237,   237,   237,   237,   237,   237,   237,   237,
     237,   237,   121,   123,   121,   189,   271,   123,   207,   206,
     205,   174,   122,   198,   199,   204,   271,   121,   217,   214,
     123,   121,   122,   122,   167,   122,   196,   272,   272,   121,
     221,   254,   121,   237,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   123,   123,   121,   188,   121,   202,   209,
     209,   210,   201,   121,   200,   127,   214,   179,   122,   121,
     121,   121,   123,   121,    10,    10,   121,   121,   121,   122,
     123,   122,   168,   122,   122,   272,   121,   121,   120,   199,
     121,   208,   198,   121
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
#line 376 "vtkParse.y"
    {
        start_class((yyvsp[(2) - (2)].str));
      }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 381 "vtkParse.y"
    {
        start_class((yyvsp[(2) - (5)].str));
      }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 401 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 402 "vtkParse.y"
    { reject_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 403 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 404 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 405 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 406 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 407 "vtkParse.y"
    { reject_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 408 "vtkParse.y"
    { output_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 409 "vtkParse.y"
    { reject_function(); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 410 "vtkParse.y"
    { reject_function(); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 411 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 460 "vtkParse.y"
    { preSig("~"); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 461 "vtkParse.y"
    { preSig("virtual ~"); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 464 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 468 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 472 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 477 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 484 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 488 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 492 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (3)].integer);
         }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 496 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (4)].integer);
         }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 501 "vtkParse.y"
    {
         preSig("virtual ");
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 506 "vtkParse.y"
    { postSig("("); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 507 "vtkParse.y"
    { postSig(")"); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 508 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 509 "vtkParse.y"
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
#line 518 "vtkParse.y"
    { postSig(")"); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 518 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 519 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(2) - (4)].str);
      vtkParseDebug("Parsed operator", (yyvsp[(2) - (4)].str));
    }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 525 "vtkParse.y"
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
#line 535 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 536 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
    }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 542 "vtkParse.y"
    { postSig(")"); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 542 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 543 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 549 "vtkParse.y"
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
#line 559 "vtkParse.y"
    {postSig(") = 0;");}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 560 "vtkParse.y"
    {postSig(") const = 0;");}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 562 "vtkParse.y"
    {postSig(" const");}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 564 "vtkParse.y"
    {postSig("("); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 566 "vtkParse.y"
    { postSig(")"); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 567 "vtkParse.y"
    { postSig(";"); openSig = 0; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 568 "vtkParse.y"
    {
      openSig = 1;
      currentFunction->Name = (yyvsp[(1) - (4)].str);
      vtkParseDebug("Parsed func", (yyvsp[(1) - (4)].str));
    }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 574 "vtkParse.y"
    { postSig("("); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 582 "vtkParse.y"
    { postSig(");"); openSig = 0; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 583 "vtkParse.y"
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
#line 591 "vtkParse.y"
    { postSig("(");}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 593 "vtkParse.y"
    {postSig("const ");}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 595 "vtkParse.y"
    {postSig("static ");}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 596 "vtkParse.y"
    {postSig("static ");}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 598 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 598 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 606 "vtkParse.y"
    { postSig(", ");}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 610 "vtkParse.y"
    { currentFunction->NumberOfArguments++;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 611 "vtkParse.y"
    { currentFunction->NumberOfArguments++; postSig(", ");}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 614 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
    }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 621 "vtkParse.y"
    {
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] =
        (yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] =
        (yyvsp[(1) - (2)].integer) + ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
    }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 628 "vtkParse.y"
    {
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_FUNCTION;
    }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 633 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 634 "vtkParse.y"
    {
      postSig(") ");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 639 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*"); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 640 "vtkParse.y"
    { postSig(")("); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 641 "vtkParse.y"
    {
      postSig(")");
      currentFunction->ArgCounts[currentFunction->NumberOfArguments] = 0;
      currentFunction->ArgTypes[currentFunction->NumberOfArguments] = VTK_PARSE_UNKNOWN;
    }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 651 "vtkParse.y"
    {postSig("="); postSig((yyvsp[(2) - (2)].str));}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 653 "vtkParse.y"
    {delSig();}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 654 "vtkParse.y"
    {delSig();}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 655 "vtkParse.y"
    {delSig();}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 656 "vtkParse.y"
    {delSig();}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 657 "vtkParse.y"
    {delSig();}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 658 "vtkParse.y"
    {delSig();}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    {delSig();}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    {delSig();}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 661 "vtkParse.y"
    {delSig();}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 662 "vtkParse.y"
    {delSig();}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 663 "vtkParse.y"
    {delSig();}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 664 "vtkParse.y"
    {delSig();}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 665 "vtkParse.y"
    {delSig();}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    {delSig();}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 667 "vtkParse.y"
    {delSig();}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 680 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer);}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 693 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 698 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 707 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST|VTK_PARSE_STATIC | (yyvsp[(3) - (3)].integer));}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 711 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    {postSig(" "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    {postSig(" ");}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 715 "vtkParse.y"
    {postSig(" "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 716 "vtkParse.y"
    {postSig(" ");}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 717 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
    {postSig(" "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 719 "vtkParse.y"
    {postSig(" ");}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 720 "vtkParse.y"
    {(yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 722 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 723 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); postSig(">");}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 724 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 725 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (5)].str); postSig(">");}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 727 "vtkParse.y"
    {postSig(", ");}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 729 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 730 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 731 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 732 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 735 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 741 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 762 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 763 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 764 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 765 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    { postSig("* const&"); (yyval.integer) = VTK_PARSE_POINTER_CONST_REF;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 769 "vtkParse.y"
    { postSig("* const*"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { postSig("const&"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { postSig("const*"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    { postSig("**"); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 774 "vtkParse.y"
    { postSig("**"); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 775 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 776 "vtkParse.y"
    { postSig("const&");}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 777 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 778 "vtkParse.y"
    { postSig("const*");}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 779 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 781 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 782 "vtkParse.y"
    { postSig("vtkStdString "); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 784 "vtkParse.y"
    { postSig("vtkUnicodeString "); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 785 "vtkParse.y"
    { postSig("ostream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 786 "vtkParse.y"
    { postSig("istream "); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 788 "vtkParse.y"
    {
      postSig((yyvsp[(1) - (1)].str));
      postSig(" ");
      (yyval.integer) = VTK_PARSE_UNKNOWN;
    }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 794 "vtkParse.y"
    {
      postSig((yyvsp[(1) - (1)].str));
      postSig(" ");
      currentFunction->ArgClasses[currentFunction->NumberOfArguments] =
        vtkstrdup((yyvsp[(1) - (1)].str));
      if ((!currentFunction->ReturnClass) &&
          (!currentFunction->NumberOfArguments))
        {
        currentFunction->ReturnClass = vtkstrdup((yyvsp[(1) - (1)].str));
        }
      (yyval.integer) = VTK_PARSE_VTK_OBJECT;
    }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 808 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 810 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 811 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 812 "vtkParse.y"
    {postSig("signed char "); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 813 "vtkParse.y"
    { postSig("vtkTypeInt8 "); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 814 "vtkParse.y"
    { postSig("vtkTypeUInt8 "); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 815 "vtkParse.y"
    { postSig("vtkTypeInt16 "); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 816 "vtkParse.y"
    { postSig("vtkTypeUInt16 "); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 817 "vtkParse.y"
    { postSig("vtkTypeInt32 "); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 818 "vtkParse.y"
    { postSig("vtkTypeUInt32 "); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 819 "vtkParse.y"
    { postSig("vtkTypeInt64 "); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 820 "vtkParse.y"
    { postSig("vtkTypeUInt64 "); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 821 "vtkParse.y"
    { postSig("vtkTypeFloat32 "); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 822 "vtkParse.y"
    { postSig("vtkTypeFloat64 "); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 823 "vtkParse.y"
    {postSig("unsigned ");}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 825 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 828 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 829 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 830 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 831 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 832 "vtkParse.y"
    { postSig("vtkIdType "); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 833 "vtkParse.y"
    { postSig("long long "); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 834 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 839 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 847 "vtkParse.y"
    {
      if (mainClass)
        {
        data.SuperClasses[data.NumberOfSuperClasses] = vtkstrdup((yyvsp[(2) - (2)].str));
        data.NumberOfSuperClasses++;
        }
    }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 855 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 856 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 857 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 858 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 860 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 861 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (2)].str);}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 862 "vtkParse.y"
    {(yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (2)].str))+2);
                        sprintf((yyval.str), "-%s", (yyvsp[(2) - (2)].str)); }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 864 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 865 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (3)].str);}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 867 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 868 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 869 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 870 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 871 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 872 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 876 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 877 "vtkParse.y"
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

  case 282:

/* Line 1455 of yacc.c  */
#line 887 "vtkParse.y"
    {postSig("Get");}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 887 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 889 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (yyvsp[(7) - (8)].integer);
   output_function();
   }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 896 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 897 "vtkParse.y"
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

  case 287:

/* Line 1455 of yacc.c  */
#line 907 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 908 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   output_function();
   }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 917 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 918 "vtkParse.y"
    {postSig(");"); openSig = 0;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 919 "vtkParse.y"
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

  case 292:

/* Line 1455 of yacc.c  */
#line 949 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 950 "vtkParse.y"
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

  case 294:

/* Line 1455 of yacc.c  */
#line 960 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 961 "vtkParse.y"
    {postSig("();"); invertSig = 1;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
    {
   sprintf(temps,"Get%s",(yyvsp[(4) - (8)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   output_function();
   }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 970 "vtkParse.y"
    {preSig("void "); postSig("On();"); openSig = 0; }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 972 "vtkParse.y"
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

  case 299:

/* Line 1455 of yacc.c  */
#line 987 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 992 "vtkParse.y"
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
   currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | (yyvsp[(6) - (7)].integer));
   currentFunction->ArgCounts[0] = 2;
   output_function();
   }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1017 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1022 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_POINTER | (yyvsp[(6) - (7)].integer));
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 2;
   output_function();
   }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1034 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1039 "vtkParse.y"
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
   currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | (yyvsp[(6) - (7)].integer));
   currentFunction->ArgCounts[0] = 3;
   output_function();
   }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1066 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1071 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_POINTER | (yyvsp[(6) - (7)].integer));
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 3;
   output_function();
   }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1083 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1088 "vtkParse.y"
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
   currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | (yyvsp[(6) - (7)].integer));
   currentFunction->ArgCounts[0] = 4;
   output_function();
   }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1117 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1122 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_POINTER | (yyvsp[(6) - (7)].integer));
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 4;
   output_function();
   }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1134 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1139 "vtkParse.y"
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
   currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | (yyvsp[(6) - (7)].integer));
   currentFunction->ArgCounts[0] = 6;
   output_function();
   }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1172 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (7)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_POINTER | (yyvsp[(6) - (7)].integer));
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = 6;
   output_function();
   }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1189 "vtkParse.y"
    {
      free(currentFunction->Signature);
      currentFunction->Signature = NULL;
      }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1194 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"void Set%s(%s [%s]);",(yyvsp[(3) - (9)].str),
      local, (yyvsp[(8) - (9)].str));
     sprintf(temps,"Set%s",(yyvsp[(3) - (9)].str));
     currentFunction->Name = vtkstrdup(temps);
     currentFunction->ReturnType = VTK_PARSE_VOID;
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer));
     currentFunction->ArgCounts[0] = atol((yyvsp[(8) - (9)].str));
     output_function();
   }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1207 "vtkParse.y"
    {
     free(currentFunction->Signature);
     currentFunction->Signature = NULL;
     }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1212 "vtkParse.y"
    {
   char *local = vtkstrdup(currentFunction->Signature);
   sprintf(currentFunction->Signature,"%s *Get%s();",local, (yyvsp[(3) - (9)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer));
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = atol((yyvsp[(8) - (9)].str));
   output_function();
   }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1224 "vtkParse.y"
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

  case 320:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
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

  case 321:

/* Line 1455 of yacc.c  */
#line 1320 "vtkParse.y"
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

  case 322:

/* Line 1455 of yacc.c  */
#line 1371 "vtkParse.y"
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

  case 323:

/* Line 1455 of yacc.c  */
#line 1427 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1428 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1429 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1430 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1433 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1434 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1434 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1435 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1435 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1436 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1436 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1437 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1437 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1438 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1438 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1439 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1439 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1440 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1441 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1442 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1443 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1444 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1445 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1446 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1447 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1448 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1449 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1450 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1451 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1452 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1453 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1454 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1455 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1456 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1457 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1458 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1459 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1460 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1461 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1462 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1463 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1464 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1465 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1466 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 5360 "vtkParse.tab.c"
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
#line 1497 "vtkParse.y"

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

