
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
  - remove the #defined constants that appear right after the anonymous_enums

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

/* Map from the type anonymous_enumeration in vtkType.h to the VTK wrapping type
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
FileInfo *namespaceStack[10];
int namespaceDepth = 0;
FileInfo *currentNamespace = NULL;
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
char *currentVarName = 0;
char *currentVarValue = 0;
char *currentEnumName = 0;
char *currentEnumValue = 0;

void start_class(const char *classname, int is_struct);
void end_class();
void output_function(void);
void reject_function(void);
void start_enum(const char *enumname);
void add_enum(const char *name, const char *value);
void end_enum();
void add_constant(const char *name, const char *value,
                  int type, const char *typeclass, int global);
const char *add_const_scope(const char *name);

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n);
void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n);

/* initializer functions */
void InitFile(FileInfo *file_info);
void InitClass(ClassInfo *cls);
void InitFunction(FunctionInfo *func);
void InitConstant(ConstantInfo *con);

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
  int i;
  FileInfo *oldNamespace = currentNamespace;

  for (i = 0; i < oldNamespace->NumberOfNamespaces; i++)
    {
    /* see if the namespace already exists */
    if (strcmp(name, oldNamespace->Namespaces[i]->Name) == 0)
      {
      currentNamespace = oldNamespace->Namespaces[i];
      }
    }

  /* create a new namespace */
  if (i == oldNamespace->NumberOfNamespaces)
    {
    currentNamespace = (FileInfo *)malloc(sizeof(FileInfo));
    InitFile(currentNamespace);
    currentNamespace->Name = vtkstrdup(name);
    vtkParse_AddItemMacro(oldNamespace, Namespaces, currentNamespace);
    }

  namespaceStack[namespaceDepth++] = oldNamespace;
}

/* leave the namespace */
void popNamespace()
{
  currentNamespace = namespaceStack[--namespaceDepth];
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

/* prepend a scope:: to a name */
void prepend_scope(char *cp, const char *arg)
{
  size_t i, m, n, depth;

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
    checkSigSize(arg);
    prepend_scope(currentFunction->Signature, arg);
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

/* clear the var Id */
void clearVarName(void)
{
  currentVarName = NULL;
}

/* set the var Id */
void setVarName(const char *text)
{
  static char static_text[2048];
  currentVarName = static_text;
  strcpy(static_text, text);
}

/* return the var id */
const char *getVarName()
{
  return currentVarName;
}

/* clear the var value */
void clearVarValue(void)
{
  currentVarValue = NULL;
}

/* set the var value */
void setVarValue(const char *text)
{
  static char static_text[2048];
  currentVarValue = static_text;
  strcpy(static_text, text);
}

/* return the var value */
const char *getVarValue()
{
  return currentVarValue;
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
#line 569 "vtkParse.tab.c"

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
     STRUCT = 258,
     CLASS = 259,
     PUBLIC = 260,
     PRIVATE = 261,
     PROTECTED = 262,
     VIRTUAL = 263,
     ID = 264,
     STRING_LITERAL = 265,
     INT_LITERAL = 266,
     HEX_LITERAL = 267,
     FLOAT_LITERAL = 268,
     CHAR_LITERAL = 269,
     INT = 270,
     FLOAT = 271,
     SHORT = 272,
     LONG = 273,
     LONG_LONG = 274,
     INT64__ = 275,
     DOUBLE = 276,
     VOID = 277,
     CHAR = 278,
     SIGNED_CHAR = 279,
     BOOL = 280,
     OSTREAM = 281,
     ISTREAM = 282,
     ENUM = 283,
     UNION = 284,
     CLASS_REF = 285,
     OTHER = 286,
     CONST = 287,
     CONST_PTR = 288,
     CONST_EQUAL = 289,
     OPERATOR = 290,
     UNSIGNED = 291,
     SIGNED = 292,
     FRIEND = 293,
     INLINE = 294,
     MUTABLE = 295,
     TEMPLATE = 296,
     TYPENAME = 297,
     TYPEDEF = 298,
     NAMESPACE = 299,
     USING = 300,
     VTK_ID = 301,
     STATIC = 302,
     EXTERN = 303,
     VAR_FUNCTION = 304,
     ARRAY_NUM = 305,
     VTK_LEGACY = 306,
     NEW = 307,
     DELETE = 308,
     LPAREN_POINTER = 309,
     LPAREN_AMPERSAND = 310,
     OP_LSHIFT_EQ = 311,
     OP_RSHIFT_EQ = 312,
     OP_LSHIFT = 313,
     OP_RSHIFT = 314,
     OP_ARROW_POINTER = 315,
     OP_ARROW = 316,
     OP_INCR = 317,
     OP_DECR = 318,
     OP_PLUS_EQ = 319,
     OP_MINUS_EQ = 320,
     OP_TIMES_EQ = 321,
     OP_DIVIDE_EQ = 322,
     OP_REMAINDER_EQ = 323,
     OP_AND_EQ = 324,
     OP_OR_EQ = 325,
     OP_XOR_EQ = 326,
     OP_LOGIC_AND_EQ = 327,
     OP_LOGIC_OR_EQ = 328,
     OP_LOGIC_AND = 329,
     OP_LOGIC_OR = 330,
     OP_LOGIC_EQ = 331,
     OP_LOGIC_NEQ = 332,
     OP_LOGIC_LEQ = 333,
     OP_LOGIC_GEQ = 334,
     ELLIPSIS = 335,
     DOUBLE_COLON = 336,
     StdString = 337,
     UnicodeString = 338,
     IdType = 339,
     TypeInt8 = 340,
     TypeUInt8 = 341,
     TypeInt16 = 342,
     TypeUInt16 = 343,
     TypeInt32 = 344,
     TypeUInt32 = 345,
     TypeInt64 = 346,
     TypeUInt64 = 347,
     TypeFloat32 = 348,
     TypeFloat64 = 349,
     SetMacro = 350,
     GetMacro = 351,
     SetStringMacro = 352,
     GetStringMacro = 353,
     SetClampMacro = 354,
     SetObjectMacro = 355,
     GetObjectMacro = 356,
     BooleanMacro = 357,
     SetVector2Macro = 358,
     SetVector3Macro = 359,
     SetVector4Macro = 360,
     SetVector6Macro = 361,
     GetVector2Macro = 362,
     GetVector3Macro = 363,
     GetVector4Macro = 364,
     GetVector6Macro = 365,
     SetVectorMacro = 366,
     GetVectorMacro = 367,
     ViewportCoordinateMacro = 368,
     WorldCoordinateMacro = 369,
     TypeMacro = 370,
     VTK_CONSTANT_DEF = 371,
     VTK_BYTE_SWAP_DECL = 372
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 510 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 846 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 858 "vtkParse.tab.c"

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
#define YYLAST   6233

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  141
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  177
/* YYNRULES -- Number of rules.  */
#define YYNRULES  529
/* YYNRULES -- Number of states.  */
#define YYNSTATES  965

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   372

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   139,     2,     2,     2,   133,   134,     2,
     119,   120,   131,   129,   126,   128,   140,   132,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   125,   118,
     123,   127,   124,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   137,     2,   138,   136,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   121,   135,   122,   130,     2,     2,     2,
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
     115,   116,   117
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     9,    11,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    37,    39,
      42,    46,    50,    54,    59,    62,    66,    70,    73,    77,
      81,    86,    89,    93,    97,   101,   106,   109,   111,   113,
     116,   121,   126,   128,   129,   137,   138,   149,   150,   158,
     159,   170,   171,   172,   176,   179,   181,   184,   186,   188,
     190,   192,   194,   196,   198,   200,   203,   205,   207,   210,
     214,   218,   221,   225,   228,   232,   236,   239,   243,   246,
     252,   254,   256,   257,   258,   268,   269,   270,   279,   280,
     282,   286,   288,   292,   294,   296,   298,   300,   302,   304,
     306,   308,   311,   315,   319,   321,   323,   325,   327,   329,
     331,   333,   335,   337,   339,   341,   348,   356,   363,   367,
     368,   375,   381,   384,   388,   392,   394,   399,   403,   408,
     417,   426,   436,   446,   449,   452,   455,   458,   461,   465,
     468,   471,   475,   476,   482,   484,   485,   490,   493,   496,
     498,   500,   502,   507,   512,   515,   519,   524,   528,   531,
     535,   538,   542,   544,   547,   551,   555,   559,   561,   564,
     568,   569,   570,   579,   580,   584,   587,   588,   589,   597,
     598,   602,   605,   608,   611,   612,   614,   615,   621,   622,
     623,   633,   634,   638,   639,   645,   646,   650,   651,   655,
     660,   662,   663,   669,   671,   673,   676,   678,   680,   682,
     684,   686,   688,   690,   694,   695,   697,   699,   703,   704,
     705,   708,   710,   712,   713,   718,   719,   720,   726,   727,
     728,   734,   736,   737,   743,   744,   745,   755,   756,   758,
     760,   763,   764,   766,   767,   771,   775,   779,   782,   786,
     792,   798,   805,   814,   823,   827,   829,   833,   836,   841,
     842,   846,   847,   849,   852,   853,   855,   856,   860,   865,
     867,   870,   872,   875,   877,   880,   883,   885,   887,   889,
     890,   894,   895,   901,   902,   908,   910,   911,   916,   918,
     920,   922,   924,   928,   932,   934,   936,   938,   940,   942,
     944,   946,   948,   950,   953,   956,   959,   962,   965,   966,
     971,   972,   977,   978,   983,   985,   987,   989,   991,   993,
     995,   997,  1000,  1003,  1006,  1009,  1012,  1015,  1018,  1021,
    1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,  1039,  1041,
    1043,  1045,  1047,  1049,  1051,  1052,  1056,  1057,  1061,  1063,
    1065,  1067,  1069,  1071,  1073,  1075,  1077,  1078,  1081,  1083,
    1087,  1089,  1092,  1095,  1098,  1100,  1102,  1104,  1106,  1107,
    1111,  1112,  1116,  1118,  1119,  1124,  1125,  1126,  1136,  1138,
    1140,  1142,  1144,  1146,  1148,  1149,  1157,  1158,  1159,  1160,
    1170,  1171,  1177,  1178,  1184,  1185,  1186,  1197,  1198,  1206,
    1207,  1208,  1209,  1219,  1226,  1227,  1235,  1236,  1244,  1245,
    1253,  1254,  1262,  1263,  1271,  1272,  1280,  1281,  1289,  1290,
    1298,  1299,  1309,  1310,  1320,  1325,  1330,  1337,  1345,  1348,
    1351,  1355,  1359,  1361,  1363,  1365,  1367,  1369,  1371,  1373,
    1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,
    1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,
    1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,
    1435,  1437,  1439,  1441,  1443,  1444,  1447,  1448,  1451,  1453,
    1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,
    1475,  1477,  1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,
    1495,  1497,  1499,  1501,  1503,  1505,  1507,  1509,  1511,  1513,
    1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,  1531,  1533,
    1535,  1537,  1539,  1541,  1543,  1545,  1549,  1553,  1557,  1561
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     142,     0,    -1,    -1,    -1,   142,   143,   144,    -1,   242,
      -1,    48,   242,    -1,   156,    -1,   153,    -1,   168,    -1,
     167,    -1,   166,    -1,   169,    -1,   170,    -1,   172,    -1,
     176,    -1,   145,    -1,   179,   145,    -1,    30,    -1,   192,
     222,    -1,    39,   192,   222,    -1,    48,   192,   222,    -1,
     179,   192,   222,    -1,   179,    39,   192,   222,    -1,   191,
     222,    -1,    39,   191,   222,    -1,    48,   191,   222,    -1,
     187,   222,    -1,    39,   187,   222,    -1,    48,   187,   222,
      -1,    48,    10,   187,   222,    -1,   188,   222,    -1,    39,
     188,   222,    -1,    48,   188,   222,    -1,   179,   187,   222,
      -1,   179,    39,   187,   222,    -1,   185,   222,    -1,   285,
      -1,   310,    -1,   264,   118,    -1,     9,   119,   311,   120,
      -1,    46,   119,   311,   120,    -1,   118,    -1,    -1,     4,
     221,   146,   274,   121,   150,   122,    -1,    -1,     4,   221,
     123,   260,   124,   147,   274,   121,   150,   122,    -1,    -1,
       3,   221,   148,   274,   121,   150,   122,    -1,    -1,     3,
     221,   123,   260,   124,   149,   274,   121,   150,   122,    -1,
      -1,    -1,   150,   151,   152,    -1,   277,   125,    -1,   242,
      -1,    40,   242,    -1,   156,    -1,   153,    -1,   168,    -1,
     167,    -1,   166,    -1,   169,    -1,   176,    -1,   174,    -1,
      38,   174,    -1,   173,    -1,    30,    -1,   192,   222,    -1,
      38,   192,   222,    -1,    39,   192,   222,    -1,   178,   222,
      -1,    39,   178,   222,    -1,   190,   222,    -1,    38,   190,
     222,    -1,    39,   190,   222,    -1,   177,   222,    -1,    39,
     177,   222,    -1,   186,   222,    -1,   117,   119,   311,   120,
     118,    -1,   285,    -1,   118,    -1,    -1,    -1,    28,   221,
     154,   121,   159,   122,   155,   312,   118,    -1,    -1,    -1,
      28,   157,   121,   159,   122,   158,   312,   118,    -1,    -1,
     160,    -1,   160,   126,   159,    -1,   221,    -1,   221,   127,
     163,    -1,   162,    -1,   221,    -1,   263,    -1,   257,    -1,
      11,    -1,    12,    -1,    14,    -1,   161,    -1,   164,   163,
      -1,   161,   165,   163,    -1,   119,   163,   120,    -1,   128,
      -1,   129,    -1,   130,    -1,   128,    -1,   129,    -1,   131,
      -1,   132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,
      -1,     3,   121,   311,   122,   312,   118,    -1,    29,   221,
     121,   311,   122,   312,   118,    -1,    29,   121,   311,   122,
     312,   118,    -1,    45,   312,   118,    -1,    -1,    44,   264,
     171,   121,   142,   122,    -1,    48,    10,   121,   142,   122,
      -1,   179,   174,    -1,     4,   221,   175,    -1,     3,   221,
     175,    -1,   118,    -1,   121,   311,   122,   118,    -1,   125,
     312,   118,    -1,    43,   253,   248,   118,    -1,    43,     4,
     221,   121,   311,   122,   238,   118,    -1,    43,     3,   221,
     121,   311,   122,   238,   118,    -1,    43,   253,    54,   238,
     120,   119,   223,   120,   118,    -1,    43,   253,    55,   238,
     120,   119,   223,   120,   118,    -1,    43,   156,    -1,    43,
     153,    -1,    43,   168,    -1,    43,   167,    -1,    43,   166,
      -1,    43,    49,   118,    -1,   179,   190,    -1,   179,   192,
      -1,    41,   123,   124,    -1,    -1,    41,   123,   180,   181,
     124,    -1,   183,    -1,    -1,   183,   126,   182,   181,    -1,
     184,   237,    -1,   179,   237,    -1,    42,    -1,     4,    -1,
      15,    -1,    51,   119,   187,   120,    -1,    51,   119,   190,
     120,    -1,   252,   201,    -1,   252,   189,   201,    -1,   264,
      81,   130,   216,    -1,   264,    81,   209,    -1,   264,    81,
      -1,   189,   264,    81,    -1,   130,   216,    -1,     8,   130,
     216,    -1,   209,    -1,   252,   201,    -1,     8,   253,   201,
      -1,   264,    81,   193,    -1,   252,   189,   196,    -1,   193,
      -1,   252,   196,    -1,     8,   253,   196,    -1,    -1,    -1,
      35,   252,   119,   194,   225,   120,   195,   204,    -1,    -1,
     198,   197,   204,    -1,   198,   203,    -1,    -1,    -1,    35,
     308,   199,   119,   200,   225,   120,    -1,    -1,   205,   202,
     204,    -1,   205,   203,    -1,   127,    11,    -1,    34,    11,
      -1,    -1,    32,    -1,    -1,   221,   119,   206,   225,   120,
      -1,    -1,    -1,   221,   123,   207,   260,   124,   119,   208,
     225,   120,    -1,    -1,   211,   210,   213,    -1,    -1,   221,
     119,   212,   225,   120,    -1,    -1,   125,   215,   214,    -1,
      -1,   126,   215,   214,    -1,   221,   119,   311,   120,    -1,
     217,    -1,    -1,   221,   119,   218,   225,   120,    -1,    32,
      -1,    47,    -1,    47,    39,    -1,    46,    -1,     9,    -1,
      27,    -1,    26,    -1,    82,    -1,    83,    -1,   118,    -1,
     121,   311,   122,    -1,    -1,   224,    -1,   229,    -1,   229,
     126,   224,    -1,    -1,    -1,   226,   227,    -1,    80,    -1,
     229,    -1,    -1,   229,   126,   228,   227,    -1,    -1,    -1,
     253,   230,   249,   231,   239,    -1,    -1,    -1,   253,   232,
     248,   233,   239,    -1,    49,    -1,    -1,   253,    55,   234,
     247,   120,    -1,    -1,    -1,   253,    54,   235,   247,   120,
     119,   236,   223,   120,    -1,    -1,   221,    -1,   221,    -1,
     265,   221,    -1,    -1,   240,    -1,    -1,   127,   241,   278,
      -1,   252,   245,   118,    -1,   252,   243,   118,    -1,    49,
     118,    -1,    47,    49,   118,    -1,   252,    55,   221,   120,
     118,    -1,   252,    54,   238,   120,   118,    -1,   252,    54,
     238,   120,    50,   118,    -1,   252,    54,   238,   120,   137,
     311,   138,   118,    -1,   252,    54,   238,   120,   119,   223,
     120,   118,    -1,   245,   126,   244,    -1,   245,    -1,   245,
     126,   244,    -1,   265,   245,    -1,   265,   245,   126,   244,
      -1,    -1,   248,   246,   239,    -1,    -1,   221,    -1,   221,
     249,    -1,    -1,   250,    -1,    -1,    50,   251,   249,    -1,
     137,   312,   138,   249,    -1,   253,    -1,   220,   253,    -1,
     254,    -1,   254,   265,    -1,   255,    -1,   219,   255,    -1,
     255,   219,    -1,   269,    -1,   257,    -1,   263,    -1,    -1,
      42,   256,   263,    -1,    -1,    46,   123,   258,   260,   124,
      -1,    -1,     9,   123,   259,   260,   124,    -1,   253,    -1,
      -1,   253,   126,   261,   260,    -1,     9,    -1,    46,    -1,
     257,    -1,   263,    -1,   264,    81,   262,    -1,   257,    81,
     262,    -1,     9,    -1,    46,    -1,    27,    -1,    26,    -1,
      82,    -1,    83,    -1,   134,    -1,   131,    -1,    33,    -1,
     131,   134,    -1,   131,   131,    -1,    33,   134,    -1,    33,
     131,    -1,    33,    33,    -1,    -1,   131,   131,   266,   265,
      -1,    -1,    33,   131,   267,   265,    -1,    -1,    33,    33,
     268,   265,    -1,   270,    -1,    82,    -1,    83,    -1,    26,
      -1,    27,    -1,     9,    -1,    46,    -1,     4,     9,    -1,
       4,    46,    -1,     3,     9,    -1,     3,    46,    -1,    29,
       9,    -1,    29,    46,    -1,    28,     9,    -1,    28,    46,
      -1,    22,    -1,    16,    -1,    21,    -1,    25,    -1,    24,
      -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,    89,
      -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,    94,
      -1,    -1,    37,   271,   273,    -1,    -1,    36,   272,   273,
      -1,   273,    -1,    23,    -1,    15,    -1,    17,    -1,    18,
      -1,    84,    -1,    19,    -1,    20,    -1,    -1,   125,   275,
      -1,   276,    -1,   276,   126,   275,    -1,   262,    -1,     6,
     262,    -1,     7,   262,    -1,     5,   262,    -1,     5,    -1,
       6,    -1,     7,    -1,   284,    -1,    -1,   129,   279,   284,
      -1,    -1,   128,   280,   284,    -1,    10,    -1,    -1,   119,
     281,   278,   120,    -1,    -1,    -1,     9,   123,   282,   254,
     124,   119,   283,   284,   120,    -1,    11,    -1,    12,    -1,
      13,    -1,    14,    -1,     9,    -1,    46,    -1,    -1,    95,
     119,   221,   126,   286,   253,   120,    -1,    -1,    -1,    -1,
      96,   119,   287,   221,   126,   288,   253,   289,   120,    -1,
      -1,    97,   119,   290,   221,   120,    -1,    -1,    98,   119,
     291,   221,   120,    -1,    -1,    -1,    99,   119,   221,   126,
     292,   269,   293,   126,   312,   120,    -1,    -1,   100,   119,
     221,   126,   294,   269,   120,    -1,    -1,    -1,    -1,   101,
     119,   295,   221,   126,   296,   269,   297,   120,    -1,   102,
     119,   221,   126,   269,   120,    -1,    -1,   103,   119,   221,
     126,   298,   269,   120,    -1,    -1,   107,   119,   221,   126,
     299,   269,   120,    -1,    -1,   104,   119,   221,   126,   300,
     269,   120,    -1,    -1,   108,   119,   221,   126,   301,   269,
     120,    -1,    -1,   105,   119,   221,   126,   302,   269,   120,
      -1,    -1,   109,   119,   221,   126,   303,   269,   120,    -1,
      -1,   106,   119,   221,   126,   304,   269,   120,    -1,    -1,
     110,   119,   221,   126,   305,   269,   120,    -1,    -1,   111,
     119,   221,   126,   306,   269,   126,    11,   120,    -1,    -1,
     112,   119,   221,   126,   307,   269,   126,    11,   120,    -1,
     113,   119,   221,   120,    -1,   114,   119,   221,   120,    -1,
     115,   119,   221,   126,   221,   120,    -1,   115,   119,   221,
     126,   221,   126,   120,    -1,   119,   120,    -1,   137,   138,
      -1,    52,   137,   138,    -1,    53,   137,   138,    -1,   309,
      -1,   127,    -1,   131,    -1,   132,    -1,   128,    -1,   129,
      -1,   139,    -1,   130,    -1,   126,    -1,   123,    -1,   124,
      -1,   134,    -1,   135,    -1,   136,    -1,   133,    -1,    52,
      -1,    53,    -1,    56,    -1,    57,    -1,    58,    -1,    59,
      -1,    60,    -1,    61,    -1,    64,    -1,    65,    -1,    66,
      -1,    67,    -1,    68,    -1,    62,    -1,    63,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,   116,    -1,    -1,   311,   313,    -1,    -1,   312,   314,
      -1,   118,    -1,   314,    -1,    31,    -1,   315,    -1,   316,
      -1,   317,    -1,    43,    -1,   309,    -1,   125,    -1,   140,
      -1,    81,    -1,     4,    -1,    41,    -1,    27,    -1,    26,
      -1,    82,    -1,    83,    -1,   270,    -1,     9,    -1,    46,
      -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,    10,
      -1,    30,    -1,    32,    -1,    33,    -1,    34,    -1,     3,
      -1,    35,    -1,    47,    -1,    39,    -1,     8,    -1,    28,
      -1,    29,    -1,    42,    -1,    50,    -1,    49,    -1,    80,
      -1,     5,    -1,     7,    -1,     6,    -1,    44,    -1,    45,
      -1,    48,    -1,   310,    -1,   121,   311,   122,    -1,   119,
     311,   120,    -1,    54,   311,   120,    -1,    55,   311,   120,
      -1,   137,   311,   138,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   642,   642,   642,   642,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   684,   684,   686,   686,   688,   688,   690,
     690,   693,   693,   693,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     712,   713,   714,   715,   716,   718,   719,   720,   721,   722,
     723,   724,   732,   733,   732,   735,   736,   735,   738,   738,
     738,   740,   741,   745,   745,   745,   745,   747,   747,   747,
     749,   750,   755,   761,   767,   767,   768,   770,   770,   771,
     771,   772,   772,   773,   773,   775,   777,   779,   781,   783,
     783,   786,   788,   790,   791,   793,   794,   795,   797,   798,
     799,   800,   802,   804,   805,   806,   807,   808,   809,   811,
     813,   815,   816,   816,   819,   820,   820,   822,   822,   824,
     825,   826,   828,   830,   832,   837,   838,   839,   841,   842,
     844,   845,   850,   851,   855,   864,   865,   868,   872,   876,
     887,   891,   886,   906,   906,   917,   934,   935,   934,   942,
     942,   953,   970,   971,   973,   973,   976,   975,   980,   981,
     980,   990,   990,  1000,  1000,  1002,  1002,  1004,  1004,  1006,
    1008,  1022,  1022,  1024,  1026,  1027,  1029,  1030,  1031,  1032,
    1033,  1034,  1036,  1036,  1038,  1038,  1040,  1040,  1042,  1042,
    1042,  1044,  1045,  1048,  1047,  1051,  1052,  1051,  1070,  1071,
    1070,  1089,  1097,  1097,  1110,  1112,  1110,  1125,  1125,  1127,
    1127,  1129,  1129,  1131,  1131,  1133,  1143,  1144,  1145,  1146,
    1147,  1148,  1149,  1151,  1154,  1156,  1157,  1158,  1159,  1162,
    1162,  1165,  1165,  1167,  1176,  1176,  1179,  1179,  1185,  1190,
    1191,  1193,  1194,  1196,  1197,  1198,  1200,  1201,  1203,  1205,
    1205,  1209,  1209,  1211,  1211,  1214,  1214,  1214,  1216,  1217,
    1218,  1219,  1221,  1227,  1234,  1235,  1236,  1237,  1238,  1239,
    1252,  1253,  1254,  1255,  1256,  1257,  1259,  1261,  1263,  1263,
    1265,  1265,  1267,  1267,  1270,  1271,  1272,  1273,  1274,  1275,
    1276,  1277,  1278,  1279,  1280,  1281,  1282,  1283,  1284,  1287,
    1288,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1296,  1297,
    1298,  1299,  1300,  1301,  1302,  1302,  1303,  1303,  1305,  1308,
    1309,  1310,  1311,  1312,  1313,  1314,  1316,  1316,  1318,  1318,
    1320,  1321,  1322,  1323,  1328,  1329,  1330,  1332,  1333,  1333,
    1334,  1334,  1337,  1338,  1338,  1339,  1340,  1339,  1348,  1349,
    1350,  1351,  1352,  1354,  1358,  1358,  1373,  1374,  1374,  1373,
    1387,  1387,  1402,  1402,  1416,  1416,  1416,  1463,  1462,  1478,
    1479,  1479,  1478,  1492,  1518,  1518,  1523,  1523,  1528,  1528,
    1533,  1533,  1538,  1538,  1543,  1543,  1548,  1548,  1553,  1553,
    1558,  1558,  1579,  1579,  1600,  1666,  1736,  1803,  1877,  1878,
    1879,  1880,  1881,  1883,  1884,  1884,  1885,  1885,  1886,  1886,
    1887,  1887,  1888,  1888,  1889,  1889,  1890,  1891,  1892,  1893,
    1894,  1895,  1896,  1897,  1898,  1899,  1900,  1901,  1902,  1903,
    1904,  1905,  1906,  1907,  1908,  1909,  1910,  1911,  1912,  1913,
    1914,  1915,  1916,  1922,  1945,  1945,  1946,  1946,  1948,  1948,
    1950,  1950,  1950,  1950,  1950,  1951,  1951,  1951,  1951,  1951,
    1951,  1952,  1952,  1952,  1952,  1952,  1953,  1953,  1953,  1953,
    1953,  1953,  1954,  1954,  1954,  1954,  1954,  1954,  1955,  1955,
    1955,  1955,  1955,  1955,  1955,  1956,  1956,  1956,  1956,  1956,
    1956,  1957,  1957,  1957,  1957,  1959,  1960,  1961,  1962,  1963
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRUCT", "CLASS", "PUBLIC", "PRIVATE",
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
  "strt", "$@1", "file_item", "class_def", "$@2", "$@3", "$@4", "$@5",
  "class_def_body", "$@6", "class_def_item", "named_enum", "$@7", "$@8",
  "anonymous_enum", "$@9", "$@10", "enum_list", "enum_item", "enum_value",
  "enum_literal", "enum_math", "math_unary_op", "math_binary_op",
  "anonymous_struct", "named_union", "anonymous_union", "using",
  "namespace", "$@11", "extern", "template_internal_class",
  "internal_class", "internal_class_body", "typedef", "template_method",
  "template_operator", "template", "$@12", "template_args", "$@13",
  "template_arg", "template_type", "legacy_function", "legacy_method",
  "function", "scoped_method", "scope", "method", "scoped_operator",
  "operator", "typecast_op_func", "$@14", "$@15", "op_func", "$@16",
  "op_sig", "$@17", "$@18", "func", "$@19", "pure_virtual", "maybe_const",
  "func_sig", "$@20", "$@21", "@22", "constructor", "$@23",
  "constructor_sig", "$@24", "maybe_initializers", "more_initializers",
  "initializer", "destructor", "destructor_sig", "$@25", "const_mod",
  "static_mod", "any_id", "func_body", "ignore_args_list",
  "ignore_more_args", "args_list", "$@26", "more_args", "$@27", "arg",
  "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "maybe_id",
  "maybe_indirect_id", "maybe_var_assign", "var_assign", "$@35", "var",
  "var_ids", "maybe_indirect_var_ids", "var_id_maybe_assign", "$@36",
  "maybe_var_id", "var_id", "maybe_var_array", "var_array", "$@37",
  "maybe_static_type", "type", "type_red", "type_red1", "$@38",
  "templated_id", "$@39", "$@40", "types", "$@41", "maybe_scoped_id",
  "scoped_id", "class_id", "type_indirection", "$@42", "$@43", "$@44",
  "type_red2", "type_primitive", "$@45", "$@46", "type_integer",
  "optional_scope", "scope_list", "scope_list_item", "scope_type",
  "literal", "$@47", "$@48", "$@49", "$@50", "$@51", "literal2", "macro",
  "$@52", "$@53", "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "$@60",
  "$@61", "$@62", "$@63", "$@64", "$@65", "$@66", "$@67", "$@68", "$@69",
  "$@70", "$@71", "$@72", "$@73", "op_token", "op_token_no_delim",
  "vtk_constant_def", "maybe_other", "maybe_other_no_semi", "other_stuff",
  "other_stuff_no_semi", "braces", "parens", "brackets", 0
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
     365,   366,   367,   368,   369,   370,   371,   372,    59,    40,
      41,   123,   125,    60,    62,    58,    44,    61,    45,    43,
     126,    42,    47,    37,    38,   124,    94,    91,    93,    33,
      46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   141,   142,   143,   142,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   146,   145,   147,   145,   148,   145,   149,
     145,   150,   151,   150,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   154,   155,   153,   157,   158,   156,   159,   159,
     159,   160,   160,   161,   161,   161,   161,   162,   162,   162,
     163,   163,   163,   163,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   167,   168,   169,   171,
     170,   172,   173,   174,   174,   175,   175,   175,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   177,
     178,   179,   180,   179,   181,   182,   181,   183,   183,   184,
     184,   184,   185,   186,   187,   188,   188,   188,   189,   189,
     190,   190,   190,   190,   190,   191,   191,   192,   192,   192,
     194,   195,   193,   197,   196,   196,   199,   200,   198,   202,
     201,   201,   203,   203,   204,   204,   206,   205,   207,   208,
     205,   210,   209,   212,   211,   213,   213,   214,   214,   215,
     216,   218,   217,   219,   220,   220,   221,   221,   221,   221,
     221,   221,   222,   222,   223,   223,   224,   224,   225,   226,
     225,   227,   227,   228,   227,   230,   231,   229,   232,   233,
     229,   229,   234,   229,   235,   236,   229,   237,   237,   238,
     238,   239,   239,   241,   240,   242,   242,   242,   242,   242,
     242,   242,   242,   242,   243,   244,   244,   244,   244,   246,
     245,   247,   247,   248,   249,   249,   251,   250,   250,   252,
     252,   253,   253,   254,   254,   254,   255,   255,   255,   256,
     255,   258,   257,   259,   257,   260,   261,   260,   262,   262,
     262,   262,   263,   263,   264,   264,   264,   264,   264,   264,
     265,   265,   265,   265,   265,   265,   265,   265,   266,   265,
     267,   265,   268,   265,   269,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   270,
     270,   270,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   270,   270,   271,   270,   272,   270,   270,   273,
     273,   273,   273,   273,   273,   273,   274,   274,   275,   275,
     276,   276,   276,   276,   277,   277,   277,   278,   279,   278,
     280,   278,   278,   281,   278,   282,   283,   278,   284,   284,
     284,   284,   284,   284,   286,   285,   287,   288,   289,   285,
     290,   285,   291,   285,   292,   293,   285,   294,   285,   295,
     296,   297,   285,   285,   298,   285,   299,   285,   300,   285,
     301,   285,   302,   285,   303,   285,   304,   285,   305,   285,
     306,   285,   307,   285,   285,   285,   285,   285,   308,   308,
     308,   308,   308,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   310,   311,   311,   312,   312,   313,   313,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   315,   316,   316,   316,   317
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       3,     3,     3,     4,     2,     3,     3,     2,     3,     3,
       4,     2,     3,     3,     3,     4,     2,     1,     1,     2,
       4,     4,     1,     0,     7,     0,    10,     0,     7,     0,
      10,     0,     0,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     3,
       3,     2,     3,     2,     3,     3,     2,     3,     2,     5,
       1,     1,     0,     0,     9,     0,     0,     8,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     7,     6,     3,     0,
       6,     5,     2,     3,     3,     1,     4,     3,     4,     8,
       8,     9,     9,     2,     2,     2,     2,     2,     3,     2,
       2,     3,     0,     5,     1,     0,     4,     2,     2,     1,
       1,     1,     4,     4,     2,     3,     4,     3,     2,     3,
       2,     3,     1,     2,     3,     3,     3,     1,     2,     3,
       0,     0,     8,     0,     3,     2,     0,     0,     7,     0,
       3,     2,     2,     2,     0,     1,     0,     5,     0,     0,
       9,     0,     3,     0,     5,     0,     3,     0,     3,     4,
       1,     0,     5,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     3,     0,     1,     1,     3,     0,     0,
       2,     1,     1,     0,     4,     0,     0,     5,     0,     0,
       5,     1,     0,     5,     0,     0,     9,     0,     1,     1,
       2,     0,     1,     0,     3,     3,     3,     2,     3,     5,
       5,     6,     8,     8,     3,     1,     3,     2,     4,     0,
       3,     0,     1,     2,     0,     1,     0,     3,     4,     1,
       2,     1,     2,     1,     2,     2,     1,     1,     1,     0,
       3,     0,     5,     0,     5,     1,     0,     4,     1,     1,
       1,     1,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     0,     4,
       0,     4,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     3,
       1,     2,     2,     2,     1,     1,     1,     1,     0,     3,
       0,     3,     1,     0,     4,     0,     0,     9,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     0,     0,     9,
       0,     5,     0,     5,     0,     0,    10,     0,     7,     0,
       0,     0,     9,     6,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     9,     0,     9,     4,     4,     6,     7,     2,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,   319,   350,   330,
     351,   352,   354,   355,   331,   329,   349,   333,   332,   317,
     318,    85,     0,    18,   203,     0,   346,   344,     0,     0,
     279,     0,     0,   476,   320,   204,     0,     0,     0,   315,
     316,   353,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   473,    42,     4,    16,     8,     7,    11,
      10,     9,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,   167,     0,     0,     5,     0,   269,   271,   273,
     277,   278,     0,   276,   314,   348,    37,    38,   323,   209,
     208,   324,   210,   211,   474,    47,   321,   322,    43,     0,
       0,   319,     0,     0,   320,     0,     0,   474,   283,   327,
     328,     0,    82,   325,   326,   474,     0,   204,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   142,     0,     0,
       0,     0,   134,   133,   137,   136,   135,     0,   294,   297,
     296,   295,   298,   299,   119,     0,   474,   281,   205,     0,
       0,     0,     0,     0,     0,     6,   247,     0,     0,   386,
     390,   392,     0,     0,   399,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,   212,   474,    36,    27,    31,
      24,    19,   274,   270,   207,   209,   208,     0,   206,     0,
       0,   210,   211,     0,   168,   173,   154,   179,   264,     0,
       0,   259,     0,   302,   301,   300,   272,   275,     0,     0,
      39,     0,     0,   356,     0,   356,   323,   324,   321,   322,
     327,   328,   325,   326,   169,     0,     0,     0,    88,     0,
       0,   474,   170,   347,   345,    28,    32,    25,    20,     0,
     141,     0,   294,   295,     0,   280,     0,     0,   138,   207,
     206,     0,     0,   264,     0,     0,   507,   489,   518,   520,
     519,   511,   496,   502,   498,   499,   500,   501,   492,   491,
     512,   513,   503,   480,   504,   505,   506,   508,   510,   490,
     514,   484,   521,   522,   497,   509,   523,   516,   515,   447,
     448,   474,   474,   449,   450,   451,   452,   453,   454,   460,
     461,   455,   456,   457,   458,   459,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   517,   488,   493,
     494,   118,   474,   474,   441,   442,   486,   440,   433,   436,
     437,   439,   434,   435,   446,   443,   444,   445,   474,   438,
     487,   495,   485,   524,   477,   481,   482,   483,     0,     0,
     248,     2,     0,     0,    29,    33,    26,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    22,     0,   447,   448,     0,     0,   176,
     432,   239,     0,     0,     0,   166,   155,     0,     0,     0,
     184,   175,   184,   181,   266,   186,   188,   476,   263,   265,
     246,   245,     0,   241,   158,   307,   306,   305,   304,   303,
     288,   289,   290,   293,   291,   288,   289,     0,   165,   157,
     191,     0,   292,   478,   476,   475,   479,   285,     0,     0,
       0,     0,     0,    40,     0,     0,    89,    91,    88,   476,
       0,   219,   150,   151,   149,   237,     0,   144,   237,   474,
     474,     0,     0,   128,     2,     0,     0,     0,     0,     0,
      41,     0,     3,    30,   152,   384,     0,     0,     0,   394,
     397,     0,     0,   404,   408,   412,   416,   406,   410,   414,
     418,   420,   422,   424,   425,     0,    35,    23,   213,     0,
       0,   428,   429,     0,     0,   240,     0,   159,   183,   182,
     185,   174,   180,   264,   219,     0,     0,   254,   255,     0,
     243,   260,   242,     0,     0,     0,   156,   200,     0,   195,
     193,     0,   286,    49,     0,     0,     0,   360,   357,   358,
      51,    45,    51,   284,    86,    88,     0,     0,     0,   476,
       0,     0,   238,   148,   143,   145,   147,     0,     0,     0,
       0,     3,   527,   528,   526,   525,   529,   282,   121,     0,
     387,   391,   393,     0,     0,   400,   319,   317,   318,   320,
     315,   316,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   430,   431,   177,     0,   250,   214,
     474,   249,   267,     0,     0,   264,     0,   257,     0,   313,
     311,   309,   201,     0,   192,   219,   115,     0,   356,   363,
     361,   362,     0,    52,   356,    52,   476,    90,   207,    97,
      98,    99,   206,     0,   104,   105,   106,   100,    93,    92,
       0,    94,    96,    95,    83,   117,     0,   171,   231,   221,
     220,   222,   228,     0,     0,     0,   214,   214,   120,     0,
       0,   395,     0,     0,   403,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   426,     0,   219,   251,     0,
     215,   216,     0,   187,     0,   268,   256,     0,   382,   372,
     378,   379,   380,   381,   383,   373,   370,   368,   244,   367,
     219,   197,     0,     0,   287,     0,   359,    48,     0,     0,
      44,     0,     0,   107,   108,   109,   110,   111,   112,   113,
     114,     0,   101,   476,   116,   184,   223,   234,   232,   264,
       0,   146,     0,     0,     0,     0,   385,   388,     0,   398,
     401,   405,   409,   413,   417,   407,   411,   415,   419,     0,
       0,   427,     0,     0,     0,     0,   189,   258,   375,     0,
       0,     0,     0,     0,   196,   474,   194,    51,     0,     0,
     364,   365,   366,     0,   319,   317,   318,    67,     0,     0,
       0,   320,     0,   315,   316,     0,    81,     0,    53,    58,
      57,    61,    60,    59,    62,    66,    64,    63,     0,     0,
       0,     0,     0,     0,   162,    55,     0,     0,    80,    51,
      87,   103,   102,     0,   172,     0,   261,   261,   226,   229,
     130,   129,     0,     0,     0,   476,     0,     0,     0,   178,
     253,   217,   252,   219,     0,     0,   382,   371,   369,   202,
     197,     0,    52,     0,     0,     0,     0,     0,    65,     0,
       0,     0,     0,     0,     0,     0,     0,    56,     0,     0,
     474,   160,    76,    71,   122,   139,   140,    78,    73,    68,
     163,    54,    52,    84,   224,   262,     0,     0,   241,   241,
     131,   132,   389,     0,   402,   421,   423,     0,     0,   374,
     198,   199,    50,   125,   474,   476,   124,   123,   161,   164,
      74,    69,    77,    72,    75,    70,     0,     0,     0,     0,
      46,     0,   233,   227,   230,   396,   190,     0,     0,     0,
       0,   153,     0,   235,   376,     0,   127,    79,   214,     0,
     126,     0,     0,   236,   377
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    75,    76,   245,   654,   243,   648,   653,
     738,   818,    77,   259,   753,    78,   131,   656,   475,   476,
     667,   668,   669,   670,   751,    79,    80,    81,    82,    83,
     285,    84,   825,   826,   926,    85,   828,   829,   485,   271,
     486,   683,   487,   488,    87,   831,    88,    89,   223,   895,
      90,   896,    92,   481,   755,   224,   430,   225,   533,   707,
     226,   432,   431,   541,   227,   544,   545,   863,   834,   559,
     460,   645,   644,   794,   731,   556,   557,   730,    93,    94,
     269,   207,   709,   710,   580,   581,   680,   845,   711,   759,
     908,   760,   909,   847,   846,   958,   583,   422,   551,   552,
     638,    95,   229,   547,   230,   443,   906,   231,   438,   439,
     543,   881,    97,    98,    99,   148,   100,   379,   257,   468,
     647,   462,   101,   126,   423,   555,   554,   553,   103,   104,
     140,   139,   105,   470,   568,   569,   837,   728,   791,   790,
     789,   864,   959,   729,   106,   599,   390,   690,   854,   391,
     392,   603,   768,   604,   395,   693,   856,   613,   617,   614,
     618,   615,   619,   616,   620,   621,   622,   419,   372,   373,
     241,   165,   465,   466,   375,   376,   377
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -811
static const yytype_int16 yypact[] =
{
    -811,    70,  -811,  5221,    50,   273,  5924,   -12,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,   154,
     177,   463,   108,  -811,  -811,  5705,  -811,  -811,  5429,   -40,
    -811,  5797,   630,  -811,    -3,    64,   857,     8,     9,   194,
     197,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,    55,    59,    66,    68,    75,   128,   140,   145,
     149,   157,   168,   178,   179,   183,   184,   187,   212,   215,
     216,   218,   230,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  5337,   156,   156,   156,
     156,   156,  -811,  6016,  5924,  -811,   503,  -811,    19,   285,
     271,  -811,   198,  -811,  -811,  -811,  -811,  -811,   301,  -811,
    -811,   339,  -811,  -811,  -811,   231,   301,   339,   235,    58,
     274,    14,   277,   281,    28,   318,   293,  -811,  -811,   241,
     242,   254,  -811,   241,   242,  -811,   255,   338,   259,   477,
     477,   156,   156,   156,   156,   315,   299,   270,   683,    50,
     273,   288,  -811,  -811,  -811,  -811,  -811,   570,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  3296,  -811,  -811,  -811,   291,
    5114,   156,   156,   156,   156,  -811,  -811,  5705,   689,  -811,
    -811,  -811,   689,   689,  -811,   689,   689,   689,   689,   689,
     689,   689,   689,   689,   689,   689,   689,   689,   689,   754,
    5429,  -811,   156,   156,   568,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,   335,   340,   346,  6094,   347,   114,
     689,   349,   350,   315,  -811,    31,  -811,    31,   107,   302,
     -44,  -811,   353,    48,   158,  -811,  -811,  -811,   760,   313,
    -811,   950,  5924,   314,  5924,   314,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,   760,  1088,  5924,   689,   278,
    1226,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,   -69,
    -811,   269,   319,   321,   271,  -811,   320,   324,  -811,  -811,
    -811,   114,   114,    22,   329,   327,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  1364,  5924,
    -811,  -811,   156,   689,  -811,  -811,  -811,  -811,   336,   337,
     689,   689,   689,   341,   345,   689,   356,   357,   358,   359,
     362,   365,   367,   379,   380,   381,   387,   395,   396,   393,
     156,   156,  -811,  -811,  1502,   383,   384,   397,   328,  -811,
    -811,  -811,   402,   689,   404,  -811,  -811,   392,   514,   515,
     495,  -811,   495,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,   114,   401,  -811,    52,    61,  -811,    97,  -811,
      14,    28,   271,  -811,  -811,     6,    33,   689,  -811,  -811,
    -811,   412,  -811,  -811,  -811,  -811,  -811,   407,   410,   472,
     414,   413,   415,  -811,   416,   419,   417,   423,   689,  -811,
    1640,   422,  -811,  -811,  -811,   689,   420,   426,   689,  -811,
    -811,   433,   436,  -811,  -811,  1778,  1916,  2054,  2192,  2330,
    -811,   435,   442,  -811,  -811,  -811,   437,   445,   446,  -811,
    -811,   450,  6051,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,   689,  -811,  -811,  -811,   429,
     430,  -811,  -811,   452,   134,  -811,   460,  -811,  -811,  -811,
    -811,  -811,  -811,    22,   422,  5924,  3434,  -811,   455,   689,
    -811,  -811,  -811,    19,    19,    19,  -811,  -811,   465,   457,
    -811,  3572,  -811,  -811,   760,   760,   760,  -811,  -811,   461,
    -811,  -811,  -811,  -811,  -811,   689,   282,   467,  3710,  -811,
     482,  5521,  -811,  -811,  -811,  -811,  -811,  2468,  2606,   485,
     486,   484,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  5924,
    -811,  -811,  -811,  6051,  6051,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,   487,  6051,  6051,  6051,  6051,  6051,  6051,  6051,
    6051,  6051,  6051,   137,  -811,  -811,  -811,   492,  -811,  5889,
    -811,  -811,  -811,   493,   491,    22,   114,   496,   441,  -811,
    -811,  -811,  -811,   689,  -811,   422,  -811,  5924,   314,  -811,
    -811,  -811,   472,   506,   314,   507,  -811,  -811,    14,  -811,
    -811,  -811,    28,   282,  -811,  -811,  -811,   502,  -811,  -811,
     282,  -811,   271,  -811,  -811,  -811,  3848,  -811,  -811,  -811,
    -811,   516,   206,   269,   114,   114,  5889,  5889,  -811,   497,
    5924,  -811,   520,  6051,  -811,   523,   524,   525,   529,   540,
     542,   544,   545,   541,   543,  -811,   548,   422,  -811,   550,
    -811,   546,  2744,  -811,   552,  -811,  -811,   114,   551,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
     422,   547,   556,   557,  -811,   558,  -811,  -811,  4538,   564,
    -811,  3986,   567,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,   282,  -811,  -811,  -811,   495,  -811,  -811,  -811,    22,
     689,  -811,   560,   573,   574,   575,  -811,  -811,   562,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,   685,
     688,  -811,   580,   583,  5889,   584,  -811,  -811,  -811,   441,
     391,   391,   585,   689,  -811,  -811,  -811,  -811,    50,   273,
    -811,  -811,  -811,  5022,     6,    81,    88,  -811,  4746,  4654,
    5613,    33,   587,   118,   121,   592,  -811,   689,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,   156,   156,
    4746,   156,   156,   156,  -811,  -811,   565,   578,  -811,  -811,
    -811,  -811,  -811,  4124,  -811,  5521,   689,   689,  -811,  -811,
    -811,  -811,   599,   601,   605,  -811,   606,   607,   608,  -811,
    -811,  -811,  -811,   422,  5924,   610,  -811,  -811,  -811,  -811,
     547,  2882,   609,   200,   200,   689,   568,   754,  -811,   156,
     156,   568,   156,   156,  4838,   156,   156,  -811,   600,  4930,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,   611,  -811,  -811,  -811,   614,   617,   401,   401,
    -811,  -811,  -811,  4262,  -811,  -811,  -811,   619,   620,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  5022,   623,   689,  3020,
    -811,   626,  -811,  -811,  -811,  -811,  -811,   627,  3158,  4400,
     689,  -811,   631,  -811,  -811,   635,  -811,  -811,  5889,   391,
    -811,   634,   636,  -811,  -811
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -811,  -328,  -811,  -811,   671,  -811,  -811,  -811,  -811,  -532,
    -811,  -811,   -20,  -811,  -811,   -17,  -811,  -811,  -431,  -811,
    -811,  -811,  -590,  -811,  -811,   -16,   -15,   -14,    20,  -811,
    -811,  -811,  -811,  -641,  -115,    24,   -45,   -42,     0,  -811,
      85,  -811,  -811,  -811,  -811,  -811,    69,    82,  -811,  -708,
     110,     3,   531,  -811,  -811,  -121,  -811,  -811,  -811,  -811,
    -218,  -811,   555,  -411,  -811,  -811,  -811,  -811,   534,  -811,
    -811,  -811,  -811,   -95,    -8,  -751,  -811,  -811,   678,  -811,
      23,   -81,  -644,    -5,  -503,  -811,   -57,  -811,  -557,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,   303,  -249,  -810,  -811,
    -811,   -34,  -811,  -581,  -404,  -811,   -58,  -139,  -492,  -811,
    -811,    -2,    -6,   -74,   700,  -811,   -90,  -811,  -811,  -209,
    -811,  -219,   -62,    43,   -85,  -811,  -811,  -811,  -232,  -129,
    -811,  -811,    94,  -225,   142,  -811,  -811,    18,  -811,  -811,
    -811,  -811,  -811,  -734,    57,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,
    -811,  -811,  -811,  -811,  -811,  -811,  -811,  -811,   586,   810,
     -98,  -415,  -811,  -153,  -811,  -811,  -811
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -313
static const yytype_int16 yytable[] =
{
     125,    96,   175,    86,   254,   426,    91,   208,   209,   210,
     211,   152,   374,   236,   153,   154,   155,   156,   284,   453,
     472,   542,   546,   138,   681,   157,   145,   115,   118,   256,
     832,   144,   491,   492,    96,   471,   371,   260,   548,   174,
     655,   633,   764,   765,   132,   136,   102,   577,   474,   561,
     435,   632,   233,   502,   436,   716,   867,   868,   274,   108,
     265,   266,   267,   268,   578,   428,   891,   246,   378,  -294,
       2,   146,   434,   742,   441,   164,   109,   110,  -295,   146,
     752,   445,   442,   147,   204,  -312,   275,  -294,   213,   203,
     384,   385,   386,   387,  -310,  -294,   111,   141,   943,   944,
     879,   885,   425,   168,   247,   171,  -294,   127,   414,  -295,
     142,   128,   371,   169,  -295,  -295,   166,   133,   172,   228,
     167,   412,   413,   279,   928,  -207,   176,   371,   177,   128,
    -308,   371,   112,   113,   109,   110,   787,   128,   143,   232,
     109,   110,   733,   715,   657,   637,   173,   233,   452,   452,
     234,   167,  -206,   235,   134,   202,   167,   434,   429,   437,
     280,   842,  -297,   480,   676,   452,   591,   878,   383,  -296,
     501,   114,   276,   277,   178,   383,   454,   454,   179,   446,
     283,   937,   447,  -312,   627,   180,  -312,   181,   232,   894,
     112,   113,  -310,   454,   182,  -310,   112,   113,   204,  -298,
    -209,   389,  -299,   411,   782,   393,   394,  -208,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   115,   495,   496,   962,   435,   792,  -308,   135,
     436,  -308,   548,   263,   264,  -297,   467,  -210,   467,   382,
    -211,   741,   421,   424,   437,   234,   388,   183,   235,   371,
     567,   467,   628,   629,   497,   498,  -225,   705,  -296,   184,
     757,   758,   461,   706,   185,   872,   427,   848,   186,   410,
     499,   630,  -297,   482,   205,  -298,   187,   206,  -299,   239,
     612,   477,   116,   248,   483,   371,   250,   188,   681,   448,
     252,   658,   449,   659,   660,  -296,   661,   189,   190,   109,
     110,   503,   191,   192,   421,   421,   193,   902,   215,   216,
      29,   484,  -298,   548,   961,  -299,   240,    24,   923,   117,
     249,   924,   455,   251,   214,   925,  -225,   253,   662,   526,
     527,   194,  -225,  -225,   195,   196,   634,   197,   843,   215,
     216,   215,   216,  -225,   844,   649,   650,   651,    25,   198,
     217,   371,   238,   217,   242,   112,   113,   549,   244,   456,
     917,   218,  -207,  -206,   221,   222,   371,   371,   371,   371,
     371,   691,   692,   467,   255,   258,   261,   168,   262,   452,
     239,   695,   696,   697,   698,   699,   700,   701,   702,   703,
     704,   587,   588,   374,   270,   221,   222,   221,   222,   478,
     866,   663,   720,   721,   722,   723,   278,   454,   374,   380,
     664,   665,   666,   506,   507,   508,  -294,   371,   511,  -207,
     440,  -297,  -207,   735,  -207,   374,  -207,  -296,  -295,   739,
    -298,  -299,   371,   567,   444,   762,   763,   724,   734,   469,
     913,   489,   128,   457,   167,   490,   535,   493,   494,   371,
     718,   719,   720,   721,   722,   723,   504,  -206,   371,   371,
    -206,   770,  -206,   505,  -206,   283,   532,   509,   639,   640,
     641,   510,   129,   537,   452,   452,   452,   564,   565,   566,
     558,   450,   512,   513,   514,   515,   672,   724,   516,   109,
     110,   517,     8,   518,    10,    11,    12,    13,   159,   160,
      16,   477,   454,   454,   454,   519,   520,   521,   582,   130,
     949,   582,   214,   522,   673,   523,   524,   531,   451,   525,
     529,   530,   534,   374,   536,   538,   539,   540,   550,   215,
     216,   560,   712,   562,   563,   570,   572,   571,   217,   467,
     573,   574,  -218,   575,   584,   112,   113,   371,   623,   218,
     576,   549,   585,   589,   162,   163,   590,   219,   220,   597,
     725,    41,   452,   600,   598,   601,   602,   624,   625,   726,
     727,   626,   283,   672,   279,   682,   605,   279,   631,   279,
     672,   636,   643,   371,   642,   221,   222,   652,   374,   674,
     454,   109,   110,   689,   109,   110,   109,   110,   477,   671,
     217,   673,   677,   217,   686,   687,   688,   694,   673,   279,
     708,   280,   371,   713,   280,   714,   280,   766,   900,   219,
     220,   849,   717,   682,   281,   282,   109,   110,   737,   740,
     743,   744,   549,   745,   746,   747,   748,   749,   750,   158,
     769,   467,   756,   771,   772,   773,   280,   112,   113,   774,
     112,   113,   112,   113,   219,   220,   159,   160,   929,   283,
     775,   672,   776,   900,   777,   778,   732,   779,   781,   780,
     783,   786,   784,   793,   788,   795,   161,   796,   850,   797,
     682,   682,   112,   113,   767,   839,   671,   841,   855,   673,
     374,   851,   272,   671,   852,   853,   857,   871,   279,   858,
     859,   860,   862,   901,   835,   869,   889,   421,   421,   159,
     160,   890,   162,   163,   371,   109,   110,   910,   819,   911,
     900,   820,   821,   822,   823,   912,   914,   915,   916,   273,
     919,   922,   929,   940,   941,   280,   836,   942,   830,   946,
     283,   833,   371,   951,   947,   953,   954,   892,   893,   957,
     897,   898,   899,   960,   963,   254,   964,   201,   824,   927,
     374,   461,   827,   108,   882,   162,   163,   883,   761,   450,
     458,   112,   113,   459,   671,   920,   887,   237,   682,   861,
     109,   110,   433,   283,   371,   870,   159,   160,   904,   907,
     918,   586,   939,   212,   736,   838,   374,   876,   930,   931,
     111,   932,   933,   420,   934,   935,   451,   865,   888,   884,
     371,   880,   886,   107,     0,     0,   732,     0,     0,   371,
     371,   873,   874,     0,     0,     0,   948,     0,     0,     0,
       0,   461,   461,     0,     0,     0,   112,   113,     0,   682,
     558,     0,   162,   163,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   461,     0,     0,     0,     0,     0,   228,
     119,   120,     0,     0,     0,     6,   121,   170,     0,   905,
     905,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   122,   123,   938,     0,    24,
       0,     0,    25,    26,    27,     0,     0,     0,   558,    30,
     873,     0,     0,   124,    35,     0,    37,   461,     0,     0,
       0,   283,   461,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     950,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   682,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    26,    27,     0,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   463,   352,
       0,   353,   464,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,     0,   369,
     370,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,    26,    27,     0,   308,     0,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   463,   352,   473,   353,
       0,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,     0,   369,   370,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,    26,    27,     0,   308,     0,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   463,   352,     0,   353,   479,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,     0,   369,   370,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      26,    27,     0,   308,     0,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,     0,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   463,   352,   500,   353,     0,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,     0,   369,   370,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,    26,    27,
       0,   308,     0,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,     0,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     463,   352,     0,   353,   528,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
       0,   369,   370,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    26,    27,     0,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   463,   352,
       0,   353,   579,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,     0,   369,
     370,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,    26,    27,     0,   308,     0,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   463,   352,   592,   353,
       0,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,     0,   369,   370,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,    26,    27,     0,   308,     0,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   463,   352,   593,   353,     0,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,     0,   369,   370,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      26,    27,     0,   308,     0,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,     0,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   463,   352,   594,   353,     0,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,     0,   369,   370,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,    26,    27,
       0,   308,     0,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,     0,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     463,   352,     0,   353,   595,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
       0,   369,   370,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    26,    27,     0,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   463,   352,
       0,   353,     0,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   596,   369,
     370,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,    26,    27,     0,   308,     0,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   463,   352,     0,   353,
     684,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,     0,   369,   370,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,    26,    27,     0,   308,     0,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   463,   352,     0,   353,   685,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,     0,   369,   370,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      26,    27,     0,   308,     0,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,     0,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   463,   352,     0,   353,     0,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   785,   369,   370,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,    26,    27,
       0,   308,     0,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,     0,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     463,   352,   921,   353,     0,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
       0,   369,   370,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    26,    27,     0,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   463,   352,
     952,   353,     0,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,     0,   369,
     370,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,    26,    27,     0,   308,     0,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   463,   352,     0,   353,
     955,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,     0,   369,   370,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,    26,    27,     0,   308,     0,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   351,   352,     0,   353,     0,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,     0,   369,   370,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      26,    27,     0,   308,     0,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,     0,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,   352,     0,   353,     0,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   635,   369,   370,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,    26,    27,
       0,   308,     0,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,     0,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     646,   352,     0,   353,     0,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
       0,   369,   370,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    26,    27,     0,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   675,   352,
       0,   353,     0,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,     0,   369,
     370,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,    26,    27,     0,   308,     0,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,     0,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   754,   352,     0,   353,
       0,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,     0,   369,   370,   286,
     287,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,    26,    27,     0,   308,     0,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,     0,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   840,   352,     0,   353,     0,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,     0,   369,   370,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
      26,    27,     0,   308,     0,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,     0,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   903,   352,     0,   353,     0,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,     0,   369,   370,   286,   287,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,    26,    27,
       0,   308,     0,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,     0,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,   352,   945,   353,     0,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
       0,   369,   370,   286,   287,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,    26,    27,     0,   308,
       0,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,     0,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   956,   352,
       0,   353,     0,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,     0,   369,
     370,   798,   799,   800,   801,   802,   803,   804,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   805,   806,    21,    22,   807,     0,
      24,     0,     0,    25,    26,    27,   808,   809,   810,    29,
      30,    31,     0,    33,   811,    35,     0,    37,     0,   812,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     813,   814,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,   815,   816,   119,   120,     0,
       0,     0,   803,   804,     0,     0,     0,     0,   817,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     805,   806,   122,   123,     0,     0,    24,     0,     0,    25,
      26,    27,     0,     0,     0,    29,    30,     0,     0,     0,
     811,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   813,   814,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   877,
     799,     0,     0,     0,   803,   804,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   805,   806,   122,   123,     0,     0,    24,     0,
       0,    25,    26,    27,   817,     0,     0,     0,    30,     0,
       0,     0,   811,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   813,   814,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   119,   120,     0,     0,     0,   803,   804,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   805,   806,   122,   123,     0,     0,
      24,     0,     0,    25,    26,    27,   817,     0,     0,     0,
      30,     0,     0,     0,   811,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     813,   814,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   119,   120,     0,     0,     0,   936,   804,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   805,   806,   122,   123,
       0,     0,    24,     0,     0,     0,    26,    27,   817,     0,
       0,     0,    30,     0,     0,     0,   811,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   813,   814,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   119,   120,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     122,   123,     0,     0,    24,     0,     0,     0,    26,    27,
     817,     0,     0,     0,    30,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   119,   120,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   122,   123,     0,     0,    24,     0,     0,     0,
      26,    27,   875,     0,     0,     0,    30,     0,     0,     0,
     124,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     6,
       7,     0,     0,     0,     0,   381,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,    25,    26,    27,     0,
      28,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
     199,     5,     0,     0,     0,     6,   121,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   122,   123,     0,     0,    24,
       0,     0,    25,    26,    27,     0,   200,     0,     0,    30,
       0,     0,     0,   124,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   119,   120,     0,     0,     0,     6,   121,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   122,   123,     0,
       0,    24,     0,     0,    25,    26,    27,     0,     0,     0,
       0,    30,     0,     0,     0,   124,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   119,   120,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   122,
     123,     0,     0,    24,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   124,     0,     0,
     678,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   679,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   119,   120,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   122,   123,     0,     0,    24,     0,     0,     0,    26,
      27,     0,     0,     0,     0,    30,     0,     0,     0,   124,
      35,     0,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   119,   120,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   122,   123,     0,     0,    24,     0,     0,
       0,    26,    27,     0,     0,     0,     0,    30,     0,     0,
       0,   124,   137,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     149,   150,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,    24,
       0,     0,     0,    26,    27,     0,     0,     0,     0,    30,
       0,     0,     0,   124,     0,     0,   151,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   119,   120,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   122,   123,     0,
       0,    24,     0,     0,     0,    26,    27,   119,   120,     0,
       0,    30,     0,   121,     0,   124,     0,     0,   678,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   122,   123,     0,     0,    24,     0,     0,     0,
      26,    27,     0,     0,     0,     0,    30,     0,     0,     0,
     124,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   119,
     120,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   122,   123,     0,     0,     0,     0,
       0,     0,    26,    27,   119,   120,     0,     0,    30,     0,
     606,     0,   124,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   607,   608,   122,
     123,     0,     0,     0,     0,     0,     0,    26,    27,     0,
       0,     0,     0,     0,     0,     0,     0,   609,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   610,   611,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   415,   416,     0,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   417,     0,     0,     0,   354,   355,     0,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   418,     0,   369
};

static const yytype_int16 yycheck[] =
{
       6,     3,    36,     3,   125,   223,     3,    88,    89,    90,
      91,    31,   165,    98,    31,    31,    31,    31,   157,   238,
     245,   432,   437,    25,   581,    31,    28,     4,     5,   127,
     738,    28,   281,   282,    36,   244,   165,   135,   442,    36,
     572,   544,   686,   687,    21,    22,     3,   478,   257,   464,
     119,   543,    33,   381,   123,   636,   790,   791,   148,     9,
     141,   142,   143,   144,   479,    34,   817,     9,   166,    81,
       0,    28,    50,   663,   118,    32,    26,    27,    81,    36,
     670,    33,   126,   123,    86,    33,   148,    81,    94,    86,
     171,   172,   173,   174,    33,    81,    46,    28,   908,   909,
     808,   809,   223,    39,    46,    36,   118,   119,   206,    81,
      28,   123,   241,    49,    81,   118,   119,     9,    36,    96,
     123,   202,   203,     9,   875,   119,   118,   256,   119,   123,
      33,   260,    82,    83,    26,    27,   717,   123,    28,    96,
      26,    27,   645,   635,   575,   549,    36,    33,   238,   239,
     131,   123,   119,   134,    46,    86,   123,    50,   127,   137,
      46,   751,    81,   261,   579,   255,   494,   808,   170,    81,
     379,   121,   149,   150,   119,   177,   238,   239,   119,   131,
     157,   889,   134,   131,    50,   119,   134,   119,   145,   830,
      82,    83,   131,   255,   119,   134,    82,    83,   200,    81,
     119,   178,    81,   200,   707,   182,   183,   119,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   321,   322,   959,   119,   730,   131,   121,
     123,   134,   636,   139,   140,    81,   242,   119,   244,   170,
     119,   656,   219,   220,   137,   131,   177,   119,   134,   378,
     469,   257,   118,   119,   352,   353,    50,   120,    81,   119,
      54,    55,   239,   126,   119,   797,   223,   759,   119,   200,
     368,   137,   118,     4,   118,    81,   119,   121,    81,    81,
     512,   258,     9,     9,    15,   414,     9,   119,   845,   131,
       9,     9,   134,    11,    12,   118,    14,   119,   119,    26,
      27,   382,   119,   119,   281,   282,   119,   839,    26,    27,
      41,    42,   118,   717,   958,   118,   118,    32,   118,    46,
      46,   121,     9,    46,     9,   125,   120,    46,    46,   410,
     411,   119,   126,   127,   119,   119,   545,   119,   753,    26,
      27,    26,    27,   137,   755,   564,   565,   566,    35,   119,
      35,   480,    81,    35,   123,    82,    83,   442,   123,    46,
     863,    46,   121,   121,    82,    83,   495,   496,   497,   498,
     499,   603,   604,   379,    81,   121,   121,    39,   119,   469,
      81,   613,   614,   615,   616,   617,   618,   619,   620,   621,
     622,   489,   490,   546,   124,    82,    83,    82,    83,   121,
       9,   119,    11,    12,    13,    14,   118,   469,   561,   118,
     128,   129,   130,   390,   391,   392,    81,   546,   395,   118,
     118,    81,   121,   648,   123,   578,   125,    81,    81,   654,
      81,    81,   561,   652,    81,   684,   685,    46,   647,   125,
     855,   121,   123,   130,   123,   121,   423,   118,   121,   578,
       9,    10,    11,    12,    13,    14,   120,   118,   587,   588,
     121,   693,   123,   126,   125,   442,   138,   126,   553,   554,
     555,   126,     9,    81,   564,   565,   566,     5,     6,     7,
     457,     9,   126,   126,   126,   126,   576,    46,   126,    26,
      27,   126,    15,   126,    17,    18,    19,    20,    26,    27,
      23,   478,   564,   565,   566,   126,   126,   126,   485,    46,
     925,   488,     9,   126,   576,   120,   120,   120,    46,   126,
     137,   137,   120,   676,   120,    11,    11,    32,   127,    26,
      27,   119,   630,   126,   124,   121,   121,   124,    35,   545,
     124,   122,   120,   126,   124,    82,    83,   676,   525,    46,
     127,   636,   126,   120,    82,    83,   120,    54,    55,   124,
     119,    84,   652,   126,   122,   120,   120,   138,   138,   128,
     129,   119,   549,   663,     9,   581,   126,     9,   118,     9,
     670,   126,   125,   712,   119,    82,    83,   126,   741,   122,
     652,    26,    27,   599,    26,    27,    26,    27,   575,   576,
      35,   663,   120,    35,   119,   119,   122,   120,   670,     9,
     118,    46,   741,   120,    46,   124,    46,   120,   836,    54,
      55,   760,   126,   629,    54,    55,    26,    27,   122,   122,
     128,   129,   717,   131,   132,   133,   134,   135,   136,     9,
     120,   647,   126,   120,   120,   120,    46,    82,    83,   120,
      82,    83,    82,    83,    54,    55,    26,    27,   876,   636,
     120,   751,   120,   881,   120,   120,   643,   126,   120,   126,
     120,   119,   126,   126,   123,   119,    46,   120,   118,   121,
     686,   687,    82,    83,   690,   121,   663,   120,   126,   751,
     843,   118,     9,   670,   120,   120,    11,   795,     9,    11,
     120,   118,   118,   125,   738,   120,   119,   684,   685,    26,
      27,   119,    82,    83,   843,    26,    27,   118,   738,   118,
     938,   738,   738,   738,   738,   120,   120,   120,   120,    46,
     120,   122,   950,   122,   120,    46,   738,   120,   738,   120,
     717,   738,   871,   120,   124,   119,   119,   828,   829,   118,
     831,   832,   833,   118,   120,   876,   120,    86,   738,   874,
     913,   738,   738,     9,   809,    82,    83,   809,   683,     9,
     239,    82,    83,   239,   751,   870,   810,    99,   784,   784,
      26,    27,   227,   760,   913,   793,    26,    27,   845,   847,
     864,   488,   890,    93,   652,   738,   949,   803,   879,   880,
      46,   882,   883,   217,   885,   886,    46,   789,   810,   809,
     939,   808,   809,     3,    -1,    -1,   793,    -1,    -1,   948,
     949,   798,   799,    -1,    -1,    -1,   924,    -1,    -1,    -1,
      -1,   808,   809,    -1,    -1,    -1,    82,    83,    -1,   845,
     817,    -1,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   830,    -1,    -1,    -1,    -1,    -1,   836,
       3,     4,    -1,    -1,    -1,     8,     9,    10,    -1,   846,
     847,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   889,    -1,    32,
      -1,    -1,    35,    36,    37,    -1,    -1,    -1,   875,    42,
     877,    -1,    -1,    46,    47,    -1,    49,   884,    -1,    -1,
      -1,   888,   889,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     936,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,   958,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,   120,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
      -1,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
     120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,    -1,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,    -1,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
      -1,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,    -1,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,    -1,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
      -1,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
      -1,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,   117,   118,     3,     4,    -1,
      -1,    -1,     8,     9,    -1,    -1,    -1,    -1,   130,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    37,   130,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    37,   130,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    32,    -1,    -1,    -1,    36,    37,   130,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,
     130,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,     3,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    37,   130,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,   121,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    35,    36,    37,    -1,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
       3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    37,    -1,    39,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    -1,    -1,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     3,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    -1,    -1,    -1,    36,    37,     3,     4,    -1,
      -1,    42,    -1,     9,    -1,    46,    -1,    -1,    49,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     3,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,     3,     4,    -1,    -1,    42,    -1,
       9,    -1,    46,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    52,    53,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,    -1,    -1,   123,   124,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   142,     0,   143,     3,     4,     8,     9,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    32,    35,    36,    37,    39,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    51,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   118,   144,   145,   153,   156,   166,
     167,   168,   169,   170,   172,   176,   179,   185,   187,   188,
     191,   192,   193,   219,   220,   242,   252,   253,   254,   255,
     257,   263,   264,   269,   270,   273,   285,   310,     9,    26,
      27,    46,    82,    83,   121,   221,     9,    46,   221,     3,
       4,     9,    28,    29,    46,   253,   264,   119,   123,     9,
      46,   157,   221,     9,    46,   121,   221,    47,   252,   272,
     271,   187,   188,   191,   192,   252,   264,   123,   256,     3,
       4,    49,   153,   156,   166,   167,   168,   253,     9,    26,
      27,    46,    82,    83,   264,   312,   119,   123,    39,    49,
      10,   187,   188,   191,   192,   242,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,     3,
      39,   145,   187,   192,   252,   118,   121,   222,   222,   222,
     222,   222,   255,   253,     9,    26,    27,    35,    46,    54,
      55,    82,    83,   189,   196,   198,   201,   205,   221,   243,
     245,   248,   264,    33,   131,   134,   265,   219,    81,    81,
     118,   311,   123,   148,   123,   146,     9,    46,     9,    46,
       9,    46,     9,    46,   196,    81,   311,   259,   121,   154,
     311,   121,   119,   273,   273,   222,   222,   222,   222,   221,
     124,   180,     9,    46,   257,   263,   221,   221,   118,     9,
      46,    54,    55,   221,   248,   171,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    39,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,   118,   119,   121,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   139,
     140,   270,   309,   310,   314,   315,   316,   317,   311,   258,
     118,   121,   187,   252,   222,   222,   222,   222,   187,   221,
     287,   290,   291,   221,   221,   295,   221,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     187,   192,   222,   222,   311,    52,    53,   119,   137,   308,
     309,   221,   238,   265,   221,   196,   201,   264,    34,   127,
     197,   203,   202,   203,    50,   119,   123,   137,   249,   250,
     118,   118,   126,   246,    81,    33,   131,   134,   131,   134,
       9,    46,   257,   262,   263,     9,    46,   130,   193,   209,
     211,   221,   262,   118,   122,   313,   314,   253,   260,   125,
     274,   260,   274,   120,   260,   159,   160,   221,   121,   122,
     311,   194,     4,    15,    42,   179,   181,   183,   184,   121,
     121,   238,   238,   118,   121,   311,   311,   311,   311,   311,
     120,   260,   142,   222,   120,   126,   221,   221,   221,   126,
     126,   221,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   120,   120,   126,   222,   222,   122,   137,
     137,   120,   138,   199,   120,   221,   120,    81,    11,    11,
      32,   204,   204,   251,   206,   207,   312,   244,   245,   265,
     127,   239,   240,   268,   267,   266,   216,   217,   221,   210,
     119,   312,   126,   124,     5,     6,     7,   262,   275,   276,
     121,   124,   121,   124,   122,   126,   127,   159,   312,   122,
     225,   226,   221,   237,   124,   126,   237,   311,   311,   120,
     120,   142,   120,   120,   120,   122,   138,   124,   122,   286,
     126,   120,   120,   292,   294,   126,     9,    26,    27,    46,
      82,    83,   269,   298,   300,   302,   304,   299,   301,   303,
     305,   306,   307,   221,   138,   138,   119,    50,   118,   119,
     137,   118,   249,   225,   260,   138,   126,   245,   241,   265,
     265,   265,   119,   125,   213,   212,   118,   261,   149,   262,
     262,   262,   126,   150,   147,   150,   158,   159,     9,    11,
      12,    14,    46,   119,   128,   129,   130,   161,   162,   163,
     164,   221,   257,   263,   122,   118,   312,   120,    49,    80,
     227,   229,   253,   182,   122,   122,   119,   119,   122,   253,
     288,   269,   269,   296,   120,   269,   269,   269,   269,   269,
     269,   269,   269,   269,   269,   120,   126,   200,   118,   223,
     224,   229,   311,   120,   124,   249,   244,   126,     9,    10,
      11,    12,    13,    14,    46,   119,   128,   129,   278,   284,
     218,   215,   221,   225,   260,   274,   275,   122,   151,   274,
     122,   312,   163,   128,   129,   131,   132,   133,   134,   135,
     136,   165,   163,   155,   118,   195,   126,    54,    55,   230,
     232,   181,   238,   238,   223,   223,   120,   253,   293,   120,
     269,   120,   120,   120,   120,   120,   120,   120,   120,   126,
     126,   120,   225,   120,   126,   138,   119,   244,   123,   281,
     280,   279,   225,   126,   214,   119,   120,   121,     3,     4,
       5,     6,     7,     8,     9,    26,    27,    30,    38,    39,
      40,    46,    51,    82,    83,   117,   118,   130,   152,   153,
     156,   166,   167,   168,   169,   173,   174,   176,   177,   178,
     179,   186,   190,   192,   209,   242,   252,   277,   285,   121,
     118,   120,   163,   312,   204,   228,   235,   234,   249,   248,
     118,   118,   120,   120,   289,   126,   297,    11,    11,   120,
     118,   224,   118,   208,   282,   278,     9,   284,   284,   120,
     215,   311,   150,   221,   221,   130,   253,     3,   174,   190,
     192,   252,   177,   178,   179,   190,   192,   242,   252,   119,
     119,   216,   222,   222,   174,   190,   192,   222,   222,   222,
     201,   125,   150,   118,   227,   221,   247,   247,   231,   233,
     118,   118,   120,   312,   120,   120,   120,   225,   254,   120,
     214,   120,   122,   118,   121,   125,   175,   175,   216,   201,
     222,   222,   222,   222,   222,   222,     8,   190,   252,   311,
     122,   120,   120,   239,   239,   120,   120,   124,   311,   312,
     253,   120,   120,   119,   119,   122,   118,   118,   236,   283,
     118,   223,   284,   120,   120
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
#line 642 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 661 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 662 "vtkParse.y"
    { output_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 663 "vtkParse.y"
    { output_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 664 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 665 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    { reject_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 667 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 668 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 669 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 670 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 671 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 672 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 673 "vtkParse.y"
    { reject_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 674 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 675 "vtkParse.y"
    { output_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 676 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 684 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
    { end_class(); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 686 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 687 "vtkParse.y"
    { end_class(); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 689 "vtkParse.y"
    { end_class(); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 690 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    { end_class(); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 693 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    { output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    { output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    { output_function(); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 715 "vtkParse.y"
    { output_function(); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 716 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
    { output_function(); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 719 "vtkParse.y"
    { output_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 720 "vtkParse.y"
    { output_function(); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 721 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 732 "vtkParse.y"
    {start_enum((yyvsp[(2) - (2)].str));}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 733 "vtkParse.y"
    {end_enum();}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 735 "vtkParse.y"
    {start_enum(NULL);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 736 "vtkParse.y"
    {end_enum();}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 740 "vtkParse.y"
    {add_enum((yyvsp[(1) - (1)].str), NULL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 741 "vtkParse.y"
    {add_enum((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 749 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 762 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 768 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 783 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 784 "vtkParse.y"
    { popNamespace(); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 815 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 816 "vtkParse.y"
    { postSig("template<"); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 817 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 820 "vtkParse.y"
    { postSig(", "); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 825 "vtkParse.y"
    { postSig("class "); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 826 "vtkParse.y"
    { postSig("int "); }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 833 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 844 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 846 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 852 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 856 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 869 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 873 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 877 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 887 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 891 "vtkParse.y"
    { postSig(")"); }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 892 "vtkParse.y"
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

  case 173:

/* Line 1455 of yacc.c  */
#line 906 "vtkParse.y"
    { postSig(")"); }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 907 "vtkParse.y"
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

  case 175:

/* Line 1455 of yacc.c  */
#line 918 "vtkParse.y"
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

  case 176:

/* Line 1455 of yacc.c  */
#line 934 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 935 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 940 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 942 "vtkParse.y"
    { postSig(")"); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 943 "vtkParse.y"
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

  case 181:

/* Line 1455 of yacc.c  */
#line 954 "vtkParse.y"
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

  case 182:

/* Line 1455 of yacc.c  */
#line 970 "vtkParse.y"
    {postSig(") = 0");}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 971 "vtkParse.y"
    {postSig(") const = 0");}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 973 "vtkParse.y"
    {postSig(" const");}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 976 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 979 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 980 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 981 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 988 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 990 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 991 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1000 "vtkParse.y"
    { postSig("("); }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1009 "vtkParse.y"
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

  case 201:

/* Line 1455 of yacc.c  */
#line 1022 "vtkParse.y"
    { postSig("(");}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1024 "vtkParse.y"
    {postSig("const ");}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1026 "vtkParse.y"
    {postSig("static ");}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1027 "vtkParse.y"
    {postSig("static ");}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1029 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1030 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1032 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1033 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1034 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1042 "vtkParse.y"
    {clearTypeId();}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1044 "vtkParse.y"
    { postSig("...");}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1046 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1048 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1051 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1052 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(3) - (3)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(3) - (3)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (3)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1063 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1070 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1071 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(3) - (3)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(3) - (3)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (3)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1082 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1090 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1097 "vtkParse.y"
    { postSig("(&"); clearVarName(); }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1099 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(") ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = ((yyvsp[(1) - (5)].integer) | VTK_PARSE_REF);
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1110 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*");
      clearVarName(); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1112 "vtkParse.y"
    { postSig(")("); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1113 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(")");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_UNKNOWN;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1131 "vtkParse.y"
    { postSig("="); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1131 "vtkParse.y"
    { setVarValue((yyvsp[(3) - (3)].str)); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1134 "vtkParse.y"
    {
        int type = ((yyvsp[(1) - (3)].integer) | (yyvsp[(2) - (3)].integer));
        if (getVarValue() && ((type & VTK_PARSE_CONST) != 0) &&
            ((type & VTK_PARSE_INDIRECT) == 0))
          {
          add_constant(getVarName(), getVarValue(),
                       (type & VTK_PARSE_UNQUALIFIED_TYPE), getTypeId(), 0);
          }
        }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1162 "vtkParse.y"
    {clearVarValue();}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1162 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(1) - (3)].integer); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1165 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1167 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(2) - (2)].integer); setVarName((yyvsp[(1) - (2)].str));}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1176 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1176 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1179 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1181 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1186 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1190 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1191 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1193 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1194 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1196 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1197 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1198 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1202 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1204 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1205 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1206 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1209 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1210 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1211 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1212 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1214 "vtkParse.y"
    {postSig(", ");}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1216 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1217 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1218 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1219 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1222 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1228 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1234 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1235 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1237 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1238 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1252 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1254 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1255 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1256 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1258 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1260 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1262 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1263 "vtkParse.y"
    { postSig("**"); }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1264 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1267 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1268 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1272 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1273 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1274 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1275 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1276 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1277 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1278 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1279 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1281 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1282 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1287 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1288 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1289 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1292 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1293 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1295 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1296 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1297 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1298 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1299 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1300 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1301 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1302 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1302 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1303 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1304 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1305 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1308 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1309 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1310 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1311 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1313 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1314 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1324 "vtkParse.y"
    {
      vtkParse_AddItemMacro(currentClass, SuperClasses, vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1328 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1329 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1330 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1332 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1333 "vtkParse.y"
    {postSig("+");}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1333 "vtkParse.y"
    {(yyval.str) = (yyvsp[(3) - (3)].str);}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    {postSig("-");}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (3)].str))+2);
             sprintf((yyval.str), "-%s", (yyvsp[(3) - (3)].str)); }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1337 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1338 "vtkParse.y"
    {postSig("(");}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1338 "vtkParse.y"
    {postSig(")"); (yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1339 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1340 "vtkParse.y"
    {postSig("<(");}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    {
            postSig(")");
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (9)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(8) - (9)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (9)].str), getTypeId(), (yyvsp[(8) - (9)].str));
            }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1348 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1349 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1350 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1351 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1352 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1354 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1358 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1359 "vtkParse.y"
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

  case 386:

/* Line 1455 of yacc.c  */
#line 1373 "vtkParse.y"
    {postSig("Get");}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1374 "vtkParse.y"
    {markSig();}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1374 "vtkParse.y"
    {swapSig();}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1375 "vtkParse.y"
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

  case 390:

/* Line 1455 of yacc.c  */
#line 1387 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1388 "vtkParse.y"
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

  case 392:

/* Line 1455 of yacc.c  */
#line 1402 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1403 "vtkParse.y"
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

  case 394:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    {closeSig();}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1418 "vtkParse.y"
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

  case 397:

/* Line 1455 of yacc.c  */
#line 1463 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1464 "vtkParse.y"
    {
   postSig("*);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 1;
   output_function();
   }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1478 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1479 "vtkParse.y"
    {markSig();}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1479 "vtkParse.y"
    {swapSig();}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1480 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1493 "vtkParse.y"
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

  case 404:

/* Line 1455 of yacc.c  */
#line 1518 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1519 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1523 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1524 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1528 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1529 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1533 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1534 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1538 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1539 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1543 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1544 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1548 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1549 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1553 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1554 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1558 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1560 "vtkParse.y"
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

  case 422:

/* Line 1455 of yacc.c  */
#line 1579 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1581 "vtkParse.y"
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

  case 424:

/* Line 1455 of yacc.c  */
#line 1601 "vtkParse.y"
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
     currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
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

  case 425:

/* Line 1455 of yacc.c  */
#line 1667 "vtkParse.y"
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
     currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
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

  case 426:

/* Line 1455 of yacc.c  */
#line 1737 "vtkParse.y"
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
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
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
     currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (6)].str));
     output_function();
     }
   }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1804 "vtkParse.y"
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
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
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
     currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC|VTK_PARSE_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (7)].str));
     output_function();
     }
   }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1877 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1878 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1879 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1880 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1883 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1884 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1884 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1885 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1885 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1886 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1886 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1887 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1887 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1888 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1888 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1889 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1889 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1890 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1891 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1892 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1893 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1894 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1895 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1896 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1897 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1898 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1899 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1900 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1901 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1902 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1903 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1904 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1905 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1906 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1907 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1908 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1909 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1910 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1911 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1912 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1913 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1914 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1915 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 1916 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 1923 "vtkParse.y"
    {
  static char name[256];
  static char value[256];
  int i = 0;
  char *cp = (yyvsp[(1) - (1)].str);
  while ((*cp >= 'a' && *cp <= 'z') ||
         (*cp >= 'A' && *cp <= 'Z') ||
         (*cp >= '0' && *cp <= '9') ||
         *cp == '_') { name[i++] = *cp++; }
  name[i] = '\0';
  while (*cp == ' ' || *cp == '\t') { cp++; }
  strcpy(value, cp);
  i = strlen(value);
  while (i > 0 && (value[i-1] == '\n' || value[i-1] == '\r' ||
                   value[i-1] == '\t' || value[i-1] == ' ')) { i--; }
  value[i] = '\0';
  add_constant(name, value, 0, NULL, 1);
  }
    break;



/* Line 1455 of yacc.c  */
#line 7085 "vtkParse.tab.c"
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
#line 1965 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  int i;

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

  for (i = 0; i < MAX_ARGS; i++)
    {
    func->ArgTypes[i] = 0;
    func->ArgClasses[i] = 0;
    func->ArgCounts[i] = 0;
    func->ArgNames[i] = 0;
    func->ArgValues[i] = 0;
    }
}

/* initialize the structure */
void InitConstant(ConstantInfo *con)
{
  con->Name = NULL;
  con->Value = NULL;
  con->Type = 0;
  con->TypeClass = NULL;
  con->IsEnum = 0;
}

/* initialize the structure */
void InitClass(ClassInfo *cls)
{
  cls->ClassName = NULL;
  cls->IsAbstract = 0;
  cls->HasDelete = 0;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfFunctions = 0;
  cls->NumberOfConstants = 0;
}

/* initialize the structure */
void InitFile(FileInfo *file_info)
{
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;

  /* namespace info */
  file_info->Name = NULL;
  file_info->NumberOfClasses = 0;
  file_info->NumberOfFunctions = 0;
  file_info->NumberOfConstants = 0;
  file_info->NumberOfNamespaces = 0;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  InitClass(currentClass);
  currentClass->ClassName = vtkstrdup(classname);
  vtkParse_AddItemMacro(currentNamespace, Classes, currentClass);

  in_public = 0;
  in_protected = 0;
  if (is_struct)
    {
    in_public = 1;
    }

  InitFunction(currentFunction);
}

/* reached the end of a class definition */
void end_class()
{
  currentClass = NULL;
}

/* start a new enum */
void start_enum(const char *name)
{
  static char text[256];
  currentEnumName = NULL;
  currentEnumValue = NULL;
  if (name)
    {
    currentEnumName = text;
    strcpy(currentEnumName, name);
    }
}

/* finish the enum */
void end_enum()
{
  currentEnumName = NULL;
  currentEnumValue = NULL;
}

/* add a constant to the enum */
void add_enum(const char *name, const char *value)
{
  static char text[256];
  int i, j;

  if (value)
    {
    currentEnumValue = text;
    strcpy(currentEnumValue, value);
    }
  else if (currentEnumValue)
    {
    i = strlen(currentEnumValue);
    while (i > 0 && currentEnumValue[i-1] >= '0' &&
           currentEnumValue[i-1] <= '9') { i--; }

    if (i == 0 || currentEnumValue[i-1] == ' ' ||
        (i > 1 && currentEnumValue[i-2] == ' ' &&
         (currentEnumValue[i-1] == '-' || currentEnumValue[i-1] == '+')))
      {
      if (i > 0 && currentEnumValue[i-1] != ' ')
        {
        i--;
        }
      j = atol(&currentEnumValue[i]);
      sprintf(&currentEnumValue[i], "%i", j+1);
      }
    else
      {
      i = strlen(currentEnumValue);
      strcpy(&currentEnumValue[i], " + 1");
      }
    }
  else
    {
    currentEnumValue = text;
    strcpy(currentEnumValue, "0");
    }

  add_constant(name, currentEnumValue, VTK_PARSE_INT, currentEnumName, 2);
}

/* add a constant to the current class or namespace */
void add_constant(const char *name, const char *value,
                  int type, const char *typeclass, int flag)
{
  ConstantInfo *con = (ConstantInfo *)malloc(sizeof(ConstantInfo));
  InitConstant(con);
  con->Name = vtkstrdup(name);
  con->Value = vtkstrdup(value);
  con->Type = type;
  if (typeclass)
    {
    con->TypeClass = vtkstrdup(typeclass);
    }
  if (flag == 2)
    {
    con->IsEnum = 1;
    }

  if (flag == 1)
    {
    vtkParse_AddItemMacro(&data, Constants, con);
    }
  else if (currentClass)
    {
    vtkParse_AddItemMacro(currentClass, Constants, con);
    }
  else
    {
    vtkParse_AddItemMacro(currentNamespace, Constants, con);
    }
}

/* if the name is a const in this namespace, the scope it */
const char *add_const_scope(const char *name)
{
  static char text[256];
  FileInfo *scope = currentNamespace;
  int i, j;
  int addscope = 0;

  strcpy(text, name);

  if (currentClass)
    {
    for (j = 0; j < currentClass->NumberOfConstants; j++)
      {
      if (strcmp(currentClass->Constants[j]->Name, text) == 0)
        {
        prepend_scope(text, currentClass->ClassName);
        addscope = 1;
        }
      }
    }
  i = namespaceDepth;
  while (scope && scope->Name)
    {
    if (addscope)
      {
      prepend_scope(text, scope->Name);
      }
    else
      {
      for (j = 0; j < scope->NumberOfConstants; j++)
        {
        if (strcmp(scope->Constants[j]->Name, text) == 0)
          {
          prepend_scope(text, scope->Name);
          addscope = 1;
          }
        }
      }

    scope = 0;
    if (i > 0)
      {
      scope = namespaceStack[--i];
      }
    }

  return text;
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

    vtkParse_AddItemMacro(currentClass, Functions, currentFunction);

    currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    }
  else
    {
    /* make sure this function isn't a repeat */
    match = 0;
    for (i = 0; i < currentNamespace->NumberOfFunctions; i++)
      {
      if (currentNamespace->Functions[i]->Name &&
          strcmp(currentNamespace->Functions[i]->Name,
                 currentFunction->Name) == 0)
        {
        if (currentNamespace->Functions[i]->NumberOfArguments ==
            currentFunction->NumberOfArguments)
          {
          for (j = 0; j < currentFunction->NumberOfArguments; j++)
            {
            if (currentNamespace->Functions[i]->ArgTypes[j] ==
                currentFunction->ArgTypes[j])
              {
              if (currentFunction->ArgTypes[j] == VTK_PARSE_OBJECT &&
                  strcmp(currentNamespace->Functions[i]->ArgClasses[j],
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
      vtkParse_AddItemMacro(currentNamespace, Functions, currentFunction);

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
void vtkParse_AddPointerToArray(void *valueArray, int *count, void *value)
{
  void **newvalues = 0;
  void **values = *(void ***)valueArray;
  int n = *count;
  int i;

  /* if empty, alloc for the first time */
  if (n == 0)
    {
    values = (void **)malloc(1*sizeof(void*));
    }
  /* if count is power of two, reallocate with double size */
  else if ((n & (n-1)) == 0)
    {
    newvalues = (void **)malloc((n << 1)*sizeof(void*));

    for (i = 0; i < n; i++)
      {
      newvalues[i] = values[i];
      }

    free(values);
    values = newvalues;
    }

  values[n++] = value;
  *count = n;
  *(void ***)valueArray = values;
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
  namespaceDepth = 0;
  currentNamespace = &data;
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
  strncpy(main_class, &currentNamespace->FileName[i], j-i);
  main_class[j-i] = '\0';

  /* move the main class to the first position */
  for (i = 0; i < currentNamespace->NumberOfClasses; i++)
    {
    if (strcmp(currentNamespace->Classes[i]->ClassName, main_class) == 0)
      {
      ClassInfo *temp = currentNamespace->Classes[i];
      for (j = i; j > 0; j--)
        {
        currentNamespace->Classes[j] = currentNamespace->Classes[j-1];
        }
      currentNamespace->Classes[0] = temp;
      /* override "IsAbstract" with the "IsConcrete" set by CMake */
      currentNamespace->Classes[0]->IsAbstract = !is_concrete;
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
  ConstantInfo *const_info;

  n = file_info->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    class_info = file_info->Classes[i];

    m = class_info->NumberOfSuperClasses;
    if (m > 0)
      {
      free(class_info->SuperClasses);
      }

    m = class_info->NumberOfFunctions;
    for (j = 0; j < m; j++)
      {
      func_info = class_info->Functions[j];
      free(func_info);
      }
    if (m > 0)
      {
      free(class_info->Functions);
      }

    m = class_info->NumberOfConstants;
    for (j = 0; j < m; j++)
      {
      const_info = class_info->Constants[j];
      free(const_info);
      }
    if (m > 0)
      {
      free(class_info->Constants);
      }

    free(class_info);
    }

  m = file_info->NumberOfFunctions;
  for (j = 0; j < m; j++)
    {
    func_info = file_info->Functions[j];
    free(func_info);
    }
  if (m > 0)
    {
    free(file_info->Functions);
    }

  m = file_info->NumberOfConstants;
  for (j = 0; j < m; j++)
    {
    const_info = file_info->Constants[j];
    free(const_info);
    }
  if (m > 0)
    {
    free(file_info->Constants);
    }

  m = file_info->NumberOfNamespaces;
  for (i = 0; i < m; i++)
    {
    vtkParse_Free(file_info->Namespaces[i]);
    }

  free(file_info);
}

