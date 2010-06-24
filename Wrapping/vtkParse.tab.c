
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
TemplateArgs *templateStack[10];
int templateDepth = 0;
TemplateArgs *currentTemplate = NULL;

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
void reject_class(const char *classname, int is_struct);
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
void InitTemplate(TemplateArgs *arg);

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
    currentNamespace->ItemType = VTK_NAMESPACE_INFO;
    vtkParse_AddItemMacro(oldNamespace, Namespaces, currentNamespace);
    }

  namespaceStack[namespaceDepth++] = oldNamespace;
}

/* leave the namespace */
void popNamespace()
{
  currentNamespace = namespaceStack[--namespaceDepth];
}

/* begin a template */
void startTemplate()
{
  currentTemplate = (TemplateArgs *)malloc(sizeof(TemplateArgs));
  InitTemplate(currentTemplate);
}

/* clear a template, if set */
void clearTemplate()
{
  if (currentTemplate)
    {
    free(currentTemplate);
    }
  currentTemplate = NULL;
}

/* push the template onto the stack, and start a new one */
void pushTemplate()
{
  templateStack[templateDepth++] = currentTemplate;
  startTemplate();
}

/* pop a template off the stack */
void popTemplate()
{
  currentTemplate = templateStack[--templateDepth];
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
#line 605 "vtkParse.tab.c"

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
     OCT_LITERAL = 268,
     FLOAT_LITERAL = 269,
     CHAR_LITERAL = 270,
     INT = 271,
     FLOAT = 272,
     SHORT = 273,
     LONG = 274,
     LONG_LONG = 275,
     INT64__ = 276,
     DOUBLE = 277,
     VOID = 278,
     CHAR = 279,
     SIGNED_CHAR = 280,
     BOOL = 281,
     OSTREAM = 282,
     ISTREAM = 283,
     ENUM = 284,
     UNION = 285,
     CLASS_REF = 286,
     OTHER = 287,
     CONST = 288,
     CONST_PTR = 289,
     CONST_EQUAL = 290,
     OPERATOR = 291,
     UNSIGNED = 292,
     SIGNED = 293,
     FRIEND = 294,
     INLINE = 295,
     MUTABLE = 296,
     TEMPLATE = 297,
     TYPENAME = 298,
     TYPEDEF = 299,
     NAMESPACE = 300,
     USING = 301,
     VTK_ID = 302,
     STATIC = 303,
     EXTERN = 304,
     VAR_FUNCTION = 305,
     ARRAY_NUM = 306,
     VTK_LEGACY = 307,
     NEW = 308,
     DELETE = 309,
     LPAREN_POINTER = 310,
     LPAREN_AMPERSAND = 311,
     OP_LSHIFT_EQ = 312,
     OP_RSHIFT_EQ = 313,
     OP_LSHIFT = 314,
     OP_RSHIFT = 315,
     OP_ARROW_POINTER = 316,
     OP_ARROW = 317,
     OP_INCR = 318,
     OP_DECR = 319,
     OP_PLUS_EQ = 320,
     OP_MINUS_EQ = 321,
     OP_TIMES_EQ = 322,
     OP_DIVIDE_EQ = 323,
     OP_REMAINDER_EQ = 324,
     OP_AND_EQ = 325,
     OP_OR_EQ = 326,
     OP_XOR_EQ = 327,
     OP_LOGIC_AND_EQ = 328,
     OP_LOGIC_OR_EQ = 329,
     OP_LOGIC_AND = 330,
     OP_LOGIC_OR = 331,
     OP_LOGIC_EQ = 332,
     OP_LOGIC_NEQ = 333,
     OP_LOGIC_LEQ = 334,
     OP_LOGIC_GEQ = 335,
     ELLIPSIS = 336,
     DOUBLE_COLON = 337,
     StdString = 338,
     UnicodeString = 339,
     IdType = 340,
     TypeInt8 = 341,
     TypeUInt8 = 342,
     TypeInt16 = 343,
     TypeUInt16 = 344,
     TypeInt32 = 345,
     TypeUInt32 = 346,
     TypeInt64 = 347,
     TypeUInt64 = 348,
     TypeFloat32 = 349,
     TypeFloat64 = 350,
     SetMacro = 351,
     GetMacro = 352,
     SetStringMacro = 353,
     GetStringMacro = 354,
     SetClampMacro = 355,
     SetObjectMacro = 356,
     GetObjectMacro = 357,
     BooleanMacro = 358,
     SetVector2Macro = 359,
     SetVector3Macro = 360,
     SetVector4Macro = 361,
     SetVector6Macro = 362,
     GetVector2Macro = 363,
     GetVector3Macro = 364,
     GetVector4Macro = 365,
     GetVector6Macro = 366,
     SetVectorMacro = 367,
     GetVectorMacro = 368,
     ViewportCoordinateMacro = 369,
     WorldCoordinateMacro = 370,
     TypeMacro = 371,
     VTK_CONSTANT_DEF = 372,
     VTK_BYTE_SWAP_DECL = 373
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 546 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 884 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 896 "vtkParse.tab.c"

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
#define YYLAST   6569

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  143
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  179
/* YYNRULES -- Number of rules.  */
#define YYNRULES  535
/* YYNRULES -- Number of states.  */
#define YYNSTATES  974

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   373

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   141,     2,     2,     2,   135,   136,     2,
     120,   121,   133,   131,   127,   130,   142,   134,   129,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   126,   119,
     124,   128,   125,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   139,     2,   140,   138,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   122,   137,   123,   132,     2,     2,     2,
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
     115,   116,   117,   118
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
     214,   218,   222,   227,   230,   234,   238,   242,   247,   250,
     256,   258,   260,   261,   262,   272,   273,   274,   283,   284,
     286,   290,   292,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   314,   316,   319,   323,   327,   329,   331,   333,
     335,   337,   339,   341,   343,   345,   347,   349,   356,   364,
     371,   375,   376,   383,   388,   394,   397,   401,   405,   407,
     412,   416,   421,   430,   439,   449,   459,   462,   465,   468,
     471,   474,   478,   482,   483,   489,   491,   492,   497,   500,
     503,   504,   508,   510,   512,   513,   514,   518,   523,   528,
     531,   535,   540,   544,   547,   551,   554,   558,   560,   563,
     567,   571,   575,   577,   580,   584,   585,   586,   595,   596,
     600,   601,   602,   610,   611,   615,   616,   619,   622,   624,
     625,   631,   632,   633,   643,   644,   648,   649,   655,   656,
     660,   661,   665,   670,   672,   673,   679,   681,   683,   686,
     688,   690,   692,   694,   696,   698,   700,   704,   705,   707,
     709,   713,   714,   715,   718,   720,   722,   723,   728,   729,
     730,   736,   737,   738,   744,   746,   747,   753,   754,   755,
     765,   767,   770,   771,   773,   774,   778,   782,   786,   789,
     793,   799,   805,   812,   821,   830,   834,   836,   840,   843,
     848,   849,   853,   854,   856,   859,   860,   862,   863,   867,
     872,   874,   877,   879,   882,   884,   887,   890,   892,   894,
     896,   897,   901,   902,   908,   909,   915,   917,   918,   923,
     925,   927,   929,   931,   935,   939,   941,   943,   945,   947,
     949,   951,   953,   955,   957,   960,   963,   966,   969,   972,
     973,   978,   979,   984,   985,   990,   992,   995,   998,  1001,
    1004,  1007,  1010,  1012,  1014,  1016,  1018,  1020,  1022,  1024,
    1026,  1028,  1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,
    1046,  1048,  1050,  1052,  1054,  1056,  1057,  1061,  1062,  1066,
    1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1083,  1086,
    1088,  1092,  1094,  1097,  1100,  1103,  1105,  1107,  1109,  1111,
    1112,  1116,  1117,  1121,  1123,  1124,  1129,  1130,  1131,  1141,
    1143,  1146,  1148,  1150,  1152,  1154,  1156,  1158,  1160,  1161,
    1169,  1170,  1171,  1172,  1182,  1183,  1189,  1190,  1196,  1197,
    1198,  1209,  1210,  1218,  1219,  1220,  1221,  1231,  1238,  1239,
    1247,  1248,  1256,  1257,  1265,  1266,  1274,  1275,  1283,  1284,
    1292,  1293,  1301,  1302,  1310,  1311,  1321,  1322,  1332,  1337,
    1342,  1349,  1357,  1360,  1363,  1367,  1371,  1373,  1375,  1377,
    1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,
    1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,  1417,
    1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,
    1439,  1441,  1443,  1445,  1447,  1449,  1451,  1453,  1455,  1456,
    1459,  1460,  1463,  1465,  1467,  1469,  1471,  1473,  1475,  1477,
    1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,  1495,  1497,
    1499,  1501,  1503,  1505,  1507,  1509,  1511,  1513,  1515,  1517,
    1519,  1521,  1523,  1525,  1527,  1529,  1531,  1533,  1535,  1537,
    1539,  1541,  1543,  1545,  1547,  1549,  1551,  1553,  1555,  1557,
    1559,  1561,  1565,  1569,  1573,  1577
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     144,     0,    -1,    -1,    -1,   144,   145,   146,    -1,   243,
      -1,    49,   243,    -1,   158,    -1,   155,    -1,   170,    -1,
     169,    -1,   168,    -1,   171,    -1,   172,    -1,   174,    -1,
     178,    -1,   147,    -1,   179,   147,    -1,    31,    -1,   195,
     224,    -1,    40,   195,   224,    -1,    49,   195,   224,    -1,
     179,   195,   224,    -1,   179,    40,   195,   224,    -1,   194,
     224,    -1,    40,   194,   224,    -1,    49,   194,   224,    -1,
     190,   224,    -1,    40,   190,   224,    -1,    49,   190,   224,
      -1,    49,    10,   190,   224,    -1,   191,   224,    -1,    40,
     191,   224,    -1,    49,   191,   224,    -1,   179,   190,   224,
      -1,   179,    40,   190,   224,    -1,   188,   224,    -1,   289,
      -1,   314,    -1,   265,   119,    -1,     9,   120,   315,   121,
      -1,    47,   120,   315,   121,    -1,   119,    -1,    -1,     4,
     223,   148,   277,   122,   152,   123,    -1,    -1,     4,   223,
     124,   261,   125,   149,   277,   122,   152,   123,    -1,    -1,
       3,   223,   150,   277,   122,   152,   123,    -1,    -1,     3,
     223,   124,   261,   125,   151,   277,   122,   152,   123,    -1,
      -1,    -1,   152,   153,   154,    -1,   280,   126,    -1,   243,
      -1,    41,   243,    -1,   158,    -1,   155,    -1,   170,    -1,
     169,    -1,   168,    -1,   171,    -1,   178,    -1,   176,    -1,
      39,   176,    -1,   175,    -1,    31,    -1,   195,   224,    -1,
      39,   195,   224,    -1,    40,   195,   224,    -1,   179,   195,
     224,    -1,   179,    40,   195,   224,    -1,   193,   224,    -1,
      39,   193,   224,    -1,    40,   193,   224,    -1,   179,   193,
     224,    -1,   179,    40,   193,   224,    -1,   189,   224,    -1,
     118,   120,   315,   121,   119,    -1,   289,    -1,   119,    -1,
      -1,    -1,    29,   223,   156,   122,   161,   123,   157,   316,
     119,    -1,    -1,    -1,    29,   159,   122,   161,   123,   160,
     316,   119,    -1,    -1,   162,    -1,   162,   127,   161,    -1,
     223,    -1,   223,   128,   165,    -1,   164,    -1,   223,    -1,
     264,    -1,   258,    -1,   129,    -1,    11,    -1,    13,    -1,
      12,    -1,    15,    -1,   163,    -1,   166,   165,    -1,   163,
     167,   165,    -1,   120,   165,   121,    -1,   130,    -1,   131,
      -1,   132,    -1,   130,    -1,   131,    -1,   133,    -1,   134,
      -1,   135,    -1,   136,    -1,   137,    -1,   138,    -1,     3,
     122,   315,   123,   316,   119,    -1,    30,   223,   122,   315,
     123,   316,   119,    -1,    30,   122,   315,   123,   316,   119,
      -1,    46,   316,   119,    -1,    -1,    45,   265,   173,   122,
     144,   123,    -1,    45,   122,   315,   123,    -1,    49,    10,
     122,   144,   123,    -1,   179,   176,    -1,     4,   223,   177,
      -1,     3,   223,   177,    -1,   119,    -1,   122,   315,   123,
     119,    -1,   126,   316,   119,    -1,    44,   254,   249,   119,
      -1,    44,     4,   223,   122,   315,   123,   239,   119,    -1,
      44,     3,   223,   122,   315,   123,   239,   119,    -1,    44,
     254,    55,   239,   121,   120,   225,   121,   119,    -1,    44,
     254,    56,   239,   121,   120,   225,   121,   119,    -1,    44,
     158,    -1,    44,   155,    -1,    44,   170,    -1,    44,   169,
      -1,    44,   168,    -1,    44,    50,   119,    -1,    42,   124,
     125,    -1,    -1,    42,   124,   180,   181,   125,    -1,   183,
      -1,    -1,   183,   127,   182,   181,    -1,   271,   186,    -1,
     185,   186,    -1,    -1,   184,   179,   186,    -1,     4,    -1,
      43,    -1,    -1,    -1,   223,   187,   240,    -1,    52,   120,
     190,   121,    -1,    52,   120,   193,   121,    -1,   253,   204,
      -1,   253,   192,   204,    -1,   265,    82,   132,   218,    -1,
     265,    82,   211,    -1,   265,    82,    -1,   192,   265,    82,
      -1,   132,   218,    -1,     8,   132,   218,    -1,   211,    -1,
     253,   204,    -1,     8,   254,   204,    -1,   265,    82,   196,
      -1,   253,   192,   199,    -1,   196,    -1,   253,   199,    -1,
       8,   254,   199,    -1,    -1,    -1,    36,   253,   120,   197,
     227,   121,   198,   206,    -1,    -1,   201,   200,   206,    -1,
      -1,    -1,    36,   312,   202,   120,   203,   227,   121,    -1,
      -1,   207,   205,   206,    -1,    -1,   128,   129,    -1,    35,
     129,    -1,    33,    -1,    -1,   223,   120,   208,   227,   121,
      -1,    -1,    -1,   223,   124,   209,   261,   125,   120,   210,
     227,   121,    -1,    -1,   213,   212,   215,    -1,    -1,   223,
     120,   214,   227,   121,    -1,    -1,   126,   217,   216,    -1,
      -1,   127,   217,   216,    -1,   223,   120,   315,   121,    -1,
     219,    -1,    -1,   223,   120,   220,   227,   121,    -1,    33,
      -1,    48,    -1,    48,    40,    -1,    47,    -1,     9,    -1,
      28,    -1,    27,    -1,    83,    -1,    84,    -1,   119,    -1,
     122,   315,   123,    -1,    -1,   226,    -1,   231,    -1,   231,
     127,   226,    -1,    -1,    -1,   228,   229,    -1,    81,    -1,
     231,    -1,    -1,   231,   127,   230,   229,    -1,    -1,    -1,
     254,   232,   250,   233,   240,    -1,    -1,    -1,   254,   234,
     249,   235,   240,    -1,    50,    -1,    -1,   254,    56,   236,
     248,   121,    -1,    -1,    -1,   254,    55,   237,   248,   121,
     120,   238,   225,   121,    -1,   223,    -1,   266,   223,    -1,
      -1,   241,    -1,    -1,   128,   242,   281,    -1,   253,   246,
     119,    -1,   253,   244,   119,    -1,    50,   119,    -1,    48,
      50,   119,    -1,   253,    56,   223,   121,   119,    -1,   253,
      55,   239,   121,   119,    -1,   253,    55,   239,   121,    51,
     119,    -1,   253,    55,   239,   121,   139,   315,   140,   119,
      -1,   253,    55,   239,   121,   120,   225,   121,   119,    -1,
     246,   127,   245,    -1,   246,    -1,   246,   127,   245,    -1,
     266,   246,    -1,   266,   246,   127,   245,    -1,    -1,   249,
     247,   240,    -1,    -1,   223,    -1,   223,   250,    -1,    -1,
     251,    -1,    -1,    51,   252,   250,    -1,   139,   316,   140,
     250,    -1,   254,    -1,   222,   254,    -1,   255,    -1,   255,
     266,    -1,   256,    -1,   221,   256,    -1,   256,   221,    -1,
     270,    -1,   258,    -1,   264,    -1,    -1,    43,   257,   263,
      -1,    -1,    47,   124,   259,   261,   125,    -1,    -1,     9,
     124,   260,   261,   125,    -1,   254,    -1,    -1,   254,   127,
     262,   261,    -1,     9,    -1,    47,    -1,   258,    -1,   264,
      -1,   265,    82,   263,    -1,   258,    82,   263,    -1,     9,
      -1,    47,    -1,    28,    -1,    27,    -1,    83,    -1,    84,
      -1,   136,    -1,   133,    -1,    34,    -1,   133,   136,    -1,
     133,   133,    -1,    34,   136,    -1,    34,   133,    -1,    34,
      34,    -1,    -1,   133,   133,   267,   266,    -1,    -1,    34,
     133,   268,   266,    -1,    -1,    34,    34,   269,   266,    -1,
     271,    -1,     4,   272,    -1,     3,   272,    -1,    30,     9,
      -1,    30,    47,    -1,    29,     9,    -1,    29,    47,    -1,
     273,    -1,   272,    -1,    83,    -1,    84,    -1,    27,    -1,
      28,    -1,     9,    -1,    47,    -1,    23,    -1,    17,    -1,
      22,    -1,    26,    -1,    25,    -1,    86,    -1,    87,    -1,
      88,    -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,
      93,    -1,    94,    -1,    95,    -1,    -1,    38,   274,   276,
      -1,    -1,    37,   275,   276,    -1,   276,    -1,    24,    -1,
      16,    -1,    18,    -1,    19,    -1,    85,    -1,    20,    -1,
      21,    -1,    -1,   126,   278,    -1,   279,    -1,   279,   127,
     278,    -1,   263,    -1,     6,   263,    -1,     7,   263,    -1,
       5,   263,    -1,     5,    -1,     6,    -1,     7,    -1,   288,
      -1,    -1,   131,   282,   288,    -1,    -1,   130,   283,   288,
      -1,   287,    -1,    -1,   120,   284,   281,   121,    -1,    -1,
      -1,     9,   124,   285,   255,   125,   120,   286,   288,   121,
      -1,    10,    -1,   287,    10,    -1,   129,    -1,    11,    -1,
      12,    -1,    14,    -1,    15,    -1,     9,    -1,    47,    -1,
      -1,    96,   120,   223,   127,   290,   254,   121,    -1,    -1,
      -1,    -1,    97,   120,   291,   223,   127,   292,   254,   293,
     121,    -1,    -1,    98,   120,   294,   223,   121,    -1,    -1,
      99,   120,   295,   223,   121,    -1,    -1,    -1,   100,   120,
     223,   127,   296,   270,   297,   127,   316,   121,    -1,    -1,
     101,   120,   223,   127,   298,   270,   121,    -1,    -1,    -1,
      -1,   102,   120,   299,   223,   127,   300,   270,   301,   121,
      -1,   103,   120,   223,   127,   270,   121,    -1,    -1,   104,
     120,   223,   127,   302,   270,   121,    -1,    -1,   108,   120,
     223,   127,   303,   270,   121,    -1,    -1,   105,   120,   223,
     127,   304,   270,   121,    -1,    -1,   109,   120,   223,   127,
     305,   270,   121,    -1,    -1,   106,   120,   223,   127,   306,
     270,   121,    -1,    -1,   110,   120,   223,   127,   307,   270,
     121,    -1,    -1,   107,   120,   223,   127,   308,   270,   121,
      -1,    -1,   111,   120,   223,   127,   309,   270,   121,    -1,
      -1,   112,   120,   223,   127,   310,   270,   127,    11,   121,
      -1,    -1,   113,   120,   223,   127,   311,   270,   127,    11,
     121,    -1,   114,   120,   223,   121,    -1,   115,   120,   223,
     121,    -1,   116,   120,   223,   127,   223,   121,    -1,   116,
     120,   223,   127,   223,   127,   121,    -1,   120,   121,    -1,
     139,   140,    -1,    53,   139,   140,    -1,    54,   139,   140,
      -1,   313,    -1,   128,    -1,   133,    -1,   134,    -1,   130,
      -1,   131,    -1,   141,    -1,   132,    -1,   127,    -1,   124,
      -1,   125,    -1,   136,    -1,   137,    -1,   138,    -1,   135,
      -1,    53,    -1,    54,    -1,    57,    -1,    58,    -1,    59,
      -1,    60,    -1,    61,    -1,    62,    -1,    65,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    63,    -1,    64,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    79,
      -1,    80,    -1,   117,    -1,    -1,   315,   317,    -1,    -1,
     316,   318,    -1,   119,    -1,   318,    -1,    32,    -1,   319,
      -1,   320,    -1,   321,    -1,    44,    -1,   313,    -1,   129,
      -1,   126,    -1,   142,    -1,    82,    -1,     4,    -1,    42,
      -1,    28,    -1,    27,    -1,    83,    -1,    84,    -1,   273,
      -1,    13,    -1,    11,    -1,    12,    -1,    14,    -1,    15,
      -1,    10,    -1,    31,    -1,    33,    -1,    34,    -1,    35,
      -1,     3,    -1,    36,    -1,    48,    -1,    40,    -1,     8,
      -1,    29,    -1,    30,    -1,    43,    -1,    51,    -1,    50,
      -1,    81,    -1,     5,    -1,     7,    -1,     6,    -1,    45,
      -1,    46,    -1,    49,    -1,     9,    -1,    47,    -1,   314,
      -1,   122,   315,   123,    -1,   120,   315,   121,    -1,    55,
     315,   121,    -1,    56,   315,   121,    -1,   139,   315,   140,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   679,   679,   679,   679,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   694,   695,   696,
     697,   698,   699,   700,   701,   702,   703,   704,   705,   706,
     707,   708,   709,   710,   711,   712,   713,   714,   715,   716,
     717,   718,   719,   721,   721,   723,   723,   725,   725,   727,
     727,   730,   730,   730,   733,   734,   735,   736,   737,   738,
     739,   740,   741,   742,   743,   744,   745,   746,   747,   748,
     750,   751,   752,   753,   754,   756,   757,   758,   759,   760,
     761,   762,   770,   771,   770,   773,   774,   773,   776,   776,
     776,   778,   779,   783,   783,   783,   783,   785,   785,   785,
     785,   785,   787,   788,   793,   799,   805,   805,   806,   808,
     808,   809,   809,   810,   810,   811,   811,   813,   815,   817,
     819,   821,   821,   823,   825,   827,   829,   830,   832,   833,
     834,   836,   837,   838,   839,   841,   843,   844,   845,   846,
     847,   848,   850,   851,   851,   855,   856,   856,   860,   868,
     874,   874,   885,   886,   888,   888,   888,   891,   893,   895,
     900,   901,   902,   904,   905,   907,   908,   913,   914,   918,
     927,   928,   931,   935,   939,   950,   954,   949,   969,   969,
     981,   982,   981,   989,   989,  1001,  1002,  1011,  1021,  1028,
    1027,  1032,  1033,  1032,  1042,  1042,  1052,  1052,  1054,  1054,
    1056,  1056,  1058,  1060,  1074,  1074,  1076,  1078,  1079,  1081,
    1082,  1083,  1084,  1085,  1086,  1088,  1088,  1090,  1090,  1092,
    1092,  1094,  1094,  1094,  1096,  1097,  1100,  1099,  1103,  1104,
    1103,  1122,  1123,  1122,  1141,  1149,  1149,  1162,  1164,  1162,
    1177,  1177,  1179,  1179,  1181,  1181,  1183,  1193,  1194,  1195,
    1196,  1197,  1198,  1199,  1201,  1204,  1206,  1207,  1208,  1209,
    1212,  1212,  1215,  1215,  1217,  1226,  1226,  1229,  1229,  1235,
    1240,  1241,  1243,  1244,  1246,  1247,  1248,  1250,  1251,  1253,
    1255,  1255,  1259,  1259,  1261,  1261,  1264,  1264,  1264,  1266,
    1267,  1268,  1269,  1271,  1277,  1284,  1285,  1286,  1287,  1288,
    1289,  1302,  1303,  1304,  1305,  1306,  1307,  1309,  1311,  1313,
    1313,  1315,  1315,  1317,  1317,  1321,  1322,  1323,  1324,  1325,
    1326,  1327,  1330,  1331,  1334,  1335,  1336,  1337,  1338,  1339,
    1342,  1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,
    1352,  1353,  1354,  1355,  1356,  1357,  1357,  1358,  1358,  1360,
    1363,  1364,  1365,  1366,  1367,  1368,  1369,  1371,  1371,  1373,
    1373,  1375,  1376,  1377,  1378,  1385,  1386,  1387,  1389,  1390,
    1390,  1391,  1391,  1394,  1395,  1395,  1396,  1397,  1396,  1405,
    1406,  1413,  1414,  1415,  1416,  1417,  1418,  1420,  1424,  1424,
    1439,  1440,  1440,  1439,  1453,  1453,  1468,  1468,  1482,  1482,
    1482,  1529,  1528,  1544,  1545,  1545,  1544,  1558,  1584,  1584,
    1589,  1589,  1594,  1594,  1599,  1599,  1604,  1604,  1609,  1609,
    1614,  1614,  1619,  1619,  1624,  1624,  1645,  1645,  1666,  1732,
    1802,  1869,  1943,  1944,  1945,  1946,  1947,  1949,  1950,  1950,
    1951,  1951,  1952,  1952,  1953,  1953,  1954,  1954,  1955,  1955,
    1956,  1957,  1958,  1959,  1960,  1961,  1962,  1963,  1964,  1965,
    1966,  1967,  1968,  1969,  1970,  1971,  1972,  1973,  1974,  1975,
    1976,  1977,  1978,  1979,  1980,  1981,  1982,  1988,  2011,  2011,
    2012,  2012,  2014,  2014,  2016,  2016,  2016,  2016,  2016,  2017,
    2017,  2017,  2017,  2017,  2017,  2017,  2018,  2018,  2018,  2018,
    2018,  2019,  2019,  2019,  2019,  2019,  2020,  2020,  2020,  2020,
    2020,  2020,  2021,  2021,  2021,  2021,  2021,  2021,  2021,  2022,
    2022,  2022,  2022,  2022,  2022,  2023,  2023,  2023,  2023,  2023,
    2023,  2025,  2026,  2027,  2028,  2029
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRUCT", "CLASS", "PUBLIC", "PRIVATE",
  "PROTECTED", "VIRTUAL", "ID", "STRING_LITERAL", "INT_LITERAL",
  "HEX_LITERAL", "OCT_LITERAL", "FLOAT_LITERAL", "CHAR_LITERAL", "INT",
  "FLOAT", "SHORT", "LONG", "LONG_LONG", "INT64__", "DOUBLE", "VOID",
  "CHAR", "SIGNED_CHAR", "BOOL", "OSTREAM", "ISTREAM", "ENUM", "UNION",
  "CLASS_REF", "OTHER", "CONST", "CONST_PTR", "CONST_EQUAL", "OPERATOR",
  "UNSIGNED", "SIGNED", "FRIEND", "INLINE", "MUTABLE", "TEMPLATE",
  "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "VTK_ID", "STATIC",
  "EXTERN", "VAR_FUNCTION", "ARRAY_NUM", "VTK_LEGACY", "NEW", "DELETE",
  "LPAREN_POINTER", "LPAREN_AMPERSAND", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ",
  "OP_LSHIFT", "OP_RSHIFT", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR",
  "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
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
  "'}'", "'<'", "'>'", "':'", "','", "'='", "'0'", "'-'", "'+'", "'~'",
  "'*'", "'/'", "'%'", "'&'", "'|'", "'^'", "'['", "']'", "'!'", "'.'",
  "$accept", "strt", "$@1", "file_item", "class_def", "$@2", "$@3", "$@4",
  "$@5", "class_def_body", "$@6", "class_def_item", "named_enum", "$@7",
  "$@8", "anonymous_enum", "$@9", "$@10", "enum_list", "enum_item",
  "enum_value", "enum_literal", "enum_math", "math_unary_op",
  "math_binary_op", "anonymous_struct", "named_union", "anonymous_union",
  "using", "namespace", "$@11", "extern", "template_internal_class",
  "internal_class", "internal_class_body", "typedef", "template", "$@12",
  "template_args", "$@13", "template_arg", "$@14", "class_or_typename",
  "maybe_template_id", "$@15", "legacy_function", "legacy_method",
  "function", "scoped_method", "scope", "method", "scoped_operator",
  "operator", "typecast_op_func", "$@16", "$@17", "op_func", "$@18",
  "op_sig", "$@19", "$@20", "func", "$@21", "func_trailer", "func_sig",
  "$@22", "$@23", "@24", "constructor", "$@25", "constructor_sig", "$@26",
  "maybe_initializers", "more_initializers", "initializer", "destructor",
  "destructor_sig", "$@27", "const_mod", "static_mod", "any_id",
  "func_body", "ignore_args_list", "ignore_more_args", "args_list", "$@28",
  "more_args", "$@29", "arg", "$@30", "$@31", "$@32", "$@33", "$@34",
  "$@35", "$@36", "maybe_indirect_id", "maybe_var_assign", "var_assign",
  "$@37", "var", "var_ids", "maybe_indirect_var_ids",
  "var_id_maybe_assign", "$@38", "maybe_var_id", "var_id",
  "maybe_var_array", "var_array", "$@39", "maybe_static_type", "type",
  "type_red", "type_red1", "$@40", "templated_id", "$@41", "$@42", "types",
  "$@43", "maybe_scoped_id", "scoped_id", "class_id", "type_indirection",
  "$@44", "$@45", "$@46", "type_red2", "type_simple", "type_id",
  "type_primitive", "$@47", "$@48", "type_integer", "optional_scope",
  "scope_list", "scope_list_item", "scope_type", "literal", "$@49", "$@50",
  "$@51", "$@52", "$@53", "string_literal", "literal2", "macro", "$@54",
  "$@55", "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63",
  "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72",
  "$@73", "$@74", "$@75", "op_token", "op_token_no_delim",
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,    59,
      40,    41,   123,   125,    60,    62,    58,    44,    61,    48,
      45,    43,   126,    42,    47,    37,    38,   124,    94,    91,
      93,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   143,   144,   145,   144,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   148,   147,   149,   147,   150,   147,   151,
     147,   152,   153,   152,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,   154,   156,   157,   155,   159,   160,   158,   161,   161,
     161,   162,   162,   163,   163,   163,   163,   164,   164,   164,
     164,   164,   165,   165,   165,   165,   166,   166,   166,   167,
     167,   167,   167,   167,   167,   167,   167,   168,   169,   170,
     171,   173,   172,   172,   174,   175,   176,   176,   177,   177,
     177,   178,   178,   178,   178,   178,   178,   178,   178,   178,
     178,   178,   179,   180,   179,   181,   182,   181,   183,   183,
     184,   183,   185,   185,   186,   187,   186,   188,   189,   190,
     191,   191,   191,   192,   192,   193,   193,   193,   193,   193,
     194,   194,   195,   195,   195,   197,   198,   196,   200,   199,
     202,   203,   201,   205,   204,   206,   206,   206,   206,   208,
     207,   209,   210,   207,   212,   211,   214,   213,   215,   215,
     216,   216,   217,   218,   220,   219,   221,   222,   222,   223,
     223,   223,   223,   223,   223,   224,   224,   225,   225,   226,
     226,   227,   228,   227,   229,   229,   230,   229,   232,   233,
     231,   234,   235,   231,   231,   236,   231,   237,   238,   231,
     239,   239,   240,   240,   242,   241,   243,   243,   243,   243,
     243,   243,   243,   243,   243,   244,   245,   245,   245,   245,
     247,   246,   248,   248,   249,   250,   250,   252,   251,   251,
     253,   253,   254,   254,   255,   255,   255,   256,   256,   256,
     257,   256,   259,   258,   260,   258,   261,   262,   261,   263,
     263,   263,   263,   264,   264,   265,   265,   265,   265,   265,
     265,   266,   266,   266,   266,   266,   266,   266,   266,   267,
     266,   268,   266,   269,   266,   270,   270,   270,   270,   270,
     270,   270,   271,   271,   272,   272,   272,   272,   272,   272,
     273,   273,   273,   273,   273,   273,   273,   273,   273,   273,
     273,   273,   273,   273,   273,   274,   273,   275,   273,   273,
     276,   276,   276,   276,   276,   276,   276,   277,   277,   278,
     278,   279,   279,   279,   279,   280,   280,   280,   281,   282,
     281,   283,   281,   281,   284,   281,   285,   286,   281,   287,
     287,   288,   288,   288,   288,   288,   288,   288,   290,   289,
     291,   292,   293,   289,   294,   289,   295,   289,   296,   297,
     289,   298,   289,   299,   300,   301,   289,   289,   302,   289,
     303,   289,   304,   289,   305,   289,   306,   289,   307,   289,
     308,   289,   309,   289,   310,   289,   311,   289,   289,   289,
     289,   289,   312,   312,   312,   312,   312,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   313,   313,   313,
     313,   313,   313,   313,   313,   313,   313,   314,   315,   315,
     316,   316,   317,   317,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   318,   318,
     318,   319,   320,   320,   320,   321
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
       3,     3,     4,     2,     3,     3,     3,     4,     2,     5,
       1,     1,     0,     0,     9,     0,     0,     8,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     6,     7,     6,
       3,     0,     6,     4,     5,     2,     3,     3,     1,     4,
       3,     4,     8,     8,     9,     9,     2,     2,     2,     2,
       2,     3,     3,     0,     5,     1,     0,     4,     2,     2,
       0,     3,     1,     1,     0,     0,     3,     4,     4,     2,
       3,     4,     3,     2,     3,     2,     3,     1,     2,     3,
       3,     3,     1,     2,     3,     0,     0,     8,     0,     3,
       0,     0,     7,     0,     3,     0,     2,     2,     1,     0,
       5,     0,     0,     9,     0,     3,     0,     5,     0,     3,
       0,     3,     4,     1,     0,     5,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       3,     0,     0,     2,     1,     1,     0,     4,     0,     0,
       5,     0,     0,     5,     1,     0,     5,     0,     0,     9,
       1,     2,     0,     1,     0,     3,     3,     3,     2,     3,
       5,     5,     6,     8,     8,     3,     1,     3,     2,     4,
       0,     3,     0,     1,     2,     0,     1,     0,     3,     4,
       1,     2,     1,     2,     1,     2,     2,     1,     1,     1,
       0,     3,     0,     5,     0,     5,     1,     0,     4,     1,
       1,     1,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     0,
       4,     0,     4,     0,     4,     1,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       3,     1,     2,     2,     2,     1,     1,     1,     1,     0,
       3,     0,     3,     1,     0,     4,     0,     0,     9,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     0,     7,
       0,     0,     0,     9,     0,     5,     0,     5,     0,     0,
      10,     0,     7,     0,     0,     0,     9,     6,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     9,     0,     9,     4,     4,
       6,     7,     2,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,   328,   351,   331,
     352,   353,   355,   356,   332,   330,   350,   334,   333,   326,
     327,    85,     0,    18,   206,     0,   347,   345,     0,     0,
     280,     0,     0,   480,   329,   207,     0,     0,     0,   324,
     325,   354,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   477,    42,     4,    16,     8,     7,    11,
      10,     9,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,   172,     0,     0,     5,     0,   270,   272,   274,
     278,   279,     0,   277,   315,   323,   322,   349,    37,    38,
     328,   326,   327,   329,   324,   325,   478,    47,   317,    43,
     316,     0,     0,   328,     0,     0,   329,     0,     0,   478,
     284,   320,   212,   211,   321,   213,   214,     0,    82,   318,
     319,   478,     0,   207,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   143,     0,     0,     0,     0,   137,   136,
     140,   139,   138,     0,   295,   298,   297,   296,   299,   300,
     478,   121,     0,   478,   282,   208,     0,     0,     0,     0,
       0,     0,     6,   248,     0,     0,   390,   394,   396,     0,
       0,   403,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,   215,   478,    36,    27,    31,    24,    19,   275,
     271,   210,   212,   211,     0,   209,     0,     0,   213,   214,
       0,   173,   178,   159,   183,   265,     0,     0,   260,     0,
     303,   302,   301,   273,   276,     0,     0,    39,     0,     0,
     357,     0,   357,   328,   326,   327,   329,   324,   325,   320,
     321,   318,   319,   174,     0,     0,     0,    88,     0,     0,
     478,   175,   348,   346,    28,    32,    25,    20,     0,   142,
     150,   289,   290,   291,   281,   292,     0,     0,   141,   210,
     209,     0,     0,   265,     0,     0,     0,   511,   494,   522,
     524,   523,   515,   528,   506,   502,   503,   501,   504,   505,
     497,   496,   516,   517,   507,   484,   508,   509,   510,   512,
     514,   495,   518,   488,   525,   526,   529,   513,   527,   520,
     519,   451,   452,   478,   478,   453,   454,   455,   456,   457,
     458,   464,   465,   459,   460,   461,   462,   463,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   521,
     493,   498,   499,   120,   478,   478,   445,   446,   491,   444,
     437,   490,   440,   441,   443,   438,   439,   450,   447,   448,
     449,   478,   442,   492,   500,   489,   530,   481,   485,   486,
     487,     0,     0,   249,     2,     0,     0,    29,    33,    26,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    34,    22,     0,   451,   452,
       0,     0,   180,   436,   240,     0,     0,     0,   171,   160,
       0,   185,   185,   267,   189,   191,   480,   264,   266,   247,
     246,     0,   242,   163,   308,   307,   306,   305,   304,   294,
     289,   290,     0,   170,   162,   194,     0,   293,   482,   480,
     479,   483,   286,     0,     0,     0,     0,     0,    40,     0,
       0,    89,    91,    88,   480,     0,   222,   152,   153,     0,
     145,     0,   154,   154,   478,   478,     0,     0,   131,   123,
       2,     0,     0,     0,     0,     0,    41,     0,     3,    30,
     157,   388,     0,     0,     0,   398,   401,     0,     0,   408,
     412,   416,   420,   410,   414,   418,   422,   424,   426,   428,
     429,     0,    35,    23,   216,     0,     0,   432,   433,     0,
       0,   241,     0,   164,   188,     0,     0,   179,   184,   265,
     222,     0,     0,   255,   256,     0,   244,   261,   243,     0,
       0,     0,   161,   203,     0,   198,   196,     0,   287,    49,
       0,     0,     0,   361,   358,   359,    51,    45,    51,   285,
      86,    88,     0,     0,     0,   480,     0,     0,   144,   146,
     154,   149,   155,   148,     0,     0,     0,     0,     3,   533,
     534,   532,   531,   535,   283,   124,     0,   391,   395,   397,
       0,     0,   404,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   434,   435,   181,     0,   251,
     217,   478,   250,   187,   186,   268,     0,     0,   265,     0,
     258,     0,   314,   312,   310,   204,     0,   195,   222,   117,
       0,   357,   364,   362,   363,     0,    52,   357,    52,   480,
      90,   210,    98,   100,    99,   101,   209,     0,    97,   106,
     107,   108,   102,    93,    92,     0,    94,    96,    95,    83,
     119,     0,   176,   234,   224,   223,   225,   231,   150,   151,
     242,     0,     0,   217,   217,   122,     0,     0,   399,     0,
       0,   407,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   430,     0,   222,   252,     0,   218,   219,     0,
     190,     0,   269,   257,     0,   386,   379,   382,   383,   384,
     385,   387,   374,   381,   371,   369,   245,   373,   368,   222,
     200,     0,     0,   288,     0,   360,    48,     0,     0,    44,
       0,     0,   109,   110,   111,   112,   113,   114,   115,   116,
       0,   103,   480,   118,   185,   226,   237,   235,   265,     0,
     147,   156,     0,     0,     0,     0,   389,   392,     0,   402,
     405,   409,   413,   417,   421,   411,   415,   419,   423,     0,
       0,   431,     0,     0,     0,     0,   192,   259,   376,     0,
       0,     0,   380,     0,     0,   199,   478,   197,    51,     0,
       0,   365,   366,   367,     0,   328,   326,   327,    67,     0,
       0,     0,   329,     0,   324,   325,     0,    81,     0,    53,
      58,    57,    61,    60,    59,    62,    66,    64,    63,     0,
       0,     0,     0,   167,    55,     0,     0,    80,    51,    87,
     105,   104,     0,   177,     0,   262,   262,   229,   232,   133,
     132,     0,     0,     0,   480,     0,     0,     0,   182,   254,
     220,   253,   222,     0,     0,   386,   372,   370,   205,   200,
       0,    52,     0,     0,     0,     0,     0,    65,     0,     0,
       0,     0,     0,    56,     0,     0,   478,   165,     0,   125,
       0,     0,    78,    73,    68,   168,    54,    52,    84,   227,
     263,     0,     0,   242,   242,   134,   135,   393,     0,   406,
     425,   427,     0,     0,   375,   201,   202,    50,   128,   478,
     480,   127,   126,   166,   169,    74,    69,    75,    70,     0,
       0,     0,     0,     0,     0,    76,    71,    46,     0,   236,
     230,   233,   400,   193,     0,     0,     0,     0,   158,     0,
      77,    72,   238,   377,     0,   130,    79,   217,     0,   129,
       0,     0,   239,   378
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    75,    76,   252,   657,   250,   651,   656,
     747,   829,    77,   268,   762,    78,   137,   659,   480,   481,
     672,   673,   674,   675,   760,    79,    80,    81,    82,    83,
     296,    84,   836,   837,   931,    85,    86,   280,   489,   688,
     490,   491,   492,   591,   690,    87,   840,    88,    89,   230,
     841,    90,    91,    92,   486,   764,   231,   441,   232,   539,
     714,   233,   442,   547,   234,   550,   551,   872,   843,   565,
     465,   648,   647,   805,   740,   562,   563,   739,    93,    94,
     278,   214,   716,   717,   586,   587,   685,   854,   718,   768,
     913,   769,   914,   856,   855,   967,   435,   557,   558,   641,
      95,   236,   553,   237,   452,   911,   238,   447,   448,   549,
     890,    97,    98,    99,   154,   100,   392,   266,   473,   650,
     467,   101,   128,   436,   561,   560,   559,   103,   104,   105,
     106,   146,   145,   107,   475,   574,   575,   846,   736,   801,
     800,   799,   873,   968,   737,   738,   108,   606,   403,   697,
     863,   404,   405,   610,   778,   611,   408,   700,   865,   614,
     618,   615,   619,   616,   620,   617,   621,   622,   623,   432,
     385,   386,   248,   172,   470,   471,   388,   389,   390
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -784
static const yytype_int16 yypact[] =
{
    -784,    81,  -784,  5367,   222,   602,  6228,   -17,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,    12,
      35,   652,   248,  -784,  -784,  5949,  -784,  -784,  5670,   -41,
    -784,  6042,   332,  -784,     2,    50,  5484,   -21,   -28,   148,
     155,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,    25,    41,   100,   132,   174,   180,   189,   209,
     217,   218,   225,   228,   229,   234,   246,   247,   249,   251,
     256,   257,   260,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  5577,   -51,   -51,   -51,
     -51,   -51,  -784,  6260,  6228,  -784,   522,  -784,    22,   144,
     245,  -784,   160,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     204,   231,   239,   376,   385,   386,  -784,   258,  -784,   263,
    -784,   655,   655,    -8,    78,    86,   127,   353,   308,  -784,
    -784,   270,  -784,  -784,   277,  -784,  -784,   278,  -784,   270,
     277,  -784,   285,   368,   292,   753,   753,   -51,   -51,   -51,
     -51,   374,   338,   289,   680,   222,   602,   303,  -784,  -784,
    -784,  -784,  -784,   548,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  3479,  -784,  -784,  -784,   304,  5260,   -51,   -51,
     -51,   -51,  -784,  -784,  5949,   713,  -784,  -784,  -784,   713,
     713,  -784,   713,   713,   713,   713,   713,   713,   713,   713,
     713,   713,   713,   713,   713,   713,   602,  5670,  -784,   -51,
     -51,   490,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,   342,   344,   345,  6428,   351,    52,   713,   352,   354,
     374,  -784,  -784,  -784,  -784,    27,   316,    98,  -784,   358,
      42,   207,  -784,  -784,  -784,   680,   140,  -784,   959,  6228,
     320,  6228,   320,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,   680,  1099,  6228,   713,   325,  1239,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,   114,  -784,
    6385,    -8,   127,   245,  -784,  -784,   329,   337,  -784,  -784,
    -784,    52,    52,    26,   341,  1379,   339,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  1519,  6228,  -784,  -784,   -51,   713,  -784,  -784,  -784,
    -784,   346,   335,   713,   713,   713,   343,   350,   713,   361,
     364,   365,   369,   370,   387,   389,   393,   394,   395,   397,
     348,   357,   402,   -51,   -51,  -784,  -784,  1659,   340,   400,
     382,   331,  -784,  -784,  -784,   392,   713,   413,  -784,  -784,
     403,    31,    31,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,    52,   408,  -784,    48,    93,  -784,   145,  -784,  -784,
      14,   215,   713,  -784,  -784,  -784,   421,  -784,  -784,  -784,
    -784,  -784,   417,   422,   459,   424,   426,   431,  -784,   429,
     436,   434,   435,   713,  -784,  1799,   441,  -784,  -784,   439,
     440,   526,   713,   713,  -784,  -784,   451,   463,  -784,  -784,
    -784,  1939,  2079,  2219,  2359,  2499,  -784,   455,   462,  -784,
    -784,  -784,   460,   465,   467,  -784,  -784,   466,  6353,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,   713,  -784,  -784,  -784,   449,   452,  -784,  -784,   477,
      53,  -784,   482,  -784,  -784,   473,   478,  -784,  -784,    26,
     441,  6228,  3619,  -784,   481,   713,  -784,  -784,  -784,    22,
      22,    22,  -784,  -784,   489,   486,  -784,  3759,  -784,  -784,
     680,   680,   680,  -784,  -784,   492,  -784,  -784,  -784,  -784,
    -784,   713,   626,   493,  3899,  -784,   496,  5763,  -784,  -784,
     713,  -784,  -784,  -784,  2639,  2779,   501,   502,   500,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  6228,  -784,  -784,  -784,
    6353,  6353,  -784,   504,  6353,  6353,  6353,  6353,  6353,  6353,
    6353,  6353,  6353,  6353,    95,  -784,  -784,  -784,   494,  -784,
    6135,  -784,  -784,  -784,  -784,  -784,   507,   511,    26,    52,
     519,   244,  -784,  -784,  -784,  -784,   713,  -784,   441,  -784,
    6228,   320,  -784,  -784,  -784,   459,   525,   320,   527,  -784,
    -784,    -8,  -784,  -784,  -784,  -784,   127,   626,  -784,  -784,
    -784,  -784,   645,  -784,  -784,   626,  -784,   245,  -784,  -784,
    -784,  4039,  -784,  -784,  -784,  -784,   524,   362,  6385,  -784,
     408,    52,    52,  6135,  6135,  -784,   534,  6228,  -784,   535,
    6353,  -784,   536,   538,   539,   541,   544,   545,   546,   551,
     542,   547,  -784,   554,   441,  -784,   556,  -784,   557,  2919,
    -784,   558,  -784,  -784,    52,   570,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,   671,  -784,   441,
     568,   577,   579,  -784,   576,  -784,  -784,  4739,   581,  -784,
    4179,   580,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     626,  -784,  -784,  -784,    31,  -784,  -784,  -784,    26,   713,
    -784,  -784,   585,   592,   591,   594,  -784,  -784,   589,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,   695,
     706,  -784,   597,   600,  6135,   605,  -784,  -784,  -784,   244,
     274,   274,  -784,   607,   713,  -784,  -784,  -784,  -784,   222,
     602,  -784,  -784,  -784,  5228,    14,   157,   162,  -784,  4949,
    5042,  5856,   215,   606,   164,   216,   612,  -784,   713,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  4856,
     -51,   -51,   -51,  -784,  -784,   543,   611,  -784,  -784,  -784,
    -784,  -784,  4319,  -784,  5763,   713,   713,  -784,  -784,  -784,
    -784,   623,   624,   628,  -784,   629,   630,   632,  -784,  -784,
    -784,  -784,   441,  6228,   633,  -784,  -784,  -784,  -784,   568,
    3059,   621,   269,   269,   713,   490,   602,  -784,   -51,   -51,
     490,   -51,   -51,  -784,   587,  5135,  -784,  -784,  5042,  -784,
     -51,   -51,  -784,  -784,  -784,  -784,  -784,   622,  -784,  -784,
    -784,   638,   644,   408,   408,  -784,  -784,  -784,  4459,  -784,
    -784,  -784,   646,   641,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  5228,
     663,   713,  3199,   -51,   -51,  -784,  -784,  -784,   627,  -784,
    -784,  -784,  -784,  -784,   665,  3339,  4599,   713,  -784,   667,
    -784,  -784,  -784,  -784,   670,  -784,  -784,  6135,   274,  -784,
     669,   673,  -784,  -784
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -784,  -350,  -784,  -784,   705,  -784,  -784,  -784,  -784,  -547,
    -784,  -784,   -24,  -784,  -784,   -18,  -784,  -784,  -435,  -784,
    -784,  -784,  -600,  -784,  -784,   -16,   -14,   -13,    51,  -784,
    -784,  -784,  -784,  -515,   -84,    59,  -457,  -784,   116,  -784,
    -784,  -784,  -784,  -438,  -784,  -784,  -784,    34,   237,  -784,
    -517,   297,   -27,   561,  -784,  -784,  -117,  -784,  -784,  -784,
    -784,  -227,  -784,  -418,  -784,  -784,  -784,  -784,   563,  -784,
    -784,  -784,  -784,   -66,    10,  -783,  -784,  -784,   716,  -784,
       1,   -39,  -657,    24,  -504,  -784,   -35,  -784,  -558,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -253,  -643,  -784,  -784,
     -34,  -784,  -576,  -425,  -784,   -32,  -159,  -506,  -784,  -784,
       5,    -6,   -48,   729,  -784,  -140,  -784,  -784,  -209,  -784,
    -122,  -127,    57,   -79,  -784,  -784,  -784,  -303,  -259,     7,
     -29,  -784,  -784,   -31,  -232,   172,  -784,  -784,    32,  -784,
    -784,  -784,  -784,  -784,  -784,  -747,    83,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     608,   830,  -101,  -411,  -784,  -156,  -784,  -784,  -784
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -314
static const yytype_int16 yytable[] =
{
     127,   150,   182,   439,   294,   117,   119,   158,    96,   181,
     263,   118,   120,   159,   283,   160,   387,   161,   162,   243,
     477,   493,   138,   142,   548,   163,   554,   285,   265,   686,
     144,   658,   284,   151,   590,   552,   774,   775,   496,   497,
     269,    96,   476,   635,   508,   897,   636,   771,   583,   215,
     216,   217,   218,   876,   877,   593,   240,   479,   567,   210,
     102,   289,   147,   723,   544,  -295,   545,   751,   212,   295,
     178,   213,   391,   584,  -295,   761,   454,   443,   443,   132,
     133,     2,  -313,   153,  -296,   152,   240,   259,   220,   171,
     175,   211,   184,   152,  -298,   261,  -295,   235,   183,   290,
     176,   933,  -295,   129,   628,   283,   283,   130,   274,   275,
     276,   277,   427,   438,   272,   273,   130,  -297,   285,   285,
     209,  -296,   173,   459,   283,   260,   174,  -311,   118,   120,
     640,  -298,   722,   262,  -210,   135,   136,   285,   130,   397,
     398,   399,   400,   384,   742,   185,   660,   444,   797,   460,
     598,   445,   689,   239,  -297,   241,   286,   287,   242,   546,
     851,   186,   118,   120,   293,   446,   446,   222,   223,   485,
     425,   426,   629,   630,   681,   455,    25,    24,   456,  -309,
     424,  -313,   396,   507,  -313,   241,   402,   461,   242,   396,
     406,   407,   631,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   117,   239,  -296,
     792,   395,   211,   118,   554,   613,   712,   450,   401,   384,
     187,   971,   713,   228,   229,   451,  -311,   434,   437,  -311,
    -299,   110,   501,   502,   444,   803,   384,  -300,   445,  -298,
     384,   423,   246,   472,  -297,   472,  -299,   466,   750,   111,
     112,   174,   188,   725,   726,   727,   728,   139,   729,   730,
     472,   881,   857,   503,   504,   148,   384,  -299,   482,   113,
     950,   951,   462,   179,  -300,   132,   133,  -212,  -309,   247,
     505,  -309,  -211,   875,  -213,   727,   728,   440,   729,   730,
     839,   731,   434,   434,   189,   140,   686,  -296,  -300,   554,
     190,   907,   888,   891,   887,   114,   115,   698,   699,   191,
     970,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     711,   731,   900,  -210,   899,   149,  -210,   245,  -210,   192,
    -210,   135,   136,   180,   283,  -209,  -214,   193,   194,   174,
     457,   164,   637,   458,   116,   195,   853,   285,   196,   197,
    -212,   852,   573,  -212,   198,  -212,   509,  -212,  -211,   165,
     166,  -211,   384,  -211,   732,  -211,   199,   200,   922,   201,
     141,   202,   555,   733,   734,   735,   203,   204,   940,   167,
     205,   943,   249,   221,   532,   533,   472,   251,   928,   224,
     264,   929,  -210,   594,   595,   930,   387,   780,   384,  -209,
     267,   222,   223,   733,   512,   513,   514,   270,   175,   517,
     224,   387,   271,  -228,   279,   168,   169,   766,   767,   744,
     246,   225,   288,   393,  -295,   748,  -298,  -297,   387,   493,
     283,   283,   283,  -296,  -299,   449,  -300,   541,   772,   773,
     453,   743,   677,   285,   285,   285,   474,   483,   652,   653,
     654,   494,   293,   918,   170,   678,   384,   228,   229,   495,
     498,   500,   511,   564,   570,   571,   572,   510,   281,   529,
     515,   538,   384,   384,   384,   384,   384,   516,   530,   535,
     642,   643,   644,  -228,   482,   543,   165,   166,   518,  -228,
    -228,   519,   520,   592,   592,  -209,   521,   522,  -209,   289,
    -209,  -228,  -209,   537,  -213,  -214,   282,  -213,  -214,  -213,
    -214,  -213,  -214,   540,   523,   283,   524,   132,   133,   956,
     525,   526,   527,   384,   528,   387,   224,   677,   285,   531,
     719,   221,   624,   573,   542,   677,   556,   290,   384,   536,
     678,   566,   168,   169,   568,   472,   576,   569,   678,   222,
     223,   577,   289,   578,   579,   384,   293,   289,   224,   580,
     555,   581,  -221,   582,   588,   384,   384,   589,    29,   225,
     132,   133,   596,   135,   136,   132,   133,   226,   227,   224,
     604,   687,   482,   676,   597,   605,   608,   607,   609,   625,
     290,   592,   626,   612,   387,   290,   289,   627,   226,   227,
     696,   632,   633,   291,   292,   228,   229,   634,   639,   645,
     858,   110,   646,   715,   132,   133,   679,   682,   905,   655,
     677,   693,   694,   695,   687,   701,   135,   136,   720,   111,
     112,   135,   136,   678,   290,   661,   721,   662,   663,   664,
     293,   665,   226,   227,   472,   555,   724,   741,   746,   113,
     749,   765,   384,   222,   223,   776,   779,   781,   934,   782,
     783,   131,   784,   905,   253,   785,   786,   787,   676,   789,
     135,   136,   788,   666,   790,   791,   676,   793,   796,   132,
     133,   802,   254,   255,   794,   114,   115,   687,   687,   281,
     384,   777,   434,   434,   798,   804,   387,   806,   808,   134,
     807,   850,   256,   848,   859,   880,   866,   165,   166,   228,
     229,   860,   861,   844,   905,   862,   864,   867,   868,   869,
     842,   384,   289,   830,   871,   293,   895,   282,   878,   831,
     934,   832,   896,   833,   834,   135,   136,   906,   257,   258,
     132,   133,   915,   916,   927,   947,   667,   962,   466,   917,
     919,   920,   845,   921,   924,   668,   669,   670,   671,   948,
     290,   676,   387,   168,   169,   949,   954,   953,   263,     8,
     293,    10,    11,    12,    13,   752,   753,    16,   754,   755,
     756,   757,   758,   759,   958,   963,   966,   893,   687,   969,
     972,   208,   889,   892,   973,   942,   135,   136,   835,   932,
     387,   902,   903,   904,   770,   741,   838,   463,   885,   464,
     882,   883,   901,   925,   879,   244,   118,   120,   870,   909,
     466,   466,   219,   384,   912,   923,   894,   745,   955,   564,
     847,   874,   433,   109,     0,     0,     0,     0,    41,     0,
     466,     0,     0,     0,     0,     0,   235,     0,   687,   935,
     936,   384,   937,   938,     0,     0,   910,   910,     0,     0,
       0,   945,   946,     0,     0,     0,     0,     0,     0,     0,
       0,   944,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   564,     0,   882,     0,   384,
       0,     0,     0,   118,     0,   293,   466,     0,     0,   466,
     941,     0,     0,     0,   960,   961,     0,     0,     0,     0,
       0,     0,     0,   384,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   384,   384,     0,     0,
       0,     0,     0,   957,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   687,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   469,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
     478,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   484,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   499,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
     506,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   534,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   585,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
     599,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
     600,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
     601,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   602,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   603,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   691,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   692,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   795,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
     926,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
     959,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   468,   364,
       0,   365,   964,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   363,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,     0,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   638,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   649,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   680,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   763,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   849,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   908,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,     0,   364,
     952,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,    26,    27,     0,   320,
       0,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,     0,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   965,   364,
       0,   365,     0,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   809,   810,   811,   812,   813,   814,   815,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   816,   817,    21,    22,
     818,     0,    24,     0,     0,    25,    26,    27,   819,   820,
     821,    29,    30,    31,     0,    33,   822,    35,     0,    37,
       0,   823,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   824,   825,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,   826,   827,   886,
     810,     0,     0,     0,   814,   815,     0,     0,     0,     0,
       0,   828,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   816,   817,   124,   125,     0,     0,    24,
       0,     0,    25,    26,    27,     0,   898,     0,     0,    30,
       0,     0,     0,   822,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   824,
     825,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   886,   810,     0,     0,     0,   814,   815,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   816,   817,   124,   125,
       0,     0,    24,     0,     0,    25,    26,    27,   828,     0,
       0,     0,    30,     0,     0,     0,   822,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   824,   825,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   121,   122,     0,     0,     0,
     814,   815,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   816,
     817,   124,   125,     0,     0,    24,     0,     0,    25,    26,
      27,   828,     0,     0,     0,    30,     0,     0,     0,   822,
     143,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   824,   825,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   121,   122,
       0,     0,     0,   939,   815,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   816,   817,   124,   125,     0,     0,    24,     0,
       0,     0,    26,    27,   828,     0,     0,     0,    30,     0,
       0,     0,   822,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   824,   825,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   121,   122,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   124,   125,     0,
       0,    24,     0,   121,   122,    26,    27,   828,     0,   123,
       0,    30,     0,     0,     0,   126,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   124,
     125,     0,     0,    24,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   126,   143,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
     884,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     6,     7,     0,     0,     0,
       0,     0,   394,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,     0,     0,    25,    26,    27,     0,    28,     0,    29,
      30,    31,    32,    33,    34,    35,    36,    37,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,     0,    74,   121,   122,     0,
       0,     0,     6,   123,   177,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   124,   125,     0,     0,    24,     0,     0,
      25,    26,    27,     0,     0,     0,     0,    30,     0,     0,
       0,   126,    35,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     206,     5,     0,     0,     0,     6,   123,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   124,   125,     0,     0,
      24,     0,     0,    25,    26,    27,     0,   207,     0,     0,
      30,     0,     0,     0,   126,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   121,   122,     0,     0,     0,     6,   123,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   124,
     125,     0,     0,    24,     0,     0,    25,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   126,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   121,   122,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   124,   125,     0,     0,    24,     0,     0,     0,
      26,    27,     0,     0,     0,     0,    30,     0,     0,     0,
     126,     0,     0,   683,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   684,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   121,
     122,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   124,   125,     0,     0,    24,
       0,     0,     0,    26,    27,     0,     0,     0,     0,    30,
       0,     0,     0,   126,    35,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   121,   122,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   124,   125,
       0,     0,    24,     0,     0,     0,    26,    27,     0,     0,
       0,     0,    30,     0,     0,     0,   126,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   155,   156,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,     0,     0,    24,     0,     0,     0,    26,
      27,     0,     0,     0,     0,    30,     0,     0,     0,   126,
       0,     0,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   121,   122,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   124,   125,     0,     0,    24,     0,
       0,     0,    26,    27,     0,     0,     0,     0,    30,     0,
       0,     0,   126,     0,     0,   683,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   121,   122,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   124,   125,     0,
       0,    24,     0,   121,   122,    26,    27,     0,     0,   123,
       0,    30,     0,     0,     0,   126,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   124,
     125,     0,     0,     0,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   126,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   121,   122,     0,     0,
       0,     0,   253,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     254,   255,   124,   125,     0,     0,     0,     0,     0,   487,
      26,    27,     0,     0,   253,     0,     0,     0,     0,     0,
     256,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   254,   255,     0,     0,     0,     0,     0,     0,
       0,     0,    26,    27,     0,     0,     0,     0,   488,     0,
       0,     0,   256,     0,     0,     0,   257,   258,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   257,   258,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   428,   429,     0,     0,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   430,     0,
       0,     0,   366,   367,     0,   369,   370,     0,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   431,     0,   382
};

static const yytype_int16 yycheck[] =
{
       6,    28,    36,   230,   163,     4,     5,    31,     3,    36,
     127,     4,     5,    31,   154,    31,   172,    31,    31,    98,
     252,   280,    21,    22,   442,    31,   451,   154,   129,   587,
      25,   578,   154,    28,   491,   446,   693,   694,   291,   292,
     141,    36,   251,   549,   394,   828,   550,   690,   483,    88,
      89,    90,    91,   800,   801,   493,    34,   266,   469,    86,
       3,     9,    28,   639,    33,    82,    35,   667,   119,   170,
      36,   122,   173,   484,    82,   675,    34,    51,    51,    27,
      28,     0,    34,   124,    82,    28,    34,     9,    94,    32,
      40,    86,   120,    36,    82,     9,    82,    96,   119,    47,
      50,   884,   119,   120,    51,   245,   246,   124,   147,   148,
     149,   150,   213,   230,   145,   146,   124,    82,   245,   246,
      86,   119,   120,   245,   264,    47,   124,    34,   121,   122,
     555,   119,   638,    47,   120,    83,    84,   264,   124,   178,
     179,   180,   181,   172,   648,   120,   581,   120,   724,     9,
     500,   124,   590,    96,   119,   133,   155,   156,   136,   128,
     760,   120,   155,   156,   163,   139,   139,    27,    28,   270,
     209,   210,   119,   120,   585,   133,    36,    33,   136,    34,
     207,   133,   177,   392,   136,   133,   185,    47,   136,   184,
     189,   190,   139,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   151,    82,
     714,   177,   207,   206,   639,   518,   121,   119,   184,   248,
     120,   968,   127,    83,    84,   127,   133,   226,   227,   136,
      82,     9,   333,   334,   120,   739,   265,    82,   124,    82,
     269,   207,    82,   249,    82,   251,    82,   246,   659,    27,
      28,   124,   120,     9,    10,    11,    12,     9,    14,    15,
     266,   808,   768,   364,   365,    28,   295,   119,   267,    47,
     913,   914,   132,    36,   119,    27,    28,   120,   133,   119,
     381,   136,   120,     9,   120,    11,    12,   230,    14,    15,
     747,    47,   291,   292,   120,    47,   854,    82,    82,   724,
     120,   848,   819,   820,   819,    83,    84,   610,   611,   120,
     967,   614,   615,   616,   617,   618,   619,   620,   621,   622,
     623,    47,   839,   119,   839,    28,   122,    82,   124,   120,
     126,    83,    84,    36,   474,   120,   120,   120,   120,   124,
     133,     9,   551,   136,   122,   120,   764,   474,   120,   120,
     119,   762,   474,   122,   120,   124,   395,   126,   119,    27,
      28,   122,   391,   124,   120,   126,   120,   120,   872,   120,
     122,   120,   451,   129,   130,   131,   120,   120,   895,    47,
     120,   898,   124,     9,   423,   424,   392,   124,   119,    36,
      82,   122,   122,   494,   495,   126,   552,   700,   427,   122,
     122,    27,    28,   129,   403,   404,   405,   122,    40,   408,
      36,   567,   120,    51,   125,    83,    84,    55,    56,   651,
      82,    47,   119,   119,    82,   657,    82,    82,   584,   688,
     570,   571,   572,    82,    82,   119,    82,   436,   691,   692,
      82,   650,   582,   570,   571,   572,   126,   122,   570,   571,
     572,   122,   451,   864,   122,   582,   485,    83,    84,   122,
     119,   122,   127,   462,     5,     6,     7,   121,     9,   121,
     127,   140,   501,   502,   503,   504,   505,   127,   121,   139,
     559,   560,   561,   121,   483,    82,    27,    28,   127,   127,
     128,   127,   127,   492,   493,   119,   127,   127,   122,     9,
     124,   139,   126,   121,   119,   119,    47,   122,   122,   124,
     124,   126,   126,   121,   127,   655,   127,    27,    28,   930,
     127,   127,   127,   552,   127,   681,    36,   667,   655,   127,
     631,     9,   531,   655,   121,   675,   128,    47,   567,   139,
     667,   120,    83,    84,   127,   551,   122,   125,   675,    27,
      28,   125,     9,   122,   125,   584,   555,     9,    36,   123,
     639,   127,   121,   128,   125,   594,   595,   127,    42,    47,
      27,    28,   121,    83,    84,    27,    28,    55,    56,    36,
     125,   587,   581,   582,   121,   123,   121,   127,   121,   140,
      47,   590,   140,   127,   750,    47,     9,   120,    55,    56,
     606,   119,   129,    55,    56,    83,    84,   129,   127,   120,
     769,     9,   126,   119,    27,    28,   123,   121,   845,   127,
     760,   120,   120,   123,   630,   121,    83,    84,   121,    27,
      28,    83,    84,   760,    47,     9,   125,    11,    12,    13,
     639,    15,    55,    56,   650,   724,   127,   646,   123,    47,
     123,   127,   681,    27,    28,   121,   121,   121,   885,   121,
     121,     9,   121,   890,     9,   121,   121,   121,   667,   127,
      83,    84,   121,    47,   127,   121,   675,   121,   120,    27,
      28,    10,    27,    28,   127,    83,    84,   693,   694,     9,
     719,   697,   691,   692,   124,   127,   852,   120,   122,    47,
     121,   121,    47,   122,   119,   806,    11,    27,    28,    83,
      84,   119,   121,   747,   941,   121,   127,    11,   121,   119,
     747,   750,     9,   747,   119,   724,   120,    47,   121,   747,
     957,   747,   120,   747,   747,    83,    84,   126,    83,    84,
      27,    28,   119,   119,   123,   123,   120,   120,   747,   121,
     121,   121,   747,   121,   121,   129,   130,   131,   132,   121,
      47,   760,   918,    83,    84,   121,   125,   121,   885,    16,
     769,    18,    19,    20,    21,   130,   131,    24,   133,   134,
     135,   136,   137,   138,   121,   120,   119,   821,   794,   119,
     121,    86,   819,   820,   121,   896,    83,    84,   747,   883,
     956,   840,   841,   842,   688,   804,   747,   246,   814,   246,
     809,   810,   839,   879,   804,    99,   809,   810,   794,   854,
     819,   820,    93,   852,   856,   873,   821,   655,   929,   828,
     747,   799,   224,     3,    -1,    -1,    -1,    -1,    85,    -1,
     839,    -1,    -1,    -1,    -1,    -1,   845,    -1,   854,   888,
     889,   880,   891,   892,    -1,    -1,   855,   856,    -1,    -1,
      -1,   900,   901,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   898,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   884,    -1,   886,    -1,   918,
      -1,    -1,    -1,   886,    -1,   894,   895,    -1,    -1,   898,
     895,    -1,    -1,    -1,   943,   944,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   942,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   955,   956,    -1,    -1,
      -1,    -1,    -1,   939,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   967,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    33,    -1,    -1,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    -1,    46,    47,    48,    -1,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,   119,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,   132,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    33,
      -1,    -1,    36,    37,    38,    -1,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    -1,    -1,    36,    37,    38,   132,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     3,     4,    -1,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    33,    -1,    -1,    36,    37,
      38,   132,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     3,     4,
      -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,   132,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    33,    -1,     3,     4,    37,    38,   132,    -1,     9,
      -1,    43,    -1,    -1,    -1,    47,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,   122,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      33,    -1,    -1,    36,    37,    38,    -1,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    -1,   119,     3,     4,    -1,
      -1,    -1,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    33,    -1,    -1,
      36,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      33,    -1,    -1,    36,    37,    38,    -1,    40,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    33,    -1,    -1,    36,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    33,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      47,    -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     3,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    33,
      -1,    -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    33,    -1,    -1,    -1,    37,    38,    -1,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    33,    -1,    -1,    -1,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    47,
      -1,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     3,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    33,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    33,    -1,     3,     4,    37,    38,    -1,    -1,     9,
      -1,    43,    -1,    -1,    -1,    47,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    47,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,     4,
      37,    38,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      47,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    37,    38,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    53,    54,    -1,    -1,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,
      -1,    -1,   124,   125,    -1,   127,   128,    -1,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,    -1,   141
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   144,     0,   145,     3,     4,     8,     9,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    33,    36,    37,    38,    40,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    52,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   146,   147,   155,   158,   168,
     169,   170,   171,   172,   174,   178,   179,   188,   190,   191,
     194,   195,   196,   221,   222,   243,   253,   254,   255,   256,
     258,   264,   265,   270,   271,   272,   273,   276,   289,   314,
       9,    27,    28,    47,    83,    84,   122,   223,   272,   223,
     272,     3,     4,     9,    29,    30,    47,   254,   265,   120,
     124,     9,    27,    28,    47,    83,    84,   159,   223,     9,
      47,   122,   223,    48,   253,   275,   274,   190,   191,   194,
     195,   253,   265,   124,   257,     3,     4,    50,   155,   158,
     168,   169,   170,   254,     9,    27,    28,    47,    83,    84,
     122,   265,   316,   120,   124,    40,    50,    10,   190,   191,
     194,   195,   243,   119,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,     3,    40,   147,   190,
     195,   253,   119,   122,   224,   224,   224,   224,   224,   256,
     254,     9,    27,    28,    36,    47,    55,    56,    83,    84,
     192,   199,   201,   204,   207,   223,   244,   246,   249,   265,
      34,   133,   136,   266,   221,    82,    82,   119,   315,   124,
     150,   124,   148,     9,    27,    28,    47,    83,    84,     9,
      47,     9,    47,   199,    82,   315,   260,   122,   156,   315,
     122,   120,   276,   276,   224,   224,   224,   224,   223,   125,
     180,     9,    47,   258,   263,   264,   223,   223,   119,     9,
      47,    55,    56,   223,   249,   315,   173,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      40,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,   119,   120,   122,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   141,   142,   273,   313,   314,   318,   319,   320,
     321,   315,   259,   119,   122,   190,   253,   224,   224,   224,
     224,   190,   223,   291,   294,   295,   223,   223,   299,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   190,   195,   224,   224,   315,    53,    54,
     120,   139,   312,   313,   223,   239,   266,   223,   199,   204,
     265,   200,   205,    51,   120,   124,   139,   250,   251,   119,
     119,   127,   247,    82,    34,   133,   136,   133,   136,   263,
       9,    47,   132,   196,   211,   213,   223,   263,   119,   123,
     317,   318,   254,   261,   126,   277,   261,   277,   121,   261,
     161,   162,   223,   122,   123,   315,   197,     4,    43,   181,
     183,   184,   185,   271,   122,   122,   239,   239,   119,   123,
     122,   315,   315,   315,   315,   315,   121,   261,   144,   224,
     121,   127,   223,   223,   223,   127,   127,   223,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   121,
     121,   127,   224,   224,   123,   139,   139,   121,   140,   202,
     121,   223,   121,    82,    33,    35,   128,   206,   206,   252,
     208,   209,   316,   245,   246,   266,   128,   240,   241,   269,
     268,   267,   218,   219,   223,   212,   120,   316,   127,   125,
       5,     6,     7,   263,   278,   279,   122,   125,   122,   125,
     123,   127,   128,   161,   316,   123,   227,   228,   125,   127,
     179,   186,   223,   186,   315,   315,   121,   121,   144,   121,
     121,   121,   123,   140,   125,   123,   290,   127,   121,   121,
     296,   298,   127,   270,   302,   304,   306,   308,   303,   305,
     307,   309,   310,   311,   223,   140,   140,   120,    51,   119,
     120,   139,   119,   129,   129,   250,   227,   261,   140,   127,
     246,   242,   266,   266,   266,   120,   126,   215,   214,   119,
     262,   151,   263,   263,   263,   127,   152,   149,   152,   160,
     161,     9,    11,    12,    13,    15,    47,   120,   129,   130,
     131,   132,   163,   164,   165,   166,   223,   258,   264,   123,
     119,   316,   121,    50,    81,   229,   231,   254,   182,   186,
     187,   123,   123,   120,   120,   123,   254,   292,   270,   270,
     300,   121,   270,   270,   270,   270,   270,   270,   270,   270,
     270,   270,   121,   127,   203,   119,   225,   226,   231,   315,
     121,   125,   250,   245,   127,     9,    10,    11,    12,    14,
      15,    47,   120,   129,   130,   131,   281,   287,   288,   220,
     217,   223,   227,   261,   277,   278,   123,   153,   277,   123,
     316,   165,   130,   131,   133,   134,   135,   136,   137,   138,
     167,   165,   157,   119,   198,   127,    55,    56,   232,   234,
     181,   240,   239,   239,   225,   225,   121,   254,   297,   121,
     270,   121,   121,   121,   121,   121,   121,   121,   121,   127,
     127,   121,   227,   121,   127,   140,   120,   245,   124,   284,
     283,   282,    10,   227,   127,   216,   120,   121,   122,     3,
       4,     5,     6,     7,     8,     9,    27,    28,    31,    39,
      40,    41,    47,    52,    83,    84,   118,   119,   132,   154,
     155,   158,   168,   169,   170,   171,   175,   176,   178,   179,
     189,   193,   195,   211,   243,   253,   280,   289,   122,   119,
     121,   165,   316,   206,   230,   237,   236,   250,   249,   119,
     119,   121,   121,   293,   127,   301,    11,    11,   121,   119,
     226,   119,   210,   285,   281,     9,   288,   288,   121,   217,
     315,   152,   223,   223,   132,   254,     3,   176,   193,   195,
     253,   193,   195,   243,   253,   120,   120,   218,    40,   176,
     193,   195,   224,   224,   224,   204,   126,   152,   119,   229,
     223,   248,   248,   233,   235,   119,   119,   121,   316,   121,
     121,   121,   227,   255,   121,   216,   121,   123,   119,   122,
     126,   177,   177,   218,   204,   224,   224,   224,   224,     8,
     193,   253,   315,   193,   195,   224,   224,   123,   121,   121,
     240,   240,   121,   121,   125,   315,   316,   254,   121,   121,
     224,   224,   120,   120,   123,   119,   119,   238,   286,   119,
     225,   288,   121,   121
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
#line 679 "vtkParse.y"
    { delSig(); clearTypeId(); clearTemplate(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 696 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 698 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    { output_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    { output_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 701 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    { reject_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 707 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    { reject_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 711 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    { output_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 721 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 722 "vtkParse.y"
    { end_class(); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 723 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 724 "vtkParse.y"
    { end_class(); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 725 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 726 "vtkParse.y"
    { end_class(); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 727 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 728 "vtkParse.y"
    { end_class(); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 730 "vtkParse.y"
    { delSig(); clearTypeId(); clearTemplate(); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    { output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 748 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    { output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 752 "vtkParse.y"
    { output_function(); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 753 "vtkParse.y"
    { output_function(); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    { output_function(); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { output_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { output_function(); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 759 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    {start_enum((yyvsp[(2) - (2)].str));}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    {end_enum();}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    {start_enum(NULL);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 774 "vtkParse.y"
    {end_enum();}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 778 "vtkParse.y"
    {add_enum((yyvsp[(1) - (1)].str), NULL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 779 "vtkParse.y"
    {add_enum((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 787 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 789 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 794 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 800 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 805 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 805 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 806 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 808 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 808 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 810 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 810 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 811 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 811 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 821 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 822 "vtkParse.y"
    { popNamespace(); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 850 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 851 "vtkParse.y"
    { postSig("template<");
          clearTypeId(); clearVarName(); clearVarValue(); startTemplate(); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 853 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 856 "vtkParse.y"
    { postSig(", ");
                 clearTypeId(); clearVarName(); clearVarValue(); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 861 "vtkParse.y"
    {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgTypes[i] = (yyvsp[(1) - (2)].integer);
               currentTemplate->ArgClasses[i] = vtkstrdup(getTypeId());
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 869 "vtkParse.y"
    {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 874 "vtkParse.y"
    { pushTemplate(); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 875 "vtkParse.y"
    {
               int i;
               TemplateArgs *newTemplate = currentTemplate;
               popTemplate();
               i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgTemplates[i] = newTemplate;
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 885 "vtkParse.y"
    {postSig("class ");}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 886 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 888 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); clearVarValue(); }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 896 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 907 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 909 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 915 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 919 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 932 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 936 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 940 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 950 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 954 "vtkParse.y"
    { postSig(")"); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 955 "vtkParse.y"
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

  case 178:

/* Line 1455 of yacc.c  */
#line 969 "vtkParse.y"
    { postSig(")"); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 970 "vtkParse.y"
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

  case 180:

/* Line 1455 of yacc.c  */
#line 981 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 982 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 987 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 989 "vtkParse.y"
    { postSig(")"); }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 990 "vtkParse.y"
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

  case 186:

/* Line 1455 of yacc.c  */
#line 1003 "vtkParse.y"
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1012 "vtkParse.y"
    {
      postSig(" const = 0");
      currentFunction->IsConst = 1;
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1022 "vtkParse.y"
    {
      postSig(" const");
      currentFunction->IsConst = 1;
    }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1028 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1032 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1033 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1040 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1042 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1043 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1052 "vtkParse.y"
    { postSig("("); }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1061 "vtkParse.y"
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

  case 204:

/* Line 1455 of yacc.c  */
#line 1074 "vtkParse.y"
    { postSig("(");}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1076 "vtkParse.y"
    {postSig("const ");}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1078 "vtkParse.y"
    {postSig("static ");}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1079 "vtkParse.y"
    {postSig("static ");}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1081 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1082 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1083 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1084 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1085 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1086 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1094 "vtkParse.y"
    {clearTypeId();}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1096 "vtkParse.y"
    { postSig("...");}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1098 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1100 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1103 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1104 "vtkParse.y"
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
#line 1115 "vtkParse.y"
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
#line 1122 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1123 "vtkParse.y"
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

  case 233:

/* Line 1455 of yacc.c  */
#line 1134 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1142 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1149 "vtkParse.y"
    { postSig("(&"); clearVarName(); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1151 "vtkParse.y"
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

  case 237:

/* Line 1455 of yacc.c  */
#line 1162 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*");
      clearVarName(); }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1164 "vtkParse.y"
    { postSig(")("); }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1165 "vtkParse.y"
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

  case 244:

/* Line 1455 of yacc.c  */
#line 1181 "vtkParse.y"
    { postSig("="); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1181 "vtkParse.y"
    { setVarValue((yyvsp[(3) - (3)].str)); }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1184 "vtkParse.y"
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

  case 260:

/* Line 1455 of yacc.c  */
#line 1212 "vtkParse.y"
    {clearVarValue();}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1212 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(1) - (3)].integer); }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1215 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1217 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(2) - (2)].integer); setVarName((yyvsp[(1) - (2)].str));}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1226 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1226 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1229 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1240 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1241 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1243 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1244 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1246 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1247 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1248 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1252 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1254 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1255 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1256 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1259 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1260 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1261 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1262 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1264 "vtkParse.y"
    {postSig(", ");}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1267 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1268 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1269 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1272 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1278 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1286 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1287 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1288 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1289 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1302 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1303 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1304 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1305 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1306 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1308 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1310 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1313 "vtkParse.y"
    { postSig("**"); }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1314 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1315 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1317 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1318 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1321 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1322 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1323 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1324 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1325 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1326 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1327 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1330 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1331 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1335 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1336 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1337 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1338 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1339 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1343 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1344 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1345 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1346 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1347 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1348 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1349 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1350 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1351 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1352 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1353 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1354 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1355 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1358 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1359 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1360 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1363 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1364 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1365 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1366 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1367 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1368 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1369 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1379 "vtkParse.y"
    {
      vtkParse_AddPointerToArray(&currentClass->SuperClasses,
                                 &currentClass->NumberOfSuperClasses,
                                 vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1385 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1386 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1387 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1389 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1390 "vtkParse.y"
    {postSig("+");}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1390 "vtkParse.y"
    {(yyval.str) = (yyvsp[(3) - (3)].str);}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1391 "vtkParse.y"
    {postSig("-");}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1391 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (3)].str))+2);
             sprintf((yyval.str), "-%s", (yyvsp[(3) - (3)].str)); }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1394 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1395 "vtkParse.y"
    {postSig("(");}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1395 "vtkParse.y"
    {postSig(")"); (yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1396 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1397 "vtkParse.y"
    {postSig("<(");}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1398 "vtkParse.y"
    {
            postSig(")");
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (9)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(8) - (9)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (9)].str), getTypeId(), (yyvsp[(8) - (9)].str));
            }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1405 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1406 "vtkParse.y"
    {
                int i = strlen((yyvsp[(1) - (2)].str));
                char *cp = (char *)malloc(i + strlen((yyvsp[(2) - (2)].str)) + 1);
                strcpy(cp, (yyvsp[(1) - (2)].str));
                strcpy(&cp[i], (yyvsp[(2) - (2)].str));
                (yyval.str) = cp; }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1413 "vtkParse.y"
    {(yyval.str) = vtkstrdup("0"); postSig("0");}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1414 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1415 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1417 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1418 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1420 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1424 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1425 "vtkParse.y"
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

  case 390:

/* Line 1455 of yacc.c  */
#line 1439 "vtkParse.y"
    {postSig("Get");}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1440 "vtkParse.y"
    {markSig();}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1440 "vtkParse.y"
    {swapSig();}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1441 "vtkParse.y"
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

  case 394:

/* Line 1455 of yacc.c  */
#line 1453 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1454 "vtkParse.y"
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

  case 396:

/* Line 1455 of yacc.c  */
#line 1468 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1469 "vtkParse.y"
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

  case 398:

/* Line 1455 of yacc.c  */
#line 1482 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1482 "vtkParse.y"
    {closeSig();}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1484 "vtkParse.y"
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

  case 401:

/* Line 1455 of yacc.c  */
#line 1529 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1530 "vtkParse.y"
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

  case 403:

/* Line 1455 of yacc.c  */
#line 1544 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1545 "vtkParse.y"
    {markSig();}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1545 "vtkParse.y"
    {swapSig();}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1546 "vtkParse.y"
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

  case 407:

/* Line 1455 of yacc.c  */
#line 1559 "vtkParse.y"
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

  case 408:

/* Line 1455 of yacc.c  */
#line 1584 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1585 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1589 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1590 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1594 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1595 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1599 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1600 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1604 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1605 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1609 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1610 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1614 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1615 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1619 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1620 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1624 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1626 "vtkParse.y"
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

  case 426:

/* Line 1455 of yacc.c  */
#line 1645 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1647 "vtkParse.y"
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

  case 428:

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

  case 429:

/* Line 1455 of yacc.c  */
#line 1733 "vtkParse.y"
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

  case 430:

/* Line 1455 of yacc.c  */
#line 1803 "vtkParse.y"
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

  case 431:

/* Line 1455 of yacc.c  */
#line 1870 "vtkParse.y"
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

  case 432:

/* Line 1455 of yacc.c  */
#line 1943 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1944 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1945 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1946 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1949 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1950 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1950 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1951 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1951 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1952 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1952 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1953 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1953 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1954 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1954 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1955 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1955 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1956 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1957 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1958 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1959 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1960 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1961 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1962 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1963 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1964 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1965 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1966 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1967 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1968 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1969 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1970 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1971 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1972 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1973 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1974 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1975 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1976 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1977 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 1978 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 1979 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 1980 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 1981 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 1982 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 1989 "vtkParse.y"
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
#line 7250 "vtkParse.tab.c"
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
#line 2031 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitTemplate(TemplateArgs *args)
{
  int i;

  args->NumberOfArguments = 0;

  for (i = 0; i < MAX_ARGS; i++)
    {
    args->ArgTemplates[i] = NULL;
    args->ArgTypes[i] = 0;
    args->ArgClasses[i] = NULL;
    args->ArgNames[i] = NULL;
    args->ArgValues[i] = NULL;
    }
}

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  int i;

  func->Name = NULL;
  func->ItemType = VTK_FUNCTION_INFO;
  func->Template = NULL;
  func->NumberOfArguments = 0;
  func->ArrayFailure = 0;
  func->IsVirtual = 0;
  func->IsPureVirtual = 0;
  func->IsPublic = 0;
  func->IsOperator = 0;
  func->IsConst = 0;
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
  con->ItemType = VTK_CONSTANT_INFO;
  con->Value = NULL;
  con->Type = 0;
  con->TypeClass = NULL;
  con->IsEnum = 0;
  con->IsProtected = 0;
  con->IsPublic = 0;
}

/* initialize the structure */
void InitClass(ClassInfo *cls)
{
  cls->Name = NULL;
  cls->ItemType = VTK_CLASS_INFO;
  cls->Template = NULL;
  cls->IsAbstract = 0;
  cls->HasDelete = 0;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfFunctions = 0;
  cls->NumberOfConstants = 0;
  cls->NumberOfItems = 0;
}

/* initialize the structure */
void InitFile(FileInfo *file_info)
{
  /* namespace info */
  file_info->Name = NULL;
  file_info->ItemType = VTK_FILE_INFO;
  file_info->NumberOfClasses = 0;
  file_info->NumberOfFunctions = 0;
  file_info->NumberOfConstants = 0;
  file_info->NumberOfNamespaces = 0;
  file_info->NumberOfItems = 0;

  /* file info */
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  InitClass(currentClass);
  currentClass->Name = vtkstrdup(classname);
  if (is_struct)
    {
    currentClass->ItemType = VTK_STRUCT_INFO;
    }
  vtkParse_AddItemMacro(currentNamespace, Classes, currentClass);

  /* template information */
  if (currentTemplate)
    {
    currentClass->Template = currentTemplate;
    currentTemplate = NULL;
    }

  in_public = 0;
  in_protected = 0;
  if (is_struct)
    {
    in_public = 1;
    }

  InitFunction(currentFunction);
}

/* reject the class */
void reject_class(const char *classname, int is_struct)
{
  static ClassInfo static_class;

  currentClass = &static_class;
  currentClass->Name = vtkstrdup(classname);
  InitClass(currentClass);

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
  in_public = 1;
  in_protected = 0;
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
    con->IsPublic = 1;
    vtkParse_AddItemMacro(&data, Constants, con);
    }
  else if (currentClass)
    {
    con->IsPublic = in_public;
    con->IsProtected = in_protected;
    vtkParse_AddItemMacro(currentClass, Constants, con);
    }
  else
    {
    con->IsPublic = 1;
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
        prepend_scope(text, currentClass->Name);
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

  /* template information */
  if (currentTemplate)
    {
    currentFunction->Template = currentTemplate;
    currentTemplate = NULL;
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
  if (currentClass)
    {
    currentFunction->IsPublic = in_public;
    currentFunction->IsProtected = in_protected;
    }
  else
    {
    currentFunction->IsPublic = 1;
    currentFunction->IsProtected = 0;
    }

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
  templateDepth = 0;
  currentTemplate = NULL;
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

  /* special treatment of the main class in the file */
  for (i = 0; i < currentNamespace->NumberOfClasses; i++)
    {
    if (strcmp(currentNamespace->Classes[i]->Name, main_class) == 0)
      {
      /* override "IsAbstract" with the "IsConcrete" set by CMake */
      currentNamespace->Classes[i]->IsAbstract = !is_concrete;
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

      if (strcmp(h_cls, class_info->Name) == 0)
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

    if (class_info->NumberOfItems > 0)
      {
      free(class_info->Items);
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

  if (file_info->NumberOfItems > 0)
    {
    free(file_info->Items);
    }

  free(file_info);
}

