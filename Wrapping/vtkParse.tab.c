
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

#define vtkParseDebug(s1, s2) \
  if ( parseDebug ) { fprintf(stderr, "   %s %s\n", s1, s2); }

/* the tokenizer */
int yylex(void);

/* global variables */
FileInfo data;
ClassInfo *currentClass = NULL;
FunctionInfo *currentFunction = NULL;

int parseDebug;
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
char *currentNamespace = 0;

void start_class(const char *classname);
void end_class();
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

/* enter a namespace */
void pushNamespace(const char *name)
{
  char *cp = currentNamespace;
  if (cp)
    {
    currentNamespace = (char *)malloc(strlen(cp) + strlen(name) + 3);
    sprintf(currentNamespace, "%s::%s", cp, name);
    free(cp);
    }
  else
    {
    currentNamespace = (char *)malloc(strlen(name) + 1);
    strcpy(currentNamespace, name);
    }
}

/* leave the namespace */
void popNamespace()
{
  char *cp = currentNamespace;
  int i = strlen(cp);
  while (i > 0 && cp[i-1] != ':') { i--; }
  while (i > 0 && cp[i-1] == ':') { i--; }
  cp[i] = '\0';

  if (i == 0)
    {
    free(cp);
    currentNamespace = 0;
    }
}

/* get the namespace */
const char *getNamespace()
{
  return currentNamespace;
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

/* return the current Id */
const char *getTypeId()
{
  return currentId;
}



/* Line 189 of yacc.c  */
#line 512 "vtkParse.tab.c"

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
     EXTERN = 302,
     VAR_FUNCTION = 303,
     ARRAY_NUM = 304,
     VTK_LEGACY = 305,
     NEW = 306,
     DELETE = 307,
     LPAREN_POINTER = 308,
     LPAREN_AMPERSAND = 309,
     OP_LSHIFT_EQ = 310,
     OP_RSHIFT_EQ = 311,
     OP_LSHIFT = 312,
     OP_RSHIFT = 313,
     OP_ARROW_POINTER = 314,
     OP_ARROW = 315,
     OP_INCR = 316,
     OP_DECR = 317,
     OP_PLUS_EQ = 318,
     OP_MINUS_EQ = 319,
     OP_TIMES_EQ = 320,
     OP_DIVIDE_EQ = 321,
     OP_REMAINDER_EQ = 322,
     OP_AND_EQ = 323,
     OP_OR_EQ = 324,
     OP_XOR_EQ = 325,
     OP_LOGIC_AND_EQ = 326,
     OP_LOGIC_OR_EQ = 327,
     OP_LOGIC_AND = 328,
     OP_LOGIC_OR = 329,
     OP_LOGIC_EQ = 330,
     OP_LOGIC_NEQ = 331,
     OP_LOGIC_LEQ = 332,
     OP_LOGIC_GEQ = 333,
     ELLIPSIS = 334,
     DOUBLE_COLON = 335,
     StdString = 336,
     UnicodeString = 337,
     IdType = 338,
     TypeInt8 = 339,
     TypeUInt8 = 340,
     TypeInt16 = 341,
     TypeUInt16 = 342,
     TypeInt32 = 343,
     TypeUInt32 = 344,
     TypeInt64 = 345,
     TypeUInt64 = 346,
     TypeFloat32 = 347,
     TypeFloat64 = 348,
     SetMacro = 349,
     GetMacro = 350,
     SetStringMacro = 351,
     GetStringMacro = 352,
     SetClampMacro = 353,
     SetObjectMacro = 354,
     GetObjectMacro = 355,
     BooleanMacro = 356,
     SetVector2Macro = 357,
     SetVector3Macro = 358,
     SetVector4Macro = 359,
     SetVector6Macro = 360,
     GetVector2Macro = 361,
     GetVector3Macro = 362,
     GetVector4Macro = 363,
     GetVector6Macro = 364,
     SetVectorMacro = 365,
     GetVectorMacro = 366,
     ViewportCoordinateMacro = 367,
     WorldCoordinateMacro = 368,
     TypeMacro = 369,
     VTK_CONSTANT_DEF = 370,
     VTK_BYTE_SWAP_DECL = 371
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 453 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 787 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 799 "vtkParse.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6051

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  140
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  502
/* YYNRULES -- Number of states.  */
#define YYNSTATES  928

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   371

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   138,     2,     2,     2,   132,   133,     2,
     118,   119,   130,   128,   125,   127,   139,   131,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   124,   117,
     122,   126,   123,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   136,     2,   137,   135,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   120,   134,   121,   129,     2,     2,     2,
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
     115,   116
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     9,    11,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    35,    37,    40,
      44,    48,    52,    57,    60,    64,    68,    71,    75,    79,
      84,    87,    91,    95,    99,   104,   107,   109,   111,   114,
     119,   124,   126,   127,   135,   136,   147,   148,   149,   153,
     156,   158,   161,   163,   165,   167,   169,   171,   173,   175,
     178,   180,   182,   185,   189,   193,   196,   200,   203,   207,
     211,   214,   218,   221,   227,   229,   231,   239,   246,   247,
     249,   253,   255,   259,   261,   263,   265,   267,   269,   271,
     273,   275,   278,   282,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   316,   323,   327,   328,
     335,   341,   344,   348,   350,   355,   359,   364,   370,   379,
     387,   397,   407,   410,   413,   416,   419,   423,   426,   429,
     433,   434,   440,   442,   443,   448,   451,   454,   456,   458,
     460,   465,   470,   473,   477,   482,   486,   489,   493,   496,
     500,   502,   505,   509,   513,   517,   519,   522,   526,   527,
     528,   537,   538,   542,   545,   546,   547,   555,   556,   560,
     563,   566,   569,   570,   572,   573,   579,   580,   581,   591,
     592,   596,   597,   603,   604,   608,   609,   613,   618,   620,
     621,   627,   629,   631,   634,   636,   638,   640,   642,   644,
     646,   648,   652,   653,   655,   657,   661,   662,   663,   666,
     668,   670,   671,   676,   677,   682,   683,   688,   690,   691,
     697,   698,   699,   709,   710,   712,   714,   717,   718,   720,
     723,   728,   734,   739,   745,   750,   756,   760,   763,   767,
     773,   779,   786,   795,   804,   806,   810,   812,   816,   819,
     824,   827,   830,   831,   833,   834,   838,   843,   845,   848,
     850,   853,   855,   858,   861,   863,   865,   867,   868,   872,
     873,   879,   880,   886,   888,   889,   894,   896,   898,   900,
     902,   906,   910,   912,   914,   916,   918,   920,   922,   924,
     926,   928,   931,   934,   937,   940,   943,   944,   949,   950,
     955,   956,   961,   963,   965,   967,   969,   971,   973,   975,
     977,   979,   981,   983,   985,   987,   989,   991,   993,   995,
     997,   999,  1001,  1003,  1005,  1006,  1010,  1011,  1015,  1017,
    1019,  1021,  1023,  1025,  1027,  1029,  1031,  1032,  1035,  1037,
    1041,  1044,  1045,  1047,  1049,  1051,  1053,  1056,  1059,  1061,
    1065,  1073,  1075,  1077,  1079,  1081,  1083,  1085,  1086,  1094,
    1095,  1096,  1097,  1107,  1108,  1114,  1115,  1121,  1122,  1123,
    1134,  1135,  1143,  1144,  1145,  1146,  1156,  1163,  1164,  1172,
    1173,  1181,  1182,  1190,  1191,  1199,  1200,  1208,  1209,  1217,
    1218,  1226,  1227,  1235,  1236,  1246,  1247,  1257,  1262,  1267,
    1274,  1282,  1285,  1288,  1292,  1296,  1298,  1300,  1302,  1304,
    1306,  1308,  1310,  1312,  1314,  1316,  1318,  1320,  1322,  1324,
    1326,  1328,  1330,  1332,  1334,  1336,  1338,  1340,  1342,  1344,
    1346,  1348,  1350,  1352,  1354,  1356,  1358,  1360,  1362,  1364,
    1366,  1368,  1370,  1372,  1374,  1376,  1378,  1380,  1381,  1384,
    1385,  1388,  1389,  1392,  1394,  1396,  1398,  1400,  1402,  1404,
    1406,  1408,  1410,  1412,  1414,  1416,  1418,  1420,  1422,  1424,
    1426,  1428,  1430,  1432,  1434,  1436,  1438,  1440,  1442,  1444,
    1446,  1448,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,
    1466,  1468,  1470,  1472,  1474,  1478,  1482,  1486,  1490,  1494,
    1498,  1499,  1502
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     141,     0,    -1,    -1,    -1,   141,   142,   143,    -1,   231,
      -1,    47,   231,    -1,   151,    -1,   150,    -1,   160,    -1,
     159,    -1,   161,    -1,   162,    -1,   164,    -1,   168,    -1,
     144,    -1,   171,   144,    -1,    29,    -1,   184,   214,    -1,
      38,   184,   214,    -1,    47,   184,   214,    -1,   171,   184,
     214,    -1,   171,    38,   184,   214,    -1,   183,   214,    -1,
      38,   183,   214,    -1,    47,   183,   214,    -1,   179,   214,
      -1,    38,   179,   214,    -1,    47,   179,   214,    -1,    47,
       9,   179,   214,    -1,   180,   214,    -1,    38,   180,   214,
      -1,    47,   180,   214,    -1,   171,   179,   214,    -1,   171,
      38,   179,   214,    -1,   177,   214,    -1,   267,    -1,   292,
      -1,   251,   117,    -1,     8,   118,   293,   119,    -1,    45,
     118,   293,   119,    -1,   117,    -1,    -1,     3,   213,   145,
     261,   120,   147,   121,    -1,    -1,     3,   213,   122,   247,
     123,   146,   261,   120,   147,   121,    -1,    -1,    -1,   147,
     148,   149,    -1,   264,   124,    -1,   231,    -1,    39,   231,
      -1,   151,    -1,   150,    -1,   160,    -1,   159,    -1,   161,
      -1,   168,    -1,   166,    -1,    37,   166,    -1,   165,    -1,
      29,    -1,   184,   214,    -1,    37,   184,   214,    -1,    38,
     184,   214,    -1,   170,   214,    -1,    38,   170,   214,    -1,
     182,   214,    -1,    37,   182,   214,    -1,    38,   182,   214,
      -1,   169,   214,    -1,    38,   169,   214,    -1,   178,   214,
      -1,   116,   118,   293,   119,   117,    -1,   267,    -1,   117,
      -1,    27,   213,   120,   152,   121,   294,   117,    -1,    27,
     120,   152,   121,   294,   117,    -1,    -1,   153,    -1,   153,
     125,   152,    -1,   213,    -1,   213,   126,   156,    -1,   155,
      -1,   213,    -1,   250,    -1,   244,    -1,    10,    -1,    11,
      -1,    13,    -1,   154,    -1,   157,   156,    -1,   154,   158,
     156,    -1,   118,   156,   119,    -1,   127,    -1,   128,    -1,
     129,    -1,   127,    -1,   128,    -1,   130,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,    28,   213,
     120,   293,   121,   294,   117,    -1,    28,   120,   293,   121,
     294,   117,    -1,    44,   294,   117,    -1,    -1,    43,   251,
     163,   120,   141,   121,    -1,    47,     9,   120,   141,   121,
      -1,   171,   166,    -1,     3,   213,   167,    -1,   117,    -1,
     120,   293,   121,   117,    -1,   124,   294,   117,    -1,    42,
     240,   235,   117,    -1,    42,     3,   213,   228,   117,    -1,
      42,     3,   213,   120,   293,   121,   228,   117,    -1,    42,
       3,   120,   293,   121,   228,   117,    -1,    42,   240,    53,
     228,   119,   118,   215,   119,   117,    -1,    42,   240,    54,
     228,   119,   118,   215,   119,   117,    -1,    42,   151,    -1,
      42,   150,    -1,    42,   160,    -1,    42,   159,    -1,    42,
      48,   117,    -1,   171,   182,    -1,   171,   184,    -1,    40,
     122,   123,    -1,    -1,    40,   122,   172,   173,   123,    -1,
     175,    -1,    -1,   175,   125,   174,   173,    -1,   176,   227,
      -1,   171,   227,    -1,    41,    -1,     3,    -1,    14,    -1,
      50,   118,   179,   119,    -1,    50,   118,   182,   119,    -1,
     239,   193,    -1,   239,   181,   193,    -1,   251,    80,   129,
     208,    -1,   251,    80,   201,    -1,   251,    80,    -1,   181,
     251,    80,    -1,   129,   208,    -1,     7,   129,   208,    -1,
     201,    -1,   239,   193,    -1,     7,   240,   193,    -1,   251,
      80,   185,    -1,   239,   181,   188,    -1,   185,    -1,   239,
     188,    -1,     7,   240,   188,    -1,    -1,    -1,    34,   239,
     118,   186,   217,   119,   187,   196,    -1,    -1,   190,   189,
     196,    -1,   190,   195,    -1,    -1,    -1,    34,   290,   191,
     118,   192,   217,   119,    -1,    -1,   197,   194,   196,    -1,
     197,   195,    -1,   126,    10,    -1,    33,    10,    -1,    -1,
      31,    -1,    -1,   213,   118,   198,   217,   119,    -1,    -1,
      -1,   213,   122,   199,   247,   123,   118,   200,   217,   119,
      -1,    -1,   203,   202,   205,    -1,    -1,   213,   118,   204,
     217,   119,    -1,    -1,   124,   207,   206,    -1,    -1,   125,
     207,   206,    -1,   213,   118,   293,   119,    -1,   209,    -1,
      -1,   213,   118,   210,   217,   119,    -1,    31,    -1,    46,
      -1,    46,    38,    -1,    45,    -1,     8,    -1,    26,    -1,
      25,    -1,    81,    -1,    82,    -1,   117,    -1,   120,   293,
     121,    -1,    -1,   216,    -1,   221,    -1,   221,   125,   216,
      -1,    -1,    -1,   218,   219,    -1,    79,    -1,   221,    -1,
      -1,   221,   125,   220,   219,    -1,    -1,   240,   236,   222,
     229,    -1,    -1,   240,   235,   223,   229,    -1,    48,    -1,
      -1,   240,    54,   224,   227,   119,    -1,    -1,    -1,   240,
      53,   225,   227,   119,   118,   226,   215,   119,    -1,    -1,
     213,    -1,   213,    -1,   252,   213,    -1,    -1,   230,    -1,
     126,   265,    -1,     3,   213,   232,   117,    -1,     3,   213,
     252,   232,   117,    -1,    27,   213,   232,   117,    -1,    27,
     213,   252,   232,   117,    -1,    28,   213,   232,   117,    -1,
      28,   213,   252,   232,   117,    -1,   239,   232,   117,    -1,
      48,   117,    -1,    46,    48,   117,    -1,   239,    54,   213,
     119,   117,    -1,   239,    53,   228,   119,   117,    -1,   239,
      53,   228,   119,    49,   117,    -1,   239,    53,   228,   119,
     136,   293,   137,   117,    -1,   239,    53,   228,   119,   118,
     215,   119,   117,    -1,   234,    -1,   234,   125,   233,    -1,
     234,    -1,   234,   125,   233,    -1,   252,   234,    -1,   252,
     234,   125,   233,    -1,   235,   229,    -1,   213,   236,    -1,
      -1,   237,    -1,    -1,    49,   238,   236,    -1,   136,   294,
     137,   236,    -1,   240,    -1,   212,   240,    -1,   241,    -1,
     241,   252,    -1,   242,    -1,   211,   242,    -1,   242,   211,
      -1,   256,    -1,   244,    -1,   250,    -1,    -1,    41,   243,
     250,    -1,    -1,    45,   122,   245,   247,   123,    -1,    -1,
       8,   122,   246,   247,   123,    -1,   240,    -1,    -1,   240,
     125,   248,   247,    -1,     8,    -1,    45,    -1,   244,    -1,
     250,    -1,   251,    80,   249,    -1,   244,    80,   249,    -1,
       8,    -1,    45,    -1,    26,    -1,    25,    -1,    81,    -1,
      82,    -1,   133,    -1,   130,    -1,    32,    -1,   130,   133,
      -1,   130,   130,    -1,    32,   133,    -1,    32,   130,    -1,
      32,    32,    -1,    -1,   130,   130,   253,   252,    -1,    -1,
      32,   130,   254,   252,    -1,    -1,    32,    32,   255,   252,
      -1,   257,    -1,    81,    -1,    82,    -1,    25,    -1,    26,
      -1,     8,    -1,    45,    -1,    21,    -1,    15,    -1,    20,
      -1,    24,    -1,    23,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,
      -1,    92,    -1,    93,    -1,    -1,    36,   258,   260,    -1,
      -1,    35,   259,   260,    -1,   260,    -1,    22,    -1,    14,
      -1,    16,    -1,    17,    -1,    83,    -1,    18,    -1,    19,
      -1,    -1,   124,   262,    -1,   263,    -1,   263,   125,   262,
      -1,   264,   249,    -1,    -1,     4,    -1,     5,    -1,     6,
      -1,   266,    -1,   128,   266,    -1,   127,   266,    -1,     9,
      -1,   118,   265,   119,    -1,     8,   122,   241,   123,   118,
     266,   119,    -1,    10,    -1,    11,    -1,    12,    -1,    13,
      -1,     8,    -1,    45,    -1,    -1,    94,   118,   213,   125,
     268,   240,   119,    -1,    -1,    -1,    -1,    95,   118,   269,
     213,   125,   270,   240,   271,   119,    -1,    -1,    96,   118,
     272,   213,   119,    -1,    -1,    97,   118,   273,   213,   119,
      -1,    -1,    -1,    98,   118,   213,   125,   274,   256,   275,
     125,   294,   119,    -1,    -1,    99,   118,   213,   125,   276,
     256,   119,    -1,    -1,    -1,    -1,   100,   118,   277,   213,
     125,   278,   256,   279,   119,    -1,   101,   118,   213,   125,
     256,   119,    -1,    -1,   102,   118,   213,   125,   280,   256,
     119,    -1,    -1,   106,   118,   213,   125,   281,   256,   119,
      -1,    -1,   103,   118,   213,   125,   282,   256,   119,    -1,
      -1,   107,   118,   213,   125,   283,   256,   119,    -1,    -1,
     104,   118,   213,   125,   284,   256,   119,    -1,    -1,   108,
     118,   213,   125,   285,   256,   119,    -1,    -1,   105,   118,
     213,   125,   286,   256,   119,    -1,    -1,   109,   118,   213,
     125,   287,   256,   119,    -1,    -1,   110,   118,   213,   125,
     288,   256,   125,    10,   119,    -1,    -1,   111,   118,   213,
     125,   289,   256,   125,    10,   119,    -1,   112,   118,   213,
     119,    -1,   113,   118,   213,   119,    -1,   114,   118,   213,
     125,   213,   119,    -1,   114,   118,   213,   125,   213,   125,
     119,    -1,   118,   119,    -1,   136,   137,    -1,    51,   136,
     137,    -1,    52,   136,   137,    -1,   291,    -1,   126,    -1,
     130,    -1,   131,    -1,   127,    -1,   128,    -1,   138,    -1,
     129,    -1,   125,    -1,   122,    -1,   123,    -1,   133,    -1,
     134,    -1,   135,    -1,   132,    -1,    51,    -1,    52,    -1,
      55,    -1,    56,    -1,    57,    -1,    58,    -1,    59,    -1,
      60,    -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,
      67,    -1,    61,    -1,    62,    -1,    68,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,
      75,    -1,    76,    -1,    77,    -1,    78,    -1,   115,    -1,
      -1,   293,   297,    -1,    -1,   294,   298,    -1,    -1,   295,
     296,    -1,     3,    -1,    40,    -1,   297,    -1,   117,    -1,
     298,    -1,   302,    -1,    30,    -1,   299,    -1,   300,    -1,
     301,    -1,   291,    -1,   124,    -1,   139,    -1,   256,    -1,
      80,    -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,
       9,    -1,    29,    -1,    31,    -1,    32,    -1,    33,    -1,
      34,    -1,    46,    -1,    38,    -1,     7,    -1,    27,    -1,
      28,    -1,    41,    -1,    49,    -1,    48,    -1,    79,    -1,
       4,    -1,     6,    -1,     5,    -1,    43,    -1,    44,    -1,
      47,    -1,   292,    -1,   120,   295,   121,    -1,   118,   293,
     119,    -1,    53,   293,   119,    -1,    54,   293,   119,    -1,
     136,   293,   137,    -1,    42,   303,   117,    -1,    -1,     3,
     303,    -1,   298,   303,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   584,   584,   584,   584,   587,   588,   589,   590,   591,
     592,   593,   594,   595,   596,   597,   598,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   608,   609,   610,   611,
     612,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   623,   625,   625,   627,   627,   630,   630,   630,   632,
     633,   634,   635,   636,   637,   638,   639,   640,   641,   642,
     643,   644,   645,   646,   648,   649,   650,   651,   652,   654,
     655,   656,   657,   658,   659,   660,   668,   670,   672,   672,
     672,   674,   674,   678,   678,   678,   678,   680,   680,   680,
     682,   683,   688,   694,   700,   700,   701,   703,   703,   704,
     704,   705,   705,   706,   706,   708,   710,   712,   714,   714,
     717,   719,   721,   723,   724,   725,   727,   728,   729,   730,
     731,   733,   735,   736,   737,   738,   739,   741,   743,   745,
     746,   746,   749,   750,   750,   752,   752,   754,   755,   756,
     758,   760,   762,   767,   768,   769,   771,   772,   774,   775,
     780,   781,   785,   794,   795,   798,   802,   806,   817,   821,
     816,   836,   836,   847,   864,   865,   864,   872,   872,   883,
     900,   901,   903,   903,   906,   905,   910,   911,   910,   920,
     920,   930,   930,   932,   932,   934,   934,   936,   938,   952,
     952,   954,   956,   957,   959,   960,   961,   962,   963,   964,
     966,   966,   968,   968,   970,   970,   972,   972,   972,   974,
     975,   978,   977,   982,   981,   991,   990,   999,  1007,  1007,
    1015,  1016,  1015,  1025,  1025,  1027,  1027,  1029,  1029,  1031,
    1033,  1034,  1035,  1036,  1037,  1038,  1039,  1040,  1041,  1042,
    1043,  1044,  1045,  1047,  1050,  1051,  1053,  1054,  1055,  1056,
    1059,  1061,  1069,  1069,  1072,  1072,  1078,  1083,  1084,  1086,
    1087,  1089,  1090,  1091,  1093,  1094,  1096,  1098,  1098,  1102,
    1102,  1104,  1104,  1107,  1107,  1107,  1109,  1110,  1111,  1112,
    1114,  1120,  1127,  1128,  1129,  1130,  1131,  1132,  1145,  1146,
    1147,  1148,  1149,  1150,  1152,  1154,  1156,  1156,  1158,  1158,
    1160,  1160,  1163,  1164,  1165,  1166,  1167,  1168,  1169,  1172,
    1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1182,
    1183,  1184,  1185,  1186,  1187,  1187,  1188,  1188,  1190,  1193,
    1194,  1195,  1196,  1197,  1198,  1199,  1201,  1201,  1203,  1203,
    1205,  1211,  1212,  1213,  1214,  1216,  1217,  1218,  1220,  1221,
    1222,  1229,  1230,  1231,  1232,  1233,  1234,  1236,  1236,  1251,
    1252,  1252,  1251,  1265,  1265,  1280,  1280,  1294,  1294,  1294,
    1341,  1340,  1356,  1357,  1357,  1356,  1370,  1396,  1396,  1401,
    1401,  1406,  1406,  1411,  1411,  1416,  1416,  1421,  1421,  1426,
    1426,  1431,  1431,  1436,  1436,  1457,  1457,  1478,  1544,  1614,
    1681,  1755,  1756,  1757,  1758,  1759,  1761,  1762,  1762,  1763,
    1763,  1764,  1764,  1765,  1765,  1766,  1766,  1767,  1767,  1768,
    1769,  1770,  1771,  1772,  1773,  1774,  1775,  1776,  1777,  1778,
    1779,  1780,  1781,  1782,  1783,  1784,  1785,  1786,  1787,  1788,
    1789,  1790,  1791,  1792,  1793,  1794,  1800,  1805,  1805,  1806,
    1806,  1807,  1807,  1809,  1809,  1809,  1811,  1811,  1811,  1813,
    1813,  1813,  1813,  1814,  1814,  1814,  1814,  1814,  1815,  1815,
    1815,  1815,  1816,  1816,  1816,  1816,  1816,  1817,  1817,  1817,
    1817,  1817,  1817,  1817,  1818,  1818,  1818,  1818,  1818,  1818,
    1819,  1819,  1819,  1819,  1821,  1822,  1823,  1824,  1825,  1826,
    1828,  1828,  1829
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
  "NAMESPACE", "USING", "VTK_ID", "STATIC", "EXTERN", "VAR_FUNCTION",
  "ARRAY_NUM", "VTK_LEGACY", "NEW", "DELETE", "LPAREN_POINTER",
  "LPAREN_AMPERSAND", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR", "OP_DECR",
  "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
  "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND_EQ", "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR",
  "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ",
  "ELLIPSIS", "DOUBLE_COLON", "StdString", "UnicodeString", "IdType",
  "TypeInt8", "TypeUInt8", "TypeInt16", "TypeUInt16", "TypeInt32",
  "TypeUInt32", "TypeInt64", "TypeUInt64", "TypeFloat32", "TypeFloat64",
  "SetMacro", "GetMacro", "SetStringMacro", "GetStringMacro",
  "SetClampMacro", "SetObjectMacro", "GetObjectMacro", "BooleanMacro",
  "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_CONSTANT_DEF", "VTK_BYTE_SWAP_DECL", "';'", "'('", "')'", "'{'",
  "'}'", "'<'", "'>'", "':'", "','", "'='", "'-'", "'+'", "'~'", "'*'",
  "'/'", "'%'", "'&'", "'|'", "'^'", "'['", "']'", "'!'", "'.'", "$accept",
  "strt", "$@1", "file_item", "class_def", "$@2", "$@3", "class_def_body",
  "$@4", "class_def_item", "named_enum", "enum", "enum_list", "enum_item",
  "enum_value", "enum_literal", "enum_math", "math_unary_op",
  "math_binary_op", "named_union", "union", "using", "namespace", "$@5",
  "extern", "template_internal_class", "internal_class",
  "internal_class_body", "typedef", "template_method", "template_operator",
  "template", "$@6", "template_args", "$@7", "template_arg",
  "template_type", "legacy_function", "legacy_method", "function",
  "scoped_method", "scope", "method", "scoped_operator", "operator",
  "typecast_op_func", "$@8", "$@9", "op_func", "$@10", "op_sig", "$@11",
  "$@12", "func", "$@13", "pure_virtual", "maybe_const", "func_sig",
  "$@14", "$@15", "@16", "constructor", "$@17", "constructor_sig", "$@18",
  "maybe_initializers", "more_initializers", "initializer", "destructor",
  "destructor_sig", "$@19", "const_mod", "static_mod", "any_id",
  "func_body", "ignore_args_list", "ignore_more_args", "args_list", "$@20",
  "more_args", "$@21", "arg", "$@22", "$@23", "$@24", "$@25", "$@26",
  "maybe_id", "maybe_indirect_id", "maybe_var_assign", "var_assign", "var",
  "var_ids", "maybe_indirect_var_ids", "var_id_maybe_assign", "var_id",
  "maybe_var_array", "var_array", "$@27", "maybe_static_type", "type",
  "type_red", "type_red1", "$@28", "templated_id", "$@29", "$@30", "types",
  "$@31", "maybe_scoped_id", "scoped_id", "class_id", "type_indirection",
  "$@32", "$@33", "$@34", "type_red2", "type_primitive", "$@35", "$@36",
  "type_integer", "optional_scope", "scope_list", "scope_list_item",
  "scope_type", "literal", "literal2", "macro", "$@37", "$@38", "$@39",
  "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48",
  "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57",
  "$@58", "op_token", "op_token_no_delim", "vtk_constant_def",
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
     365,   366,   367,   368,   369,   370,   371,    59,    40,    41,
     123,   125,    60,    62,    58,    44,    61,    45,    43,   126,
      42,    47,    37,    38,   124,    94,    91,    93,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   140,   141,   142,   141,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   145,   144,   146,   144,   147,   148,   147,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   150,   151,   152,   152,
     152,   153,   153,   154,   154,   154,   154,   155,   155,   155,
     156,   156,   156,   156,   157,   157,   157,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   160,   161,   163,   162,
     164,   165,   166,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   170,   171,
     172,   171,   173,   174,   173,   175,   175,   176,   176,   176,
     177,   178,   179,   180,   180,   180,   181,   181,   182,   182,
     182,   182,   182,   183,   183,   184,   184,   184,   186,   187,
     185,   189,   188,   188,   191,   192,   190,   194,   193,   193,
     195,   195,   196,   196,   198,   197,   199,   200,   197,   202,
     201,   204,   203,   205,   205,   206,   206,   207,   208,   210,
     209,   211,   212,   212,   213,   213,   213,   213,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   218,   217,   219,
     219,   220,   219,   222,   221,   223,   221,   221,   224,   221,
     225,   226,   221,   227,   227,   228,   228,   229,   229,   230,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   232,   232,   233,   233,   233,   233,
     234,   235,   236,   236,   238,   237,   237,   239,   239,   240,
     240,   241,   241,   241,   242,   242,   242,   243,   242,   245,
     244,   246,   244,   247,   248,   247,   249,   249,   249,   249,
     250,   250,   251,   251,   251,   251,   251,   251,   252,   252,
     252,   252,   252,   252,   252,   252,   253,   252,   254,   252,
     255,   252,   256,   256,   256,   256,   256,   256,   256,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   258,   257,   259,   257,   257,   260,
     260,   260,   260,   260,   260,   260,   261,   261,   262,   262,
     263,   264,   264,   264,   264,   265,   265,   265,   265,   265,
     265,   266,   266,   266,   266,   266,   266,   268,   267,   269,
     270,   271,   267,   272,   267,   273,   267,   274,   275,   267,
     276,   267,   277,   278,   279,   267,   267,   280,   267,   281,
     267,   282,   267,   283,   267,   284,   267,   285,   267,   286,
     267,   287,   267,   288,   267,   289,   267,   267,   267,   267,
     267,   290,   290,   290,   290,   290,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   292,   293,   293,   294,
     294,   295,   295,   296,   296,   296,   297,   297,   297,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   299,   300,   300,   300,   301,   302,
     303,   303,   303
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     3,
       3,     3,     4,     2,     3,     3,     2,     3,     3,     4,
       2,     3,     3,     3,     4,     2,     1,     1,     2,     4,
       4,     1,     0,     7,     0,    10,     0,     0,     3,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     3,     3,     2,     3,     2,     3,     3,
       2,     3,     2,     5,     1,     1,     7,     6,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     6,     3,     0,     6,
       5,     2,     3,     1,     4,     3,     4,     5,     8,     7,
       9,     9,     2,     2,     2,     2,     3,     2,     2,     3,
       0,     5,     1,     0,     4,     2,     2,     1,     1,     1,
       4,     4,     2,     3,     4,     3,     2,     3,     2,     3,
       1,     2,     3,     3,     3,     1,     2,     3,     0,     0,
       8,     0,     3,     2,     0,     0,     7,     0,     3,     2,
       2,     2,     0,     1,     0,     5,     0,     0,     9,     0,
       3,     0,     5,     0,     3,     0,     3,     4,     1,     0,
       5,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     1,     3,     0,     0,     2,     1,
       1,     0,     4,     0,     4,     0,     4,     1,     0,     5,
       0,     0,     9,     0,     1,     1,     2,     0,     1,     2,
       4,     5,     4,     5,     4,     5,     3,     2,     3,     5,
       5,     6,     8,     8,     1,     3,     1,     3,     2,     4,
       2,     2,     0,     1,     0,     3,     4,     1,     2,     1,
       2,     1,     2,     2,     1,     1,     1,     0,     3,     0,
       5,     0,     5,     1,     0,     4,     1,     1,     1,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     0,     4,     0,     4,
       0,     4,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     3,
       2,     0,     1,     1,     1,     1,     2,     2,     1,     3,
       7,     1,     1,     1,     1,     1,     1,     0,     7,     0,
       0,     0,     9,     0,     5,     0,     5,     0,     0,    10,
       0,     7,     0,     0,     0,     9,     6,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     9,     0,     9,     4,     4,     6,
       7,     2,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
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
       2,     3,     1,     0,     0,     0,   307,   330,   310,   331,
     332,   334,   335,   311,   309,   329,   313,   312,   305,   306,
       0,     0,    17,   191,     0,   326,   324,     0,     0,   267,
       0,     0,   449,   308,   192,     0,     0,     0,   303,   304,
     333,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   446,    41,     4,    15,     8,     7,    10,     9,
      11,    12,    13,    14,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     5,     0,   257,   259,   261,   265,   266,
       0,   264,   302,   328,    36,    37,   195,   197,   196,   194,
     198,   199,    42,   307,   308,     0,     0,   447,   271,    78,
       0,   447,     0,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,     0,     0,     0,   123,
     122,   125,   124,     0,   282,   285,   284,   283,   286,   287,
     108,     0,   447,   269,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,   237,     0,     0,   359,   363,
     365,     0,     0,   372,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,   200,   447,    35,    26,    30,    23,
      18,   262,   258,   195,   197,   196,     0,   194,     0,     0,
     198,   199,     0,   156,   161,   142,   167,   252,     0,   244,
     227,     0,   290,   289,   288,   260,   263,     0,     0,    38,
       0,   336,   252,     0,     0,   157,     0,     0,     0,     0,
      79,    81,    78,     0,     0,     0,   447,     0,     0,   158,
     327,   325,    27,    31,    24,    19,     0,   129,     0,   282,
     283,     0,   268,   447,     0,     0,     0,   126,     0,     0,
       0,     0,   487,   489,   488,   480,   307,   472,   468,   469,
     470,   471,   305,   306,   481,   482,   473,   459,   474,   475,
     476,   477,   479,   483,   490,   491,   308,   478,   492,   485,
     484,   420,   421,   447,   447,   422,   423,   424,   425,   426,
     427,   433,   434,   428,   429,   430,   431,   432,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   486,
     467,   303,   304,   107,   447,   451,   414,   415,   464,   413,
     406,   409,   410,   412,   407,   408,   419,   416,   417,   418,
     447,   411,   465,   466,   463,   493,   450,   460,   461,   462,
       0,     0,   238,     0,     2,     0,     0,     0,     0,    28,
      32,    25,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,    33,    21,
       0,   420,   421,     0,     0,   164,   405,   225,     0,     0,
       0,   154,   143,     0,     0,     0,   172,   163,   172,   169,
     254,   174,   176,   449,   251,   253,   236,     0,     0,   250,
     228,   146,   295,   294,   293,   292,   291,   276,   277,   278,
     281,   279,   276,   277,     0,   153,   145,   179,     0,   280,
     273,     0,   341,     0,   230,     0,   500,   456,    39,   448,
     457,   458,     0,   449,    78,     0,     0,   232,     0,   449,
       0,   234,     0,   207,   138,   139,   137,   223,     0,   132,
     223,     0,   447,     0,     0,     0,   116,     2,     0,     0,
       0,     0,     0,    40,     0,     3,    29,   140,   357,     0,
       0,     0,   367,   370,     0,     0,   377,   381,   385,   389,
     379,   383,   387,   391,   393,   395,   397,   398,     0,    34,
      22,   201,     0,     0,   401,   402,     0,     0,   226,     0,
     147,   171,   170,   173,   162,   168,   252,   207,     0,     0,
     245,   246,     0,   355,   348,   351,   352,   353,   354,   356,
       0,     0,     0,   229,   345,     0,     0,     0,   144,   188,
       0,   183,   181,   274,    44,   342,   343,   344,   337,   338,
       0,    46,   231,   500,   500,     0,   272,     0,    80,   195,
      87,    88,    89,   194,     0,    94,    95,    96,    90,    83,
      82,     0,    84,    86,    85,   449,   233,     0,   449,   235,
       0,     0,   224,   136,   131,   133,   135,     0,     0,   117,
       0,     0,     3,   496,   497,   495,   453,   454,   494,   452,
     455,   498,   270,   110,     0,   360,   364,   366,     0,     0,
     373,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,   404,   165,     0,   240,   202,   447,
     239,   255,     0,     0,   252,     0,   248,     0,     0,   355,
     347,   346,   301,   299,   297,   189,     0,   180,   207,     0,
     336,   341,   340,    47,   501,   502,   499,    77,     0,    97,
      98,    99,   100,   101,   102,   103,   104,     0,    91,     0,
     106,     0,   159,   217,   209,   208,   210,   252,     0,     0,
       0,   202,   202,   109,     0,     0,   368,     0,     0,   376,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,     0,   207,   241,     0,   203,   204,     0,   175,     0,
     256,   247,     0,     0,   349,   207,   185,     0,     0,   275,
       0,   339,    43,   341,    93,    92,    76,   105,   172,   211,
     220,   218,   215,   213,   134,   119,     0,     0,     0,   358,
     361,     0,   371,   374,   378,   382,   386,   390,   380,   384,
     388,   392,     0,     0,   400,     0,     0,     0,     0,   177,
     249,     0,     0,     0,   184,   447,   182,    46,     0,     0,
     307,   305,   306,    61,     0,     0,     0,   308,     0,   303,
     304,     0,    75,     0,    48,    53,    52,    55,    54,    56,
      60,    58,    57,     0,     0,     0,     0,     0,     0,   150,
      50,     0,     0,    74,   160,     0,   223,   223,   227,   227,
     118,     0,     0,     0,   449,     0,     0,     0,   166,   243,
     205,   242,   207,     0,   190,   185,     0,    47,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,   447,   148,    70,    65,   111,   127,
     128,    72,    67,    62,   151,    49,   212,     0,     0,   216,
     214,   120,   121,   362,     0,   375,   394,   396,     0,     0,
     186,   187,    45,   113,   447,   449,   112,   149,   152,     0,
      68,    63,    71,    66,    69,    64,     0,     0,     0,     0,
       0,   219,   369,   178,   350,     0,     0,     0,   141,     0,
     221,     0,   115,    73,   202,   114,     0,   222
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    74,    75,   231,   670,   673,   743,   804,
      76,    77,   239,   240,   588,   589,   590,   591,   687,    78,
      79,    80,    81,   271,    82,   810,   811,   896,    83,   813,
     814,   477,   258,   478,   698,   479,   480,    85,   816,    86,
      87,   212,   869,    88,   870,    90,   473,   748,   213,   416,
     214,   526,   722,   215,   418,   417,   534,   216,   537,   538,
     842,   819,   561,   447,   668,   667,   784,   736,   558,   559,
     735,    91,    92,   232,   196,   724,   725,   600,   601,   695,
     825,   726,   829,   828,   827,   826,   924,   603,   408,   429,
     430,    93,   218,   540,   219,   220,   424,   425,   536,   855,
      95,    96,    97,   134,    98,   361,   238,   451,   669,   449,
      99,   116,   409,   557,   556,   555,   101,   102,   126,   125,
     103,   453,   568,   569,   570,   553,   554,   104,   624,   375,
     705,   833,   376,   377,   628,   761,   629,   380,   708,   835,
     632,   636,   633,   637,   634,   638,   635,   639,   640,   641,
     405,   354,   355,   237,   151,   491,   619,   459,   460,   357,
     358,   359,   461,   575
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -740
static const yytype_int16 yypact[] =
{
    -740,    61,  -740,  4948,   469,  5840,   231,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,    11,    36,
     300,   424,  -740,  -740,  5719,  -740,  -740,  5547,   -52,  -740,
    5420,   786,  -740,   304,    48,  5147,     4,   -24,   118,   126,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,    90,   121,   124,   128,   138,   139,   140,   141,   145,
     155,   158,   159,   169,   170,   171,   182,   184,   188,   189,
     191,   199,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  5238,    25,    25,    25,    25,    25,
    -740,  5926,  5840,  -740,   532,  -740,    27,   290,   242,  -740,
     136,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,    87,   -23,     8,   294,   244,  -740,  -740,   469,
     332,  -740,   393,   291,   212,   654,   654,    25,    25,    25,
      25,   657,   251,   209,   801,   456,   300,   424,   227,  -740,
    -740,  -740,  -740,   580,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  3442,  -740,  -740,  -740,   229,   469,  5056,   469,   469,
      25,    25,    25,    25,  -740,  -740,  5719,   469,  -740,  -740,
    -740,   469,   469,  -740,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   469,   469,   469,   469,   469,   469,  5547,
    -740,    25,    25,   680,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,   267,   270,   272,  5415,   283,   363,   469,
     286,   292,   657,  -740,    32,  -740,    32,   144,   245,   249,
     250,   295,    34,    43,  -740,  -740,  -740,   811,   278,  -740,
    5840,   262,    35,   275,   469,  -740,   811,  1402,  5840,   266,
     269,   279,   469,   281,   469,  1538,  -740,   287,   469,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,   116,  -740,   413,   274,
     277,   242,  -740,  -740,   416,   297,   303,  -740,   363,   363,
     298,   308,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    1674,  5840,  -740,   363,  -740,    25,   469,   363,   363,  -740,
    -740,  -740,  -740,   310,   305,   469,   469,   469,   306,   309,
     469,   314,   318,   330,   331,   333,   334,   338,   341,   345,
     351,   354,   316,   366,   361,   289,    25,    25,  -740,  -740,
    1810,   321,   353,   368,   365,  -740,  -740,  -740,   369,   469,
     372,  -740,  -740,   420,   498,   499,   479,  -740,   479,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,   363,   282,  -740,
    -740,  -740,    70,    72,  -740,    91,  -740,   -23,     8,   242,
    -740,  -740,    -7,    -4,   469,  -740,  -740,  -740,   394,  -740,
     390,   395,   222,   396,  -740,   400,  1266,  -740,  -740,  -740,
    -740,  -740,   397,  -740,   469,   517,   398,  -740,   405,  -740,
    1946,  -740,   407,   410,  -740,  -740,  -740,   469,   408,   409,
     469,  2082,  -740,   415,   422,   426,  -740,  -740,  2218,  2354,
    2490,  1079,  2626,  -740,   412,   418,  -740,  -740,  -740,   423,
     434,   436,  -740,  -740,   431,  5958,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,   469,  -740,
    -740,  -740,   430,   432,  -740,  -740,   441,   198,  -740,   443,
    -740,  -740,  -740,  -740,  -740,  -740,    35,   410,  5840,  3578,
    -740,   438,   469,   439,  -740,  -740,  -740,  -740,  -740,  -740,
     282,   325,   325,  -740,  -740,    27,    27,    27,  -740,  -740,
     450,   446,  -740,  -740,  -740,  -740,  -740,  -740,  -740,   449,
     811,  -740,  -740,  1266,  1266,   458,  -740,  3714,  -740,   -23,
    -740,  -740,  -740,     8,   517,  -740,  -740,  -740,   743,  -740,
    -740,   517,  -740,   242,  -740,  -740,  -740,  3850,  -740,  -740,
     459,  5633,  -740,  -740,  -740,  -740,  -740,   363,  2762,  -740,
     461,   462,   460,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  5840,  -740,  -740,  -740,  5958,  5958,
    -740,   463,  5958,  5958,  5958,  5958,  5958,  5958,  5958,  5958,
    5958,  5958,   -56,  -740,  -740,  -740,   466,  -740,  5805,  -740,
    -740,  -740,   471,   468,    35,   363,   476,  5840,   483,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,   469,  -740,   410,  5840,
     262,   222,  -740,   482,  -740,  -740,  -740,  -740,   485,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,   517,  -740,  3986,
    -740,  4122,  -740,  -740,  -740,  -740,   484,   215,   413,   491,
     363,  5805,  5805,  -740,   492,  5840,  -740,   496,  5958,  -740,
     497,   503,   504,   505,   508,   509,   512,   513,   493,   511,
    -740,   518,   410,  -740,   519,  -740,   514,  2898,  -740,   522,
    -740,  -740,   363,   494,  -740,   410,   516,   524,   528,  -740,
     530,  -740,  -740,  4531,  -740,  -740,  -740,  -740,   479,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,   534,   533,   535,  -740,
    -740,   531,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,   643,   649,  -740,   544,   549,  5805,   550,  -740,
    -740,   556,   558,   469,  -740,  -740,  -740,  -740,   469,  4856,
      -7,   -18,   -13,  -740,   920,  4647,  5329,    -4,   557,   -12,
     119,   560,  -740,   469,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,    25,    25,   920,    25,    25,    25,  -740,
    -740,   539,   555,  -740,  -740,  5633,   469,   469,   250,   250,
    -740,   563,   564,   565,  -740,   568,   570,   573,  -740,  -740,
    -740,  -740,   410,   325,  -740,   516,  3034,   572,   273,   469,
     680,   469,  -740,    25,    25,   680,    25,    25,  4734,    25,
      25,  -740,   604,  4821,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,   575,   576,  -740,
    -740,  -740,  -740,  -740,  4258,  -740,  -740,  -740,   579,   582,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,     0,
    -740,  -740,  -740,  -740,  -740,  -740,  4856,   585,   469,  3170,
     581,  -740,  -740,  -740,  -740,  3306,  4394,   469,  -740,   590,
    -740,   591,  -740,  -740,  5805,  -740,   592,  -740
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -740,  -321,  -740,  -740,   625,  -740,  -740,   -72,  -740,  -740,
     -19,   -17,  -203,  -740,  -740,  -740,  -533,  -740,  -740,   -15,
     -14,   -27,  -740,  -740,  -740,  -740,  -723,  -740,   -26,   -77,
     -76,    -2,  -740,    22,  -740,  -740,  -740,  -740,  -740,    47,
      58,  -740,  -645,   195,     5,   495,  -740,  -740,  -105,  -740,
    -740,  -740,  -740,  -195,  -740,   526,  -387,  -740,  -740,  -740,
    -740,   515,  -740,  -740,  -740,  -740,  -124,   -51,  -739,  -740,
    -740,   630,  -740,     3,   -83,  -646,   -37,  -503,  -740,   -81,
    -740,  -575,  -740,  -740,  -740,  -740,  -740,  -459,  -216,  -702,
    -740,   -33,   -93,  -595,  -390,  -125,  -453,  -740,  -740,     6,
      -5,    93,   660,  -740,   -92,  -740,  -740,  -218,  -740,  -205,
     -80,    98,   -84,  -740,  -740,  -740,   352,  -740,  -740,  -740,
     123,    83,    85,  -740,    14,   204,  -502,    15,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,   553,   757,   -49,  -388,  -740,  -740,   276,  -137,  -740,
    -740,  -740,  -740,  -322
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -301
static const yytype_int16 yytable[] =
{
     115,    84,   164,   197,   198,   199,   200,   112,    89,    94,
     235,   139,   225,   140,   356,   141,   142,   412,   270,   233,
     462,   606,   440,   120,   122,   143,   696,   243,   234,   247,
     124,   535,   130,   131,   652,   539,   244,   541,   248,   466,
     163,    94,   261,   495,   252,   253,   254,   255,   483,   660,
     661,   678,   484,   485,   262,   757,   758,  -282,   688,   222,
     731,     2,  -285,   720,   865,   414,   432,  -284,  -286,   721,
     133,   852,   245,  -282,   127,   577,  -283,   369,   370,   371,
     372,   597,   160,   651,   420,   128,   154,   202,  -283,   192,
     193,  -285,   868,   161,   166,   106,   155,   217,   817,   118,
    -197,   100,  -300,   360,  -298,  -196,  -198,   411,   398,   399,
     897,  -195,   107,   108,  -194,   118,  -284,   893,   153,   222,
     894,   165,   241,  -296,   895,   132,   879,   880,  -285,   150,
     153,   191,   109,   132,   256,   439,   439,   780,   264,   265,
     266,   455,   194,   494,   439,   195,   400,   441,   441,   853,
     859,   468,   656,  -284,   745,   472,   441,   223,   415,   363,
     224,   367,   368,   366,   433,   738,   612,   434,   110,   111,
     374,   423,   366,   435,   378,   379,   436,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   390,   391,   392,   393,
     394,   395,   221,   420,   397,   193,   256,   470,  -286,  -287,
    -300,   730,  -298,  -300,   365,  -298,  -287,   689,   167,   230,
     691,   407,   410,   373,   481,   256,   228,   223,   907,   775,
     224,  -296,   129,   106,  -296,   450,   565,   566,   567,   221,
     162,   448,   782,   450,   421,  -286,   396,  -199,   422,   168,
     107,   108,   169,  -287,   753,   241,   170,   646,   250,   251,
     696,   674,   675,   229,   488,   489,   171,   172,   173,   174,
     109,   578,   421,   175,   420,   541,   422,   407,   750,   751,
     233,   407,   407,   176,   243,   247,   177,   178,   926,   234,
     423,   106,   496,   244,   248,   490,   442,   179,   180,   181,
     543,   544,   545,   546,   547,   548,   110,   111,   107,   108,
     182,   492,   183,   204,   205,   222,   184,   185,   106,   186,
     413,  -282,    24,   519,   520,   647,   648,   187,   109,   574,
     653,    23,   227,   443,   236,   107,   108,   549,   206,   154,
     249,   228,   257,   659,   649,   545,   546,   547,   548,   888,
     106,   889,   541,   542,   267,   109,   362,  -282,  -282,   117,
    -285,   423,  -284,   118,   110,   111,   450,   107,   108,   210,
     211,   824,   426,  -283,   222,   672,  -286,   877,   878,   256,
     549,   106,  -287,   593,   427,   431,   428,   109,   499,   500,
     501,   110,   111,   504,  -283,   594,   452,   463,   107,   108,
     893,   699,   454,   894,   464,   222,   118,   895,   467,   153,
     550,   106,   356,   223,   471,   465,   224,   444,   109,   551,
     552,   230,   528,   110,   111,   486,   474,   242,   107,   108,
     119,  -283,   152,   246,   106,   222,   153,   475,   487,   497,
     498,   502,   106,   608,   503,   516,   574,   574,   109,   505,
     356,   107,   108,   506,   110,   111,   884,   560,   222,   107,
     108,   739,   242,    28,   476,   507,   508,   522,   509,   510,
     356,   109,   223,   511,   106,   224,   512,   241,   592,   109,
     513,   662,   663,   664,   110,   111,   514,   106,   439,   515,
     602,   107,   108,   602,   756,   517,   518,   524,   527,   523,
     441,   529,   593,   223,   107,   108,   224,   110,   111,   593,
     530,   109,   525,   353,   594,   110,   111,   916,   531,   532,
     533,   594,   562,   246,   109,   563,   571,   572,   564,   595,
     576,   642,   596,   223,   599,   579,   224,   580,   581,  -206,
     582,   604,   609,   450,   605,   622,   482,   110,   111,   623,
     203,   610,   204,   205,   121,   611,   223,   106,   625,   224,
     110,   111,   356,   626,   356,   627,   630,   204,   205,   645,
     650,   657,   583,   655,   107,   108,   206,   643,   665,   644,
     666,   542,   752,   206,   671,   676,   263,   207,   692,   701,
     702,   703,   709,   723,   109,   208,   209,   592,   106,   353,
     728,   729,   208,   209,   592,   593,   697,   353,   210,   211,
     727,   732,   734,   742,   744,   107,   108,   594,   755,   749,
     407,   759,   106,   210,   211,   762,   764,   781,   772,   704,
     110,   111,   765,   766,   767,   109,   874,   768,   769,   107,
     108,   770,   771,   268,   269,   584,   773,   774,   776,   777,
     779,   783,   785,   697,   585,   586,   587,   786,   542,   109,
     787,   830,   831,   836,   832,   898,   834,   208,   209,   837,
     874,   110,   111,   838,   450,   203,   839,   841,     7,   737,
       9,    10,    11,    12,   843,   863,    15,   844,   864,   875,
     881,   882,   204,   205,   883,   110,   111,   885,   106,   886,
     592,   206,   887,   892,   910,   911,   697,   697,   913,   920,
     760,   914,   207,   407,   918,   107,   108,   923,   925,   190,
     820,   927,   353,   874,   206,   847,   809,   812,   856,   857,
     754,   890,   898,   445,   805,   109,   806,   226,   807,   808,
     866,   867,   845,   871,   872,   873,   846,    40,   210,   211,
     840,   815,   419,   446,   876,   235,   448,   356,   818,   821,
     733,   201,   353,   740,   658,   233,   741,   822,   823,   406,
     105,   110,   111,   861,   234,     0,     0,   620,     0,     0,
     900,   901,   697,   902,   903,     0,   904,   905,     0,   356,
       0,     0,     0,     0,   850,     0,   737,     0,     0,     0,
       0,   848,     0,   858,   144,     0,     0,   448,   448,   854,
     860,     0,   862,     0,     0,     0,   560,     0,   353,   259,
       0,   145,   146,     0,     0,   909,     0,     0,   448,   437,
     697,     0,   353,     0,   217,     0,   145,   146,     0,   602,
     602,   147,     0,   353,     0,     0,   145,   146,     0,     0,
     353,   353,   353,   353,   353,   915,   260,     0,     0,     0,
       0,     0,   560,   256,   899,     0,   438,   631,   256,     0,
       0,   448,     0,     0,     0,     0,   448,   148,   149,   908,
     679,   680,     0,   681,   682,   683,   684,   685,   686,     0,
       0,     0,   148,   149,     0,     0,     0,     0,     0,     0,
       0,   353,   148,   149,     0,     0,     0,     0,     0,     0,
       0,   917,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   256,     0,     0,     0,     0,     0,     0,     0,   697,
     256,     0,     0,   851,     0,   353,   353,   789,   790,   353,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   791,   792,     0,     0,   353,
       0,    23,     0,     0,    24,    25,    26,     0,     0,     0,
     353,    29,     0,     0,     0,   797,   123,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     706,   707,     0,     0,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   719,     0,     0,     0,     0,     0,     0,
       0,   799,   800,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   353,     0,   353,     0,     0,     0,     0,     0,   803,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   353,
       0,     0,   616,   272,   273,   274,   275,   276,   277,   278,
     279,   280,   281,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,    25,    26,     0,   292,     0,   617,
     293,   456,   294,   295,   296,   297,   298,   299,   300,     0,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    72,     0,   457,   334,   353,   335,
     618,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,     0,   351,   352,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   353,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   353,     0,     0,     0,     0,     0,   353,   353,   573,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,     0,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,     0,   334,     0,   335,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,   456,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   457,
     334,   458,   335,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
     456,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,   457,   334,     0,   335,   469,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,   456,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   457,   334,   493,   335,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,   456,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,   457,   334,     0,
     335,   521,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,   456,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   457,   334,     0,   335,   598,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,   456,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   457,
     334,     0,   335,   607,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
     456,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,   457,   334,   613,   335,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,   456,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   457,   334,   614,   335,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,   456,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,   457,   334,   615,
     335,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,   456,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   457,   334,     0,   335,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   621,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,   456,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   457,
     334,     0,   335,   700,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
     456,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,   457,   334,     0,   335,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   778,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,   456,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   457,   334,   891,   335,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,   456,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,   457,   334,   919,
     335,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,   456,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   457,   334,     0,   335,   921,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,     0,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   333,
     334,     0,   335,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,   334,     0,   335,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   654,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,     0,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   677,   334,     0,   335,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,     0,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,   690,   334,     0,
     335,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,     0,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   746,   334,     0,   335,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,     0,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   747,
     334,     0,   335,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,   334,   912,   335,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,     0,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   922,   334,     0,   335,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   788,   565,   566,   567,   789,   790,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   791,   792,    20,    21,
     793,     0,    23,     0,     0,    24,    25,    26,   794,   795,
     796,    28,    29,    30,     0,    32,   797,    34,     0,    36,
       0,   798,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   799,   800,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,     0,   801,   802,     0,
       0,     0,     0,     0,   789,   790,     0,     0,     0,     0,
     803,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,   791,   792,     0,     0,     0,     0,    23,     0,
       0,    24,    25,    26,     0,     0,     0,    28,    29,     0,
       0,     0,   797,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   799,   800,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   789,   790,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   791,
     792,     0,     0,     0,     0,    23,     0,     0,    24,    25,
      26,     0,     0,     0,     0,    29,   803,     0,     0,   797,
     123,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   799,   800,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   906,   790,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   791,   792,     0,     0,
       0,     0,    23,     0,     0,     0,    25,    26,     0,     0,
       0,     0,    29,   803,   113,     0,   797,   123,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,    23,     0,     0,
       0,    25,    26,     0,     0,     0,     0,    29,     0,     0,
       0,   114,   799,   800,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     803,     4,     0,     0,     0,     5,     6,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,     0,    23,
       0,     0,    24,    25,    26,   849,    27,     0,    28,    29,
      30,    31,    32,    33,    34,    35,    36,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,   113,    73,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,    23,     0,     0,
       0,    25,    26,     0,     0,     0,     0,    29,     0,     0,
       0,   114,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     156,     0,     0,     0,     5,   113,   157,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   158,   159,   364,     0,    23,     0,
       0,    24,    25,    26,     0,     0,     0,     0,    29,     0,
       0,     0,   114,    34,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   188,     0,     0,     0,     5,   113,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,    23,
       0,     0,    24,    25,    26,     0,   189,     0,     0,    29,
       0,     0,     0,   114,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   156,     0,     0,     0,     0,   113,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,   158,   159,     0,     0,
      23,     0,     0,     0,    25,    26,     0,     0,     0,     0,
      29,     0,     0,     0,   114,    34,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   135,     0,     0,     0,     0,   113,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,   136,   137,     0,
       0,    23,     0,     0,     0,    25,    26,     0,     0,     0,
       0,    29,     0,     0,     0,   114,   401,   402,   138,     0,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,     0,     0,     0,     0,     0,     0,
       0,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,     0,     0,     0,   336,   337,     0,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   404,     0,   351,     5,   113,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,    23,     0,
       0,    24,    25,    26,     0,     0,     0,     0,    29,     0,
       0,     0,   114,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   113,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    23,     0,     0,     0,    25,    26,
       0,     0,     0,     0,    29,     0,     0,     0,   114,     0,
       0,   693,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   694,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   113,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,     0,     0,     0,     0,
      23,     0,     0,     0,    25,    26,     0,     0,     0,     0,
      29,     0,     0,     0,   114,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   113,     0,     0,     0,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,    23,     0,     0,     0,
      25,    26,     0,     0,     0,     0,    29,     0,   113,     0,
     114,     0,     0,   693,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,     0,     0,     0,
       0,    23,     0,     0,     0,    25,    26,     0,     0,     0,
       0,    29,     0,     0,     0,   114,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   113,     0,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,   276,    29,     0,     0,
       0,   114,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,     0,     0,     0,     0,     0,
       0,     0,     0,    25,    26,     0,     0,     0,     0,     0,
       0,     0,     0,   296,     0,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50
};

static const yytype_int16 yycheck[] =
{
       5,     3,    35,    86,    87,    88,    89,     4,     3,     3,
     115,    30,    96,    30,   151,    30,    30,   212,   143,   112,
     238,   480,   227,    20,    21,    30,   601,   120,   112,   122,
      24,   418,    27,    27,   537,   423,   120,   427,   122,   242,
      35,    35,   134,   364,   127,   128,   129,   130,   264,   551,
     552,   584,   268,   269,   134,   701,   702,    80,   591,    32,
     655,     0,    80,   119,   803,    33,    32,    80,    80,   125,
     122,   794,   121,    80,    27,   463,    80,   160,   161,   162,
     163,   469,    35,   536,    49,    27,    38,    92,    80,    84,
      84,    80,   815,    35,   118,     8,    48,    94,   743,   122,
     118,     3,    32,   152,    32,   118,   118,   212,   191,   192,
     849,   118,    25,    26,   118,   122,    80,   117,   122,    32,
     120,   117,   119,    32,   124,    27,   828,   829,   117,    31,
     122,    84,    45,    35,   131,   227,   228,   732,   135,   136,
     137,   234,   117,   361,   236,   120,   195,   227,   228,   794,
     795,   244,   542,   117,   687,   248,   236,   130,   126,   156,
     133,   158,   159,   157,   130,   668,   487,   133,    81,    82,
     167,   136,   166,   130,   171,   172,   133,   174,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,    94,    49,   189,   189,   193,   246,    80,    80,
     130,   654,   130,   133,   157,   133,    80,   595,   118,   122,
     598,   208,   209,   166,   263,   212,    80,   130,   863,   722,
     133,   130,    27,     8,   133,   230,     4,     5,     6,   131,
      35,   228,   735,   238,   118,   117,   189,   118,   122,   118,
      25,    26,   118,   117,   697,   242,   118,    49,   125,   126,
     825,   573,   574,   117,   303,   304,   118,   118,   118,   118,
      45,   464,   118,   118,    49,   655,   122,   264,    53,    54,
     363,   268,   269,   118,   367,   368,   118,   118,   924,   363,
     136,     8,   365,   367,   368,   334,     8,   118,   118,   118,
       8,     9,    10,    11,    12,    13,    81,    82,    25,    26,
     118,   350,   118,    25,    26,    32,   118,   118,     8,   118,
     212,    80,    34,   396,   397,   117,   118,   118,    45,   456,
     538,    31,    80,    45,    80,    25,    26,    45,    34,    38,
     118,    80,   123,     8,   136,    10,    11,    12,    13,   842,
       8,   843,   732,   427,   117,    45,   117,    80,   117,   118,
      80,   136,    80,   122,    81,    82,   361,    25,    26,    81,
      82,   748,   117,    80,    32,   570,    80,   826,   827,   366,
      45,     8,    80,   465,   125,    80,   126,    45,   375,   376,
     377,    81,    82,   380,    80,   465,   124,   121,    25,    26,
     117,   607,   117,   120,   125,    32,   122,   124,   117,   122,
     118,     8,   539,   130,   117,   126,   133,   129,    45,   127,
     128,   122,   409,    81,    82,   117,     3,   120,    25,    26,
     120,   117,   118,   120,     8,    32,   122,    14,   120,   119,
     125,   125,     8,   482,   125,   119,   573,   574,    45,   125,
     577,    25,    26,   125,    81,    82,   834,   444,    32,    25,
      26,   669,   120,    40,    41,   125,   125,   136,   125,   125,
     597,    45,   130,   125,     8,   133,   125,   464,   465,    45,
     125,   555,   556,   557,    81,    82,   125,     8,   570,   125,
     477,    25,    26,   480,   700,   119,   125,   119,   119,   136,
     570,   119,   584,   130,    25,    26,   133,    81,    82,   591,
      80,    45,   137,   151,   584,    81,    82,   895,    10,    10,
      31,   591,   118,   120,    45,   125,   120,   117,   123,   121,
     123,   518,   117,   130,   117,     8,   133,    10,    11,   119,
      13,   123,   117,   538,   125,   123,   120,    81,    82,   121,
       8,   119,    25,    26,   120,   119,   130,     8,   125,   133,
      81,    82,   689,   119,   691,   119,   125,    25,    26,   118,
     117,   122,    45,   125,    25,    26,    34,   137,   118,   137,
     124,   655,   697,    34,   125,   117,   120,    45,   119,   118,
     118,   121,   119,   117,    45,    53,    54,   584,     8,   237,
     119,   123,    53,    54,   591,   687,   601,   245,    81,    82,
     649,   125,   119,   121,   119,    25,    26,   687,   117,   125,
     607,   119,     8,    81,    82,   119,   119,   123,   125,   624,
      81,    82,   119,   119,   119,    45,   821,   119,   119,    25,
      26,   119,   119,    53,    54,   118,   125,   119,   119,   125,
     118,   125,   118,   648,   127,   128,   129,   119,   732,    45,
     120,   117,   119,    10,   119,   850,   125,    53,    54,    10,
     855,    81,    82,   119,   669,     8,   117,   117,    14,   666,
      16,    17,    18,    19,   118,   118,    22,   119,   118,   124,
     117,   117,    25,    26,   119,    81,    82,   119,     8,   119,
     687,    34,   119,   121,   119,   119,   701,   702,   119,   118,
     705,   119,    45,   700,   119,    25,    26,   117,   117,    84,
     743,   119,   360,   908,    34,   787,   743,   743,   795,   795,
     698,   845,   917,   228,   743,    45,   743,    97,   743,   743,
     813,   814,   783,   816,   817,   818,   785,    83,    81,    82,
     777,   743,   216,   228,   825,   850,   743,   884,   743,   743,
     657,    91,   400,   670,   550,   848,   671,   743,   743,   206,
       3,    81,    82,   796,   848,    -1,    -1,   491,    -1,    -1,
     853,   854,   777,   856,   857,    -1,   859,   860,    -1,   916,
      -1,    -1,    -1,    -1,   789,    -1,   783,    -1,    -1,    -1,
      -1,   788,    -1,   795,     8,    -1,    -1,   794,   795,   794,
     795,    -1,   796,    -1,    -1,    -1,   803,    -1,   456,     8,
      -1,    25,    26,    -1,    -1,   864,    -1,    -1,   815,     8,
     825,    -1,   470,    -1,   821,    -1,    25,    26,    -1,   826,
     827,    45,    -1,   481,    -1,    -1,    25,    26,    -1,    -1,
     488,   489,   490,   491,   492,   894,    45,    -1,    -1,    -1,
      -1,    -1,   849,   850,   851,    -1,    45,   505,   855,    -1,
      -1,   858,    -1,    -1,    -1,    -1,   863,    81,    82,   863,
     127,   128,    -1,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   539,    81,    82,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   906,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   908,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   924,
     917,    -1,    -1,     3,    -1,   573,   574,     7,     8,   577,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,   597,
      -1,    31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,
     608,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     628,   629,    -1,    -1,   632,   633,   634,   635,   636,   637,
     638,   639,   640,   641,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   689,    -1,   691,    -1,    -1,    -1,    -1,    -1,   129,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     708,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   727,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    -1,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   115,    -1,   117,   118,   846,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,    -1,   138,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   884,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   909,    -1,    -1,    -1,    -1,    -1,   915,   916,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,    -1,   118,    -1,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,    -1,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,   118,    -1,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,    -1,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,    -1,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,   118,    -1,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,    -1,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,    -1,
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,    -1,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,    -1,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,   118,   119,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,    -1,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     3,     4,     5,     6,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    44,    45,    46,    -1,    48,
      -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,   117,    -1,
      -1,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
     129,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    35,    36,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,
      36,    -1,    -1,    -1,    -1,    41,   129,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,     7,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,   129,     8,    -1,    45,    46,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
     129,     3,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      -1,    -1,    34,    35,    36,   129,    38,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,     8,   117,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       3,    -1,    -1,    -1,     7,     8,     9,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   120,    -1,    31,    -1,
      -1,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,     3,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     3,    -1,    -1,    -1,    -1,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     3,    -1,    -1,    -1,    -1,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    51,    52,    48,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   118,    -1,    -1,    -1,   122,   123,    -1,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,    -1,   138,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    34,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,     8,    -1,
      45,    -1,    -1,    48,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,    -1,    -1,    -1,    45,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     8,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,     8,    41,    -1,    -1,
      -1,    45,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   141,     0,   142,     3,     7,     8,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    31,    34,    35,    36,    38,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    50,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   117,   143,   144,   150,   151,   159,   160,
     161,   162,   164,   168,   171,   177,   179,   180,   183,   184,
     185,   211,   212,   231,   239,   240,   241,   242,   244,   250,
     251,   256,   257,   260,   267,   292,     8,    25,    26,    45,
      81,    82,   213,     8,    45,   240,   251,   118,   122,   120,
     213,   120,   213,    46,   239,   259,   258,   179,   180,   183,
     184,   239,   251,   122,   243,     3,    27,    28,    48,   150,
     151,   159,   160,   240,     8,    25,    26,    45,    81,    82,
     251,   294,   118,   122,    38,    48,     3,     9,    27,    28,
     179,   180,   183,   184,   231,   117,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,     3,    38,
     144,   179,   184,   239,   117,   120,   214,   214,   214,   214,
     214,   242,   240,     8,    25,    26,    34,    45,    53,    54,
      81,    82,   181,   188,   190,   193,   197,   213,   232,   234,
     235,   251,    32,   130,   133,   252,   211,    80,    80,   117,
     122,   145,   213,   232,   252,   188,    80,   293,   246,   152,
     153,   213,   120,   232,   252,   293,   120,   232,   252,   118,
     260,   260,   214,   214,   214,   214,   213,   123,   172,     8,
      45,   244,   250,   120,   213,   213,   213,   117,    53,    54,
     235,   163,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    38,    41,    43,    44,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,   117,   118,   120,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   138,   139,   256,   291,   292,   298,   299,   300,   301,
     293,   245,   117,   213,   120,   179,   239,   213,   213,   214,
     214,   214,   214,   179,   213,   269,   272,   273,   213,   213,
     277,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   179,   184,   214,   214,
     293,    51,    52,   118,   136,   290,   291,   213,   228,   252,
     213,   188,   193,   251,    33,   126,   189,   195,   194,   195,
      49,   118,   122,   136,   236,   237,   117,   125,   126,   229,
     230,    80,    32,   130,   133,   130,   133,     8,    45,   244,
     249,   250,     8,    45,   129,   185,   201,   203,   213,   249,
     240,   247,   124,   261,   117,   232,    42,   117,   119,   297,
     298,   302,   247,   121,   125,   126,   152,   117,   232,   121,
     293,   117,   232,   186,     3,    14,    41,   171,   173,   175,
     176,   293,   120,   228,   228,   228,   117,   120,   293,   293,
     293,   295,   293,   119,   247,   141,   214,   119,   125,   213,
     213,   213,   125,   125,   213,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   125,   119,   119,   125,   214,
     214,   121,   136,   136,   119,   137,   191,   119,   213,   119,
      80,    10,    10,    31,   196,   196,   238,   198,   199,   294,
     233,   234,   252,     8,     9,    10,    11,    12,    13,    45,
     118,   127,   128,   265,   266,   255,   254,   253,   208,   209,
     213,   202,   118,   125,   123,     4,     5,     6,   262,   263,
     264,   120,   117,     3,   298,   303,   123,   294,   152,     8,
      10,    11,    13,    45,   118,   127,   128,   129,   154,   155,
     156,   157,   213,   244,   250,   121,   117,   294,   121,   117,
     217,   218,   213,   227,   123,   125,   227,   121,   293,   117,
     119,   119,   141,   119,   119,   119,     3,    40,   121,   296,
     297,   137,   123,   121,   268,   125,   119,   119,   274,   276,
     125,   256,   280,   282,   284,   286,   281,   283,   285,   287,
     288,   289,   213,   137,   137,   118,    49,   117,   118,   136,
     117,   236,   217,   247,   137,   125,   234,   122,   265,     8,
     266,   266,   252,   252,   252,   118,   124,   205,   204,   248,
     146,   125,   249,   147,   303,   303,   117,   117,   156,   127,
     128,   130,   131,   132,   133,   134,   135,   158,   156,   294,
     117,   294,   119,    48,    79,   219,   221,   240,   174,   228,
     121,   118,   118,   121,   240,   270,   256,   256,   278,   119,
     256,   256,   256,   256,   256,   256,   256,   256,   256,   256,
     119,   125,   192,   117,   215,   216,   221,   293,   119,   123,
     236,   233,   125,   241,   119,   210,   207,   213,   217,   247,
     261,   262,   121,   148,   119,   156,   117,   117,   187,   125,
      53,    54,   235,   236,   173,   117,   228,   215,   215,   119,
     240,   275,   119,   256,   119,   119,   119,   119,   119,   119,
     119,   119,   125,   125,   119,   217,   119,   125,   137,   118,
     233,   123,   217,   125,   206,   118,   119,   120,     3,     7,
       8,    25,    26,    29,    37,    38,    39,    45,    50,    81,
      82,   116,   117,   129,   149,   150,   151,   159,   160,   161,
     165,   166,   168,   169,   170,   171,   178,   182,   184,   201,
     231,   239,   264,   267,   196,   220,   225,   224,   223,   222,
     117,   119,   119,   271,   125,   279,    10,    10,   119,   117,
     216,   117,   200,   118,   119,   207,   293,   147,   213,   129,
     240,     3,   166,   182,   184,   239,   169,   170,   171,   182,
     184,   231,   239,   118,   118,   208,   214,   214,   166,   182,
     184,   214,   214,   214,   193,   124,   219,   227,   227,   229,
     229,   117,   117,   119,   294,   119,   119,   119,   217,   266,
     206,   119,   121,   117,   120,   124,   167,   208,   193,   213,
     214,   214,   214,   214,   214,   214,     7,   182,   239,   293,
     119,   119,   119,   119,   119,   293,   294,   240,   119,   119,
     118,   121,   117,   117,   226,   117,   215,   119
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
        case 3:

/* Line 1455 of yacc.c  */
#line 584 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 600 "vtkParse.y"
    { output_function(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 601 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 602 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 603 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 604 "vtkParse.y"
    { output_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 605 "vtkParse.y"
    { reject_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 606 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 607 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 608 "vtkParse.y"
    { output_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 609 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 610 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 611 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 612 "vtkParse.y"
    { reject_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 613 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 614 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 615 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 616 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 617 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 625 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str)); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 626 "vtkParse.y"
    { end_class(); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 627 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 628 "vtkParse.y"
    { end_class(); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 630 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 645 "vtkParse.y"
    { output_function(); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 646 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 648 "vtkParse.y"
    { output_function(); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 649 "vtkParse.y"
    { output_function(); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 650 "vtkParse.y"
    { output_function(); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 651 "vtkParse.y"
    { output_function(); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 652 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 654 "vtkParse.y"
    { output_function(); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 655 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 656 "vtkParse.y"
    { output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 657 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 682 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 684 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 689 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 695 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 701 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 715 "vtkParse.y"
    { popNamespace(); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 746 "vtkParse.y"
    { postSig("template<"); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    { postSig(", "); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 755 "vtkParse.y"
    { postSig("class "); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    { postSig("int "); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 763 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 774 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 776 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 782 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 786 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 799 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 803 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 807 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 817 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 821 "vtkParse.y"
    { postSig(")"); }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 822 "vtkParse.y"
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

  case 161:

/* Line 1455 of yacc.c  */
#line 836 "vtkParse.y"
    { postSig(")"); }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 837 "vtkParse.y"
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

  case 163:

/* Line 1455 of yacc.c  */
#line 848 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", currentFunction->Name);
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 864 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 865 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 870 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 872 "vtkParse.y"
    { postSig(")"); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 873 "vtkParse.y"
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

  case 169:

/* Line 1455 of yacc.c  */
#line 884 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 900 "vtkParse.y"
    {postSig(") = 0");}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 901 "vtkParse.y"
    {postSig(") const = 0");}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 903 "vtkParse.y"
    {postSig(" const");}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 906 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 909 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 910 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 911 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 918 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 920 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 921 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 930 "vtkParse.y"
    { postSig("("); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 939 "vtkParse.y"
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

  case 189:

/* Line 1455 of yacc.c  */
#line 952 "vtkParse.y"
    { postSig("(");}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 954 "vtkParse.y"
    {postSig("const ");}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 956 "vtkParse.y"
    {postSig("static ");}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    {postSig("static ");}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 959 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 960 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 961 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 963 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 964 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 972 "vtkParse.y"
    {clearTypeId();}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 974 "vtkParse.y"
    { postSig("...");}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 976 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 978 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 982 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (2)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 991 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (2)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1000 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1007 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1008 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(") ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = ((yyvsp[(1) - (5)].integer) | VTK_PARSE_REF);
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1015 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*"); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1016 "vtkParse.y"
    { postSig(")("); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1017 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(")");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_UNKNOWN;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    {postSig("="); postSig((yyvsp[(2) - (2)].str));}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1061 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer);}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1072 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1074 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1079 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1083 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1084 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1086 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1087 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1089 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1090 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1091 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1095 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1097 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1098 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1099 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1102 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1103 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1104 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1105 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1107 "vtkParse.y"
    {postSig(", ");}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1109 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1110 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1111 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1112 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1115 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1121 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1127 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1128 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1129 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1130 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1131 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1132 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1145 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1146 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1147 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1148 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1149 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1151 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1153 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1155 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1156 "vtkParse.y"
    { postSig("**"); }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1157 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1158 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1159 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1160 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1161 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1163 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1164 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1165 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1166 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1167 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1168 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1169 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_VTK_OBJECT; }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1172 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1173 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1174 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1175 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1176 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1178 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1179 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1180 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1181 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1182 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1183 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1184 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1185 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1186 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1187 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1187 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1188 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1189 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1190 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1193 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1194 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1195 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1196 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1197 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1198 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1199 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1206 "vtkParse.y"
    {
      currentClass->SuperClasses[currentClass->NumberOfSuperClasses++] =
        vtkstrdup((yyvsp[(2) - (2)].str));
    }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1211 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1212 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1213 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1214 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1216 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1217 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (2)].str);}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1218 "vtkParse.y"
    {(yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (2)].str))+2);
                        sprintf((yyval.str), "-%s", (yyvsp[(2) - (2)].str)); }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1220 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1221 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (3)].str);}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1223 "vtkParse.y"
    {
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (7)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(6) - (7)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (7)].str), getTypeId(), (yyvsp[(6) - (7)].str));
            }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1229 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1230 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1232 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1233 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1234 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1237 "vtkParse.y"
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

  case 359:

/* Line 1455 of yacc.c  */
#line 1251 "vtkParse.y"
    {postSig("Get");}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1252 "vtkParse.y"
    {markSig();}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1252 "vtkParse.y"
    {swapSig();}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
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

  case 363:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
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

  case 365:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1281 "vtkParse.y"
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

  case 367:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    {closeSig();}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1296 "vtkParse.y"
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

  case 370:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
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

  case 372:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    {markSig();}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    {swapSig();}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1358 "vtkParse.y"
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

  case 376:

/* Line 1455 of yacc.c  */
#line 1371 "vtkParse.y"
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

  case 377:

/* Line 1455 of yacc.c  */
#line 1396 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1397 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1401 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1402 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1406 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1407 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1411 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1412 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1417 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1421 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1422 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1426 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1427 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1431 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1432 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1436 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1438 "vtkParse.y"
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

  case 395:

/* Line 1455 of yacc.c  */
#line 1457 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1459 "vtkParse.y"
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

  case 397:

/* Line 1455 of yacc.c  */
#line 1479 "vtkParse.y"
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

  case 398:

/* Line 1455 of yacc.c  */
#line 1545 "vtkParse.y"
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

  case 399:

/* Line 1455 of yacc.c  */
#line 1615 "vtkParse.y"
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

  case 400:

/* Line 1455 of yacc.c  */
#line 1682 "vtkParse.y"
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

  case 401:

/* Line 1455 of yacc.c  */
#line 1755 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1756 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1757 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1758 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1761 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1762 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1762 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1763 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1763 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1764 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1764 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1765 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1765 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1766 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1766 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1767 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1767 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1768 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1769 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1770 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1771 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1772 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1773 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1774 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1775 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1776 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1777 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1778 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1779 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1780 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1781 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1782 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1783 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1784 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1785 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1786 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1787 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1788 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1789 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1790 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1791 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1792 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1793 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1794 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 6676 "vtkParse.tab.c"
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
#line 1831 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  func->Name = NULL;
  func->Namespace = NULL;
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
  cls->Namespace = NULL;
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
  file_info->NumberOfFunctions = 0;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  InitClass(currentClass);
  currentClass->ClassName = vtkstrdup(classname);
  if (getNamespace())
    {
    currentClass->Namespace = vtkstrdup(getNamespace());
    }

  data.Classes[data.NumberOfClasses++] = currentClass;

  InitFunction(currentFunction);
}

/* reached the end of a class definition */
void end_class()
{
  currentClass = NULL;
}

/* reject the function, do not output it */
void reject_function()
{
  InitFunction(currentFunction);
}

/* a simple routine that updates a few variables */
void output_function()
{
  int i, j, match;

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

  if (currentClass)
    {
    /* is it a delete function */
    if (currentFunction->Name && !strcmp("Delete",currentFunction->Name))
      {
      currentClass->HasDelete = 1;
      }

    currentClass->Functions[currentClass->NumberOfFunctions++]
      = currentFunction;

    currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    }
  else
    {
    /* set the namespace */
    if (getNamespace())
      {
      currentFunction->Namespace = vtkstrdup(getNamespace());
      }

    /* make sure this function isn't a repeat */
    match = 0;
    for (i = 0; i < data.NumberOfFunctions; i++)
      {
      if (data.Functions[i]->Name &&
          strcmp(data.Functions[i]->Name, currentFunction->Name) == 0)
        {
        if (data.Functions[i]->NumberOfArguments ==
            currentFunction->NumberOfArguments)
          {
          for (j = 0; j < currentFunction->NumberOfArguments; j++)
            {
            if (data.Functions[i]->ArgTypes[j] ==
                currentFunction->ArgTypes[j])
              {
              if (currentFunction->ArgTypes[j] == VTK_PARSE_VTK_OBJECT &&
                  strcmp(data.Functions[i]->ArgClasses[j],
                         currentFunction->ArgClasses[j]) == 0)
                {
                break;
                }
              }
            }
          if (j == currentFunction->NumberOfArguments)
            {
            match = 1;
            break;
            }
          }
        }
      }

    if (!match)
      {
      data.Functions[data.NumberOfFunctions++] = currentFunction;
      currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      }
    }

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
  int i, j, lineno;
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

  yyset_in(ifile);
  yyset_out(errfile);
  ret = yyparse();
  lineno = yyget_lineno();
  yylex_destroy();

  free(currentFunction);

  if (ret)
    {
    fprintf(errfile,
            "*** SYNTAX ERROR found in parsing the header file %s "
            "before line %d ***\n",
            filename, lineno);
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

  m = file_info->NumberOfFunctions;
  for (j = 0; j < m; j++)
    {
    func_info = file_info->Functions[j];
    free(func_info);
    }

  free(file_info);
}

