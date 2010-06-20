
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
  - convert TABs to spaces (eight per tab)
  - remove spaces from ends of lines, s/ *$//g
  - remove the "goto yyerrlab1;" that appears right before yyerrlab1:
  - remove the #defined constants that appear right after the enums

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
  int n;

  postSig(text);
  postSig(" ");

  if (currentId == 0)
    {
    setTypeId(text);
    }
  else if ((currentId[0] == 'u' && strcmp(currentId, "unsigned") == 0) ||
           (currentId[0] == 's' && strcmp(currentId, "signed") == 0))
    {
    n = strlen(currentId);
    currentId[n] = ' ';
    strcpy(&currentId[n+1], text);
    }
}

/* return the current Id and clear it */
const char *getTypeId()
{
  return currentId;
}



/* Line 189 of yacc.c  */
#line 471 "vtkParse.tab.c"

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
     SIGNED = 291,
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
     StdString = 335,
     UnicodeString = 336,
     IdType = 337,
     TypeInt8 = 338,
     TypeUInt8 = 339,
     TypeInt16 = 340,
     TypeUInt16 = 341,
     TypeInt32 = 342,
     TypeUInt32 = 343,
     TypeInt64 = 344,
     TypeUInt64 = 345,
     TypeFloat32 = 346,
     TypeFloat64 = 347,
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
     VTK_CONSTANT_DEF = 369,
     VTK_BYTE_SWAP_DECL = 370
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 412 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 744 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 756 "vtkParse.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5423

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  139
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  154
/* YYNRULES -- Number of rules.  */
#define YYNRULES  452
/* YYNRULES -- Number of states.  */
#define YYNSTATES  814

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   370

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   137,     2,     2,     2,   131,   132,     2,
     121,   122,   129,   127,   124,   126,   138,   130,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   120,   123,
     118,   125,   119,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   135,     2,   136,   134,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   116,   133,   117,   128,     2,     2,     2,
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
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115
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
     480,   482,   484,   486,   488,   490,   495,   499,   500,   502,
     504,   508,   509,   510,   513,   515,   517,   518,   523,   526,
     527,   532,   534,   535,   541,   542,   543,   553,   554,   556,
     557,   559,   562,   567,   573,   578,   584,   589,   595,   599,
     602,   606,   612,   618,   625,   634,   643,   645,   649,   651,
     655,   658,   663,   666,   669,   670,   672,   673,   677,   682,
     684,   687,   689,   692,   694,   697,   700,   702,   704,   706,
     707,   711,   712,   718,   719,   725,   727,   728,   733,   735,
     737,   739,   741,   745,   749,   751,   753,   755,   757,   759,
     761,   763,   765,   767,   770,   773,   776,   779,   782,   783,
     788,   789,   794,   795,   800,   802,   804,   806,   808,   810,
     812,   814,   816,   818,   820,   822,   824,   826,   828,   830,
     832,   834,   836,   838,   840,   842,   844,   845,   849,   850,
     854,   856,   858,   860,   862,   864,   866,   868,   870,   871,
     874,   876,   880,   883,   884,   886,   888,   890,   892,   895,
     898,   900,   904,   906,   908,   910,   912,   914,   916,   917,
     925,   926,   927,   928,   938,   939,   945,   946,   952,   953,
     954,   965,   966,   974,   975,   976,   977,   987,   994,   995,
    1003,  1004,  1012,  1013,  1021,  1022,  1030,  1031,  1039,  1040,
    1048,  1049,  1057,  1058,  1066,  1067,  1077,  1078,  1088,  1093,
    1098,  1105,  1113,  1116,  1119,  1123,  1127,  1129,  1131,  1133,
    1135,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,  1153,
    1155,  1157,  1159,  1161,  1163,  1165,  1167,  1169,  1171,  1173,
    1175,  1177,  1179,  1181,  1183,  1185,  1187,  1189,  1191,  1193,
    1195,  1197,  1199,  1201,  1203,  1205,  1207,  1209,  1211,  1212,
    1215,  1216,  1219,  1220,  1223,  1225,  1227,  1229,  1231,  1233,
    1235,  1237,  1239,  1241,  1243,  1245,  1247,  1249,  1251,  1253,
    1255,  1257,  1259,  1261,  1263,  1265,  1267,  1269,  1271,  1273,
    1275,  1277,  1279,  1281,  1283,  1285,  1287,  1289,  1291,  1293,
    1295,  1297,  1299,  1301,  1303,  1307,  1311,  1315,  1319,  1323,
    1327,  1328,  1331
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     140,     0,    -1,   282,   141,    -1,    -1,   141,   142,   282,
      -1,   167,   245,    -1,   167,    38,   245,    -1,   167,   143,
      -1,   143,    -1,    -1,     3,   204,   144,   250,   116,   146,
     117,    -1,    -1,     3,   204,   118,   236,   119,   145,   250,
     116,   146,   117,    -1,    -1,    -1,   146,   147,   148,    -1,
     253,   120,    -1,   220,    -1,    39,   220,    -1,   150,    -1,
     149,    -1,   159,    -1,   158,    -1,   160,    -1,   164,    -1,
     162,    -1,    37,   162,    -1,   161,    -1,    29,    -1,   175,
     205,    -1,    37,   175,   205,    -1,    38,   175,   205,    -1,
     166,   205,    -1,    38,   166,   205,    -1,   174,   205,    -1,
      37,   174,   205,    -1,    38,   174,   205,    -1,   165,   205,
      -1,    38,   165,   205,    -1,   173,   205,    -1,   115,   121,
     282,   122,   123,    -1,   256,   123,    -1,   256,    -1,    27,
     204,   116,   151,   117,   283,   123,    -1,    27,   116,   151,
     117,   283,   123,    -1,    -1,   152,    -1,   152,   124,   151,
      -1,   204,    -1,   204,   125,   155,    -1,   154,    -1,   204,
      -1,   239,    -1,   233,    -1,    10,    -1,    11,    -1,    13,
      -1,   153,    -1,   156,   155,    -1,   153,   157,   155,    -1,
     121,   155,   122,    -1,   126,    -1,   127,    -1,   128,    -1,
     126,    -1,   127,    -1,   129,    -1,   130,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,    28,   204,   116,   282,
     117,   283,   123,    -1,    28,   116,   282,   117,   283,   123,
      -1,    44,   283,   123,    -1,   167,   162,    -1,     3,   204,
     163,    -1,   123,    -1,   116,   282,   117,   123,    -1,   120,
     283,   123,    -1,    42,   229,   224,   123,    -1,    42,     3,
     204,   116,   282,   117,   204,   123,    -1,    42,     3,   116,
     282,   117,   204,   123,    -1,    42,   229,    52,   204,   122,
     121,   283,   122,   123,    -1,    42,   229,    53,   204,   122,
     121,   283,   122,   123,    -1,    42,   150,    -1,    42,   149,
      -1,    42,   159,    -1,    42,   158,    -1,    42,    47,   123,
      -1,   167,   174,    -1,   167,   175,    -1,    40,   118,   119,
      -1,    -1,    40,   118,   168,   169,   119,    -1,   171,    -1,
      -1,   171,   124,   170,   169,    -1,   172,   217,    -1,   167,
     217,    -1,    41,    -1,     3,    -1,    14,    -1,    49,   121,
     174,   122,    -1,   128,   199,    -1,     7,   128,   199,    -1,
     192,    -1,   228,   184,    -1,     7,   229,   184,    -1,   176,
      -1,   228,   179,    -1,     7,   229,   179,    -1,    -1,    -1,
      34,   228,   121,   177,   208,   122,   178,   187,    -1,    -1,
     181,   180,   187,    -1,   181,   186,    -1,    -1,    -1,    34,
     279,   182,   121,   183,   208,   122,    -1,    -1,   188,   185,
     187,    -1,   188,   186,    -1,   125,    10,    -1,    33,    10,
      -1,    -1,    31,    -1,    -1,   204,   121,   189,   208,   122,
      -1,    -1,    -1,   204,   118,   190,   236,   119,   121,   191,
     208,   122,    -1,    -1,   194,   193,   196,    -1,    -1,   204,
     121,   195,   208,   122,    -1,    -1,   120,   198,   197,    -1,
      -1,   124,   198,   197,    -1,   204,   121,   282,   122,    -1,
     200,    -1,    -1,   204,   121,   201,   208,   122,    -1,    31,
      -1,    46,    -1,    46,    38,    -1,    45,    -1,     8,    -1,
      26,    -1,    25,    -1,    80,    -1,    81,    -1,   123,    -1,
     116,   282,   117,   123,    -1,   116,   282,   117,    -1,    -1,
     207,    -1,   212,    -1,   212,   124,   207,    -1,    -1,    -1,
     209,   210,    -1,    78,    -1,   212,    -1,    -1,   212,   124,
     211,   210,    -1,   229,   225,    -1,    -1,   229,   224,   213,
     218,    -1,    47,    -1,    -1,   229,    53,   214,   217,   122,
      -1,    -1,    -1,   229,    52,   215,   217,   122,   121,   216,
     206,   122,    -1,    -1,   204,    -1,    -1,   219,    -1,   125,
     254,    -1,     3,   204,   221,   123,    -1,     3,   204,   241,
     221,   123,    -1,    27,   204,   221,   123,    -1,    27,   204,
     241,   221,   123,    -1,    28,   204,   221,   123,    -1,    28,
     204,   241,   221,   123,    -1,   228,   221,   123,    -1,    47,
     123,    -1,    46,    47,   123,    -1,   228,    53,   204,   122,
     123,    -1,   228,    52,   204,   122,   123,    -1,   228,    52,
     204,   122,    48,   123,    -1,   228,    52,   204,   122,   135,
     282,   136,   123,    -1,   228,    52,   204,   122,   121,   206,
     122,   123,    -1,   223,    -1,   223,   124,   222,    -1,   223,
      -1,   223,   124,   222,    -1,   241,   223,    -1,   241,   223,
     124,   222,    -1,   224,   218,    -1,   204,   225,    -1,    -1,
     226,    -1,    -1,    48,   227,   225,    -1,   135,   283,   136,
     225,    -1,   229,    -1,   203,   229,    -1,   230,    -1,   230,
     241,    -1,   231,    -1,   202,   231,    -1,   231,   202,    -1,
     245,    -1,   233,    -1,   239,    -1,    -1,    41,   232,   239,
      -1,    -1,    45,   118,   234,   236,   119,    -1,    -1,     8,
     118,   235,   236,   119,    -1,   229,    -1,    -1,   229,   124,
     237,   236,    -1,     8,    -1,    45,    -1,   233,    -1,   239,
      -1,   240,    79,   238,    -1,   233,    79,   238,    -1,     8,
      -1,    45,    -1,    26,    -1,    25,    -1,    80,    -1,    81,
      -1,   132,    -1,   129,    -1,    32,    -1,   129,   132,    -1,
     129,   129,    -1,    32,   132,    -1,    32,   129,    -1,    32,
      32,    -1,    -1,   129,   129,   242,   241,    -1,    -1,    32,
     129,   243,   241,    -1,    -1,    32,    32,   244,   241,    -1,
     246,    -1,    80,    -1,    81,    -1,    25,    -1,    26,    -1,
       8,    -1,    45,    -1,    21,    -1,    15,    -1,    20,    -1,
      24,    -1,    23,    -1,    83,    -1,    84,    -1,    85,    -1,
      86,    -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,
      91,    -1,    92,    -1,    -1,    36,   247,   249,    -1,    -1,
      35,   248,   249,    -1,   249,    -1,    22,    -1,    14,    -1,
      16,    -1,    17,    -1,    82,    -1,    18,    -1,    19,    -1,
      -1,   120,   251,    -1,   252,    -1,   252,   124,   251,    -1,
     253,   238,    -1,    -1,     4,    -1,     5,    -1,     6,    -1,
     255,    -1,   127,   255,    -1,   126,   255,    -1,     9,    -1,
     121,   254,   122,    -1,    10,    -1,    11,    -1,    12,    -1,
      13,    -1,     8,    -1,    45,    -1,    -1,    93,   121,   204,
     124,   257,   229,   122,    -1,    -1,    -1,    -1,    94,   121,
     258,   204,   124,   259,   229,   260,   122,    -1,    -1,    95,
     121,   261,   204,   122,    -1,    -1,    96,   121,   262,   204,
     122,    -1,    -1,    -1,    97,   121,   204,   124,   263,   245,
     264,   124,   283,   122,    -1,    -1,    98,   121,   204,   124,
     265,   245,   122,    -1,    -1,    -1,    -1,    99,   121,   266,
     204,   124,   267,   245,   268,   122,    -1,   100,   121,   204,
     124,   245,   122,    -1,    -1,   101,   121,   204,   124,   269,
     245,   122,    -1,    -1,   105,   121,   204,   124,   270,   245,
     122,    -1,    -1,   102,   121,   204,   124,   271,   245,   122,
      -1,    -1,   106,   121,   204,   124,   272,   245,   122,    -1,
      -1,   103,   121,   204,   124,   273,   245,   122,    -1,    -1,
     107,   121,   204,   124,   274,   245,   122,    -1,    -1,   104,
     121,   204,   124,   275,   245,   122,    -1,    -1,   108,   121,
     204,   124,   276,   245,   122,    -1,    -1,   109,   121,   204,
     124,   277,   245,   124,    10,   122,    -1,    -1,   110,   121,
     204,   124,   278,   245,   124,    10,   122,    -1,   111,   121,
     204,   122,    -1,   112,   121,   204,   122,    -1,   113,   121,
     204,   124,   204,   122,    -1,   113,   121,   204,   124,   204,
     124,   122,    -1,   121,   122,    -1,   135,   136,    -1,    50,
     135,   136,    -1,    51,   135,   136,    -1,   280,    -1,   125,
      -1,   129,    -1,   130,    -1,   126,    -1,   127,    -1,   137,
      -1,   128,    -1,   124,    -1,   118,    -1,   119,    -1,   132,
      -1,   133,    -1,   134,    -1,   131,    -1,    50,    -1,    51,
      -1,    54,    -1,    55,    -1,    56,    -1,    57,    -1,    58,
      -1,    59,    -1,    62,    -1,    63,    -1,    64,    -1,    65,
      -1,    66,    -1,    60,    -1,    61,    -1,    67,    -1,    68,
      -1,    69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,   114,
      -1,    -1,   282,   286,    -1,    -1,   283,   287,    -1,    -1,
     284,   285,    -1,     3,    -1,    40,    -1,   286,    -1,   123,
      -1,   287,    -1,   291,    -1,    30,    -1,   288,    -1,   289,
      -1,   290,    -1,   280,    -1,   120,    -1,   138,    -1,   245,
      -1,    79,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,     9,    -1,    29,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    46,    -1,    38,    -1,     7,    -1,    27,
      -1,    28,    -1,    41,    -1,    48,    -1,    47,    -1,    78,
      -1,     4,    -1,     6,    -1,     5,    -1,    43,    -1,    44,
      -1,   281,    -1,   116,   284,   117,    -1,   121,   282,   122,
      -1,    52,   282,   122,    -1,    53,   282,   122,    -1,   135,
     282,   136,    -1,    42,   292,   123,    -1,    -1,     3,   292,
      -1,   287,   292,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   541,   541,   543,   543,   545,   545,   546,   546,   548,
     548,   550,   550,   553,   553,   553,   555,   556,   557,   558,
     559,   560,   561,   562,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   575,   576,   577,   578,
     579,   580,   581,   589,   591,   593,   593,   593,   595,   595,
     599,   599,   599,   599,   601,   601,   601,   603,   604,   609,
     615,   621,   621,   622,   624,   624,   625,   625,   626,   626,
     627,   627,   629,   631,   633,   635,   637,   639,   640,   641,
     643,   644,   645,   646,   647,   648,   649,   650,   651,   652,
     654,   656,   658,   659,   659,   662,   663,   663,   665,   665,
     667,   668,   669,   671,   673,   674,   679,   680,   684,   694,
     698,   702,   713,   717,   712,   732,   732,   743,   757,   758,
     757,   765,   765,   776,   790,   791,   793,   793,   796,   795,
     800,   801,   800,   810,   810,   820,   820,   822,   822,   824,
     824,   826,   828,   842,   842,   844,   846,   847,   849,   850,
     851,   852,   853,   854,   856,   857,   858,   860,   860,   862,
     862,   864,   864,   864,   866,   867,   870,   869,   873,   883,
     882,   891,   899,   899,   907,   908,   907,   917,   917,   919,
     919,   921,   923,   924,   925,   926,   927,   928,   929,   930,
     931,   932,   933,   934,   935,   936,   938,   939,   941,   942,
     943,   944,   947,   949,   957,   957,   960,   960,   966,   971,
     972,   974,   975,   977,   978,   979,   981,   982,   984,   986,
     986,   990,   990,   992,   992,   995,   995,   995,   997,   998,
     999,  1000,  1002,  1008,  1015,  1016,  1017,  1018,  1019,  1020,
    1033,  1034,  1035,  1036,  1037,  1038,  1040,  1042,  1044,  1044,
    1046,  1046,  1048,  1048,  1051,  1052,  1053,  1054,  1055,  1056,
    1057,  1060,  1061,  1062,  1063,  1064,  1065,  1066,  1067,  1068,
    1069,  1070,  1071,  1072,  1073,  1074,  1075,  1075,  1076,  1076,
    1078,  1081,  1082,  1083,  1084,  1085,  1086,  1087,  1089,  1089,
    1091,  1091,  1093,  1099,  1100,  1101,  1102,  1104,  1105,  1106,
    1108,  1109,  1111,  1112,  1113,  1114,  1115,  1116,  1119,  1119,
    1134,  1135,  1135,  1134,  1148,  1148,  1163,  1163,  1177,  1177,
    1177,  1224,  1223,  1239,  1240,  1240,  1239,  1253,  1279,  1279,
    1284,  1284,  1289,  1289,  1294,  1294,  1299,  1299,  1304,  1304,
    1309,  1309,  1314,  1314,  1319,  1319,  1340,  1340,  1361,  1427,
    1497,  1564,  1638,  1639,  1640,  1641,  1642,  1644,  1645,  1645,
    1646,  1646,  1647,  1647,  1648,  1648,  1649,  1649,  1650,  1650,
    1651,  1652,  1653,  1654,  1655,  1656,  1657,  1658,  1659,  1660,
    1661,  1662,  1663,  1664,  1665,  1666,  1667,  1668,  1669,  1670,
    1671,  1672,  1673,  1674,  1675,  1676,  1677,  1683,  1688,  1688,
    1689,  1689,  1690,  1690,  1692,  1692,  1692,  1694,  1694,  1694,
    1696,  1696,  1696,  1696,  1697,  1697,  1697,  1697,  1697,  1698,
    1698,  1698,  1698,  1699,  1699,  1699,  1699,  1699,  1700,  1700,
    1700,  1700,  1700,  1700,  1700,  1701,  1701,  1701,  1701,  1701,
    1701,  1702,  1702,  1702,  1704,  1705,  1706,  1707,  1708,  1709,
    1711,  1711,  1712
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
  "CONST", "CONST_PTR", "CONST_EQUAL", "OPERATOR", "UNSIGNED", "SIGNED",
  "FRIEND", "INLINE", "MUTABLE", "TEMPLATE", "TYPENAME", "TYPEDEF",
  "NAMESPACE", "USING", "VTK_ID", "STATIC", "VAR_FUNCTION", "ARRAY_NUM",
  "VTK_LEGACY", "NEW", "DELETE", "LPAREN_POINTER", "LPAREN_AMPERSAND",
  "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT", "OP_RSHIFT",
  "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR", "OP_DECR", "OP_PLUS_EQ",
  "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ", "OP_REMAINDER_EQ",
  "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ", "OP_LOGIC_AND_EQ",
  "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR", "OP_LOGIC_EQ",
  "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ", "ELLIPSIS",
  "DOUBLE_COLON", "StdString", "UnicodeString", "IdType", "TypeInt8",
  "TypeUInt8", "TypeInt16", "TypeUInt16", "TypeInt32", "TypeUInt32",
  "TypeInt64", "TypeUInt64", "TypeFloat32", "TypeFloat64", "SetMacro",
  "GetMacro", "SetStringMacro", "GetStringMacro", "SetClampMacro",
  "SetObjectMacro", "GetObjectMacro", "BooleanMacro", "SetVector2Macro",
  "SetVector3Macro", "SetVector4Macro", "SetVector6Macro",
  "GetVector2Macro", "GetVector3Macro", "GetVector4Macro",
  "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
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
  "$@29", "$@30", "$@31", "type_red2", "type_primitive", "$@32", "$@33",
  "type_integer", "optional_scope", "scope_list", "scope_list_item",
  "scope_type", "literal", "literal2", "macro", "$@34", "$@35", "$@36",
  "$@37", "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45",
  "$@46", "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53", "$@54",
  "$@55", "op_token", "op_token_no_delim", "vtk_constant_def",
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
     365,   366,   367,   368,   369,   370,   123,   125,    60,    62,
      58,    40,    41,    59,    44,    61,    45,    43,   126,    42,
      47,    37,    38,   124,    94,    91,    93,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   139,   140,   141,   141,   142,   142,   142,   142,   144,
     143,   145,   143,   146,   147,   146,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   149,   150,   151,   151,   151,   152,   152,
     153,   153,   153,   153,   154,   154,   154,   155,   155,   155,
     155,   156,   156,   156,   157,   157,   157,   157,   157,   157,
     157,   157,   158,   159,   160,   161,   162,   163,   163,   163,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     165,   166,   167,   168,   167,   169,   170,   169,   171,   171,
     172,   172,   172,   173,   174,   174,   174,   174,   174,   175,
     175,   175,   177,   178,   176,   180,   179,   179,   182,   183,
     181,   185,   184,   184,   186,   186,   187,   187,   189,   188,
     190,   191,   188,   193,   192,   195,   194,   196,   196,   197,
     197,   198,   199,   201,   200,   202,   203,   203,   204,   204,
     204,   204,   204,   204,   205,   205,   205,   206,   206,   207,
     207,   208,   209,   208,   210,   210,   211,   210,   212,   213,
     212,   212,   214,   212,   215,   216,   212,   217,   217,   218,
     218,   219,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   221,   221,   222,   222,
     222,   222,   223,   224,   225,   225,   227,   226,   226,   228,
     228,   229,   229,   230,   230,   230,   231,   231,   231,   232,
     231,   234,   233,   235,   233,   236,   237,   236,   238,   238,
     238,   238,   239,   239,   240,   240,   240,   240,   240,   240,
     241,   241,   241,   241,   241,   241,   241,   241,   242,   241,
     243,   241,   244,   241,   245,   245,   245,   245,   245,   245,
     245,   246,   246,   246,   246,   246,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   247,   246,   248,   246,
     246,   249,   249,   249,   249,   249,   249,   249,   250,   250,
     251,   251,   252,   253,   253,   253,   253,   254,   254,   254,
     254,   254,   255,   255,   255,   255,   255,   255,   257,   256,
     258,   259,   260,   256,   261,   256,   262,   256,   263,   264,
     256,   265,   256,   266,   267,   268,   256,   256,   269,   256,
     270,   256,   271,   256,   272,   256,   273,   256,   274,   256,
     275,   256,   276,   256,   277,   256,   278,   256,   256,   256,
     256,   256,   279,   279,   279,   279,   279,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   280,   280,   280,   280,   280,   281,   282,   282,
     283,   283,   284,   284,   285,   285,   285,   286,   286,   286,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   288,   289,   289,   289,   290,   291,
     292,   292,   292
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
       1,     1,     1,     1,     1,     4,     3,     0,     1,     1,
       3,     0,     0,     2,     1,     1,     0,     4,     2,     0,
       4,     1,     0,     5,     0,     0,     9,     0,     1,     0,
       1,     2,     4,     5,     4,     5,     4,     5,     3,     2,
       3,     5,     5,     6,     8,     8,     1,     3,     1,     3,
       2,     4,     2,     2,     0,     1,     0,     3,     4,     1,
       2,     1,     2,     1,     2,     2,     1,     1,     1,     0,
       3,     0,     5,     0,     5,     1,     0,     4,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     3,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     3,     2,     0,     1,     1,     1,     1,     2,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     0,     7,
       0,     0,     0,     9,     0,     5,     0,     5,     0,     0,
      10,     0,     7,     0,     0,     0,     9,     6,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     9,     0,     9,     4,     4,
       6,     7,     2,     2,     3,     3,     1,     1,     1,     1,
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
     398,     0,     3,     1,   438,   440,   439,   431,   259,   423,
     419,   420,   421,   422,   282,   262,   283,   284,   286,   287,
     263,   261,   281,   265,   264,   257,   258,   432,   433,   424,
     410,   425,   426,   427,   428,   278,   276,   430,   434,   450,
     441,   442,   260,   429,   436,   435,   371,   372,   398,   398,
     373,   374,   375,   376,   377,   378,   384,   385,   379,   380,
     381,   382,   383,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   437,   418,   255,   256,   285,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   397,
     402,   365,   366,   415,   398,   407,   364,   357,   360,   361,
     363,   358,   359,   370,   367,   368,   369,   398,   362,   416,
       2,   417,   254,   280,   414,   443,   399,   408,   411,   412,
     413,   409,     0,     0,   450,   450,     0,     0,     0,     0,
       0,     0,     0,     0,   398,     8,     0,   279,   277,   451,
     452,   449,   446,   447,   404,   405,   444,   403,   406,   445,
     448,   149,   151,   150,   148,   152,   153,     9,    93,     4,
       0,     7,     5,     0,   288,    92,     0,     6,   259,   257,
     258,   145,   219,   260,   255,   256,     0,   225,   211,   213,
     217,     0,   218,     0,   216,   293,     0,   101,   102,   100,
     177,     0,    95,   177,   223,     0,   221,   214,   226,   242,
     241,   240,   212,   215,     0,    11,     0,   294,   295,   296,
     289,   290,     0,    13,   178,    99,    94,    96,    98,     0,
     234,   237,   236,   235,   238,   239,     0,   220,     0,     0,
     247,   246,   245,   244,   243,   228,   229,   230,   233,   231,
     288,   232,   293,   292,    14,     0,     0,     0,   227,     0,
       0,     0,     0,   291,    10,   293,    97,   224,   222,   253,
     251,   249,    13,     0,     0,   259,   257,   258,     0,     0,
      28,     0,     0,     0,     0,     0,   400,   260,   146,     0,
       0,   255,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    15,    20,    19,    22,
      21,    23,    27,    25,    24,     0,     0,     0,     0,     0,
       0,   109,   106,   133,     0,     0,    17,     0,   209,     0,
      42,    14,     0,     0,     0,    45,     0,   398,     0,   146,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,     0,     0,
      86,    85,    88,    87,     0,     0,   147,     0,   189,     0,
       0,   310,   314,   316,     0,     0,   323,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   398,   104,   142,     0,   398,   154,    37,    32,    75,
      90,    91,    39,    34,    29,   137,   210,   135,     0,     0,
       0,   110,   115,   107,   121,   204,     0,   196,   179,    16,
      41,    12,   398,   400,    77,    76,   204,     0,     0,   105,
     111,   108,     0,     0,    46,    48,    45,     0,     0,     0,
     398,     0,     0,   112,     0,    35,    30,    38,    33,    36,
      31,     0,     0,     0,   398,     0,     0,     0,    89,     0,
       0,     0,    74,   401,   190,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     143,     0,     0,   134,   162,   371,   372,     0,     0,   118,
     356,     0,     0,     0,     0,   126,   117,   126,   123,   206,
     130,   128,   400,   203,   205,   188,     0,     0,   202,   180,
       0,     0,   182,     0,   400,    45,     0,     0,   184,     0,
     400,     0,   186,     0,   162,     0,   398,     0,     0,    80,
       0,   103,   308,     0,     0,     0,   318,   321,     0,     0,
     328,   332,   336,   340,   330,   334,   338,   342,   344,   346,
     348,   349,     0,     0,   162,   156,   139,     0,     0,     0,
       0,     0,   352,   353,     0,     0,     0,   125,   124,   127,
     116,   122,   204,     0,   162,     0,   197,   198,     0,   306,
     300,   302,   303,   304,   305,   307,     0,     0,     0,   181,
     297,     0,    79,   183,     0,    47,   149,    54,    55,    56,
     151,   150,   148,   152,   153,     0,    61,    62,    63,    57,
      50,    49,     0,    51,    53,    52,   400,   185,     0,   400,
     187,     0,     0,     0,     0,     0,     0,   311,   315,   317,
       0,     0,   324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,     0,   155,     0,   138,
     398,   136,   171,   164,   163,   165,   204,   354,   355,   119,
       0,   157,   192,   398,   191,   207,     0,     0,   204,     0,
     200,     0,   299,   298,    78,    44,     0,    64,    65,    66,
      67,    68,    69,    70,    71,     0,    58,     0,    73,     0,
     113,     0,     0,   400,   400,     0,     0,   319,     0,     0,
     327,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   350,     0,   144,   139,     0,   166,   174,   172,   169,
     168,   162,   193,     0,   158,   159,     0,     0,   129,   208,
     199,     0,   301,    60,    59,    43,    72,   126,    82,     0,
       0,     0,   309,   312,     0,   322,   325,   329,   333,   337,
     341,   331,   335,   339,   343,     0,     0,   351,   140,   141,
       0,   177,   177,   179,     0,     0,     0,     0,   131,   201,
     114,    81,     0,     0,     0,   400,     0,     0,     0,   167,
       0,     0,   170,   120,   195,   160,   194,   162,    83,    84,
     313,     0,   326,   345,   347,     0,   173,     0,   320,   175,
     132,   157,     0,   176
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,   110,   134,   135,   164,   240,   244,   255,   306,
     307,   308,   433,   434,   619,   620,   621,   622,   695,   309,
     310,   311,   312,   313,   425,   314,   315,   316,   190,   166,
     191,   245,   192,   193,   318,   400,   401,   321,   534,   747,
     411,   505,   412,   574,   731,   413,   507,   506,   580,   414,
     584,   583,   797,   322,   405,   323,   494,   493,   659,   566,
     392,   393,   564,   176,   324,   426,   397,   733,   734,   568,
     569,   664,   770,   735,   773,   772,   771,   811,   215,   518,
     519,   326,   416,   586,   417,   418,   513,   514,   582,   345,
     328,   178,   179,   195,   180,   228,   219,   181,   229,   238,
     182,   183,   588,   251,   250,   249,   111,   112,   123,   122,
     113,   186,   210,   211,   212,   599,   600,   330,   636,   469,
     706,   784,   470,   471,   640,   754,   641,   474,   709,   786,
     644,   648,   645,   649,   646,   650,   647,   651,   652,   653,
     499,   114,   115,     2,   365,   129,   147,   116,   117,   118,
     119,   120,   121,   126
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -614
static const yytype_int16 yypact[] =
{
    -614,    65,  2739,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,   849,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
     108,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,   394,   394,   849,   849,   -48,   984,  1119,   713,
    1254,  1389,   317,     6,  -614,  -614,  4897,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,    58,    37,  2739,
    5331,  -614,  -614,  5214,    66,  -614,   201,  -614,    70,   113,
     122,  -614,  -614,   106,   127,   130,  5299,    72,   -11,   183,
     150,   120,  -614,   171,  -614,   310,   141,  -614,  -614,  -614,
     317,   151,   136,   317,  -614,   454,  -614,  -614,  -614,   -10,
     -90,  -614,  -614,  -614,   516,  -614,   516,  -614,  -614,  -614,
    -614,   148,   516,  -614,  -614,  -614,  -614,  -614,  -614,  5214,
     169,  -614,  -614,   184,  -614,  -614,   150,  -614,  5214,  5214,
       1,     3,  -614,    25,  -614,    70,   106,   150,  -614,  -614,
      66,  -614,   310,  -614,   190,   201,   191,   193,  -614,   -11,
     -11,   -11,   202,  -614,  -614,  4225,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,   317,  4683,   -26,   -23,    89,   228,   311,
    -614,  5095,  4340,  4426,  4773,  4863,  -614,    81,    21,   194,
     203,   114,   116,   206,   210,   212,   213,   217,   220,   224,
     225,   231,   232,   234,   239,   242,   243,   244,   245,   247,
     252,   255,   258,   266,   272,   317,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,   117,   117,  4340,   117,   117,
     117,  -614,  -614,  -614,  5214,   275,  -614,   441,  -614,   279,
     200,   283,    71,   317,   324,   317,    46,  -614,   145,   363,
     281,   317,  -614,   117,   117,   324,   117,   117,  4512,   117,
     117,   317,   317,   317,  -614,   416,   314,   228,   311,   284,
    -614,  -614,  -614,  -614,   523,  2874,  -614,   292,  -614,  4598,
     317,  -614,  -614,  -614,   317,   317,  -614,   317,   317,   317,
     317,   317,   317,   317,   317,   317,   317,   317,   317,   317,
     317,  -614,  -614,  -614,   297,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,   299,  -614,  -614,  4940,   317,
     317,  -614,   -16,  -614,   -16,    26,   298,   301,   304,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,   -18,   300,   317,  -614,
    -614,  -614,   -57,   305,   302,   308,   317,   315,   317,  1524,
    -614,   316,   317,  -614,   135,  -614,  -614,  -614,  -614,  -614,
    -614,   303,   303,   303,  -614,   312,   330,   337,  -614,   317,
     317,   335,  -614,  -614,  -614,  4683,   338,   317,   339,   317,
     317,   317,   340,   341,   317,   346,   347,   348,   350,   353,
     354,   357,   359,   371,   374,   376,   365,   366,   379,  1659,
    -614,  1794,   317,  -614,   382,   372,   373,   408,   323,  -614,
    -614,   410,   415,   528,   529,   509,  -614,   509,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,   303,    38,  -614,  -614,
    1929,  3009,  -614,   421,  -614,   317,   364,   428,  -614,   424,
    -614,  2064,  -614,   427,   382,  2199,  -614,   429,   435,  -614,
     317,  -614,  -614,   436,   440,   442,  -614,  -614,   439,  5331,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,   317,   443,   382,   447,   448,   446,   451,  5010,
     449,   450,  -614,  -614,   456,    97,   455,  -614,  -614,  -614,
    -614,  -614,   -18,  5214,   382,  3144,  -614,   458,   317,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,    38,   444,   444,  -614,
    -614,   460,  -614,  -614,  3279,  -614,    70,  -614,  -614,  -614,
     113,   122,   106,   127,   130,   364,  -614,  -614,  -614,   461,
    -614,  -614,   364,  -614,   150,  -614,  -614,  -614,  3414,  -614,
    -614,   457,   317,  2334,   463,   477,  5214,  -614,  -614,  -614,
    5331,  5331,  -614,   478,  5331,  5331,  5331,  5331,  5331,  5331,
    5331,  5331,  5331,  5331,    95,  -614,   479,  -614,   317,  -614,
    -614,  -614,  -614,  -614,  -614,   475,    62,  -614,  -614,  -614,
     482,  5180,  -614,  -614,  -614,  -614,   483,   485,   -18,   303,
     484,   487,  -614,  -614,  -614,  -614,   488,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,   364,  -614,  3549,  -614,  3684,
    -614,   489,   317,  -614,  -614,   492,  5214,  -614,   493,  5331,
    -614,   494,   495,   497,   498,   499,   500,   501,   503,   504,
     505,  -614,   508,  -614,   448,  2469,  -614,  -614,  -614,  -614,
    -614,   382,  -614,   510,  -614,   507,  2604,   490,  -614,  -614,
    -614,   303,  -614,  -614,  -614,  -614,  -614,   509,  -614,   511,
    3819,  3954,  -614,  -614,   512,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,   617,   623,  -614,  -614,  -614,
    5010,   317,   317,   304,   515,   517,  5180,   519,  -614,  -614,
    -614,  -614,   520,   521,   524,  -614,   525,   526,   527,  -614,
     530,   531,  -614,  -614,  -614,  -614,  -614,   382,  -614,  -614,
    -614,  4089,  -614,  -614,  -614,   533,  -614,   534,  -614,  -614,
    -614,  5180,   535,  -614
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -614,  -614,  -614,  -614,   502,  -614,  -614,   383,  -614,  -614,
     375,   380,  -420,  -614,  -614,  -614,  -596,  -614,  -614,   386,
     387,  -614,  -614,  -183,  -614,  -614,   378,   390,  -100,  -614,
     419,  -614,  -614,  -614,  -614,  -228,   -24,  -614,  -614,  -614,
     331,  -614,  -614,  -614,  -614,  -329,  -614,   253,  -500,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,   -58,    10,
     336,  -614,  -614,   491,  -614,   -89,   209,  -140,  -104,  -526,
    -614,   -97,  -614,  -563,  -614,  -614,  -614,  -614,  -191,   -99,
    -614,   401,  -230,  -613,  -498,  -360,  -520,  -614,  -614,  -219,
    -152,  -614,   513,  -614,  -175,  -614,  -614,  -216,  -614,  -143,
    -172,  -614,  -169,  -614,  -614,  -614,  -135,  -614,  -614,  -614,
     143,   437,   438,  -614,   423,    83,  -322,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,  -614,
    -614,   273,  -614,   -34,  -399,  -614,  -614,   555,   -39,  -614,
    -614,  -614,  -614,   154
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -253
static const yytype_int16 yytable[] =
{
     125,   162,   218,   246,   461,   431,   665,   581,   631,   202,
     136,   177,   247,   248,   127,   128,   527,   503,   587,   686,
     226,   199,   230,   227,   521,   167,   696,   319,   184,   237,
     509,   237,   239,  -252,   239,  -250,   327,   237,   656,   233,
     239,   184,   234,   157,   343,   349,   589,   590,   591,   592,
     593,   594,   340,  -234,   151,   355,  -237,  -248,   677,   366,
     130,   510,   675,   241,   511,     3,   740,   177,   367,   243,
     151,   152,   153,   131,   509,   141,   177,   177,   199,   151,
     259,   260,   261,   595,   184,   125,   125,   152,   153,   342,
     680,   154,   194,   184,   184,  -149,   152,   153,  -151,   744,
     159,   214,   427,   199,   214,   605,   437,   154,   441,   504,
     509,   132,   334,   585,   727,   728,   154,   512,   200,   231,
     184,   201,   232,   364,   158,   604,   155,   156,   779,   184,
    -252,   628,  -250,  -252,   399,  -250,   184,   184,   184,   184,
     184,   466,   155,   156,   510,   670,   730,   511,   133,  -234,
     467,   155,   156,   151,  -248,   317,   165,  -248,   739,   596,
    -235,   512,   436,   428,   597,   598,   325,   438,  -236,   442,
     152,   153,   406,   348,   332,   200,   163,   199,   201,   336,
     338,   587,   184,   325,   325,  -235,   185,   422,   194,   184,
     154,   423,  -237,  -238,   424,  -239,   198,   512,   523,   196,
     200,  -236,  -148,   201,   187,   774,  -238,   665,   529,  -239,
    -150,   431,   533,   184,   171,   188,   394,   721,   671,   722,
     672,   427,   437,   441,   196,   155,   156,   697,   325,   204,
     699,   320,   673,   395,   184,  -152,   151,  -153,   415,   205,
     396,   133,   189,   587,   394,   432,   435,   780,   344,   350,
     206,   422,   444,   152,   153,   423,   432,   213,   424,   325,
     217,   440,   451,   452,   453,   137,   138,   455,   456,   457,
     216,   807,   242,   154,   200,   682,   683,   201,   139,   140,
     325,   468,   428,   438,   442,   472,   473,   194,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   196,   439,   750,   751,   729,   254,   155,   156,
     257,   151,   258,   540,   207,   208,   209,   368,   262,   151,
     501,   502,   151,   420,   369,   151,   463,   370,   152,   153,
     184,   371,   151,   372,   373,   199,   152,   153,   374,   152,
     153,   375,   152,   153,   335,   376,   377,   435,   154,   152,
     153,   624,   378,   379,   625,   380,   154,   489,   408,   154,
     381,   491,   154,   382,   383,   384,   385,   676,   386,   154,
     537,   538,   606,   387,   607,   608,   388,   609,   432,   389,
     543,   544,   545,   155,   156,   548,   801,   390,   520,   610,
     611,   155,   156,   391,   155,   156,   407,   155,   156,   419,
     421,   366,   443,   567,   155,   156,   531,   458,    14,   612,
      16,    17,    18,    19,   643,   464,    22,   666,   490,   492,
     535,   515,   524,   522,   151,   516,   525,   337,   536,   517,
     454,   177,   200,   526,   184,   201,   435,   623,   528,   532,
     624,   152,   153,   625,   613,   614,   436,   624,   184,   151,
     625,   432,   589,   440,   591,   592,   593,   594,   539,   573,
     541,   154,   220,   542,   546,   547,   152,   153,   409,   410,
     549,   550,   551,   654,   552,   408,    78,   553,   554,   221,
     222,   555,   463,   556,   705,   615,   154,   560,   561,   595,
     616,   617,   618,   409,   410,   557,   155,   156,   558,   223,
     559,   184,   633,   562,  -161,   707,   708,   570,   571,   711,
     712,   713,   714,   715,   716,   717,   718,   719,   720,   666,
     624,   155,   156,   625,   235,   398,   623,   402,   403,   404,
     572,   151,   575,   623,   224,   225,   184,   576,   577,   578,
     579,   221,   222,   701,   603,   626,   463,   627,   152,   153,
     630,   634,   445,   446,   753,   447,   448,   635,   449,   450,
     637,   236,   638,   642,   639,   463,   655,   660,   154,   567,
     657,   184,   658,   661,   756,   459,   460,   669,   674,   700,
     790,   791,   679,   684,   703,   667,   668,   687,   688,   463,
     689,   690,   691,   692,   693,   694,   224,   225,   704,   726,
     710,   723,   737,   155,   156,   732,   623,   738,   741,   742,
     743,   778,   748,   749,   752,   755,   757,   758,   666,   759,
     760,   761,   762,   763,   666,   764,   725,   787,   765,   766,
     767,   776,   775,   788,   781,   184,   785,   793,   161,   736,
     794,   184,   796,   798,   799,   331,   800,   802,   803,   804,
     360,   346,   805,   806,   809,   361,   810,   813,   463,   666,
     463,   362,   363,   347,   256,   430,   768,   508,   724,   429,
     203,   812,   795,   789,   792,   354,   184,   252,   329,   681,
     253,   500,   214,   214,   148,     0,     0,     0,     0,   197,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   463,   463,     0,     0,     0,   144,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
       0,    37,     0,   145,    38,    39,    40,    41,    42,    43,
      44,    45,   463,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    89,     0,    90,
     146,    91,    92,    93,    94,     0,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     0,
     108,   109,   124,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,     0,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,     0,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    91,    92,    93,    94,   142,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,   143,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    91,    92,    93,    94,   149,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   150,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,   530,    91,    92,    93,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,   563,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,   565,    91,    92,    93,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   601,    91,    92,    93,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,   629,    91,    92,    93,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,   632,    91,    92,    93,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,   702,    91,    92,    93,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,   769,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    91,    92,    93,    94,     0,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     777,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,     0,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,     0,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    91,    92,    93,    94,     0,   462,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,     0,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,     0,   602,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,     0,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    91,    92,    93,    94,     0,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     678,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,     0,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,     0,   685,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,     0,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    91,    92,    93,    94,     0,   698,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,     0,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,     0,   745,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,     0,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    91,    92,    93,    94,     0,   746,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,     0,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,   782,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,     0,    37,     0,     0,    38,     0,    40,    41,    42,
      43,    44,    45,     0,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    89,     0,
      90,     0,    91,    92,    93,    94,   783,     0,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       0,   108,   109,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
      38,     0,    40,    41,    42,    43,    44,    45,     0,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    89,     0,    90,     0,    91,    92,    93,
      94,   808,     0,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     0,   108,   109,   263,   207,
     208,   209,   264,   265,     0,     0,     0,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     266,   267,   268,   269,   270,     0,   171,     0,     0,   271,
      35,    36,   272,   273,   274,   133,   172,   275,     0,   276,
     277,   278,   279,     0,   280,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   281,   282,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,     0,
     304,     0,     0,   341,     0,     0,     0,   264,   265,     0,
       0,     0,     0,   305,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   266,   267,     0,     0,     0,
       0,   171,     0,     0,   271,    35,    36,     0,     0,     0,
       0,   172,     0,     0,     0,   277,   339,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     281,   282,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,   264,   265,     0,     0,     0,     0,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   266,   267,     0,     0,     0,     0,   171,     0,     0,
     271,    35,    36,     0,     0,     0,   133,   172,   305,     0,
       0,   277,   339,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   281,   282,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   264,
     265,     0,     0,     0,     0,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   266,   267,     0,
       0,     0,     0,   171,     0,     0,   271,    35,    36,     0,
       0,     0,     0,   172,   305,     0,     0,   277,   339,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   281,   282,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,   465,   265,     0,     0,     0,
       0,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   266,   267,     0,     0,     0,     0,   171,
       0,     0,     0,    35,    36,     0,     0,     0,     0,   172,
     305,     0,     0,   277,   339,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   281,   282,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,   168,     0,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   169,   170,
       0,     0,     0,     0,   171,     0,     0,     0,    35,    36,
       0,     0,     0,     0,   172,     0,   305,     0,   173,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   175,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   351,     0,     0,     0,
       0,   168,     0,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   169,   170,
     352,   353,     0,     0,   171,     0,     0,     0,    35,    36,
       0,   333,     0,     0,   172,     0,     0,     0,   173,   278,
     279,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   174,   175,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   356,     0,     0,     0,
       0,   168,     0,     0,     0,     0,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   169,   170,
     357,   358,     0,     0,   171,     0,     0,     0,    35,    36,
     132,     0,     0,     0,   172,     8,     0,     0,   173,     0,
     359,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,   160,     0,     0,     0,     0,
       0,     0,    42,   174,   175,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
     495,   496,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,   168,     0,
       0,     0,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   169,   170,     0,     0,     0,
       0,   171,     0,     0,     0,    35,    36,     0,     0,     0,
       0,   172,     0,     0,     0,   173,     0,   662,    91,    92,
       0,   497,     0,     0,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   498,     0,   108,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   663,     0,
     174,   175,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,   168,     0,     0,     0,     0,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
     169,   170,     0,     0,     0,     0,   171,     0,     0,     0,
      35,    36,     0,     0,     0,     0,   172,     0,     0,     0,
     173,   339,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   174,   175,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,   168,     0,
       0,     0,     0,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   169,   170,     0,     0,     0,
       0,   171,     0,     0,     0,    35,    36,     0,     0,     0,
       0,   172,   168,     0,     0,   173,     0,   662,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   169,
     170,     0,     0,     0,     0,   171,     0,     0,     0,    35,
      36,     0,     0,     0,     0,   172,     0,     0,     0,   173,
     174,   175,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   174,   175,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,   168,     0,     0,
       0,     0,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,    35,    36,     0,     0,     0,     8,
     172,     0,     0,     0,   173,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,   174,
     175,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88
};

static const yytype_int16 yycheck[] =
{
      39,   136,   193,   219,   364,   334,   569,   507,   534,   178,
     110,   163,   228,   229,    48,    49,   436,    33,   516,   615,
     195,    32,    32,   195,   423,   160,   622,   255,   163,   204,
      48,   206,   204,    32,   206,    32,   255,   212,   564,   129,
     212,   176,   132,   132,   272,   273,     8,     9,    10,    11,
      12,    13,   271,    79,     8,   274,    79,    32,   584,    38,
      94,   118,   582,   206,   121,     0,   679,   219,    47,   212,
       8,    25,    26,   107,    48,   123,   228,   229,    32,     8,
     249,   250,   251,    45,   219,   124,   125,    25,    26,   272,
     588,    45,   118,   228,   229,   121,    25,    26,   121,   695,
     134,   190,   332,    32,   193,   525,   336,    45,   338,   125,
      48,     3,   264,   512,    52,    53,    45,   135,   129,   129,
     255,   132,   132,   275,   118,   524,    80,    81,   741,   264,
     129,   530,   129,   132,   317,   132,   271,   272,   273,   274,
     275,   369,    80,    81,   118,    48,   666,   121,    40,    79,
     369,    80,    81,     8,   129,   255,   119,   132,   678,   121,
      79,   135,   116,   332,   126,   127,   255,   336,    79,   338,
      25,    26,   324,   273,   263,   129,   118,    32,   132,   268,
     269,   679,   317,   272,   273,    79,   120,   116,   118,   324,
      45,   120,    79,    79,   123,    79,   124,   135,   428,   118,
     129,    79,   121,   132,     3,   731,    79,   770,   438,    79,
     121,   540,   442,   348,    31,    14,   305,   122,   121,   124,
     123,   451,   452,   453,   118,    80,    81,   626,   317,    79,
     629,   255,   135,   116,   369,   121,     8,   121,   327,   119,
     123,    40,    41,   741,   333,   334,   335,   747,   272,   273,
      79,   116,   341,    25,    26,   120,   345,   116,   123,   348,
     124,   116,   351,   352,   353,   122,   123,   356,   357,   358,
     119,   797,   124,    45,   129,   597,   598,   132,   124,   125,
     369,   370,   451,   452,   453,   374,   375,   118,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   390,   118,   337,   703,   704,   666,   117,    80,    81,
     119,     8,   119,   465,     4,     5,     6,   123,   116,     8,
     409,   410,     8,   123,   121,     8,   365,   121,    25,    26,
     465,   121,     8,   121,   121,    32,    25,    26,   121,    25,
      26,   121,    25,    26,   116,   121,   121,   436,    45,    25,
      26,   526,   121,   121,   526,   121,    45,   391,    34,    45,
     121,   395,    45,   121,   121,   121,   121,   583,   121,    45,
     459,   460,     8,   121,    10,    11,   121,    13,   467,   121,
     469,   470,   471,    80,    81,   474,   785,   121,   422,    25,
      26,    80,    81,   121,    80,    81,   121,    80,    81,   120,
     117,    38,   121,   492,    80,    81,   440,   123,    14,    45,
      16,    17,    18,    19,   549,   123,    22,   569,   121,   120,
     454,   123,   117,   123,     8,   124,   124,   116,   116,   125,
     116,   583,   129,   125,   569,   132,   525,   526,   123,   123,
     615,    25,    26,   615,    80,    81,   116,   622,   583,     8,
     622,   540,     8,   116,    10,    11,    12,    13,   123,   136,
     122,    45,     8,   124,   124,   124,    25,    26,    52,    53,
     124,   124,   124,   562,   124,    34,    82,   124,   124,    25,
      26,   124,   521,   124,   636,   121,    45,   122,   122,    45,
     126,   127,   128,    52,    53,   124,    80,    81,   124,    45,
     124,   636,   536,   124,   122,   640,   641,   135,   135,   644,
     645,   646,   647,   648,   649,   650,   651,   652,   653,   671,
     695,    80,    81,   695,     8,   316,   615,   318,   319,   320,
     122,     8,   122,   622,    80,    81,   671,   122,    10,    10,
      31,    25,    26,   632,   123,   117,   585,   123,    25,    26,
     123,   122,   343,   344,   706,   346,   347,   122,   349,   350,
     124,    45,   122,   124,   122,   604,   123,   121,    45,   658,
     123,   706,   124,   122,   709,    52,    53,   121,   123,   122,
     771,   772,   124,   123,   121,   136,   136,   126,   127,   628,
     129,   130,   131,   132,   133,   134,    80,    81,   121,   124,
     122,   122,   119,    80,    81,   123,   695,   122,   124,   122,
     122,   121,   123,   702,   122,   122,   122,   122,   770,   122,
     122,   122,   122,   122,   776,   122,   660,    10,   124,   124,
     122,   124,   122,    10,   123,   770,   124,   122,   136,   673,
     123,   776,   123,   123,   123,   262,   122,   122,   122,   122,
     275,   273,   122,   122,   121,   275,   122,   122,   697,   811,
     699,   275,   275,   273,   245,   334,   724,   414,   658,   333,
     179,   811,   776,   770,   773,   274,   811,   240,   255,   596,
     242,   408,   771,   772,   129,    -1,    -1,    -1,    -1,   176,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   750,   751,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,   801,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,   116,
     117,   118,   119,   120,   121,    -1,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,    -1,
     137,   138,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,    -1,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,    -1,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,   117,   118,   119,   120,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,   117,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,    -1,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,    -1,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,    -1,   118,   119,   120,   121,    -1,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,    -1,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,    -1,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,    -1,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     4,     5,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   114,    -1,
     116,    -1,   118,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
      -1,   137,   138,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   114,    -1,   116,    -1,   118,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
     115,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,   128,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    -1,    -1,    -1,    40,    41,   128,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    34,    35,    36,    -1,
      -1,    -1,    -1,    41,   128,    -1,    -1,    45,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,
     128,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,    -1,   128,    -1,    45,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     3,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    36,
      -1,   128,    -1,    -1,    41,    -1,    -1,    -1,    45,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,     3,    -1,    -1,    -1,
      -1,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,    -1,    31,    -1,    -1,    -1,    35,    36,
       3,    -1,    -1,    -1,    41,     8,    -1,    -1,    45,    -1,
      47,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      50,    51,    -1,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    -1,    47,   118,   119,
      -1,   121,    -1,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,   137,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,     8,    -1,    -1,    45,    -1,    47,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,     8,
      41,    -1,    -1,    -1,    45,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    -1,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   140,   282,     0,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    38,    41,    42,
      43,    44,    45,    46,    47,    48,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,   114,
     116,   118,   119,   120,   121,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   137,   138,
     141,   245,   246,   249,   280,   281,   286,   287,   288,   289,
     290,   291,   248,   247,     3,   287,   292,   282,   282,   284,
     282,   282,     3,    40,   142,   143,   167,   249,   249,   292,
     292,   123,   122,   122,     3,    40,   117,   285,   286,   122,
     136,     8,    25,    26,    45,    80,    81,   204,   118,   282,
      38,   143,   245,   118,   144,   119,   168,   245,     8,    25,
      26,    31,    41,    45,    80,    81,   202,   229,   230,   231,
     233,   236,   239,   240,   245,   120,   250,     3,    14,    41,
     167,   169,   171,   172,   118,   232,   118,   231,   124,    32,
     129,   132,   241,   202,    79,   119,    79,     4,     5,     6,
     251,   252,   253,   116,   204,   217,   119,   124,   217,   235,
       8,    25,    26,    45,    80,    81,   233,   239,   234,   237,
      32,   129,   132,   129,   132,     8,    45,   233,   238,   239,
     145,   238,   124,   238,   146,   170,   236,   236,   236,   244,
     243,   242,   250,   251,   117,   147,   169,   119,   119,   241,
     241,   241,   116,     3,     7,     8,    25,    26,    27,    28,
      29,    34,    37,    38,    39,    42,    44,    45,    46,    47,
      49,    80,    81,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   115,   128,   148,   149,   150,   158,
     159,   160,   161,   162,   164,   165,   166,   167,   173,   174,
     175,   176,   192,   194,   203,   204,   220,   228,   229,   253,
     256,   146,   204,   128,   229,   116,   204,   116,   204,    46,
     228,     3,   162,   174,   175,   228,   165,   166,   167,   174,
     175,     3,    27,    28,   220,   228,     3,    27,    28,    47,
     149,   150,   158,   159,   229,   283,    38,    47,   123,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   121,   121,   121,   121,   121,
     121,   121,   199,   200,   204,   116,   123,   205,   205,   162,
     174,   175,   205,   205,   205,   193,   229,   121,    34,    52,
      53,   179,   181,   184,   188,   204,   221,   223,   224,   120,
     123,   117,   116,   120,   123,   163,   204,   221,   241,   199,
     179,   184,   204,   151,   152,   204,   116,   221,   241,   282,
     116,   221,   241,   121,   204,   205,   205,   205,   205,   205,
     205,   204,   204,   204,   116,   204,   204,   204,   123,    52,
      53,   224,   123,   287,   123,     7,   174,   228,   204,   258,
     261,   262,   204,   204,   266,   204,   204,   204,   204,   204,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   282,
     121,   282,   120,   196,   195,    50,    51,   121,   135,   279,
     280,   204,   204,    33,   125,   180,   186,   185,   186,    48,
     118,   121,   135,   225,   226,   123,   124,   125,   218,   219,
     282,   283,   123,   221,   117,   124,   125,   151,   123,   221,
     117,   282,   123,   221,   177,   282,   116,   204,   204,   123,
     229,   122,   124,   204,   204,   204,   124,   124,   204,   124,
     124,   124,   124,   124,   124,   124,   124,   124,   124,   124,
     122,   122,   124,   122,   201,   117,   198,   204,   208,   209,
     135,   135,   122,   136,   182,   122,   122,    10,    10,    31,
     187,   187,   227,   190,   189,   283,   222,   223,   241,     8,
       9,    10,    11,    12,    13,    45,   121,   126,   127,   254,
     255,   117,   123,   123,   283,   151,     8,    10,    11,    13,
      25,    26,    45,    80,    81,   121,   126,   127,   128,   153,
     154,   155,   156,   204,   233,   239,   117,   123,   283,   117,
     123,   208,   117,   282,   122,   122,   257,   124,   122,   122,
     263,   265,   124,   245,   269,   271,   273,   275,   270,   272,
     274,   276,   277,   278,   204,   123,   208,   123,   124,   197,
     121,   122,    47,    78,   210,   212,   229,   136,   136,   121,
      48,   121,   123,   135,   123,   225,   236,   208,   136,   124,
     223,   254,   255,   255,   123,   123,   155,   126,   127,   129,
     130,   131,   132,   133,   134,   157,   155,   283,   123,   283,
     122,   204,   117,   121,   121,   229,   259,   245,   245,   267,
     122,   245,   245,   245,   245,   245,   245,   245,   245,   245,
     245,   122,   124,   122,   198,   282,   124,    52,    53,   224,
     225,   183,   123,   206,   207,   212,   282,   119,   122,   225,
     222,   124,   122,   122,   155,   123,   123,   178,   123,   204,
     283,   283,   122,   229,   264,   122,   245,   122,   122,   122,
     122,   122,   122,   122,   122,   124,   124,   122,   197,   122,
     211,   215,   214,   213,   208,   122,   124,   136,   121,   222,
     187,   123,   122,   122,   260,   124,   268,    10,    10,   210,
     217,   217,   218,   122,   123,   207,   123,   191,   123,   123,
     122,   283,   122,   122,   122,   122,   122,   208,   122,   121,
     122,   216,   206,   122
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
#line 548 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str)); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 550 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str)); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 553 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 568 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 569 "vtkParse.y"
    { reject_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 570 "vtkParse.y"
    { output_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 571 "vtkParse.y"
    { output_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 572 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 573 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 574 "vtkParse.y"
    { reject_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 575 "vtkParse.y"
    { output_function(); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 576 "vtkParse.y"
    { output_function(); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 577 "vtkParse.y"
    { output_function(); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 578 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 603 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 605 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 610 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 616 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 621 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 621 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 622 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 624 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 624 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 625 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 625 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 626 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 626 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 627 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 627 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 658 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    { postSig("template<"); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 663 "vtkParse.y"
    { postSig(", "); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 667 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 668 "vtkParse.y"
    { postSig("class "); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 669 "vtkParse.y"
    { postSig("int "); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 673 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 675 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 681 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
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
#line 695 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
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
#line 713 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 717 "vtkParse.y"
    { postSig(")"); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
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
#line 732 "vtkParse.y"
    { postSig(")"); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 733 "vtkParse.y"
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
#line 744 "vtkParse.y"
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
#line 757 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 763 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 765 "vtkParse.y"
    { postSig(")"); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 766 "vtkParse.y"
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
#line 777 "vtkParse.y"
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
#line 790 "vtkParse.y"
    {postSig(") = 0");}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 791 "vtkParse.y"
    {postSig(") const = 0");}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 793 "vtkParse.y"
    {postSig(" const");}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 796 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 799 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 800 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 801 "vtkParse.y"
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
#line 808 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 810 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 811 "vtkParse.y"
    {
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
#line 820 "vtkParse.y"
    { postSig("("); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 829 "vtkParse.y"
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
#line 842 "vtkParse.y"
    { postSig("(");}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 844 "vtkParse.y"
    {postSig("const ");}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 846 "vtkParse.y"
    {postSig("static ");}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 847 "vtkParse.y"
    {postSig("static ");}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 849 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 850 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 851 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 852 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 853 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 854 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 864 "vtkParse.y"
    {clearTypeId();}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 866 "vtkParse.y"
    { postSig("...");}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 868 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 870 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 874 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (2)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 883 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (2)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 892 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 899 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 900 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(") ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = ((yyvsp[(1) - (5)].integer) | VTK_PARSE_REF);
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 907 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*"); }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 908 "vtkParse.y"
    { postSig(")("); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 909 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(")");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_UNKNOWN;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 921 "vtkParse.y"
    {postSig("="); postSig((yyvsp[(2) - (2)].str));}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 949 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer);}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 960 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 967 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 971 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 972 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 974 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 975 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 977 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 978 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 979 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 983 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 985 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 986 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 987 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 990 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 991 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 992 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 993 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 995 "vtkParse.y"
    {postSig(", ");}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 997 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 998 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 999 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1000 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1003 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1009 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1015 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1016 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1017 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1018 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1019 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1020 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1033 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1034 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1035 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1036 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1037 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1039 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1041 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1043 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1044 "vtkParse.y"
    { postSig("**"); }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1045 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1046 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1047 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1048 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1049 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1051 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1052 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1053 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1054 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1055 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1056 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1057 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_VTK_OBJECT; }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1060 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1061 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1062 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1063 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1064 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1065 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1066 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1067 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1068 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1070 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1071 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1072 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1073 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1074 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1075 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1075 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1076 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1077 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1078 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1081 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1082 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1083 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1084 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1085 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1086 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1087 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1094 "vtkParse.y"
    {
      currentClass->SuperClasses[currentClass->NumberOfSuperClasses++] =
        vtkstrdup((yyvsp[(2) - (2)].str));
    }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1099 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1100 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1101 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1102 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1104 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1105 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (2)].str);}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1106 "vtkParse.y"
    {(yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (2)].str))+2);
                        sprintf((yyval.str), "-%s", (yyvsp[(2) - (2)].str)); }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1108 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1109 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (3)].str);}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1111 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1112 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1113 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1114 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1115 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1116 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1119 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1120 "vtkParse.y"
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

  case 310:

/* Line 1455 of yacc.c  */
#line 1134 "vtkParse.y"
    {postSig("Get");}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1135 "vtkParse.y"
    {markSig();}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1135 "vtkParse.y"
    {swapSig();}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1136 "vtkParse.y"
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

  case 314:

/* Line 1455 of yacc.c  */
#line 1148 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1149 "vtkParse.y"
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

  case 316:

/* Line 1455 of yacc.c  */
#line 1163 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1164 "vtkParse.y"
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

  case 318:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
    {closeSig();}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1179 "vtkParse.y"
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

  case 321:

/* Line 1455 of yacc.c  */
#line 1224 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1225 "vtkParse.y"
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

  case 323:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1240 "vtkParse.y"
    {markSig();}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1240 "vtkParse.y"
    {swapSig();}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1241 "vtkParse.y"
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

  case 327:

/* Line 1455 of yacc.c  */
#line 1254 "vtkParse.y"
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

  case 328:

/* Line 1455 of yacc.c  */
#line 1279 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1289 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1295 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1299 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1300 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1304 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1305 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1309 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1310 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1314 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1315 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1319 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1321 "vtkParse.y"
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

  case 346:

/* Line 1455 of yacc.c  */
#line 1340 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
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

  case 348:

/* Line 1455 of yacc.c  */
#line 1362 "vtkParse.y"
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

  case 349:

/* Line 1455 of yacc.c  */
#line 1428 "vtkParse.y"
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

  case 350:

/* Line 1455 of yacc.c  */
#line 1498 "vtkParse.y"
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

  case 351:

/* Line 1455 of yacc.c  */
#line 1565 "vtkParse.y"
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

  case 352:

/* Line 1455 of yacc.c  */
#line 1638 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1639 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1640 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1641 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1644 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1645 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1645 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1646 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1646 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1647 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1647 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1648 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1648 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1649 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1649 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1650 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1650 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1651 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1652 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1653 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1654 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1655 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1656 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1657 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1658 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1659 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1660 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1661 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1662 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1663 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1664 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1665 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1666 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1667 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1668 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1669 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1670 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1671 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1672 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1673 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1674 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1675 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1676 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1677 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 6245 "vtkParse.tab.c"
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
#line 1714 "vtkParse.y"

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

