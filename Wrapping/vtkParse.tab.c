
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

/* Map from the type enumeration in vtkType.h to the VTK wrapping type
   system number for the type. */

#include "vtkParse.h"
#include "vtkType.h"

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
  VTK_PARSE_UNSIGNED___INT64,   /* VTK_UNSIGNED___INT64   19 */
  0,                            /* VTK_VARIANT            20 */
  0,                            /* VTK_OBJECT             21 */
  VTK_PARSE_UNICODE_STRING      /* VTK_UNICODE_STRING     22 */
  };

/* Define some constants to simplify references to the table lookup in
   the type_primitive production rule code.  */
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

/* the tokenizer */
int yylex(void);

/* global variables */
FileInfo data;
ClassInfo *currentClass = NULL;
FunctionInfo *currentFunction = NULL;

char temps[2048];
int  in_public;
int  in_protected;
int  is_concrete;
int  HaveComment;
char CommentText[50000];
int CommentState;
int sigClosed;
size_t sigMark[10];
size_t sigMarkDepth = 0;
unsigned int sigAllocatedLength;
char *currentId = 0;

int parseDebug = 0;

void start_class(const char *classname);
void output_function(void);
void reject_function(void);

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n);
void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n);

/* duplicate a string */
char *vtkstrdup(const char *in)
{
  char *res = NULL;
  if (in)
    {
    res = (char *)malloc(strlen(in)+1);
    strcpy(res,in);
    }
  return res;
}

/* reallocate Signature if "arg" cannot be appended */
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

/* close the signature, i.e. allow no more additions to it */
void closeSig()
{
  sigClosed = 1;
}

/* re-open the signature */
void openSig()
{
  sigClosed = 0;
}

/* insert text at the beginning of the signature */
void preSig(const char *arg)
{
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    size_t m, n;
    char *cp;
    checkSigSize(arg);
    cp = currentFunction->Signature;
    m = strlen(cp);
    n = strlen(arg);
    memmove(&cp[n], cp, m+1);
    strncpy(cp, arg, n);
    }
}

/* append text to the end of the signature */
void postSig(const char *arg)
{
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    size_t m, n;
    char *cp;
    checkSigSize(arg);
    cp = currentFunction->Signature;
    m = strlen(cp);
    n = strlen(arg);
    strncpy(&cp[m], arg, n+1);
    }
}

/* prepend a scope:: to the ID at the end of the signature */
void preScopeSig(const char *arg)
{
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    size_t i, m, n, depth;
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
            cp[i-1] == '_' || cp[i-1] == ':' ||
            cp[i-1] == '>'))
      {
      i--;
      if (cp[i] == '>')
        {
        depth = 1;
        while (i > 0)
          {
          i--;
          if (cp[i] == '<')
            {
            if (--depth == 0)
              {
              break;
              }
            }
          if (cp[i] == '>')
            {
            depth++;
            }
          }
        }
      }

    memmove(&cp[i+n+2], &cp[i], m+1);
    strncpy(&cp[i], arg, n);
    strncpy(&cp[i+n], "::", 2);
    }
}

/* set a mark in the signature for later operations */
void markSig()
{
  sigMark[sigMarkDepth] = 0;
  if (currentFunction->Signature)
    {
    sigMark[sigMarkDepth] = strlen(currentFunction->Signature);
    }
  sigMarkDepth++;
}

/* get the contents of the sig from the mark, and clear the mark */
const char *copySig()
{
  const char *cp = NULL;
  if (sigMarkDepth > 0)
    {
    sigMarkDepth--;
    }
  if (currentFunction->Signature)
    {
    cp = &currentFunction->Signature[sigMark[sigMarkDepth]];
    }
  return cp;
}

/* swap the signature text using the mark as the radix */
void swapSig()
{
  if (sigMarkDepth > 0)
    {
    sigMarkDepth--;
    }
  if (currentFunction->Signature && sigMark[sigMarkDepth] > 0)
    {
    size_t i, m, n, nn;
    char c;
    char *cp;
    cp = currentFunction->Signature;
    n = strlen(cp);
    m = sigMark[sigMarkDepth];
    nn = m/2;
    for (i = 0; i < nn; i++)
      {
      c = cp[i]; cp[i] = cp[m-i-1]; cp[m-i-1] = c;
      }
    nn = (n-m)/2;
    for (i = 0; i < nn; i++)
      {
      c = cp[i+m]; cp[i+m] = cp[n-i-1]; cp[n-i-1] = c;
      }
    nn = n/2;
    for (i = 0; i < nn; i++)
      {
      c = cp[i]; cp[i] = cp[n-i-1]; cp[n-i-1] = c;
      }
    }
}

/* chop the last char from the signature */
void chopSig(void)
{
  if (currentFunction->Signature)
    {
    size_t n = strlen(currentFunction->Signature);
    if (n > 0)
      {
      currentFunction->Signature[n-1] = '\0';
      }
    }
}

/* delete the signature */
void delSig(void)
{
  if (currentFunction->Signature)
    {
    free(currentFunction->Signature);
    currentFunction->Signature = NULL;
    }
}

/* mark this signature as legacy */
void legacySig(void)
{
  currentFunction->IsLegacy = 1;
}

/* clear the current Id */
void clearTypeId(void)
{
  currentId = NULL;
}

/* set the current Id, it is sticky until cleared */
void setTypeId(const char *text)
{
  static char static_text[2048];
  if (currentId == NULL)
    {
    currentId = static_text;
    strcpy(static_text, text);
    }
}

/* set the signature and type together */
void typeSig(const char *text)
{
  postSig(text);
  postSig(" ");

  if (currentId == 0)
    {
    setTypeId(text);
    }
  else if (currentId[0] == 'u' && !strcmp(currentId, "unsigned"))
    {
    currentId[8] = ' ';
    strcpy(&currentId[9], text);
    }
}

/* return the current Id and clear it */
const char *getTypeId()
{
  return currentId;
}



/* Line 189 of yacc.c  */
#line 465 "vtkParse.tab.c"

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
     IdType = 334,
     StdString = 335,
     UnicodeString = 336,
     TypeInt8 = 337,
     TypeUInt8 = 338,
     TypeInt16 = 339,
     TypeUInt16 = 340,
     TypeInt32 = 341,
     TypeUInt32 = 342,
     TypeInt64 = 343,
     TypeUInt64 = 344,
     TypeFloat32 = 345,
     TypeFloat64 = 346,
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
     VTK_CONSTANT_DEF = 368,
     VTK_BYTE_SWAP_DECL = 369
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 406 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 736 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 748 "vtkParse.tab.c"

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
#define YYFINAL  132
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2362

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  138
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  153
/* YYNRULES -- Number of rules.  */
#define YYNRULES  446
/* YYNRULES -- Number of states.  */
#define YYNSTATES  804

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
       2,     2,     2,   136,     2,     2,     2,   130,   131,     2,
     120,   121,   128,   126,   123,   125,   137,   129,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   119,   122,
     117,   124,   118,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   134,     2,   135,   133,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   115,   132,   116,   127,     2,     2,     2,
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
      24,    32,    33,    44,    45,    46,    50,    53,    55,    58,
      60,    62,    64,    66,    68,    70,    72,    75,    77,    79,
      82,    86,    90,    93,    97,   100,   104,   108,   111,   115,
     118,   124,   127,   129,   137,   144,   145,   147,   151,   153,
     157,   159,   161,   163,   165,   167,   169,   171,   173,   176,
     180,   184,   186,   188,   190,   192,   194,   196,   198,   200,
     202,   204,   206,   214,   221,   225,   228,   232,   234,   239,
     243,   248,   257,   265,   275,   285,   288,   291,   294,   297,
     301,   304,   307,   311,   312,   318,   320,   321,   326,   329,
     332,   334,   336,   338,   343,   346,   350,   352,   355,   359,
     361,   364,   368,   369,   370,   379,   380,   384,   387,   388,
     389,   397,   398,   402,   405,   408,   411,   412,   414,   415,
     421,   422,   423,   433,   434,   438,   439,   445,   446,   450,
     451,   455,   460,   462,   463,   469,   471,   473,   476,   478,
     480,   482,   487,   491,   492,   494,   496,   500,   501,   502,
     505,   507,   509,   510,   515,   518,   519,   524,   526,   527,
     533,   534,   535,   545,   546,   548,   549,   551,   554,   559,
     565,   570,   576,   581,   587,   591,   594,   598,   604,   610,
     617,   626,   635,   637,   641,   643,   647,   650,   655,   658,
     661,   662,   664,   665,   669,   674,   676,   679,   681,   684,
     686,   689,   692,   694,   696,   698,   699,   703,   704,   710,
     711,   717,   719,   720,   725,   727,   729,   731,   733,   737,
     741,   743,   745,   747,   749,   751,   753,   755,   757,   759,
     762,   765,   768,   771,   774,   775,   780,   781,   786,   787,
     792,   794,   796,   798,   800,   802,   804,   806,   808,   810,
     812,   814,   816,   818,   820,   822,   824,   826,   828,   830,
     832,   834,   836,   837,   841,   843,   845,   847,   849,   851,
     853,   855,   857,   858,   861,   863,   867,   870,   871,   873,
     875,   877,   879,   882,   885,   887,   891,   893,   895,   897,
     899,   901,   903,   904,   912,   913,   914,   915,   925,   926,
     932,   933,   939,   940,   941,   952,   953,   961,   962,   963,
     964,   974,   981,   982,   990,   991,   999,  1000,  1008,  1009,
    1017,  1018,  1026,  1027,  1035,  1036,  1044,  1045,  1053,  1054,
    1064,  1065,  1075,  1080,  1085,  1092,  1100,  1103,  1106,  1110,
    1114,  1116,  1118,  1120,  1122,  1124,  1126,  1128,  1130,  1132,
    1134,  1136,  1138,  1140,  1142,  1144,  1146,  1148,  1150,  1152,
    1154,  1156,  1158,  1160,  1162,  1164,  1166,  1168,  1170,  1172,
    1174,  1176,  1178,  1180,  1182,  1184,  1186,  1188,  1190,  1192,
    1194,  1196,  1198,  1199,  1202,  1203,  1206,  1207,  1210,  1212,
    1214,  1216,  1218,  1220,  1222,  1224,  1226,  1228,  1230,  1232,
    1234,  1236,  1238,  1240,  1242,  1244,  1246,  1248,  1250,  1252,
    1254,  1256,  1258,  1260,  1262,  1264,  1266,  1268,  1270,  1272,
    1274,  1276,  1278,  1280,  1282,  1284,  1286,  1288,  1290,  1294,
    1298,  1302,  1306,  1310,  1314,  1315,  1318
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     139,     0,    -1,   280,   140,    -1,    -1,   141,   280,   140,
      -1,   166,   244,    -1,   166,    37,   244,    -1,   166,   142,
      -1,   142,    -1,    -1,     3,   203,   143,   248,   115,   145,
     116,    -1,    -1,     3,   203,   117,   235,   118,   144,   248,
     115,   145,   116,    -1,    -1,    -1,   146,   147,   145,    -1,
     251,   119,    -1,   219,    -1,    38,   219,    -1,   149,    -1,
     148,    -1,   158,    -1,   157,    -1,   159,    -1,   163,    -1,
     161,    -1,    36,   161,    -1,   160,    -1,    29,    -1,   174,
     204,    -1,    36,   174,   204,    -1,    37,   174,   204,    -1,
     165,   204,    -1,    37,   165,   204,    -1,   173,   204,    -1,
      36,   173,   204,    -1,    37,   173,   204,    -1,   164,   204,
      -1,    37,   164,   204,    -1,   172,   204,    -1,   114,   120,
     280,   121,   122,    -1,   254,   122,    -1,   254,    -1,    27,
     203,   115,   150,   116,   281,   122,    -1,    27,   115,   150,
     116,   281,   122,    -1,    -1,   151,    -1,   151,   123,   150,
      -1,   203,    -1,   203,   124,   154,    -1,   153,    -1,   203,
      -1,   238,    -1,   232,    -1,    10,    -1,    11,    -1,    13,
      -1,   152,    -1,   155,   154,    -1,   152,   156,   154,    -1,
     120,   154,   121,    -1,   125,    -1,   126,    -1,   127,    -1,
     125,    -1,   126,    -1,   128,    -1,   129,    -1,   130,    -1,
     131,    -1,   132,    -1,   133,    -1,    28,   203,   115,   280,
     116,   281,   122,    -1,    28,   115,   280,   116,   281,   122,
      -1,    43,   281,   122,    -1,   166,   161,    -1,     3,   203,
     162,    -1,   122,    -1,   115,   280,   116,   122,    -1,   119,
     281,   122,    -1,    41,   228,   223,   122,    -1,    41,     3,
     203,   115,   280,   116,   203,   122,    -1,    41,     3,   115,
     280,   116,   203,   122,    -1,    41,   228,    51,   203,   121,
     120,   281,   121,   122,    -1,    41,   228,    52,   203,   121,
     120,   281,   121,   122,    -1,    41,   149,    -1,    41,   148,
      -1,    41,   158,    -1,    41,   157,    -1,    41,    46,   122,
      -1,   166,   173,    -1,   166,   174,    -1,    39,   117,   118,
      -1,    -1,    39,   117,   167,   168,   118,    -1,   170,    -1,
      -1,   170,   123,   169,   168,    -1,   171,   216,    -1,   166,
     216,    -1,    40,    -1,     3,    -1,    14,    -1,    48,   120,
     173,   121,    -1,   127,   198,    -1,     7,   127,   198,    -1,
     191,    -1,   227,   183,    -1,     7,   228,   183,    -1,   175,
      -1,   227,   178,    -1,     7,   228,   178,    -1,    -1,    -1,
      34,   227,   120,   176,   207,   121,   177,   186,    -1,    -1,
     180,   179,   186,    -1,   180,   185,    -1,    -1,    -1,    34,
     277,   181,   120,   182,   207,   121,    -1,    -1,   187,   184,
     186,    -1,   187,   185,    -1,   124,    10,    -1,    33,    10,
      -1,    -1,    31,    -1,    -1,   203,   120,   188,   207,   121,
      -1,    -1,    -1,   203,   117,   189,   235,   118,   120,   190,
     207,   121,    -1,    -1,   193,   192,   195,    -1,    -1,   203,
     120,   194,   207,   121,    -1,    -1,   119,   197,   196,    -1,
      -1,   123,   197,   196,    -1,   203,   120,   280,   121,    -1,
     199,    -1,    -1,   203,   120,   200,   207,   121,    -1,    31,
      -1,    45,    -1,    45,    37,    -1,    44,    -1,     8,    -1,
     122,    -1,   115,   280,   116,   122,    -1,   115,   280,   116,
      -1,    -1,   206,    -1,   211,    -1,   211,   123,   206,    -1,
      -1,    -1,   208,   209,    -1,    77,    -1,   211,    -1,    -1,
     211,   123,   210,   209,    -1,   228,   224,    -1,    -1,   228,
     223,   212,   217,    -1,    46,    -1,    -1,   228,    52,   213,
     216,   121,    -1,    -1,    -1,   228,    51,   214,   216,   121,
     120,   215,   205,   121,    -1,    -1,   203,    -1,    -1,   218,
      -1,   124,   252,    -1,     3,   203,   220,   122,    -1,     3,
     203,   240,   220,   122,    -1,    27,   203,   220,   122,    -1,
      27,   203,   240,   220,   122,    -1,    28,   203,   220,   122,
      -1,    28,   203,   240,   220,   122,    -1,   227,   220,   122,
      -1,    46,   122,    -1,    45,    46,   122,    -1,   227,    52,
     203,   121,   122,    -1,   227,    51,   203,   121,   122,    -1,
     227,    51,   203,   121,    47,   122,    -1,   227,    51,   203,
     121,   134,   280,   135,   122,    -1,   227,    51,   203,   121,
     120,   205,   121,   122,    -1,   222,    -1,   222,   123,   221,
      -1,   222,    -1,   222,   123,   221,    -1,   240,   222,    -1,
     240,   222,   123,   221,    -1,   223,   217,    -1,   203,   224,
      -1,    -1,   225,    -1,    -1,    47,   226,   224,    -1,   134,
     281,   135,   224,    -1,   228,    -1,   202,   228,    -1,   229,
      -1,   229,   240,    -1,   230,    -1,   201,   230,    -1,   230,
     201,    -1,   244,    -1,   232,    -1,   238,    -1,    -1,    40,
     231,   238,    -1,    -1,    44,   117,   233,   235,   118,    -1,
      -1,     8,   117,   234,   235,   118,    -1,   228,    -1,    -1,
     228,   123,   236,   235,    -1,     8,    -1,    44,    -1,   232,
      -1,   238,    -1,   239,    78,   237,    -1,   232,    78,   237,
      -1,     8,    -1,    44,    -1,    26,    -1,    25,    -1,    80,
      -1,    81,    -1,   131,    -1,   128,    -1,    32,    -1,   128,
     131,    -1,   128,   128,    -1,    32,   131,    -1,    32,   128,
      -1,    32,    32,    -1,    -1,   128,   128,   241,   240,    -1,
      -1,    32,   128,   242,   240,    -1,    -1,    32,    32,   243,
     240,    -1,   245,    -1,    80,    -1,    81,    -1,    25,    -1,
      26,    -1,     8,    -1,    44,    -1,    21,    -1,    15,    -1,
      20,    -1,    24,    -1,    23,    -1,    82,    -1,    83,    -1,
      84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,
      89,    -1,    90,    -1,    91,    -1,    -1,    35,   246,   247,
      -1,   247,    -1,    22,    -1,    14,    -1,    16,    -1,    17,
      -1,    79,    -1,    18,    -1,    19,    -1,    -1,   119,   249,
      -1,   250,    -1,   250,   123,   249,    -1,   251,   237,    -1,
      -1,     4,    -1,     5,    -1,     6,    -1,   253,    -1,   126,
     253,    -1,   125,   253,    -1,     9,    -1,   120,   252,   121,
      -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,     8,
      -1,    44,    -1,    -1,    92,   120,   203,   123,   255,   228,
     121,    -1,    -1,    -1,    -1,    93,   120,   256,   203,   123,
     257,   228,   258,   121,    -1,    -1,    94,   120,   259,   203,
     121,    -1,    -1,    95,   120,   260,   203,   121,    -1,    -1,
      -1,    96,   120,   203,   123,   261,   244,   262,   123,   281,
     121,    -1,    -1,    97,   120,   203,   123,   263,   244,   121,
      -1,    -1,    -1,    -1,    98,   120,   264,   203,   123,   265,
     244,   266,   121,    -1,    99,   120,   203,   123,   244,   121,
      -1,    -1,   100,   120,   203,   123,   267,   244,   121,    -1,
      -1,   104,   120,   203,   123,   268,   244,   121,    -1,    -1,
     101,   120,   203,   123,   269,   244,   121,    -1,    -1,   105,
     120,   203,   123,   270,   244,   121,    -1,    -1,   102,   120,
     203,   123,   271,   244,   121,    -1,    -1,   106,   120,   203,
     123,   272,   244,   121,    -1,    -1,   103,   120,   203,   123,
     273,   244,   121,    -1,    -1,   107,   120,   203,   123,   274,
     244,   121,    -1,    -1,   108,   120,   203,   123,   275,   244,
     123,    10,   121,    -1,    -1,   109,   120,   203,   123,   276,
     244,   123,    10,   121,    -1,   110,   120,   203,   121,    -1,
     111,   120,   203,   121,    -1,   112,   120,   203,   123,   203,
     121,    -1,   112,   120,   203,   123,   203,   123,   121,    -1,
     120,   121,    -1,   134,   135,    -1,    49,   134,   135,    -1,
      50,   134,   135,    -1,   278,    -1,   124,    -1,   128,    -1,
     129,    -1,   125,    -1,   126,    -1,   136,    -1,   127,    -1,
     123,    -1,   117,    -1,   118,    -1,   131,    -1,   132,    -1,
     133,    -1,   130,    -1,    49,    -1,    50,    -1,    53,    -1,
      54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,    -1,
      61,    -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,
      59,    -1,    60,    -1,    66,    -1,    67,    -1,    68,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,   113,    -1,    -1,   284,
     280,    -1,    -1,   285,   281,    -1,    -1,   283,   282,    -1,
       3,    -1,    39,    -1,   284,    -1,   122,    -1,   285,    -1,
     289,    -1,    30,    -1,   286,    -1,   287,    -1,   288,    -1,
     278,    -1,   119,    -1,   137,    -1,   244,    -1,    78,    -1,
      10,    -1,    11,    -1,    12,    -1,    13,    -1,     9,    -1,
      29,    -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,
      45,    -1,    37,    -1,     7,    -1,    27,    -1,    28,    -1,
      40,    -1,    47,    -1,    46,    -1,    77,    -1,     4,    -1,
       6,    -1,     5,    -1,    42,    -1,    43,    -1,   279,    -1,
     115,   282,   116,    -1,   120,   280,   121,    -1,    51,   280,
     121,    -1,    52,   280,   121,    -1,   134,   280,   135,    -1,
      41,   290,   122,    -1,    -1,     3,   290,    -1,   285,   290,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   534,   534,   536,   536,   538,   538,   539,   539,   541,
     541,   543,   543,   546,   546,   546,   548,   549,   550,   551,
     552,   553,   554,   555,   556,   557,   558,   559,   560,   561,
     562,   563,   564,   565,   566,   567,   568,   569,   570,   571,
     572,   573,   574,   582,   584,   586,   586,   586,   588,   588,
     592,   592,   592,   592,   594,   594,   594,   596,   597,   602,
     608,   614,   614,   615,   617,   617,   618,   618,   619,   619,
     620,   620,   622,   624,   626,   628,   630,   632,   633,   634,
     636,   637,   638,   639,   640,   641,   642,   643,   644,   645,
     647,   649,   651,   652,   652,   655,   656,   656,   658,   658,
     660,   661,   662,   664,   666,   667,   672,   673,   677,   687,
     691,   695,   706,   710,   705,   725,   725,   736,   750,   751,
     750,   758,   758,   769,   783,   784,   786,   786,   789,   788,
     793,   794,   793,   803,   803,   815,   815,   817,   817,   819,
     819,   821,   823,   837,   837,   839,   841,   842,   844,   844,
     846,   847,   848,   850,   850,   852,   852,   854,   854,   854,
     856,   857,   860,   859,   863,   873,   872,   881,   889,   889,
     897,   898,   897,   907,   907,   909,   909,   911,   913,   914,
     915,   916,   917,   918,   919,   920,   921,   922,   923,   924,
     925,   926,   928,   929,   931,   932,   933,   934,   937,   939,
     947,   947,   950,   950,   956,   961,   962,   964,   965,   967,
     968,   969,   971,   972,   974,   976,   976,   980,   980,   982,
     982,   985,   985,   985,   987,   988,   989,   990,   992,   998,
    1005,  1006,  1007,  1008,  1009,  1010,  1023,  1024,  1025,  1026,
    1027,  1028,  1030,  1032,  1034,  1034,  1036,  1036,  1038,  1038,
    1041,  1042,  1043,  1045,  1047,  1048,  1049,  1052,  1053,  1054,
    1055,  1056,  1057,  1058,  1059,  1060,  1061,  1062,  1063,  1064,
    1065,  1066,  1067,  1067,  1069,  1072,  1073,  1074,  1075,  1076,
    1077,  1078,  1080,  1080,  1082,  1082,  1084,  1090,  1091,  1092,
    1093,  1095,  1096,  1097,  1099,  1100,  1102,  1103,  1104,  1105,
    1106,  1107,  1110,  1110,  1125,  1126,  1126,  1125,  1139,  1139,
    1154,  1154,  1168,  1168,  1168,  1215,  1214,  1230,  1231,  1231,
    1230,  1244,  1270,  1270,  1275,  1275,  1280,  1280,  1285,  1285,
    1290,  1290,  1295,  1295,  1300,  1300,  1305,  1305,  1310,  1310,
    1331,  1331,  1352,  1418,  1488,  1555,  1629,  1630,  1631,  1632,
    1633,  1635,  1636,  1636,  1637,  1637,  1638,  1638,  1639,  1639,
    1640,  1640,  1641,  1641,  1642,  1643,  1644,  1645,  1646,  1647,
    1648,  1649,  1650,  1651,  1652,  1653,  1654,  1655,  1656,  1657,
    1658,  1659,  1660,  1661,  1662,  1663,  1664,  1665,  1666,  1667,
    1668,  1674,  1679,  1679,  1680,  1680,  1681,  1681,  1683,  1683,
    1683,  1685,  1685,  1685,  1687,  1687,  1687,  1687,  1688,  1688,
    1688,  1688,  1688,  1689,  1689,  1689,  1689,  1690,  1690,  1690,
    1690,  1690,  1691,  1691,  1691,  1691,  1691,  1691,  1691,  1692,
    1692,  1692,  1692,  1692,  1692,  1693,  1693,  1693,  1695,  1696,
    1697,  1698,  1699,  1700,  1702,  1702,  1703
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
  "CONST", "CONST_PTR", "CONST_EQUAL", "OPERATOR", "UNSIGNED", "FRIEND",
  "INLINE", "MUTABLE", "TEMPLATE", "TYPENAME", "TYPEDEF", "NAMESPACE",
  "USING", "VTK_ID", "STATIC", "VAR_FUNCTION", "ARRAY_NUM", "VTK_LEGACY",
  "NEW", "DELETE", "LPAREN_POINTER", "LPAREN_AMPERSAND", "OP_LSHIFT_EQ",
  "OP_RSHIFT_EQ", "OP_LSHIFT", "OP_RSHIFT", "OP_ARROW_POINTER", "OP_ARROW",
  "OP_INCR", "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ",
  "OP_DIVIDE_EQ", "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND_EQ", "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR",
  "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ",
  "ELLIPSIS", "DOUBLE_COLON", "IdType", "StdString", "UnicodeString",
  "TypeInt8", "TypeUInt8", "TypeInt16", "TypeUInt16", "TypeInt32",
  "TypeUInt32", "TypeInt64", "TypeUInt64", "TypeFloat32", "TypeFloat64",
  "SetMacro", "GetMacro", "SetStringMacro", "GetStringMacro",
  "SetClampMacro", "SetObjectMacro", "GetObjectMacro", "BooleanMacro",
  "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_CONSTANT_DEF", "VTK_BYTE_SWAP_DECL", "'{'", "'}'", "'<'", "'>'",
  "':'", "'('", "')'", "';'", "','", "'='", "'-'", "'+'", "'~'", "'*'",
  "'/'", "'%'", "'&'", "'|'", "'^'", "'['", "']'", "'!'", "'.'", "$accept",
  "strt", "maybe_classes", "maybe_template_class_def", "class_def", "$@1",
  "$@2", "class_def_body", "$@3", "class_def_item", "named_enum", "enum",
  "enum_list", "enum_item", "enum_value", "enum_literal", "enum_math",
  "math_unary_op", "math_binary_op", "named_union", "union", "using",
  "template_internal_class", "internal_class", "internal_class_body",
  "typedef", "template_function", "template_operator", "template", "$@4",
  "template_args", "$@5", "template_arg", "template_type",
  "legacy_function", "function", "operator", "typecast_op_func", "$@6",
  "$@7", "op_func", "$@8", "op_sig", "$@9", "$@10", "func", "$@11",
  "pure_virtual", "maybe_const", "func_sig", "$@12", "$@13", "@14",
  "constructor", "$@15", "constructor_sig", "$@16", "maybe_initializers",
  "more_initializers", "initializer", "destructor", "destructor_sig",
  "$@17", "const_mod", "static_mod", "any_id", "func_body",
  "ignore_args_list", "ignore_more_args", "args_list", "$@18", "more_args",
  "$@19", "arg", "$@20", "$@21", "$@22", "$@23", "maybe_id",
  "maybe_var_assign", "var_assign", "var", "var_ids",
  "maybe_indirect_var_ids", "var_id_maybe_assign", "var_id",
  "maybe_var_array", "var_array", "$@24", "maybe_static_type", "type",
  "type_red", "type_red1", "$@25", "templated_id", "$@26", "$@27", "types",
  "$@28", "maybe_scoped_id", "scoped_id", "class_id", "type_indirection",
  "$@29", "$@30", "$@31", "type_red2", "type_primitive", "$@32",
  "type_integer", "optional_scope", "scope_list", "scope_list_item",
  "scope_type", "literal", "literal2", "macro", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44",
  "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
  "$@54", "op_token", "op_token_no_delim", "vtk_constant_def",
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
     365,   366,   367,   368,   369,   123,   125,    60,    62,    58,
      40,    41,    59,    44,    61,    45,    43,   126,    42,    47,
      37,    38,   124,    94,    91,    93,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   138,   139,   140,   140,   141,   141,   141,   141,   143,
     142,   144,   142,   145,   146,   145,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   148,   149,   150,   150,   150,   151,   151,
     152,   152,   152,   152,   153,   153,   153,   154,   154,   154,
     154,   155,   155,   155,   156,   156,   156,   156,   156,   156,
     156,   156,   157,   158,   159,   160,   161,   162,   162,   162,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     164,   165,   166,   167,   166,   168,   169,   168,   170,   170,
     171,   171,   171,   172,   173,   173,   173,   173,   173,   174,
     174,   174,   176,   177,   175,   179,   178,   178,   181,   182,
     180,   184,   183,   183,   185,   185,   186,   186,   188,   187,
     189,   190,   187,   192,   191,   194,   193,   195,   195,   196,
     196,   197,   198,   200,   199,   201,   202,   202,   203,   203,
     204,   204,   204,   205,   205,   206,   206,   207,   208,   207,
     209,   209,   210,   209,   211,   212,   211,   211,   213,   211,
     214,   215,   211,   216,   216,   217,   217,   218,   219,   219,
     219,   219,   219,   219,   219,   219,   219,   219,   219,   219,
     219,   219,   220,   220,   221,   221,   221,   221,   222,   223,
     224,   224,   226,   225,   225,   227,   227,   228,   228,   229,
     229,   229,   230,   230,   230,   231,   230,   233,   232,   234,
     232,   235,   236,   235,   237,   237,   237,   237,   238,   238,
     239,   239,   239,   239,   239,   239,   240,   240,   240,   240,
     240,   240,   240,   240,   241,   240,   242,   240,   243,   240,
     244,   244,   244,   244,   244,   244,   244,   245,   245,   245,
     245,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   245,   246,   245,   245,   247,   247,   247,   247,   247,
     247,   247,   248,   248,   249,   249,   250,   251,   251,   251,
     251,   252,   252,   252,   252,   252,   253,   253,   253,   253,
     253,   253,   255,   254,   256,   257,   258,   254,   259,   254,
     260,   254,   261,   262,   254,   263,   254,   264,   265,   266,
     254,   254,   267,   254,   268,   254,   269,   254,   270,   254,
     271,   254,   272,   254,   273,   254,   274,   254,   275,   254,
     276,   254,   254,   254,   254,   254,   277,   277,   277,   277,
     277,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   278,   278,   278,   278,   278,   278,   278,   278,   278,
     278,   279,   280,   280,   281,   281,   282,   282,   283,   283,
     283,   284,   284,   284,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   286,   287,
     287,   287,   288,   289,   290,   290,   290
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     2,     3,     2,     1,     0,
       7,     0,    10,     0,     0,     3,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       3,     3,     2,     3,     2,     3,     3,     2,     3,     2,
       5,     2,     1,     7,     6,     0,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     7,     6,     3,     2,     3,     1,     4,     3,
       4,     8,     7,     9,     9,     2,     2,     2,     2,     3,
       2,     2,     3,     0,     5,     1,     0,     4,     2,     2,
       1,     1,     1,     4,     2,     3,     1,     2,     3,     1,
       2,     3,     0,     0,     8,     0,     3,     2,     0,     0,
       7,     0,     3,     2,     2,     2,     0,     1,     0,     5,
       0,     0,     9,     0,     3,     0,     5,     0,     3,     0,
       3,     4,     1,     0,     5,     1,     1,     2,     1,     1,
       1,     4,     3,     0,     1,     1,     3,     0,     0,     2,
       1,     1,     0,     4,     2,     0,     4,     1,     0,     5,
       0,     0,     9,     0,     1,     0,     1,     2,     4,     5,
       4,     5,     4,     5,     3,     2,     3,     5,     5,     6,
       8,     8,     1,     3,     1,     3,     2,     4,     2,     2,
       0,     1,     0,     3,     4,     1,     2,     1,     2,     1,
       2,     2,     1,     1,     1,     0,     3,     0,     5,     0,
       5,     1,     0,     4,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     0,     4,     0,     4,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     3,     2,     0,     1,     1,
       1,     1,     2,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     0,     7,     0,     0,     0,     9,     0,     5,
       0,     5,     0,     0,    10,     0,     7,     0,     0,     0,
       9,     6,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     9,
       0,     9,     4,     4,     6,     7,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     392,   432,   434,   433,   425,   255,   417,   413,   414,   415,
     416,   276,   258,   277,   278,   280,   281,   259,   257,   275,
     261,   260,   253,   254,   426,   427,   418,   404,   419,   420,
     421,   422,   272,   424,   428,   444,   435,   436,   256,   423,
     430,   429,   365,   366,   392,   392,   367,   368,   369,   370,
     371,   372,   378,   379,   373,   374,   375,   376,   377,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   390,
     431,   412,   279,   251,   252,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   391,   396,   359,   360,   409,
     392,   401,   358,   351,   354,   355,   357,   352,   353,   364,
     361,   362,   363,   392,   356,   410,     0,   411,   250,   274,
     408,   437,     3,   392,   402,   405,   406,   407,   403,     0,
     444,   444,     0,     0,     0,   398,   399,     0,   396,   400,
       0,     0,     1,     0,     0,     2,   392,     8,     0,   393,
     273,   445,   446,   443,   440,   441,   438,   397,   439,   442,
     149,   148,     9,    93,     3,     0,     7,     5,     0,   282,
      92,     0,     4,     6,   255,   253,   254,   145,   215,   256,
     251,   252,     0,   221,   207,   209,   213,     0,   214,     0,
     212,   287,     0,   101,   102,   100,   173,     0,    95,   173,
     219,     0,   217,   210,   222,   238,   237,   236,   208,   211,
       0,    11,     0,   288,   289,   290,   283,   284,     0,    14,
     174,    99,    94,    96,    98,     0,   230,   233,   232,   231,
     234,   235,     0,   216,     0,     0,   243,   242,   241,   240,
     239,   224,   225,   226,   229,   227,   282,   228,   287,   286,
       0,   287,     0,     0,     0,   223,     0,     0,     0,     0,
     285,    10,     0,     0,   255,     0,     0,    28,     0,     0,
       0,     0,     0,   394,   256,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    20,    19,    22,    21,    23,    27,    25,    24,
       0,     0,     0,     0,     0,     0,   109,   106,   133,     0,
       0,    17,     0,   205,     0,    42,    97,   220,   218,   249,
     247,   245,    14,     0,     0,     0,    45,     0,   392,     0,
     146,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    18,     0,     0,     0,     0,
       0,    86,    85,    88,    87,     0,     0,   394,   147,     0,
     185,     0,     0,   304,   308,   310,     0,     0,   317,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   392,   104,   142,     0,    15,   392,   150,
      37,    32,    75,    90,    91,    39,    34,    29,   137,   206,
     135,     0,     0,     0,   110,   115,   107,   121,   200,     0,
     192,   175,    16,    41,     0,   392,   394,    77,    76,   200,
       0,     0,   105,   111,   108,     0,     0,    46,    48,    45,
       0,     0,     0,   392,     0,     0,   112,     0,    35,    30,
      38,    33,    36,    31,     0,     0,     0,   392,     0,     0,
       0,    89,     0,     0,     0,    74,   395,   186,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,   134,   158,   365,   366,
       0,     0,   118,   350,     0,     0,     0,     0,   126,   117,
     126,   123,   202,   130,   128,   394,   199,   201,   184,     0,
       0,   198,   176,    12,     0,     0,   178,     0,   394,    45,
       0,     0,   180,     0,   394,     0,   182,     0,   158,     0,
     392,     0,     0,    80,     0,   103,   302,     0,     0,     0,
     312,   315,     0,     0,   322,   326,   330,   334,   324,   328,
     332,   336,   338,   340,   342,   343,     0,     0,   158,   152,
     139,     0,     0,     0,     0,     0,   346,   347,     0,     0,
       0,   125,   124,   127,   116,   122,   200,     0,   158,     0,
     193,   194,     0,   300,   294,   296,   297,   298,   299,   301,
       0,     0,     0,   177,   291,     0,    79,   179,     0,    47,
     149,    54,    55,    56,   148,     0,    61,    62,    63,    57,
      50,    49,     0,    51,    53,    52,   394,   181,     0,   394,
     183,     0,     0,     0,     0,     0,     0,   305,   309,   311,
       0,     0,   318,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,   151,     0,   138,
     392,   136,   167,   160,   159,   161,   200,   348,   349,   119,
       0,   153,   188,   392,   187,   203,     0,     0,   200,     0,
     196,     0,   293,   292,    78,    44,     0,    64,    65,    66,
      67,    68,    69,    70,    71,     0,    58,     0,    73,     0,
     113,     0,     0,   394,   394,     0,     0,   313,     0,     0,
     321,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   344,     0,   144,   139,     0,   162,   170,   168,   165,
     164,   158,   189,     0,   154,   155,     0,     0,   129,   204,
     195,     0,   295,    60,    59,    43,    72,   126,    82,     0,
       0,     0,   303,   306,     0,   316,   319,   323,   327,   331,
     335,   325,   329,   333,   337,     0,     0,   345,   140,   141,
       0,   173,   173,   175,     0,     0,     0,     0,   131,   197,
     114,    81,     0,     0,     0,   394,     0,     0,     0,   163,
       0,     0,   166,   120,   191,   156,   190,   158,    83,    84,
     307,     0,   320,   339,   341,     0,   169,     0,   314,   171,
     132,   153,     0,   172
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   106,   135,   136,   137,   159,   236,   240,   241,   291,
     292,   293,   426,   427,   609,   610,   611,   612,   685,   294,
     295,   296,   297,   298,   418,   299,   300,   301,   138,   161,
     187,   242,   188,   189,   303,   393,   394,   306,   528,   737,
     404,   498,   405,   568,   721,   406,   500,   499,   574,   407,
     578,   577,   787,   307,   398,   308,   487,   486,   649,   560,
     384,   385,   558,   172,   309,   419,   390,   723,   724,   562,
     563,   654,   760,   725,   763,   762,   761,   801,   211,   511,
     512,   311,   409,   580,   410,   411,   506,   507,   576,   336,
     313,   174,   175,   191,   176,   224,   215,   177,   225,   234,
     178,   179,   582,   248,   247,   246,   107,   108,   119,   109,
     182,   206,   207,   208,   593,   594,   315,   626,   462,   696,
     774,   463,   464,   630,   744,   631,   467,   699,   776,   634,
     638,   635,   639,   636,   640,   637,   641,   642,   643,   492,
     110,   111,   112,   356,   127,   128,   113,   114,   115,   116,
     117,   118,   122
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -623
static const yytype_int16 yypact[] =
{
     961,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,   827,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,   961,   961,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,   692,  -623,  -623,  -623,
     961,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,   961,  -623,  -623,    57,  -623,  -623,  -623,
    -623,  -623,    72,   961,  -623,  -623,  -623,  -623,  -623,   339,
     827,   827,  -100,   -51,   -29,  -623,  -623,    18,   692,  -623,
      25,     0,  -623,   128,    39,  -623,   961,  -623,  1843,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,    44,    74,    72,  2271,  -623,  -623,  2156,    79,
    -623,   301,  -623,  -623,     5,   115,   125,  -623,  -623,    67,
     135,   163,  2240,   120,   -11,   214,   190,   152,  -623,   215,
    -623,   297,   150,  -623,  -623,  -623,   128,   176,   186,   128,
    -623,   299,  -623,  -623,  -623,    10,   -26,  -623,  -623,  -623,
     334,  -623,   334,  -623,  -623,  -623,  -623,   191,   334,   194,
    -623,  -623,  -623,  -623,  -623,  2156,   200,  -623,  -623,   213,
    -623,  -623,   190,  -623,  2156,  2156,    12,    16,  -623,    21,
    -623,     5,    67,   190,  -623,  -623,    79,  -623,   297,  -623,
     216,  1230,   301,   219,   226,  -623,   -11,   -11,   -11,   230,
    -623,  -623,   128,  1632,   112,     6,    17,  -623,  2039,  1344,
    1429,  1721,  1810,  1095,   130,    41,   227,   228,   234,   245,
     246,   247,   248,   251,   255,   256,   262,   263,   267,   270,
     271,   272,   282,   283,   284,   289,   290,   306,   307,   313,
     128,   194,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
     118,   118,  1344,   118,   118,   118,  -623,  -623,  -623,  2156,
     315,  -623,   173,  -623,   269,   295,  -623,  -623,  -623,  -623,
    -623,  -623,   194,   147,   128,    59,   128,    68,   961,    87,
     382,   316,   128,  -623,   118,   118,    59,   118,   118,  1514,
     118,   118,   128,   128,   128,  -623,   187,    33,     6,    17,
     318,  -623,  -623,  -623,  -623,   212,   319,  1095,  -623,   321,
    -623,  1599,   128,  -623,  -623,  -623,   128,   128,  -623,   128,
     128,   128,   128,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   961,  -623,  -623,   317,  -623,   961,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,   302,  -623,
    -623,  1886,   128,   128,  -623,    -9,  -623,    -9,    51,   324,
     211,   323,  -623,  -623,   333,   961,  1095,  -623,  -623,   -37,
     336,   128,  -623,  -623,  -623,   131,   345,   332,   338,   128,
     341,   128,   348,   961,   343,   128,  -623,   108,  -623,  -623,
    -623,  -623,  -623,  -623,    22,    22,    22,   961,   353,   354,
     356,  -623,   128,   128,   350,  -623,  -623,  -623,  1632,   352,
     128,   355,   128,   128,   128,   357,   358,   128,   359,   361,
     362,   363,   364,   365,   367,   369,   370,   371,   374,   377,
     389,   390,   393,  -623,   360,   128,  -623,   395,   383,   384,
     398,   340,  -623,  -623,   399,   400,   467,   469,   492,  -623,
     492,  -623,  -623,  -623,  -623,  1095,  -623,  -623,  -623,    22,
     287,  -623,  -623,  -623,   408,   403,  -623,   405,  1095,   128,
     325,   412,  -623,   407,  1095,   414,  -623,   411,   395,   418,
     961,   415,   416,  -623,   128,  -623,  -623,   417,   420,   421,
    -623,  -623,   422,  2271,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,   128,   413,   395,   424,
     425,   419,   426,  1955,   427,   428,  -623,  -623,   423,    60,
     429,  -623,  -623,  -623,  -623,  -623,   -37,  2156,   395,   430,
    -623,   431,   128,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
     287,   308,   308,  -623,  -623,   433,  -623,  -623,   434,  -623,
       5,  -623,  -623,  -623,    67,   325,  -623,  -623,  -623,   268,
    -623,  -623,   325,  -623,   190,  -623,  1095,  -623,   435,  1095,
    -623,   432,   128,   436,   439,   440,  2156,  -623,  -623,  -623,
    2271,  2271,  -623,   445,  2271,  2271,  2271,  2271,  2271,  2271,
    2271,  2271,  2271,  2271,    98,  -623,   446,  -623,   128,  -623,
     961,  -623,  -623,  -623,  -623,   447,     8,  -623,  -623,  -623,
     449,  2123,  -623,   961,  -623,  -623,   450,   448,   -37,    22,
     452,   451,  -623,  -623,  -623,  -623,   455,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,   325,  -623,   456,  -623,   457,
    -623,   458,   128,  1095,  1095,   461,  2156,  -623,   462,  2271,
    -623,   464,   465,   466,   468,   470,   471,   472,   473,   454,
     474,  -623,   475,  -623,   425,   477,  -623,  -623,  -623,  -623,
    -623,   395,  -623,   478,  -623,   480,   453,   481,  -623,  -623,
    -623,    22,  -623,  -623,  -623,  -623,  -623,   492,  -623,   482,
     479,   484,  -623,  -623,   483,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,   528,   539,  -623,  -623,  -623,
    1955,   128,   128,   323,   486,   487,  2123,   488,  -623,  -623,
    -623,  -623,   489,   490,   494,  1095,   495,   496,   497,  -623,
     498,   499,  -623,  -623,  -623,  -623,  -623,   395,  -623,  -623,
    -623,   500,  -623,  -623,  -623,   493,  -623,   501,  -623,  -623,
    -623,  2123,   502,  -623
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -623,  -623,   396,  -623,   491,  -623,  -623,  -133,  -623,  -623,
     328,   366,  -365,  -623,  -623,  -623,  -572,  -623,  -623,   368,
     372,  -623,  -623,  -208,  -623,  -623,   373,   375,   -82,  -623,
     385,  -623,  -623,  -623,  -623,  -228,    14,  -623,  -623,  -623,
     311,  -623,  -623,  -623,  -623,  -320,  -623,   217,  -493,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,   -88,   -16,
     314,  -623,  -623,   485,  -623,   -90,   119,  -164,  -127,  -520,
    -623,  -120,  -623,  -554,  -623,  -623,  -623,  -623,  -188,  -122,
    -623,   381,  -258,  -622,  -494,  -351,  -492,  -623,  -623,  -222,
    -152,  -623,   476,  -623,  -174,  -623,  -623,  -213,  -623,  -140,
    -173,  -623,  -118,  -623,  -623,  -623,  -135,  -623,  -623,   524,
     409,   406,  -623,   437,    56,  -510,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
     249,  -623,     1,  -308,   519,  -623,   -12,   -35,  -623,  -623,
    -623,  -623,   140
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -249
static const yytype_int16 yytable[] =
{
     121,   214,   243,   157,   454,   424,   173,   575,   621,   655,
     502,   244,   245,   304,   150,   581,   150,   222,   223,   312,
     163,   195,   143,   180,   496,   150,   233,   235,   233,   235,
     150,   334,   340,   676,   233,   235,   331,   180,   646,   346,
     686,   150,   226,   152,  -248,   123,   124,   730,  -246,   456,
     151,   333,   151,  -244,   195,   502,   198,   132,   667,   717,
     718,   151,   237,   173,   521,   420,   151,   150,   239,   430,
     144,   434,   173,   173,   129,   133,   150,   151,   358,   186,
     180,   672,   673,  -230,   665,   121,   121,   359,   670,   180,
     180,   130,   145,   401,   392,   150,   210,   505,   502,   210,
     195,   325,   229,   151,   131,   230,   180,   660,   515,   769,
     355,   134,   151,   734,   139,   497,   129,   196,   180,   195,
     197,   326,   190,   180,   180,   180,   180,   180,   319,   320,
     321,   151,   328,   459,   146,   149,   150,   154,   227,   460,
    -248,   228,   505,  -248,  -246,  -231,   148,  -246,   447,  -244,
     196,   310,  -244,   197,   599,   150,   153,   399,   387,   302,
     186,   158,   323,   517,   720,   327,   329,   180,   503,   310,
     310,   504,   151,   523,   180,   581,   729,   527,   339,   195,
     661,   150,   662,   429,   192,   505,   420,   430,   434,   414,
    -230,   151,   160,  -233,   663,   150,   196,   579,   181,   197,
     386,   764,   433,  -232,   180,   421,   655,   401,  -231,   431,
     598,   435,   310,  -234,   424,   196,   618,   151,   197,   711,
     150,   712,   408,   415,   402,   403,   180,   416,   357,   190,
     417,   151,  -149,   388,   386,   425,   428,   581,   402,   403,
     389,  -235,   437,   194,   770,   167,   425,   192,   503,   310,
    -148,   504,   444,   445,   446,   305,   151,   448,   449,   450,
     141,   142,   415,   452,   453,   209,   416,   797,   200,   417,
     201,   310,   461,   335,   341,   196,   465,   466,   197,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   202,   212,   583,   584,   585,   586,   587,
     588,   203,   204,   205,   183,   719,   534,   216,   687,   213,
     -13,   689,   494,   495,   238,   184,   583,   190,   585,   586,
     587,   588,   357,   180,   217,   218,   421,   431,   435,   432,
     192,   589,   251,   600,   509,   601,   602,   317,   603,   428,
     134,   185,   231,   219,   318,   322,   614,   615,   361,   360,
     217,   218,   589,    11,   362,    13,    14,    15,    16,   217,
     218,    19,   531,   532,   666,   363,   364,   365,   366,   604,
     425,   367,   537,   538,   539,   368,   369,   542,   232,   220,
     221,   357,   370,   371,   482,   740,   741,   372,   412,   484,
     373,   374,   375,   677,   678,   561,   679,   680,   681,   682,
     683,   684,   376,   377,   378,   220,   221,   590,   633,   379,
     380,   656,   591,   592,   220,   221,   514,   413,    72,   358,
     391,   485,   395,   396,   397,   173,   381,   382,   180,   428,
     613,   614,   615,   383,   525,   400,   436,   483,   614,   615,
     451,   455,   180,   457,   425,   605,   508,   510,   529,   513,
     606,   607,   608,   438,   439,   519,   440,   441,   516,   442,
     443,   518,   520,   522,   524,   526,   644,   791,   530,   429,
     357,   433,   533,   535,   695,   567,   559,   571,   536,   572,
     540,   541,   543,   357,   544,   545,   546,   547,   548,   357,
     549,   180,   550,   551,   552,   697,   698,   553,   554,   701,
     702,   703,   704,   705,   706,   707,   708,   709,   710,   656,
     555,   614,   615,   556,   557,   613,  -157,   564,   565,   566,
     569,   570,   613,   573,   595,   596,   180,   597,   616,   617,
     619,   623,   691,   620,   622,   645,   624,   625,   777,   650,
     627,   628,   629,   659,   743,   632,   647,   651,   648,   778,
     162,   664,   692,   690,   669,   674,   675,   688,   561,   693,
     694,   180,   657,   658,   746,   668,   700,   713,   727,   728,
     716,   722,   732,   780,   781,   731,   733,   755,   735,   736,
     738,   357,   742,   745,   357,   747,   748,   749,   767,   750,
     351,   751,   752,   753,   754,   613,   757,   756,   759,   765,
     772,   768,   739,   766,   771,   773,   775,   783,   656,   784,
     786,   788,   789,   799,   656,   790,   792,   793,   794,   795,
     796,   798,   800,   803,   501,   180,   758,   316,   352,   156,
     353,   180,   714,   337,   354,   338,   423,   802,   422,   785,
     779,   782,   345,   140,   250,   249,   671,   147,   193,   656,
     493,   715,     0,     0,     0,     0,     0,     0,   357,   357,
     199,     0,     0,     0,   726,     0,   180,     0,     0,     0,
       0,   210,   210,     0,     0,     0,     0,     0,   314,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,     0,    33,
       0,   126,    34,    35,    36,    37,    38,    39,    40,    41,
     357,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,     0,    86,     0,    87,
      88,    89,    90,     0,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,     0,   104,   105,
     120,     1,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,     0,    33,     0,     0,    34,     0,    36,
      37,    38,    39,    40,    41,     0,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,     0,    86,     0,    87,    88,    89,    90,     0,     0,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,     0,   104,   105,     1,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,     0,    33,     0,
       0,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,     0,    86,     0,    87,    88,
      89,    90,     0,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,     0,   104,   105,     1,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,     0,    33,     0,     0,    34,     0,    36,    37,    38,
      39,    40,    41,     0,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,     0,
      86,     0,    87,    88,    89,    90,     0,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
       0,   104,   105,   252,   203,   204,   205,   253,   254,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   165,   166,   255,   256,   257,
       0,   167,     0,     0,   258,    32,   259,   260,   261,   134,
     168,   262,     0,   263,   264,   265,   266,     0,   267,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
     170,   171,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,     0,   289,     0,     0,   332,     0,     0,
       0,   253,   254,     0,     0,     0,     0,   290,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   165,
     166,     0,     0,     0,     0,   167,     0,     0,   258,    32,
       0,     0,     0,     0,   168,     0,     0,     0,   264,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,   170,   171,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   253,   254,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   165,   166,     0,     0,     0,     0,
     167,     0,     0,   258,    32,     0,     0,     0,   134,   168,
       0,   290,     0,   264,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,   170,
     171,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   253,   254,     0,     0,     0,     0,     0,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,   165,
     166,     0,     0,     0,     0,   167,     0,     0,   258,    32,
       0,     0,     0,     0,   168,     0,   290,     0,   264,   330,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,   170,   171,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   458,   254,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   165,   166,     0,     0,     0,     0,
     167,     0,     0,     0,    32,     0,     0,     0,     0,   168,
     164,   290,     0,   264,   330,     0,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,   165,   166,     0,
       0,     0,     0,   167,     0,     0,     0,    32,     0,     0,
       0,     0,   168,     0,     0,     0,   169,     0,    72,   170,
     171,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,   170,   171,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   342,     0,   290,     0,     0,   164,
       0,     0,     0,     0,     0,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,   165,   166,   343,   344,
       0,     0,   167,     0,     0,     0,    32,     0,     0,   324,
       0,   168,     0,     0,     0,   169,   265,   266,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,   170,   171,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   347,     0,     0,     0,     0,   164,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   165,   166,   348,   349,     0,
       0,   167,     0,     0,     0,    32,   133,     0,     0,     0,
     168,     5,     0,     0,   169,     0,   350,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,     0,     0,     0,     0,     0,     0,     0,    32,     0,
     155,     0,     0,     0,     0,     0,     0,    38,     0,    72,
     170,   171,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,   488,   489,     0,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,   164,     0,     0,     0,     0,     0,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
     165,   166,     0,     0,     0,     0,   167,     0,     0,     0,
      32,     0,     0,     0,     0,   168,     0,     0,     0,   169,
       0,   652,     0,    87,    88,     0,   490,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     491,     0,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   653,     0,    72,   170,   171,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,   164,     0,     0,
       0,     0,     0,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,   165,   166,     0,     0,     0,     0,
     167,     0,     0,     0,    32,     0,     0,     0,     0,   168,
       0,     0,     0,   169,   330,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,   170,
     171,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,   164,     0,     0,     0,     0,     0,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   165,   166,
       0,     0,     0,     0,   167,     0,     0,     0,    32,     0,
       0,     0,     0,   168,   164,     0,     0,   169,     0,   652,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,   165,   166,     0,     0,     0,     0,   167,     0,     0,
       0,    32,     0,     0,     0,     0,   168,     0,     0,     0,
     169,     0,    72,   170,   171,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,   170,   171,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,   164,     0,
       0,     0,     0,     0,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,   165,   166,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,     5,
     168,     0,     0,     0,   169,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,     0,     0,     0,     0,     0,    32,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,     0,    72,
     170,   171,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84
};

static const yytype_int16 yycheck[] =
{
      35,   189,   215,   138,   355,   325,   158,   500,   528,   563,
      47,   224,   225,   241,     8,   509,     8,   191,   191,   241,
     155,    32,   122,   158,    33,     8,   200,   200,   202,   202,
       8,   259,   260,   605,   208,   208,   258,   172,   558,   261,
     612,     8,    32,   133,    32,    44,    45,   669,    32,   357,
      44,   259,    44,    32,    32,    47,   174,     0,   578,    51,
      52,    44,   202,   215,   429,   323,    44,     8,   208,   327,
     121,   329,   224,   225,    86,     3,     8,    44,    37,   161,
     215,   591,   592,    78,   576,   120,   121,    46,   582,   224,
     225,    90,   121,    34,   302,     8,   186,   134,    47,   189,
      32,   253,   128,    44,   103,   131,   241,    47,   416,   731,
     262,    39,    44,   685,   113,   124,   128,   128,   253,    32,
     131,   115,   117,   258,   259,   260,   261,   262,   246,   247,
     248,    44,   115,   361,   116,   135,     8,   136,   128,   361,
     128,   131,   134,   131,   128,    78,   121,   131,   115,   128,
     128,   241,   131,   131,   519,     8,   117,   309,   291,   241,
     242,   117,   252,   421,   656,   255,   256,   302,   117,   259,
     260,   120,    44,   431,   309,   669,   668,   435,   260,    32,
     120,     8,   122,   115,   117,   134,   444,   445,   446,   322,
      78,    44,   118,    78,   134,     8,   128,   505,   119,   131,
     290,   721,   115,    78,   339,   323,   760,    34,    78,   327,
     518,   329,   302,    78,   534,   128,   524,    44,   131,   121,
       8,   123,   312,   115,    51,    52,   361,   119,   263,   117,
     122,    44,   120,   115,   324,   325,   326,   731,    51,    52,
     122,    78,   332,   123,   737,    31,   336,   117,   117,   339,
     120,   120,   342,   343,   344,   241,    44,   347,   348,   349,
     120,   121,   115,    51,    52,   115,   119,   787,    78,   122,
     118,   361,   362,   259,   260,   128,   366,   367,   131,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,    78,   118,     8,     9,    10,    11,    12,
      13,     4,     5,     6,     3,   656,   458,     8,   616,   123,
     116,   619,   402,   403,   123,    14,     8,   117,    10,    11,
      12,    13,   357,   458,    25,    26,   444,   445,   446,   328,
     117,    44,   116,     8,   123,    10,    11,   118,    13,   429,
      39,    40,     8,    44,   118,   115,   520,   520,   120,   122,
      25,    26,    44,    14,   120,    16,    17,    18,    19,    25,
      26,    22,   452,   453,   577,   120,   120,   120,   120,    44,
     460,   120,   462,   463,   464,   120,   120,   467,    44,    80,
      81,   416,   120,   120,   383,   693,   694,   120,   119,   388,
     120,   120,   120,   125,   126,   485,   128,   129,   130,   131,
     132,   133,   120,   120,   120,    80,    81,   120,   543,   120,
     120,   563,   125,   126,    80,    81,   415,   122,    79,    37,
     301,   119,   303,   304,   305,   577,   120,   120,   563,   519,
     520,   605,   605,   120,   433,   120,   120,   120,   612,   612,
     122,   122,   577,   122,   534,   120,   122,   124,   447,   116,
     125,   126,   127,   334,   335,   123,   337,   338,   122,   340,
     341,   116,   124,   122,   116,   122,   556,   775,   115,   115,
     505,   115,   122,   121,   626,   135,   116,    10,   123,    10,
     123,   123,   123,   518,   123,   123,   123,   123,   123,   524,
     123,   626,   123,   123,   123,   630,   631,   123,   121,   634,
     635,   636,   637,   638,   639,   640,   641,   642,   643,   661,
     121,   685,   685,   123,   121,   605,   121,   134,   134,   121,
     121,   121,   612,    31,   116,   122,   661,   122,   116,   122,
     116,   530,   622,   122,   116,   122,   121,   121,    10,   120,
     123,   121,   121,   120,   696,   123,   122,   121,   123,    10,
     154,   122,   116,   121,   123,   122,   122,   122,   648,   120,
     120,   696,   135,   135,   699,   135,   121,   121,   118,   121,
     123,   122,   121,   761,   762,   123,   121,   123,   122,   122,
     122,   616,   121,   121,   619,   121,   121,   121,   135,   121,
     262,   121,   121,   121,   121,   685,   121,   123,   121,   121,
     121,   120,   692,   123,   122,   121,   123,   121,   760,   122,
     122,   122,   122,   120,   766,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   407,   760,   714,   242,   262,   138,
     262,   766,   648,   260,   262,   260,   325,   801,   324,   766,
     760,   763,   261,   119,   238,   236,   590,   128,   172,   801,
     401,   650,    -1,    -1,    -1,    -1,    -1,    -1,   693,   694,
     175,    -1,    -1,    -1,   663,    -1,   801,    -1,    -1,    -1,
      -1,   761,   762,    -1,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    -1,    37,
      -1,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     775,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   113,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,    -1,   136,   137,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    37,    -1,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     113,    -1,   115,    -1,   117,   118,   119,   120,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,   136,   137,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    37,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,   115,    -1,   117,   118,
     119,   120,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,   136,   137,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    37,    -1,    -1,    40,    -1,    42,    43,    44,
      45,    46,    47,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,
     115,    -1,   117,   118,   119,   120,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
      -1,   136,   137,     3,     4,     5,     6,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,   114,    -1,    -1,     3,    -1,    -1,
      -1,     7,     8,    -1,    -1,    -1,    -1,   127,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,    -1,    -1,    -1,    39,    40,
      -1,   127,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      -1,    -1,    -1,    -1,    40,    -1,   127,    -1,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
       8,   127,    -1,    44,    45,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    44,    -1,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,     3,    -1,   127,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    -1,    -1,   127,
      -1,    40,    -1,    -1,    -1,    44,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     3,    -1,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    -1,    35,     3,    -1,    -1,    -1,
      40,     8,    -1,    -1,    44,    -1,    46,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    49,    50,    -1,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    44,
      -1,    46,    -1,   117,   118,    -1,   120,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    77,    -1,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    35,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    40,     8,    -1,    -1,    44,    -1,    46,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      44,    -1,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,     8,
      40,    -1,    -1,    -1,    44,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    37,    40,    41,    42,    43,    44,    45,
      46,    47,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,   113,   115,   117,   118,   119,
     120,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   136,   137,   139,   244,   245,   247,
     278,   279,   280,   284,   285,   286,   287,   288,   289,   246,
       3,   285,   290,   280,   280,     3,    39,   282,   283,   284,
     280,   280,     0,     3,    39,   140,   141,   142,   166,   280,
     247,   290,   290,   122,   121,   121,   116,   282,   121,   135,
       8,    44,   203,   117,   280,    37,   142,   244,   117,   143,
     118,   167,   140,   244,     8,    25,    26,    31,    40,    44,
      80,    81,   201,   228,   229,   230,   232,   235,   238,   239,
     244,   119,   248,     3,    14,    40,   166,   168,   170,   171,
     117,   231,   117,   230,   123,    32,   128,   131,   240,   201,
      78,   118,    78,     4,     5,     6,   249,   250,   251,   115,
     203,   216,   118,   123,   216,   234,     8,    25,    26,    44,
      80,    81,   232,   238,   233,   236,    32,   128,   131,   128,
     131,     8,    44,   232,   237,   238,   144,   237,   123,   237,
     145,   146,   169,   235,   235,   235,   243,   242,   241,   248,
     249,   116,     3,     7,     8,    27,    28,    29,    34,    36,
      37,    38,    41,    43,    44,    45,    46,    48,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   114,
     127,   147,   148,   149,   157,   158,   159,   160,   161,   163,
     164,   165,   166,   172,   173,   174,   175,   191,   193,   202,
     203,   219,   227,   228,   251,   254,   168,   118,   118,   240,
     240,   240,   115,   203,   127,   228,   115,   203,   115,   203,
      45,   227,     3,   161,   173,   174,   227,   164,   165,   166,
     173,   174,     3,    27,    28,   219,   227,     3,    27,    28,
      46,   148,   149,   157,   158,   228,   281,   285,    37,    46,
     122,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   198,   199,   203,   145,   115,   122,
     204,   204,   161,   173,   174,   204,   204,   204,   192,   228,
     120,    34,    51,    52,   178,   180,   183,   187,   203,   220,
     222,   223,   119,   122,   145,   115,   119,   122,   162,   203,
     220,   240,   198,   178,   183,   203,   150,   151,   203,   115,
     220,   240,   280,   115,   220,   240,   120,   203,   204,   204,
     204,   204,   204,   204,   203,   203,   203,   115,   203,   203,
     203,   122,    51,    52,   223,   122,   281,   122,     7,   173,
     227,   203,   256,   259,   260,   203,   203,   264,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   280,   120,   280,   119,   195,   194,    49,    50,
     120,   134,   277,   278,   203,   203,    33,   124,   179,   185,
     184,   185,    47,   117,   120,   134,   224,   225,   122,   123,
     124,   217,   218,   116,   280,   281,   122,   220,   116,   123,
     124,   150,   122,   220,   116,   280,   122,   220,   176,   280,
     115,   203,   203,   122,   228,   121,   123,   203,   203,   203,
     123,   123,   203,   123,   123,   123,   123,   123,   123,   123,
     123,   123,   123,   123,   121,   121,   123,   121,   200,   116,
     197,   203,   207,   208,   134,   134,   121,   135,   181,   121,
     121,    10,    10,    31,   186,   186,   226,   189,   188,   281,
     221,   222,   240,     8,     9,    10,    11,    12,    13,    44,
     120,   125,   126,   252,   253,   116,   122,   122,   281,   150,
       8,    10,    11,    13,    44,   120,   125,   126,   127,   152,
     153,   154,   155,   203,   232,   238,   116,   122,   281,   116,
     122,   207,   116,   280,   121,   121,   255,   123,   121,   121,
     261,   263,   123,   244,   267,   269,   271,   273,   268,   270,
     272,   274,   275,   276,   203,   122,   207,   122,   123,   196,
     120,   121,    46,    77,   209,   211,   228,   135,   135,   120,
      47,   120,   122,   134,   122,   224,   235,   207,   135,   123,
     222,   252,   253,   253,   122,   122,   154,   125,   126,   128,
     129,   130,   131,   132,   133,   156,   154,   281,   122,   281,
     121,   203,   116,   120,   120,   228,   257,   244,   244,   265,
     121,   244,   244,   244,   244,   244,   244,   244,   244,   244,
     244,   121,   123,   121,   197,   280,   123,    51,    52,   223,
     224,   182,   122,   205,   206,   211,   280,   118,   121,   224,
     221,   123,   121,   121,   154,   122,   122,   177,   122,   203,
     281,   281,   121,   228,   262,   121,   244,   121,   121,   121,
     121,   121,   121,   121,   121,   123,   123,   121,   196,   121,
     210,   214,   213,   212,   207,   121,   123,   135,   120,   221,
     186,   122,   121,   121,   258,   123,   266,    10,    10,   209,
     216,   216,   217,   121,   122,   206,   122,   190,   122,   122,
     121,   281,   121,   121,   121,   121,   121,   207,   121,   120,
     121,   215,   205,   121
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
#line 541 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str)); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 543 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 546 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 561 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 562 "vtkParse.y"
    { reject_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 563 "vtkParse.y"
    { output_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 564 "vtkParse.y"
    { output_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 565 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 566 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 567 "vtkParse.y"
    { reject_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 568 "vtkParse.y"
    { output_function(); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 569 "vtkParse.y"
    { output_function(); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 570 "vtkParse.y"
    { output_function(); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 571 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 596 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 598 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 603 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 609 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 614 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 614 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 615 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 617 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 617 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 618 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 618 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 619 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 619 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 620 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 620 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 651 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 652 "vtkParse.y"
    { postSig("template<"); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 653 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 656 "vtkParse.y"
    { postSig(", "); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 661 "vtkParse.y"
    { postSig("class "); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 662 "vtkParse.y"
    { postSig("int "); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 668 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 674 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 678 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 692 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 696 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    { postSig(")"); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 711 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(2) - (8)].integer);
      postSig(";");
      preSig("operator ");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 725 "vtkParse.y"
    { postSig(")"); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 726 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 737 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", currentFunction->Name);
      currentFunction->IsPureVirtual = 1;
      currentClass->IsAbstract = 1;
    }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { postSig(")"); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 759 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
      currentFunction->IsPureVirtual = 1;
      currentClass->IsAbstract = 1;
    }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 783 "vtkParse.y"
    {postSig(") = 0");}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 784 "vtkParse.y"
    {postSig(") const = 0");}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 786 "vtkParse.y"
    {postSig(" const");}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 789 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 792 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 793 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 794 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 801 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 803 "vtkParse.y"
    { postSig(")"); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 804 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 815 "vtkParse.y"
    { postSig("("); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    {
      postSig(");");
      closeSig();
      currentFunction->Name = (char *)malloc(strlen((yyvsp[(1) - (1)].str)) + 2);
      currentFunction->Name[0] = '~';
      strcpy(&currentFunction->Name[1], (yyvsp[(1) - (1)].str));
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 837 "vtkParse.y"
    { postSig("(");}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 839 "vtkParse.y"
    {postSig("const ");}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 841 "vtkParse.y"
    {postSig("static ");}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 842 "vtkParse.y"
    {postSig("static ");}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 844 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 844 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 854 "vtkParse.y"
    {clearTypeId();}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 856 "vtkParse.y"
    { postSig("...");}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 858 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 860 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 864 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (2)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 873 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (2)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 882 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 889 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 890 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(") ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = ((yyvsp[(1) - (5)].integer) | VTK_PARSE_REF);
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 897 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*"); }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 898 "vtkParse.y"
    { postSig(")("); }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 899 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(")");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_UNKNOWN;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 911 "vtkParse.y"
    {postSig("="); postSig((yyvsp[(2) - (2)].str));}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 939 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer);}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 947 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 947 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 950 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 952 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 961 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 964 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 965 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 967 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 968 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 969 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 973 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 975 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 976 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 977 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 980 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 981 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 982 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 983 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 985 "vtkParse.y"
    {postSig(", ");}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 987 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 988 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 989 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 990 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 993 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 999 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1005 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1006 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1007 "vtkParse.y"
    { (yyval.str) = vtkstrdup("istream"); }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1008 "vtkParse.y"
    { (yyval.str) = vtkstrdup("ostream"); }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1009 "vtkParse.y"
    { (yyval.str) = vtkstrdup("vtkStdString"); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1010 "vtkParse.y"
    { (yyval.str) = vtkstrdup("vtkUnicodeString"); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1023 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1024 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1025 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1026 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1027 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1029 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1033 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1034 "vtkParse.y"
    { postSig("**"); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1035 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1036 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1037 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1038 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1039 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1041 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1042 "vtkParse.y"
    { typeSig("vtkStdString"); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1044 "vtkParse.y"
    { typeSig("vtkUnicodeString"); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1046 "vtkParse.y"
    { typeSig("ostream"); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1047 "vtkParse.y"
    { typeSig("istream"); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1048 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1049 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_VTK_OBJECT; }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1052 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1053 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1054 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1055 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1056 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1057 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1058 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1059 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1060 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1061 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1062 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1063 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1064 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1065 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1066 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1067 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1068 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1072 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1073 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1074 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1075 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1076 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1077 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1078 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1085 "vtkParse.y"
    {
      currentClass->SuperClasses[currentClass->NumberOfSuperClasses++] =
        vtkstrdup((yyvsp[(2) - (2)].str));
    }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1090 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1091 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1092 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1093 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1095 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1096 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (2)].str);}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1097 "vtkParse.y"
    {(yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (2)].str))+2);
                        sprintf((yyval.str), "-%s", (yyvsp[(2) - (2)].str)); }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1099 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1100 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (3)].str);}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1102 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1103 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1104 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1105 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1106 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1107 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1110 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1111 "vtkParse.y"
    {
   postSig("a);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 0;
   output_function();
   }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1125 "vtkParse.y"
    {postSig("Get");}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1126 "vtkParse.y"
    {markSig();}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1126 "vtkParse.y"
    {swapSig();}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1127 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = (yyvsp[(7) - (9)].integer);
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1139 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1140 "vtkParse.y"
    {
   postSig("(char *);");
   sprintf(temps,"Set%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_CHAR_PTR;
   currentFunction->ArgClasses[0] = vtkstrdup("char");
   currentFunction->ArgCounts[0] = 0;
   output_function();
   }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1154 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1155 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   currentFunction->ReturnClass = vtkstrdup("char");
   output_function();
   }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1168 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1168 "vtkParse.y"
    {closeSig();}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1170 "vtkParse.y"
    {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"void Set%s(%s);",(yyvsp[(3) - (10)].str),local);
   sprintf(temps,"Set%s",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (10)].integer);
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 0;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%sGet%sMinValue();",local,(yyvsp[(3) - (10)].str));
   sprintf(temps,"Get%sMinValue",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = (yyvsp[(6) - (10)].integer);
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%sGet%sMaxValue();",local,(yyvsp[(3) - (10)].str));
   sprintf(temps,"Get%sMaxValue",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = (yyvsp[(6) - (10)].integer);
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   free(local);
   }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1215 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1216 "vtkParse.y"
    {
   postSig("*);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 1;
   output_function();
   }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1230 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    {markSig();}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    {swapSig();}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1232 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1245 "vtkParse.y"
    {
   sprintf(temps,"%sOn",(yyvsp[(3) - (6)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   delSig();
   postSig("void ");
   postSig(temps);
   postSig("();");
   output_function();

   sprintf(temps,"%sOff",(yyvsp[(3) - (6)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   delSig();
   postSig("void ");
   postSig(temps);
   postSig("();");
   output_function();
   }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1275 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1276 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1281 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1286 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1295 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1296 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1300 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1301 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1305 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1306 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1310 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"void Set%s(%s a[%s]);",
           (yyvsp[(3) - (9)].str), local, (yyvsp[(8) - (9)].str));
   sprintf(temps,"Set%s",(yyvsp[(3) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer));
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = atol((yyvsp[(8) - (9)].str));
   output_function();
   free(local);
   }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1331 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1333 "vtkParse.y"
    {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"%s *Get%s();", local, (yyvsp[(3) - (9)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer));
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = atol((yyvsp[(8) - (9)].str));
   output_function();
   free(local);
   }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1353 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
             (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ReturnClass = "vtkCoordinate";
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double, double);",
             (yyvsp[(3) - (4)].str));
     sprintf(temps,"Set%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 2;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 0;
     currentFunction->ArgTypes[1] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[1] = vtkstrdup("double");
     currentFunction->ArgCounts[1] = 0;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double a[2]);",
             (yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 2;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s();", (yyvsp[(3) - (4)].str));
     sprintf(temps,"Get%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ReturnClass = vtkstrdup("double");
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 2;
     output_function();
   }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1419 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
             (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ReturnClass = "vtkCoordinate";
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,
             "void Set%s(double, double, double);",
             (yyvsp[(3) - (4)].str));
     sprintf(temps,"Set%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 3;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 0;
     currentFunction->ArgTypes[1] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[1] = vtkstrdup("double");
     currentFunction->ArgCounts[1] = 0;
     currentFunction->ArgTypes[2] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[2] = vtkstrdup("double");
     currentFunction->ArgCounts[2] = 0;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double a[3]);",
             (yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 3;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s();", (yyvsp[(3) - (4)].str));
     sprintf(temps,"Get%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ReturnClass = vtkstrdup("double");
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 3;
     output_function();
   }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1489 "vtkParse.y"
    {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ReturnClass = vtkstrdup("char");
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "int IsA(const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgClasses[0] = vtkstrdup("char");
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance();", (yyvsp[(3) - (6)].str));
   sprintf(temps,"NewInstance");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (6)].str));
   output_function();

   if ( is_concrete )
     {
     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature, "%s *SafeDownCast(vtkObject* o);",
             (yyvsp[(3) - (6)].str));
     sprintf(temps,"SafeDownCast");
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
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

  case 345:

/* Line 1455 of yacc.c  */
#line 1556 "vtkParse.y"
    {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ReturnClass = vtkstrdup("char");
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,
           "int IsA(const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   currentFunction->ReturnClass = vtkstrdup("int");
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance();", (yyvsp[(3) - (7)].str));
   sprintf(temps,"NewInstance");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (7)].str));
   output_function();

   if ( is_concrete )
     {
     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature, "%s *SafeDownCast(vtkObject* o);",
             (yyvsp[(3) - (7)].str));
     sprintf(temps,"SafeDownCast");
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC|VTK_PARSE_VTK_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (7)].str));
     output_function();
     }
   }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1629 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1630 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1631 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1632 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1635 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1636 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1636 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1637 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1637 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1638 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1638 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1639 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1639 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1640 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1640 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1641 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1641 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1642 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1643 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1644 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1645 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1646 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1647 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1648 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1649 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1650 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1651 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1652 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1653 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1654 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1655 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1656 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1657 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1658 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1659 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1660 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1661 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1662 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1663 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1664 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1665 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1666 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1667 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1668 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 5575 "vtkParse.tab.c"
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
  goto yyerrlab1;


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
#line 1705 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

static void vtkParseDebug(const char* s1, const char* s2)
{
  if ( parseDebug )
    {
    fprintf(stderr, "   %s %s\n", s1, s2);
    }
}

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  func->Name = NULL;
  func->NumberOfArguments = 0;
  func->ArrayFailure = 0;
  func->IsVirtual = 0;
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
  sigClosed = 0;
  sigMarkDepth = 0;
  sigMark[0] = 0;
}

/* initialize the structure */
void InitClass(ClassInfo *cls)
{
  cls->ClassName = NULL;
  cls->IsAbstract = 0;
  cls->HasDelete = 0;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfFunctions = 0;
}

void InitFile(FileInfo *file_info)
{
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;
  file_info->NumberOfClasses = 0;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  InitClass(currentClass);
  currentClass->ClassName = vtkstrdup(classname);

  data.Classes[data.NumberOfClasses++] = currentClass;

  InitFunction(currentFunction);
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

  /* reject template specializations */
  if (currentFunction->Name[strlen(currentFunction->Name)-1] == '>')
    {
    reject_function();
    return;
    }

  /* a void argument is the same as no arguements */
  if (currentFunction->NumberOfArguments == 1 &&
      (currentFunction->ArgTypes[0] & VTK_PARSE_UNQUALIFIED_TYPE) ==
      VTK_PARSE_VOID)
    {
    currentFunction->NumberOfArguments = 0;
    }

  /* if return type is void, set return class to void */
  if (currentFunction->ReturnClass == NULL &&
      (currentFunction->ReturnType & VTK_PARSE_UNQUALIFIED_TYPE) ==
       VTK_PARSE_VOID)
    {
    currentFunction->ReturnClass = vtkstrdup("void");
    }

  /* set public, protected */
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
    currentClass->HasDelete = 1;
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

  currentClass->Functions[currentClass->NumberOfFunctions++]
    = currentFunction;

  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));

  InitFunction(currentFunction);
}

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n)
{
  char *argClass = vtkstrdup(getTypeId());
  char *local = vtkstrdup(typeText);
  char *name;
  int i;

  sprintf(temps,"Set%s", var);
  name = vtkstrdup(temps);

  sprintf(currentFunction->Signature, "void Set%s(%s", var, local);
  for (i = 1; i < n; i++)
    {
    postSig(", ");
    postSig(local);
    }
  postSig(");");
  currentFunction->Name = name;
  currentFunction->NumberOfArguments = n;
  for (i = 0; i < n; i++)
    {
    currentFunction->ArgTypes[i] = argType;
    currentFunction->ArgClasses[i] = argClass;
    currentFunction->ArgCounts[i] = 0;
    }
  output_function();

  currentFunction->Signature = (char *)malloc(2048);
  sigAllocatedLength = 2048;
  sprintf(currentFunction->Signature, "void Set%s(%s a[%i]);",
          var, local, n);
  currentFunction->Name = name;
  currentFunction->NumberOfArguments = 1;
  currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | argType);
  currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
  currentFunction->ArgCounts[0] = n;
  output_function();

  free(local);
}

void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n)
{
  char *local = vtkstrdup(typeText);

  sprintf(currentFunction->Signature, "%s *Get%s();", local, var);
  sprintf(temps, "Get%s", var);
  currentFunction->Name = vtkstrdup(temps);
  currentFunction->NumberOfArguments = 0;
  currentFunction->ReturnType = (VTK_PARSE_POINTER | argType);
  currentFunction->ReturnClass = vtkstrdup(getTypeId());
  currentFunction->HaveHint = 1;
  currentFunction->HintSize = n;
  output_function();

  free(local);
}

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, int concrete, FILE *ifile, FILE *errfile)
{
  int i, j;
  int ret;
  FileInfo *file_info;
  char *main_class;

  InitFile(&data);

  data.FileName = vtkstrdup(filename);
  is_concrete = concrete;

  CommentState = 0;
  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  InitFunction(currentFunction);

  parseDebug = 0;
  if (getenv("DEBUG") != NULL)
    {
    parseDebug = 1;
    }

  yyin = ifile;
  yyout = errfile;
  ret = yyparse();

  free(currentFunction);

  if (ret)
    {
    fprintf(errfile,
            "*** SYNTAX ERROR found in parsing the header file %s "
            "before line %d ***\n",
            filename, yylineno);
    return NULL;
    }

  /* The main class name should match the file name */
  i = strlen(filename);
  j = i;
  while (i > 0)
    {
    --i;
    if (filename[i] == '.')
      {
      j = i;
      }
    if (filename[i] == '/' || filename[i] == '\\')
      {
      i++;
      break;
      }
    }
  main_class = (char *)malloc(j-i+1);
  strncpy(main_class, &data.FileName[i], j-i);
  main_class[j-i] = '\0';

  /* move the main class to the first position */
  for (i = 0; i < data.NumberOfClasses; i++)
    {
    if (strcmp(data.Classes[i]->ClassName, main_class) == 0)
      {
      ClassInfo *temp = data.Classes[i];
      for (j = i; j > 0; j--)
        {
        data.Classes[j] = data.Classes[j-1];
        }
      data.Classes[0] = temp;
      /* override "IsAbstract" with the "IsConcrete" set by CMake */
      data.Classes[0]->IsAbstract = !is_concrete;
      break;
      }
    }

  free(main_class);

  file_info = (FileInfo *)malloc(sizeof(FileInfo));
  memcpy(file_info, &data, sizeof(FileInfo));

  return file_info;
}

/* Read a hints file and update the FileInfo */
int vtkParse_ReadHints(FileInfo *file_info, FILE *hfile, FILE *errfile)
{
  char h_cls[80];
  char h_func[80];
  unsigned int  h_type;
  int  h_value;
  FunctionInfo *func_info;
  ClassInfo *class_info;
  int i, j;

  /* read each hint line in succession */
  while (fscanf(hfile,"%s %s %x %i", h_cls, h_func, &h_type, &h_value) != EOF)
    {
    /* find the matching class */
    for (i = 0; i < file_info->NumberOfClasses; i++)
      {
      class_info = file_info->Classes[i];

      if (strcmp(h_cls, class_info->ClassName) == 0)
        {
        /* find the matching function */
        for (j = 0; j < class_info->NumberOfFunctions; j++)
          {
          func_info = class_info->Functions[j];

          if (func_info->HaveHint == 0 && func_info->Name &&
              (strcmp(h_func, func_info->Name) == 0) &&
              ((int)h_type == func_info->ReturnType))
            {
            /* types that hints are accepted for */
            switch (func_info->ReturnType & VTK_PARSE_UNQUALIFIED_TYPE)
              {
              case VTK_PARSE_FLOAT_PTR:
              case VTK_PARSE_VOID_PTR:
              case VTK_PARSE_DOUBLE_PTR:
              case VTK_PARSE_ID_TYPE_PTR:
              case VTK_PARSE_LONG_LONG_PTR:
              case VTK_PARSE_UNSIGNED_LONG_LONG_PTR:
              case VTK_PARSE___INT64_PTR:
              case VTK_PARSE_UNSIGNED___INT64_PTR:
              case VTK_PARSE_INT_PTR:
              case VTK_PARSE_UNSIGNED_INT_PTR:
              case VTK_PARSE_SHORT_PTR:
              case VTK_PARSE_UNSIGNED_SHORT_PTR:
              case VTK_PARSE_LONG_PTR:
              case VTK_PARSE_UNSIGNED_LONG_PTR:
              case VTK_PARSE_SIGNED_CHAR_PTR:
              case VTK_PARSE_UNSIGNED_CHAR_PTR:
                {
                func_info->HaveHint = 1;
                func_info->HintSize = h_value;
                break;
                }
              }
            }
          }
        }
      }
    }

  return 1;
}

/* Free the FileInfo struct returned by vtkParse_ParseFile() */
void vtkParse_Free(FileInfo *file_info)
{
  /* big memory leak here, strings aren't freed */
  int i, j, n, m;
  ClassInfo *class_info;
  FunctionInfo *func_info;

  n = file_info->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    class_info = file_info->Classes[i];
    m = class_info->NumberOfFunctions;
    for (j = 0; j < m; j++)
      {
      func_info = class_info->Functions[j];
      free(func_info);
      }
    free(class_info);
    }

  free(file_info);
}

