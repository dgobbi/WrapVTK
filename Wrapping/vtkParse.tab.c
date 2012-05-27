/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     VTK_ID = 259,
     QT_ID = 260,
     StdString = 261,
     UnicodeString = 262,
     OSTREAM = 263,
     ISTREAM = 264,
     LP = 265,
     LA = 266,
     STRING_LITERAL = 267,
     INT_LITERAL = 268,
     HEX_LITERAL = 269,
     OCT_LITERAL = 270,
     FLOAT_LITERAL = 271,
     CHAR_LITERAL = 272,
     ZERO = 273,
     STRUCT = 274,
     CLASS = 275,
     UNION = 276,
     ENUM = 277,
     PUBLIC = 278,
     PRIVATE = 279,
     PROTECTED = 280,
     CONST = 281,
     VOLATILE = 282,
     MUTABLE = 283,
     STATIC = 284,
     VIRTUAL = 285,
     EXPLICIT = 286,
     INLINE = 287,
     FRIEND = 288,
     EXTERN = 289,
     OPERATOR = 290,
     TEMPLATE = 291,
     THROW = 292,
     TYPENAME = 293,
     TYPEDEF = 294,
     NAMESPACE = 295,
     USING = 296,
     NEW = 297,
     DELETE = 298,
     STATIC_CAST = 299,
     DYNAMIC_CAST = 300,
     CONST_CAST = 301,
     REINTERPRET_CAST = 302,
     OP_LSHIFT_EQ = 303,
     OP_RSHIFT_EQ = 304,
     OP_LSHIFT = 305,
     OP_RSHIFT = 306,
     OP_DOT_POINTER = 307,
     OP_ARROW_POINTER = 308,
     OP_ARROW = 309,
     OP_INCR = 310,
     OP_DECR = 311,
     OP_PLUS_EQ = 312,
     OP_MINUS_EQ = 313,
     OP_TIMES_EQ = 314,
     OP_DIVIDE_EQ = 315,
     OP_REMAINDER_EQ = 316,
     OP_AND_EQ = 317,
     OP_OR_EQ = 318,
     OP_XOR_EQ = 319,
     OP_LOGIC_AND = 320,
     OP_LOGIC_OR = 321,
     OP_LOGIC_EQ = 322,
     OP_LOGIC_NEQ = 323,
     OP_LOGIC_LEQ = 324,
     OP_LOGIC_GEQ = 325,
     ELLIPSIS = 326,
     DOUBLE_COLON = 327,
     OTHER = 328,
     VOID = 329,
     BOOL = 330,
     FLOAT = 331,
     DOUBLE = 332,
     LONG_DOUBLE = 333,
     INT = 334,
     UNSIGNED_INT = 335,
     SHORT = 336,
     UNSIGNED_SHORT = 337,
     LONG = 338,
     UNSIGNED_LONG = 339,
     LONG_LONG = 340,
     UNSIGNED_LONG_LONG = 341,
     INT64__ = 342,
     UNSIGNED_INT64__ = 343,
     CHAR = 344,
     SIGNED_CHAR = 345,
     UNSIGNED_CHAR = 346,
     SIGNED = 347,
     UNSIGNED = 348,
     SSIZE_T = 349,
     SIZE_T = 350,
     IdType = 351,
     FloatType = 352,
     TypeInt8 = 353,
     TypeUInt8 = 354,
     TypeInt16 = 355,
     TypeUInt16 = 356,
     TypeInt32 = 357,
     TypeUInt32 = 358,
     TypeInt64 = 359,
     TypeUInt64 = 360,
     TypeFloat32 = 361,
     TypeFloat64 = 362,
     SetMacro = 363,
     GetMacro = 364,
     SetStringMacro = 365,
     GetStringMacro = 366,
     SetClampMacro = 367,
     SetObjectMacro = 368,
     GetObjectMacro = 369,
     BooleanMacro = 370,
     SetVector2Macro = 371,
     SetVector3Macro = 372,
     SetVector4Macro = 373,
     SetVector6Macro = 374,
     GetVector2Macro = 375,
     GetVector3Macro = 376,
     GetVector4Macro = 377,
     GetVector6Macro = 378,
     SetVectorMacro = 379,
     GetVectorMacro = 380,
     ViewportCoordinateMacro = 381,
     WorldCoordinateMacro = 382,
     TypeMacro = 383,
     VTK_BYTE_SWAP_DECL = 384
   };
#endif
/* Tokens.  */
#define ID 258
#define VTK_ID 259
#define QT_ID 260
#define StdString 261
#define UnicodeString 262
#define OSTREAM 263
#define ISTREAM 264
#define LP 265
#define LA 266
#define STRING_LITERAL 267
#define INT_LITERAL 268
#define HEX_LITERAL 269
#define OCT_LITERAL 270
#define FLOAT_LITERAL 271
#define CHAR_LITERAL 272
#define ZERO 273
#define STRUCT 274
#define CLASS 275
#define UNION 276
#define ENUM 277
#define PUBLIC 278
#define PRIVATE 279
#define PROTECTED 280
#define CONST 281
#define VOLATILE 282
#define MUTABLE 283
#define STATIC 284
#define VIRTUAL 285
#define EXPLICIT 286
#define INLINE 287
#define FRIEND 288
#define EXTERN 289
#define OPERATOR 290
#define TEMPLATE 291
#define THROW 292
#define TYPENAME 293
#define TYPEDEF 294
#define NAMESPACE 295
#define USING 296
#define NEW 297
#define DELETE 298
#define STATIC_CAST 299
#define DYNAMIC_CAST 300
#define CONST_CAST 301
#define REINTERPRET_CAST 302
#define OP_LSHIFT_EQ 303
#define OP_RSHIFT_EQ 304
#define OP_LSHIFT 305
#define OP_RSHIFT 306
#define OP_DOT_POINTER 307
#define OP_ARROW_POINTER 308
#define OP_ARROW 309
#define OP_INCR 310
#define OP_DECR 311
#define OP_PLUS_EQ 312
#define OP_MINUS_EQ 313
#define OP_TIMES_EQ 314
#define OP_DIVIDE_EQ 315
#define OP_REMAINDER_EQ 316
#define OP_AND_EQ 317
#define OP_OR_EQ 318
#define OP_XOR_EQ 319
#define OP_LOGIC_AND 320
#define OP_LOGIC_OR 321
#define OP_LOGIC_EQ 322
#define OP_LOGIC_NEQ 323
#define OP_LOGIC_LEQ 324
#define OP_LOGIC_GEQ 325
#define ELLIPSIS 326
#define DOUBLE_COLON 327
#define OTHER 328
#define VOID 329
#define BOOL 330
#define FLOAT 331
#define DOUBLE 332
#define LONG_DOUBLE 333
#define INT 334
#define UNSIGNED_INT 335
#define SHORT 336
#define UNSIGNED_SHORT 337
#define LONG 338
#define UNSIGNED_LONG 339
#define LONG_LONG 340
#define UNSIGNED_LONG_LONG 341
#define INT64__ 342
#define UNSIGNED_INT64__ 343
#define CHAR 344
#define SIGNED_CHAR 345
#define UNSIGNED_CHAR 346
#define SIGNED 347
#define UNSIGNED 348
#define SSIZE_T 349
#define SIZE_T 350
#define IdType 351
#define FloatType 352
#define TypeInt8 353
#define TypeUInt8 354
#define TypeInt16 355
#define TypeUInt16 356
#define TypeInt32 357
#define TypeUInt32 358
#define TypeInt64 359
#define TypeUInt64 360
#define TypeFloat32 361
#define TypeFloat64 362
#define SetMacro 363
#define GetMacro 364
#define SetStringMacro 365
#define GetStringMacro 366
#define SetClampMacro 367
#define SetObjectMacro 368
#define GetObjectMacro 369
#define BooleanMacro 370
#define SetVector2Macro 371
#define SetVector3Macro 372
#define SetVector4Macro 373
#define SetVector6Macro 374
#define GetVector2Macro 375
#define GetVector3Macro 376
#define GetVector4Macro 377
#define GetVector6Macro 378
#define SetVectorMacro 379
#define GetVectorMacro 380
#define ViewportCoordinateMacro 381
#define WorldCoordinateMacro 382
#define TypeMacro 383
#define VTK_BYTE_SWAP_DECL 384




/* Copy the first part of user declarations.  */
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

/*
The purpose of this parser is to read C++ header files in order to
generate data structures that describe the C++ interface of a library,
one header file at a time.  As such, it is not a complete C++ parser.
It only parses what is relevant to the interface and skips the rest.

While the parser reads method definitions, type definitions, and
template definitions it generates a "signature" which is a string
that matches (apart from whitespace) the text that was parsed.

While parsing types, the parser creates an unsigned int that describes
the type as well as creating other data structures for arrays, function
pointers, etc.  The parser also creates a typeId string, which is either
a simple id that gives the class name or type name, or is "function" for
function pointer types, or "method" for method pointer types.
*/

/*
Conformance Notes:

This parser was designed empirically and incrementally.  It has been
refactored to make it more similar to the ANSI C++ 1996 BNF grammar,
but there are still many very significant differences.

The most significant difference between this parser and a "standard"
parser is that it only parses declarations in detail.  All other
statements and expressions are parsed as arbitrary sequences of symbols,
without any syntactic analysis.

The "unqualified_id" does not directly include "operator_function_id" or
"conversion_function_id" (e.g. ids like "operator=" or "operator int*").
Instead, these two id types are used to allow operator functions to be
handled by their own rules, rather than by the generic function rules.
These ids can only be used in function declarations and using declarations.

Types are handled quite differently from the ANSI BNF.  These differences
represent a prolonged (and ultimately successful) attempt to empirically
create a yacc parser without any shift/reduce conflicts.  The rules for
types are organized according to the way that types are usually defined
in working code, rather than strictly according to C++ grammar.

The declaration specifiers "friend" and "typedef" can only appear at the
beginning of a declaration sequence.  There are also restrictions on
where class and enum specifiers can be used: you can declare a new
struct within a variable declaration (as long as the variable has no
storage class specifiers), but not within a parameter declaration.

In the C++ standard, "const" can appear anywhere in a type definition, e.g.
"const short int" and "short const int" are equally valid.  This parser
is not that permissive.  All primitive types like "short int" are
converted into a single token by the lexer, so "const" can appear at
either end but not in the middle of a multi-token primitive type.

The lexer also returns each of "(scope::*", "(*", "(a::b::*", etc.
as single tokens.  The ANSI BNF, in contrast, would consider these to
be a "(" followed by a "ptr_operator".  The lexer concatenates these
tokens in order to eliminate shift/reduce conflicts in the parser.
However, this means that this parser will only recognize "scope::*" as
valid if it is preceded by "(", e.g. as part of a member function
pointer specification.

An odd bit of C++ ambiguity is that y(x); can be interpreted variously
as declaration of variable "x" of type "y", as a function call if "y"
is the name of a function, or as a constructor if "y" is the name of
a class.  This parser always interprets this pattern as a constructor
declaration, because function calls are ignored by the parser, and
variable declarations of the form y(x); are exceedingly rare compared
to the more usual form y x; without parentheses.
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

/* Map from the type anonymous_enumeration in vtkType.h to the
   VTK wrapping type system number for the type. */

#include "vtkParse.h"
#include "vtkParsePreprocess.h"
#include "vtkParseData.h"
#include "vtkType.h"

static unsigned int vtkParseTypeMap[] =
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
   the primitive_type production rule code.  */
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

#define vtkParseDebug(s1, s2) \
  if ( parseDebug ) { fprintf(stderr, "   %s %s\n", s1, s2); }

/* the tokenizer */
int yylex(void);

/* global variables */
FileInfo      *data = NULL;
int            parseDebug;

/* the "preprocessor" */
PreprocessInfo *preprocessor = NULL;

/* include dirs specified on the command line */
unsigned long  NumberOfIncludeDirectories= 0;
const char   **IncludeDirectories;

/* macros specified on the command line */
unsigned long  NumberOfDefinitions = 0;
const char   **Definitions;

/* names of classes marked as "concrete" */
unsigned long  NumberOfConcreteClasses = 0;
const char   **ConcreteClasses;

/* options that can be set by the programs that use the parser */
int            IgnoreBTX = 0;
int            Recursive = 0;

/* various state variables */
NamespaceInfo *currentNamespace = NULL;
ClassInfo     *currentClass = NULL;
FunctionInfo  *currentFunction = NULL;
TemplateInfo  *currentTemplate = NULL;
const char    *currentEnumName = NULL;
const char    *currentEnumValue = NULL;
parse_access_t access_level = VTK_ACCESS_PUBLIC;

/* functions from vtkParse.l */
void print_parser_error(const char *text, const char *cp, size_t n);

/* helper functions */
void start_class(const char *classname, int is_struct_or_union);
void reject_class(const char *classname, int is_struct_or_union);
void end_class();
void add_base_class(ClassInfo *cls, const char *name, int access_lev,
                    int is_virtual);
void output_friend_function(void);
void output_function(void);
void reject_function(void);
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count);
void add_parameter(FunctionInfo *func, unsigned int type,
                   const char *classname, unsigned long count);
void add_template_parameter(unsigned int datatype,
                            unsigned int extra, const char *funcSig);
void add_using(const char *name, int is_namespace);
void start_enum(const char *enumname);
void add_enum(const char *name, const char *value);
void end_enum();
unsigned int guess_constant_type(const char *value);
void add_constant(const char *name, const char *value,
                  unsigned int type, const char *typeclass, int global);
const char *add_const_scope(const char *name);
void prepend_scope(char *cp, const char *arg);
unsigned int guess_id_type(const char *cp);
unsigned int add_indirection(unsigned int tval, unsigned int ptr);
unsigned int add_indirection_to_array(unsigned int ptr);
void handle_complex_type(ValueInfo *val, unsigned int datatype,
                         unsigned int extra, const char *funcSig);
void handle_function_type(ValueInfo *param, const char *name,
                          const char *funcSig);
void add_legacy_parameter(FunctionInfo *func, ValueInfo *param);

void outputSetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n);
void outputGetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n);

/*----------------------------------------------------------------
 * String utility methods
 *
 * Strings are centrally allocated and are const, and they are not
 * freed until the program exits.  If they need to be freed before
 * then, vtkParse_FreeStringCache() can be called.
 */

/* duplicate the first n bytes of a string and terminate */
static const char *vtkstrndup(const char *in, size_t n)
{
  return vtkParse_CacheString(data->Strings, in, n);
}

/* duplicate a string */
static const char *vtkstrdup(const char *in)
{
  if (in)
    {
    in = vtkParse_CacheString(data->Strings, in, strlen(in));
    }

  return in;
}

/* helper function for concatenating strings */
static const char *vtkstrncat(size_t n, const char **str)
{
  char *cp;
  size_t i;
  size_t j[8];
  size_t m = 0;

  for (i = 0; i < n; i++)
    {
    j[i] = 0;
    if (str[i])
      {
      j[i] = strlen(str[i]);
      m += j[i];
      }
    }
  cp = vtkParse_NewString(data->Strings, m);
  m = 0;
  for (i = 0; i < n; i++)
    {
    if (j[i])
      {
      strncpy(&cp[m], str[i], j[i]);
      m += j[i];
      }
    }
  cp[m] = '\0';

  return cp;
}

/* concatenate strings */
static const char *vtkstrcat(const char *str1, const char *str2)
{
  const char *cp[2];

  cp[0] = str1;
  cp[1] = str2;
  return vtkstrncat(2, cp);
}

static const char *vtkstrcat3(const char *str1, const char *str2,
                              const char *str3)
{
  const char *cp[3];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  return vtkstrncat(3, cp);
}

static const char *vtkstrcat4(const char *str1, const char *str2,
                              const char *str3, const char *str4)
{
  const char *cp[4];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  cp[3] = str4;
  return vtkstrncat(4, cp);
}

static const char *vtkstrcat5(const char *str1, const char *str2,
                              const char *str3, const char *str4,
                              const char *str5)
{
  const char *cp[5];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  cp[3] = str4;
  cp[4] = str5;
  return vtkstrncat(5, cp);
}

static const char *vtkstrcat7(const char *str1, const char *str2,
                              const char *str3, const char *str4,
                              const char *str5, const char *str6,
                              const char *str7)
{
  const char *cp[7];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  cp[3] = str4;
  cp[4] = str5;
  cp[5] = str6;
  cp[6] = str7;
  return vtkstrncat(7, cp);
}

static size_t vtkidlen(const char *text)
{
  size_t i = 0;
  char c = text[0];

  if ((c >= 'a' && c <= 'z') ||
      (c >= 'A' && c <= 'Z') ||
       c == '_')
    {
    do
      {
      c = text[++i];
      }
    while ((c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') ||
           c == '_');
    }

  return i;
}

/*----------------------------------------------------------------
 * Comments
 */

/* "private" variables */
char          *commentText = NULL;
size_t         commentLength = 0;
size_t         commentAllocatedLength = 0;
int            commentState = 0;

const char *getComment()
{
  if (commentState != 0)
    {
    return commentText;
    }
  return NULL;
}

void clearComment()
{
  commentLength = 0;
  if (commentText)
    {
    commentText[commentLength] = '\0';
    }
  commentState = 0;
}

void addCommentLine(const char *line, size_t n)
{
  if (commentState <= 0)
    {
    clearComment();
    return;
    }

  if (commentText == NULL)
    {
    commentAllocatedLength = n+80;
    commentText = (char *)malloc(commentAllocatedLength);
    commentLength = 0;
    commentText[0] = '\0';
    }
  else if (commentLength + n + 2 > commentAllocatedLength)
    {
    commentAllocatedLength = commentAllocatedLength + commentLength + n + 2;
    commentText = (char *)realloc(commentText, commentAllocatedLength);
    }

  if (n > 0)
    {
    memcpy(&commentText[commentLength], line, n);
    }
  commentLength += n;
  commentText[commentLength++] = '\n';
  commentText[commentLength] = '\0';
}

void closeComment()
{
  switch (commentState)
    {
    case 1:
      /* Make comment persist until a new comment starts */
      commentState = -1;
      break;
    case 2:
      data->Description = vtkstrdup(getComment());
      clearComment();
      break;
    case 3:
      data->SeeAlso = vtkstrdup(getComment());
      clearComment();
      break;
    case 4:
      data->Caveats = vtkstrdup(getComment());
      clearComment();
      break;
    }
}

void closeOrClearComment()
{
  if (commentState < 0)
    {
    clearComment();
    }
  else
    {
    closeComment();
    }
}

void setCommentState(int state)
{
  switch (state)
    {
    case 0:
      closeComment();
      break;
    default:
      closeComment();
      clearComment();
      break;
    }

  commentState = state;
}


/*----------------------------------------------------------------
 * Macros
 */

/* "private" variables */
const char *macroName = NULL;
int macroUsed = 0;
int macroEnded = 0;

const char *getMacro()
{
  if (macroUsed == 0)
    {
    macroUsed = macroEnded;
    return macroName;
    }
  return NULL;
}


/*----------------------------------------------------------------
 * Namespaces
 *
 * operates on: currentNamespace
 */

/* "private" variables */
NamespaceInfo *namespaceStack[10];
unsigned long namespaceDepth = 0;

/* enter a namespace */
void pushNamespace(const char *name)
{
  unsigned long i;
  NamespaceInfo *oldNamespace = currentNamespace;

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
    currentNamespace = (NamespaceInfo *)malloc(sizeof(NamespaceInfo));
    vtkParse_InitNamespace(currentNamespace);
    currentNamespace->Name = vtkstrdup(name);
    vtkParse_AddNamespaceToNamespace(oldNamespace, currentNamespace);
    }

  namespaceStack[namespaceDepth++] = oldNamespace;
}

/* leave the namespace */
void popNamespace()
{
  currentNamespace = namespaceStack[--namespaceDepth];
}


/*----------------------------------------------------------------
 * Classes
 *
 * operates on: currentClass, access_level
 */

/* "private" variables */
ClassInfo *classStack[10];
parse_access_t classAccessStack[10];
unsigned long classDepth = 0;

/* start an internal class definition */
void pushClass()
{
  classAccessStack[classDepth] = access_level;
  classStack[classDepth++] = currentClass;
}

/* leave the internal class */
void popClass()
{
  currentClass = classStack[--classDepth];
  access_level = classAccessStack[classDepth];
}


/*----------------------------------------------------------------
 * Templates
 *
 * operates on: currentTemplate
 */

/* "private" variables */
TemplateInfo *templateStack[10];
unsigned long templateDepth = 0;

/* begin a template */
void startTemplate()
{
  currentTemplate = (TemplateInfo *)malloc(sizeof(TemplateInfo));
  vtkParse_InitTemplate(currentTemplate);
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

/*----------------------------------------------------------------
 * Function signatures
 *
 * operates on: currentFunction
 */

/* "private" variables */
int sigClosed = 0;
size_t sigMark[10];
size_t sigLength = 0;
size_t sigAllocatedLength = 0;
unsigned long sigMarkDepth = 0;
char *signature = NULL;

/* start a new signature */
void startSig()
{
  signature = NULL;
  sigLength = 0;
  sigAllocatedLength = 0;
  sigClosed = 0;
  sigMarkDepth = 0;
  sigMark[0] = 0;
}

/* get the signature */
const char *getSig()
{
  return signature;
}

/* get the signature length */
size_t getSigLength()
{
  return sigLength;
}

/* reset the sig to the specified length */
void resetSig(size_t n)
{
  if (n < sigLength)
    {
    sigLength = n;
    }
}

/* reallocate Signature if n chars cannot be appended */
void checkSigSize(size_t n)
{
  const char *ccp;

  if (sigAllocatedLength == 0)
    {
    sigLength = 0;
    sigAllocatedLength = 80 + n;
    signature = vtkParse_NewString(data->Strings, sigAllocatedLength);
    signature[0] = '\0';
    }
  else if (sigLength + n > sigAllocatedLength)
    {
    sigAllocatedLength += sigLength + n;
    ccp = signature;
    signature = vtkParse_NewString(data->Strings, sigAllocatedLength);
    strncpy(signature, ccp, sigLength);
    signature[sigLength] = '\0';
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
  if (!sigClosed)
    {
    size_t n = strlen(arg);
    checkSigSize(n);
    if (n > 0)
      {
      memmove(&signature[n], signature, sigLength);
      strncpy(signature, arg, n);
      sigLength += n;
      }
    signature[sigLength] = '\0';
    }
}

/* append text to the end of the signature */
void postSig(const char *arg)
{
  if (!sigClosed)
    {
    size_t n = strlen(arg);
    checkSigSize(n);
    if (n > 0)
      {
      strncpy(&signature[sigLength], arg, n);
      sigLength += n;
      }
    signature[sigLength] = '\0';
    }
}

/* set a mark in the signature for later operations */
void markSig()
{
  sigMark[sigMarkDepth] = 0;
  if (signature)
    {
    sigMark[sigMarkDepth] = sigLength;
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
  if (signature)
    {
    cp = &signature[sigMark[sigMarkDepth]];
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
  if (signature && sigMark[sigMarkDepth] > 0)
    {
    size_t i, m, n, nn;
    char c;
    char *cp;
    cp = signature;
    n = sigLength;
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

/* chop the last space from the signature */
void chopSig(void)
{
  if (signature)
    {
    size_t n = sigLength;
    if (n > 0 && signature[n-1] == ' ')
      {
      signature[n-1] = '\0';
      sigLength--;
      }
    }
}

/*----------------------------------------------------------------
 * Storage type for vars and functions
 */

/* "private" variables */
unsigned int storageType = 0;

/* clear the storage type */
void clearStoredType()
{
  storageType = 0;
}

/* save the storage type */
void setStoredType(unsigned int val)
{
  storageType = val;
}

/* modify the indirection (pointers, refs) in the storage type */
void setStoredTypeIndirection(unsigned int ind)
{
  storageType = (storageType & ~VTK_PARSE_INDIRECT);
  ind = (ind & VTK_PARSE_INDIRECT);
  storageType = (storageType | ind);
}

/* retrieve the storage type */
unsigned int getStoredType()
{
  return storageType;
}

/*----------------------------------------------------------------
 * Array information
 */

/* "private" variables */
unsigned long numberOfDimensions = 0;
const char **arrayDimensions = NULL;

/* clear the array counter */
void clearArray(void)
{
  numberOfDimensions = 0;
  arrayDimensions = NULL;
}

/* add another dimension */
void pushArraySize(const char *size)
{
  vtkParse_AddStringToArray(&arrayDimensions, &numberOfDimensions,
                            vtkstrdup(size));
}

/* add another dimension to the front */
void pushArrayFront(const char *size)
{
  unsigned long i;

  vtkParse_AddStringToArray(&arrayDimensions, &numberOfDimensions, 0);

  for (i = numberOfDimensions-1; i > 0; i--)
    {
    arrayDimensions[i] = arrayDimensions[i-1];
    }

  arrayDimensions[0] = vtkstrdup(size);
}

/* get the number of dimensions */
unsigned long getArrayNDims()
{
  return numberOfDimensions;
}

/* get the whole array */
const char **getArray()
{
  if (numberOfDimensions > 0)
    {
    return arrayDimensions;
    }
  return NULL;
}

/*----------------------------------------------------------------
 * Variables and Parameters
 */

/* "private" variables */
char *currentVarName = 0;
char *currentVarValue = 0;
char *currentId = 0;

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

/* variable value -------------- */

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

/* variable type -------------- */

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
  size_t n;

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

/*----------------------------------------------------------------
 * Specifically for function pointers, the scope (i.e. class) that
 * the function is a method of.
 */

const char *pointerScopeStack[10];
unsigned long pointerScopeDepth = 0;

/* save the scope for scoped method pointers */
void scopeSig(const char *scope)
{
  if (scope && scope[0] != '\0')
    {
    postSig(scope);
    }
  else
    {
    scope = NULL;
    }
  pointerScopeStack[pointerScopeDepth++] = vtkstrdup(scope);
}

/* get the scope back */
const char *getScope()
{
  return pointerScopeStack[--pointerScopeDepth];
}

/*----------------------------------------------------------------
 * Function stack
 *
 * operates on: currentFunction
 */

/* "private" variables */
FunctionInfo *functionStack[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
const char *functionVarNameStack[10];
const char *functionTypeIdStack[10];
unsigned long functionDepth = 0;

void pushFunction()
{
  functionStack[functionDepth] = currentFunction;
  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  vtkParse_InitFunction(currentFunction);
  if (!functionStack[functionDepth])
    {
    startSig();
    }
  functionVarNameStack[functionDepth] = vtkstrdup(getVarName());
  functionTypeIdStack[functionDepth] = vtkstrdup(getTypeId());
  clearVarName();
  clearTypeId();
  functionDepth++;
  functionStack[functionDepth] = 0;
}

void popFunction()
{
  FunctionInfo *newFunction = currentFunction;

  --functionDepth;
  currentFunction = functionStack[functionDepth];
  clearVarName();
  if (functionVarNameStack[functionDepth])
    {
    setVarName(functionVarNameStack[functionDepth]);
    }
  clearTypeId();
  if (functionTypeIdStack[functionDepth])
    {
    setTypeId(functionTypeIdStack[functionDepth]);
    }

  functionStack[functionDepth+1] = newFunction;
}

FunctionInfo *getFunction()
{
  return functionStack[functionDepth+1];
}

/*----------------------------------------------------------------
 * Utility methods
 */

/* prepend a scope:: to a name */
void prepend_scope(char *cp, const char *arg)
{
  size_t i, j, m, n;
  unsigned long depth;

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

  for (j = m; j > i; j--)
    {
    cp[j+n+1] = cp[j-1];
    }
  for (j = 0; j < n; j++)
    {
    cp[j+i] = arg[j];
    }
  cp[n+i] = ':'; cp[n+i+1] = ':';
  cp[m+n+2] = '\0';
}

/* expand a type by including pointers from another */
unsigned int add_indirection(unsigned int type1, unsigned int type2)
{
  unsigned int ptr1 = (type1 & VTK_PARSE_POINTER_MASK);
  unsigned int ptr2 = (type2 & VTK_PARSE_POINTER_MASK);
  unsigned int reverse = 0;
  unsigned int result;

  /* one of type1 or type2 will only have VTK_PARSE_INDIRECT, but
   * we don't know which one. */
  result = ((type1 & ~VTK_PARSE_POINTER_MASK) |
            (type2 & ~VTK_PARSE_POINTER_MASK));

  while (ptr2)
    {
    reverse = ((reverse << 2) | (ptr2 & VTK_PARSE_POINTER_LOWMASK));
    ptr2 = ((ptr2 >> 2) & VTK_PARSE_POINTER_MASK);
    }

  while (reverse)
    {
    ptr1 = ((ptr1 << 2) | (reverse & VTK_PARSE_POINTER_LOWMASK));
    reverse = ((reverse >> 2) & VTK_PARSE_POINTER_MASK);

    /* make sure we don't exceed the VTK_PARSE_POINTER bitfield */
    if ((ptr1 & VTK_PARSE_POINTER_MASK) != ptr1)
      {
      ptr1 = VTK_PARSE_BAD_INDIRECT;
      break;
      }
    }

  return (ptr1 | result);
}

/* There is only one array, so add any parenthetical indirection to it */
unsigned int add_indirection_to_array(unsigned int type)
{
  unsigned int ptrs = (type & VTK_PARSE_POINTER_MASK);
  unsigned int result = (type & ~VTK_PARSE_POINTER_MASK);
  unsigned int reverse = 0;

  if ((type & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT)
    {
    return (result | VTK_PARSE_BAD_INDIRECT);
    }

  while (ptrs)
    {
    reverse = ((reverse << 2) | (ptrs & VTK_PARSE_POINTER_LOWMASK));
    ptrs = ((ptrs >> 2) & VTK_PARSE_POINTER_MASK);
    }

  /* I know the reversal makes no difference, but it is still
   * nice to add the pointers in the correct order, just in
   * case const pointers are thrown into the mix. */
  while (reverse)
    {
    pushArrayFront("");
    reverse = ((reverse >> 2) & VTK_PARSE_POINTER_MASK);
    }

  return result;
}



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1223 "vtkParse.y"
{
  const char   *str;
  unsigned int  integer;
}
/* Line 193 of yacc.c.  */
#line 1560 "vtkParse.tab.c"
        YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1573 "vtkParse.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)                                        \
    do                                                                        \
      {                                                                        \
        YYSIZE_T yynewbytes;                                                \
        YYCOPY (&yyptr->Stack, Stack, yysize);                                \
        Stack = &yyptr->Stack;                                                \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                                \
      }                                                                        \
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5875

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  153
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  238
/* YYNRULES -- Number of rules.  */
#define YYNRULES  609
/* YYNRULES -- Number of states.  */
#define YYNSTATES  962

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   149,     2,     2,     2,   145,   143,     2,
     136,   137,   144,   148,   135,   147,   152,   146,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   134,   130,
     138,   133,   139,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   140,     2,   141,   151,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   131,   150,   132,   142,     2,     2,     2,
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
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     7,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      40,    42,    45,    48,    51,    57,    58,    66,    72,    79,
      80,    82,    86,    91,    95,    96,   102,   103,   109,   114,
     115,   120,   121,   125,   127,   129,   131,   132,   133,   137,
     141,   143,   145,   147,   149,   151,   153,   155,   157,   159,
     161,   163,   165,   167,   170,   173,   175,   180,   183,   186,
     190,   195,   201,   205,   206,   208,   211,   213,   217,   219,
     223,   227,   228,   230,   231,   233,   235,   237,   239,   243,
     244,   250,   251,   257,   258,   264,   267,   269,   270,   272,
     274,   277,   281,   283,   284,   289,   296,   300,   303,   309,
     313,   319,   324,   329,   330,   337,   338,   345,   346,   353,
     354,   361,   364,   365,   366,   371,   374,   376,   378,   379,
     380,   388,   390,   394,   396,   399,   402,   405,   409,   413,
     418,   422,   423,   429,   431,   432,   437,   438,   439,   445,
     446,   447,   453,   454,   455,   461,   463,   465,   466,   468,
     469,   473,   475,   478,   481,   484,   487,   490,   493,   497,
     500,   504,   507,   511,   514,   518,   521,   523,   525,   528,
     530,   533,   534,   535,   543,   544,   548,   549,   553,   554,
     560,   563,   566,   567,   570,   571,   575,   577,   580,   584,
     586,   587,   593,   595,   597,   598,   599,   605,   606,   612,
     613,   616,   618,   622,   625,   626,   627,   630,   632,   633,
     638,   642,   643,   644,   650,   651,   653,   654,   658,   663,
     666,   667,   670,   671,   672,   677,   680,   681,   683,   686,
     687,   693,   696,   697,   703,   705,   707,   709,   711,   713,
     714,   715,   716,   723,   725,   726,   729,   732,   736,   738,
     741,   743,   746,   747,   749,   751,   755,   757,   759,   761,
     762,   764,   765,   768,   770,   773,   774,   779,   780,   781,
     784,   786,   788,   790,   792,   795,   798,   801,   804,   807,
     811,   815,   816,   822,   824,   826,   827,   833,   835,   837,
     839,   841,   843,   845,   847,   850,   853,   856,   859,   862,
     865,   868,   870,   872,   874,   876,   878,   880,   882,   884,
     886,   888,   890,   892,   894,   896,   898,   900,   902,   904,
     906,   908,   910,   912,   914,   917,   919,   921,   924,   926,
     928,   930,   932,   934,   937,   941,   946,   948,   951,   953,
     956,   960,   965,   967,   970,   972,   975,   978,   980,   982,
     984,   985,   989,   992,   995,   997,   999,  1002,  1005,  1007,
    1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,  1025,  1027,
    1029,  1031,  1033,  1035,  1037,  1039,  1041,  1043,  1045,  1047,
    1049,  1051,  1053,  1055,  1057,  1059,  1061,  1063,  1065,  1067,
    1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,  1085,  1087,
    1089,  1091,  1093,  1095,  1098,  1100,  1102,  1103,  1107,  1109,
    1112,  1113,  1121,  1122,  1123,  1124,  1134,  1135,  1141,  1142,
    1148,  1149,  1150,  1161,  1162,  1170,  1171,  1172,  1173,  1183,
    1190,  1191,  1199,  1200,  1208,  1209,  1217,  1218,  1226,  1227,
    1235,  1236,  1244,  1245,  1253,  1254,  1262,  1263,  1273,  1274,
    1284,  1289,  1294,  1302,  1303,  1305,  1308,  1311,  1315,  1319,
    1321,  1323,  1325,  1327,  1329,  1331,  1333,  1335,  1337,  1339,
    1341,  1343,  1345,  1347,  1349,  1351,  1353,  1355,  1357,  1359,
    1361,  1363,  1365,  1367,  1369,  1371,  1373,  1375,  1377,  1379,
    1381,  1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,  1399,
    1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,  1417,  1419,
    1421,  1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,  1439,
    1441,  1443,  1445,  1447,  1449,  1451,  1453,  1455,  1457,  1459,
    1462,  1464,  1466,  1468,  1470,  1472,  1474,  1476,  1478,  1480,
    1482,  1484,  1485,  1488,  1490,  1492,  1494,  1496,  1498,  1500,
    1502,  1504,  1505,  1508,  1509,  1512,  1514,  1516,  1518,  1520,
    1522,  1523,  1528,  1529,  1534,  1535,  1540,  1541,  1546,  1547,
    1552,  1553,  1558,  1559,  1562,  1563,  1566,  1568,  1570,  1572,
    1574,  1576,  1578,  1580,  1582,  1584,  1586,  1588,  1590,  1592,
    1594,  1596,  1598,  1600,  1602,  1606,  1610,  1614,  1616,  1618
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     154,     0,    -1,   155,    -1,    -1,    -1,   155,   156,   157,
      -1,   215,    -1,   213,    -1,   164,    -1,   160,    -1,   162,
      -1,   159,    -1,   199,    -1,   275,    -1,   186,    -1,   165,
      -1,   232,    -1,   158,    -1,   335,    -1,   305,   130,    -1,
     130,    -1,   216,   165,    -1,   216,   232,    -1,   216,   196,
      -1,    34,    12,   131,   155,   132,    -1,    -1,   163,    40,
     315,   161,   131,   155,   132,    -1,   163,    40,   131,   383,
     132,    -1,   163,    40,   315,   133,   307,   130,    -1,    -1,
      32,    -1,   172,   305,   130,    -1,   216,   172,   305,   130,
      -1,   168,   277,   130,    -1,    -1,   168,   326,   166,   277,
     130,    -1,    -1,   326,   168,   167,   277,   130,    -1,   169,
     131,   173,   132,    -1,    -1,   172,   305,   170,   179,    -1,
      -1,   172,   171,   179,    -1,    20,    -1,    19,    -1,    21,
      -1,    -1,    -1,   173,   174,   176,    -1,   173,   175,   134,
      -1,    23,    -1,    24,    -1,    25,    -1,   213,    -1,   164,
      -1,   178,    -1,   199,    -1,   275,    -1,   186,    -1,   165,
      -1,   236,    -1,   177,    -1,   335,    -1,   129,   389,    -1,
     305,   130,    -1,   130,    -1,   216,   168,   277,   130,    -1,
     216,   236,    -1,    33,   197,    -1,    33,   216,   197,    -1,
      33,   172,   305,   130,    -1,    33,   216,   172,   305,   130,
      -1,    33,   237,   253,    -1,    -1,   180,    -1,   134,   181,
      -1,   182,    -1,   181,   135,   182,    -1,   305,    -1,    30,
     184,   305,    -1,   185,   183,   305,    -1,    -1,    30,    -1,
      -1,   185,    -1,    23,    -1,    24,    -1,    25,    -1,   189,
     277,   130,    -1,    -1,   189,   326,   187,   277,   130,    -1,
      -1,   326,   189,   188,   277,   130,    -1,    -1,   191,   190,
     131,   192,   132,    -1,    22,   305,    -1,    22,    -1,    -1,
     193,    -1,   194,    -1,   193,   135,    -1,   193,   135,   194,
      -1,   314,    -1,    -1,   314,   133,   195,   363,    -1,   319,
     308,   314,   133,   384,   130,    -1,   172,   305,   198,    -1,
     172,   198,    -1,   131,   383,   132,   384,   130,    -1,   134,
     384,   130,    -1,    39,   319,   212,   205,   130,    -1,    39,
     168,   204,   130,    -1,    39,   189,   204,   130,    -1,    -1,
      39,   326,   189,   200,   204,   130,    -1,    -1,    39,   189,
     326,   201,   204,   130,    -1,    -1,    39,   326,   168,   202,
     204,   130,    -1,    -1,    39,   168,   326,   203,   204,   130,
      -1,   207,   205,    -1,    -1,    -1,   205,   135,   206,   207,
      -1,   281,   212,    -1,   284,    -1,   209,    -1,    -1,    -1,
     295,   136,   210,   265,   137,   211,   291,    -1,   208,    -1,
      41,   214,   130,    -1,   305,    -1,    38,   305,    -1,   308,
     248,    -1,   308,   242,    -1,   311,   308,   248,    -1,   311,
     308,   242,    -1,    41,    40,   305,   130,    -1,    36,   138,
     139,    -1,    -1,    36,   138,   217,   218,   139,    -1,   220,
      -1,    -1,   218,   135,   219,   220,    -1,    -1,    -1,   221,
     327,   282,   222,   228,    -1,    -1,    -1,   223,   227,   282,
     224,   228,    -1,    -1,    -1,   225,   216,   282,   226,   228,
      -1,    20,    -1,    38,    -1,    -1,   229,    -1,    -1,   133,
     230,   231,    -1,   371,    -1,   231,   371,    -1,   233,   253,
      -1,   238,   253,    -1,   234,   253,    -1,   235,   253,    -1,
     319,   249,    -1,   319,   308,   249,    -1,   308,   257,    -1,
     316,   308,   257,    -1,   308,   239,    -1,   319,   308,   244,
      -1,   237,   253,    -1,   308,   248,   130,    -1,   319,   249,
      -1,   238,    -1,   257,    -1,   316,   257,    -1,   239,    -1,
     319,   244,    -1,    -1,    -1,   242,   136,   240,   265,   137,
     241,   250,    -1,    -1,    35,   243,   319,    -1,    -1,   246,
     245,   250,    -1,    -1,   248,   136,   247,   265,   137,    -1,
      35,   359,    -1,   254,   250,    -1,    -1,   250,   251,    -1,
      -1,    37,   252,   377,    -1,    26,    -1,   133,    18,    -1,
     131,   383,   132,    -1,   130,    -1,    -1,   256,   136,   255,
     265,   137,    -1,   314,    -1,   312,    -1,    -1,    -1,   260,
     258,   262,   259,   250,    -1,    -1,   256,   136,   261,   265,
     137,    -1,    -1,   134,   263,    -1,   264,    -1,   263,   135,
     264,    -1,   305,   389,    -1,    -1,    -1,   266,   267,    -1,
     269,    -1,    -1,   267,   135,   268,   269,    -1,   267,   135,
      71,    -1,    -1,    -1,   270,   322,   282,   271,   272,    -1,
      -1,   273,    -1,    -1,   133,   274,   363,    -1,   319,   276,
     278,   130,    -1,   284,   272,    -1,    -1,   280,   278,    -1,
      -1,    -1,   278,   135,   279,   280,    -1,   281,   276,    -1,
      -1,   330,    -1,   294,   297,    -1,    -1,   286,   292,   137,
     283,   288,    -1,   295,   297,    -1,    -1,   287,   293,   137,
     285,   288,    -1,   136,    -1,    10,    -1,    11,    -1,    10,
      -1,    11,    -1,    -1,    -1,    -1,   136,   289,   265,   137,
     290,   291,    -1,   298,    -1,    -1,   291,    28,    -1,   291,
      26,    -1,   291,    37,   389,    -1,   282,    -1,   330,   282,
      -1,   284,    -1,   330,   284,    -1,    -1,   295,    -1,   314,
      -1,   314,   134,   296,    -1,    15,    -1,    13,    -1,    14,
      -1,    -1,   298,    -1,    -1,   299,   300,    -1,   301,    -1,
     300,   301,    -1,    -1,   140,   302,   303,   141,    -1,    -1,
      -1,   304,   363,    -1,   306,    -1,   307,    -1,   314,    -1,
     312,    -1,   308,   306,    -1,   311,   306,    -1,   311,   307,
      -1,   310,   311,    -1,   312,   311,    -1,   308,   310,   311,
      -1,   308,   312,   311,    -1,    -1,   308,    36,   309,   312,
     311,    -1,   315,    -1,    72,    -1,    -1,   315,   138,   313,
     369,   139,    -1,     4,    -1,     5,    -1,     3,    -1,     9,
      -1,     8,    -1,     6,    -1,     7,    -1,   142,     4,    -1,
     142,     5,    -1,   142,     3,    -1,   142,     9,    -1,   142,
       8,    -1,   142,     6,    -1,   142,     7,    -1,    95,    -1,
      94,    -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,
     102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,    -1,
     107,    -1,    96,    -1,    97,    -1,     3,    -1,     5,    -1,
       4,    -1,     9,    -1,     8,    -1,     6,    -1,     7,    -1,
     317,    -1,   318,    -1,   317,   318,    -1,    28,    -1,    34,
      -1,    34,    12,    -1,    29,    -1,    32,    -1,    30,    -1,
      31,    -1,   320,    -1,   316,   320,    -1,   326,   316,   320,
      -1,   316,   326,   316,   320,    -1,   321,    -1,   321,   330,
      -1,   323,    -1,   323,   316,    -1,   323,   316,   326,    -1,
     323,   316,   326,   316,    -1,   323,    -1,   323,   330,    -1,
     324,    -1,   326,   324,    -1,   324,   326,    -1,   327,    -1,
     312,    -1,   307,    -1,    -1,    38,   325,   305,    -1,   172,
     305,    -1,    22,   305,    -1,    26,    -1,    27,    -1,    26,
      27,    -1,    27,    26,    -1,   329,    -1,   328,    -1,     6,
      -1,     7,    -1,     8,    -1,     9,    -1,     3,    -1,     4,
      -1,     5,    -1,    94,    -1,    95,    -1,    98,    -1,    99,
      -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,   107,    -1,    96,    -1,    97,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,
      -1,    89,    -1,    90,    -1,    91,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,    85,
      -1,    86,    -1,    87,    -1,    88,    -1,    92,    -1,    93,
      -1,   331,    -1,   334,    -1,   334,   331,    -1,   143,    -1,
     144,    -1,    -1,   144,   333,   326,    -1,   332,    -1,   334,
     332,    -1,    -1,   108,   136,   314,   135,   336,   322,   137,
      -1,    -1,    -1,    -1,   109,   136,   337,   314,   135,   338,
     322,   339,   137,    -1,    -1,   110,   136,   340,   314,   137,
      -1,    -1,   111,   136,   341,   314,   137,    -1,    -1,    -1,
     112,   136,   314,   135,   342,   323,   343,   135,   384,   137,
      -1,    -1,   113,   136,   314,   135,   344,   323,   137,    -1,
      -1,    -1,    -1,   114,   136,   345,   314,   135,   346,   323,
     347,   137,    -1,   115,   136,   314,   135,   323,   137,    -1,
      -1,   116,   136,   314,   135,   348,   323,   137,    -1,    -1,
     120,   136,   314,   135,   349,   323,   137,    -1,    -1,   117,
     136,   314,   135,   350,   323,   137,    -1,    -1,   121,   136,
     314,   135,   351,   323,   137,    -1,    -1,   118,   136,   314,
     135,   352,   323,   137,    -1,    -1,   122,   136,   314,   135,
     353,   323,   137,    -1,    -1,   119,   136,   314,   135,   354,
     323,   137,    -1,    -1,   123,   136,   314,   135,   355,   323,
     137,    -1,    -1,   124,   136,   314,   135,   356,   323,   135,
      13,   137,    -1,    -1,   125,   136,   314,   135,   357,   323,
     135,    13,   137,    -1,   126,   136,   314,   137,    -1,   127,
     136,   314,   137,    -1,   128,   136,   314,   135,   314,   358,
     137,    -1,    -1,   135,    -1,   136,   137,    -1,   140,   141,
      -1,    42,   140,   141,    -1,    43,   140,   141,    -1,   138,
      -1,   139,    -1,   135,    -1,   133,    -1,   360,    -1,   145,
      -1,   144,    -1,   146,    -1,   147,    -1,   148,    -1,   149,
      -1,   142,    -1,   143,    -1,   150,    -1,   151,    -1,    42,
      -1,    43,    -1,    48,    -1,    49,    -1,    50,    -1,    51,
      -1,    52,    -1,    53,    -1,    54,    -1,    57,    -1,    58,
      -1,    59,    -1,    60,    -1,    61,    -1,    55,    -1,    56,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    66,
      -1,    67,    -1,    68,    -1,    69,    -1,    70,    -1,    39,
      -1,    38,    -1,    20,    -1,    19,    -1,    21,    -1,    36,
      -1,    23,    -1,    25,    -1,    24,    -1,    26,    -1,    29,
      -1,    32,    -1,    30,    -1,    34,    -1,    40,    -1,    35,
      -1,    22,    -1,    37,    -1,    46,    -1,    45,    -1,    44,
      -1,    47,    -1,    15,    -1,    13,    -1,    14,    -1,    16,
      -1,    17,    -1,    12,    -1,    18,    -1,   366,    -1,   363,
     366,    -1,   375,    -1,   377,    -1,   381,    -1,   360,    -1,
     134,    -1,   152,    -1,    72,    -1,   361,    -1,   362,    -1,
     329,    -1,   328,    -1,    -1,   365,   367,    -1,   364,    -1,
     138,    -1,   139,    -1,   366,    -1,   133,    -1,   135,    -1,
     367,    -1,   130,    -1,    -1,   369,   372,    -1,    -1,   370,
     368,    -1,   373,    -1,   364,    -1,   371,    -1,   133,    -1,
     135,    -1,    -1,   138,   374,   369,   139,    -1,    -1,   140,
     376,   365,   141,    -1,    -1,   136,   378,   365,   137,    -1,
      -1,    10,   379,   365,   137,    -1,    -1,    11,   380,   365,
     137,    -1,    -1,   131,   382,   370,   132,    -1,    -1,   383,
     385,    -1,    -1,   384,   386,    -1,   386,    -1,   130,    -1,
     387,    -1,   389,    -1,   388,    -1,    72,    -1,    71,    -1,
     360,    -1,   134,    -1,   152,    -1,   138,    -1,   139,    -1,
     133,    -1,   135,    -1,   361,    -1,   362,    -1,   327,    -1,
      73,    -1,   131,   383,   132,    -1,   140,   383,   141,    -1,
     390,   383,   137,    -1,   136,    -1,    10,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1391,  1391,  1393,  1395,  1394,  1405,  1406,  1407,  1408,
    1409,  1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,
    1419,  1422,  1423,  1424,  1431,  1438,  1438,  1440,  1443,  1445,
    1446,  1453,  1454,  1457,  1459,  1458,  1462,  1461,  1466,  1480,
    1480,  1482,  1482,  1486,  1487,  1488,  1490,  1492,  1491,  1500,
    1504,  1505,  1506,  1509,  1510,  1511,  1512,  1513,  1514,  1515,
    1516,  1517,  1518,  1519,  1520,  1521,  1524,  1525,  1528,  1529,
    1530,  1531,  1532,  1534,  1535,  1538,  1541,  1542,  1545,  1547,
    1549,  1553,  1554,  1557,  1558,  1561,  1562,  1563,  1574,  1576,
    1575,  1579,  1578,  1583,  1583,  1596,  1597,  1599,  1600,  1603,
    1604,  1605,  1608,  1609,  1609,  1617,  1620,  1621,  1624,  1625,
    1633,  1634,  1635,  1637,  1636,  1640,  1639,  1643,  1642,  1646,
    1645,  1650,  1652,  1653,  1653,  1656,  1659,  1660,  1663,  1664,
    1663,  1668,  1702,  1705,  1706,  1707,  1709,  1711,  1713,  1717,
    1724,  1727,  1726,  1737,  1738,  1738,  1742,  1744,  1742,  1746,
    1748,  1746,  1750,  1752,  1750,  1763,  1764,  1766,  1767,  1770,
    1770,  1780,  1781,  1789,  1790,  1791,  1792,  1795,  1798,  1799,
    1800,  1803,  1804,  1807,  1808,  1811,  1812,  1813,  1814,  1817,
    1818,  1822,  1826,  1821,  1838,  1838,  1842,  1842,  1853,  1852,
    1861,  1865,  1874,  1875,  1878,  1878,  1879,  1880,  1888,  1889,
    1893,  1892,  1900,  1901,  1909,  1910,  1909,  1928,  1928,  1931,
    1932,  1935,  1936,  1939,  1945,  1946,  1946,  1949,  1950,  1950,
    1951,  1955,  1957,  1955,  1981,  1982,  1985,  1985,  1993,  1996,
    2042,  2043,  2045,  2046,  2046,  2049,  2052,  2053,  2057,  2058,
    2058,  2077,  2078,  2078,  2096,  2097,  2099,  2103,  2105,  2108,
    2109,  2110,  2109,  2115,  2117,  2118,  2119,  2120,  2123,  2124,
    2128,  2129,  2133,  2134,  2137,  2138,  2141,  2142,  2143,  2146,
    2147,  2150,  2150,  2153,  2154,  2157,  2157,  2160,  2161,  2161,
    2168,  2169,  2172,  2173,  2176,  2178,  2180,  2184,  2186,  2188,
    2190,  2192,  2192,  2197,  2200,  2203,  2203,  2218,  2219,  2220,
    2221,  2222,  2223,  2224,  2225,  2226,  2227,  2228,  2229,  2230,
    2231,  2232,  2233,  2234,  2235,  2236,  2237,  2238,  2239,  2240,
    2241,  2242,  2243,  2244,  2245,  2252,  2253,  2254,  2255,  2256,
    2257,  2258,  2266,  2270,  2271,  2275,  2276,  2277,  2278,  2279,
    2280,  2281,  2289,  2290,  2295,  2300,  2307,  2308,  2312,  2313,
    2317,  2321,  2327,  2328,  2332,  2333,  2335,  2339,  2340,  2342,
    2344,  2344,  2346,  2348,  2352,  2353,  2354,  2359,  2366,  2367,
    2370,  2371,  2372,  2373,  2374,  2375,  2376,  2377,  2378,  2379,
    2380,  2381,  2382,  2383,  2384,  2385,  2386,  2387,  2388,  2389,
    2390,  2393,  2394,  2395,  2396,  2397,  2398,  2399,  2400,  2402,
    2403,  2405,  2406,  2408,  2409,  2411,  2412,  2414,  2415,  2417,
    2418,  2438,  2439,  2440,  2443,  2446,  2447,  2447,  2462,  2463,
    2480,  2480,  2490,  2491,  2491,  2490,  2500,  2500,  2510,  2510,
    2519,  2519,  2519,  2552,  2551,  2562,  2563,  2563,  2562,  2572,
    2590,  2590,  2595,  2595,  2600,  2600,  2605,  2605,  2610,  2610,
    2615,  2615,  2620,  2620,  2625,  2625,  2630,  2630,  2647,  2647,
    2661,  2698,  2736,  2788,  2789,  2796,  2797,  2798,  2799,  2800,
    2801,  2802,  2803,  2804,  2807,  2808,  2809,  2810,  2811,  2812,
    2813,  2814,  2815,  2816,  2817,  2818,  2819,  2820,  2821,  2822,
    2823,  2824,  2825,  2826,  2827,  2828,  2829,  2830,  2831,  2832,
    2833,  2834,  2835,  2836,  2837,  2838,  2839,  2840,  2841,  2844,
    2845,  2846,  2847,  2848,  2849,  2850,  2851,  2852,  2853,  2854,
    2855,  2856,  2857,  2858,  2859,  2860,  2861,  2862,  2863,  2864,
    2865,  2868,  2869,  2870,  2871,  2872,  2873,  2874,  2881,  2882,
    2885,  2886,  2887,  2888,  2919,  2919,  2920,  2921,  2922,  2923,
    2924,  2947,  2948,  2950,  2951,  2952,  2954,  2955,  2956,  2958,
    2959,  2961,  2962,  2964,  2965,  2968,  2969,  2972,  2973,  2974,
    2978,  2977,  2991,  2991,  2995,  2995,  2997,  2997,  2999,  2999,
    3003,  3003,  3008,  3009,  3011,  3012,  3015,  3016,  3019,  3020,
    3021,  3022,  3023,  3024,  3025,  3025,  3025,  3025,  3025,  3025,
    3026,  3026,  3027,  3028,  3031,  3034,  3037,  3040,  3040,  3040
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "VTK_ID", "QT_ID", "StdString",
  "UnicodeString", "OSTREAM", "ISTREAM", "LP", "LA", "STRING_LITERAL",
  "INT_LITERAL", "HEX_LITERAL", "OCT_LITERAL", "FLOAT_LITERAL",
  "CHAR_LITERAL", "ZERO", "STRUCT", "CLASS", "UNION", "ENUM", "PUBLIC",
  "PRIVATE", "PROTECTED", "CONST", "VOLATILE", "MUTABLE", "STATIC",
  "VIRTUAL", "EXPLICIT", "INLINE", "FRIEND", "EXTERN", "OPERATOR",
  "TEMPLATE", "THROW", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "NEW",
  "DELETE", "STATIC_CAST", "DYNAMIC_CAST", "CONST_CAST",
  "REINTERPRET_CAST", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT", "OP_DOT_POINTER", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR",
  "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
  "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ", "OP_LOGIC_AND",
  "OP_LOGIC_OR", "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ",
  "OP_LOGIC_GEQ", "ELLIPSIS", "DOUBLE_COLON", "OTHER", "VOID", "BOOL",
  "FLOAT", "DOUBLE", "LONG_DOUBLE", "INT", "UNSIGNED_INT", "SHORT",
  "UNSIGNED_SHORT", "LONG", "UNSIGNED_LONG", "LONG_LONG",
  "UNSIGNED_LONG_LONG", "INT64__", "UNSIGNED_INT64__", "CHAR",
  "SIGNED_CHAR", "UNSIGNED_CHAR", "SIGNED", "UNSIGNED", "SSIZE_T",
  "SIZE_T", "IdType", "FloatType", "TypeInt8", "TypeUInt8", "TypeInt16",
  "TypeUInt16", "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64",
  "TypeFloat32", "TypeFloat64", "SetMacro", "GetMacro", "SetStringMacro",
  "GetStringMacro", "SetClampMacro", "SetObjectMacro", "GetObjectMacro",
  "BooleanMacro", "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "';'", "'{'", "'}'", "'='", "':'", "','", "'('",
  "')'", "'<'", "'>'", "'['", "']'", "'~'", "'&'", "'*'", "'%'", "'/'",
  "'-'", "'+'", "'!'", "'|'", "'^'", "'.'", "$accept", "translation_unit",
  "opt_declaration_seq", "@1", "declaration", "template_declaration",
  "linkage_specification", "namespace_definition", "@2",
  "namespace_alias_definition", "opt_inline", "forward_declaration",
  "class_definition", "@3", "@4", "class_specifier", "class_head", "@5",
  "@6", "class_key", "member_specification", "@7",
  "member_access_specifier", "member_declaration",
  "template_member_declaration", "friend_declaration", "opt_base_clause",
  "base_clause", "base_specifier_list", "base_specifier", "opt_virtual",
  "opt_access_specifier", "access_specifier", "enum_definition", "@8",
  "@9", "enum_specifier", "@10", "enum_head", "opt_enumerator_list",
  "enumerator_list", "enumerator_definition", "@11",
  "nested_variable_initialization", "ignored_class", "ignored_class_body",
  "typedef_declaration", "@12", "@13", "@14", "@15",
  "typedef_declarator_list", "typedef_declarator_list_cont", "@16",
  "typedef_declarator", "typedef_direct_declarator",
  "function_direct_declarator", "@17", "@18", "typedef_declarator_id",
  "using_declaration", "using_id", "using_directive", "template_head",
  "@19", "template_parameter_list", "@20", "template_parameter", "@21",
  "@22", "@23", "@24", "@25", "@26", "class_or_typename",
  "opt_template_parameter_initializer", "template_parameter_initializer",
  "@27", "template_parameter_value", "function_definition",
  "function_declaration", "nested_method_declaration",
  "nested_operator_declaration", "method_definition", "method_declaration",
  "operator_declaration", "conversion_function", "@28", "@29",
  "conversion_function_id", "@30", "operator_function_nr", "@31",
  "operator_function_sig", "@32", "operator_function_id", "function_nr",
  "function_specifier_clause", "function_specifier", "@33",
  "function_body", "function_sig", "@34", "function_name",
  "structor_declaration", "@35", "@36", "structor_sig", "@37",
  "opt_ctor_initializer", "mem_initializer_list", "mem_initializer",
  "parameter_declaration_clause", "@38", "parameter_list", "@39",
  "parameter_declaration", "@40", "@41", "opt_initializer", "initializer",
  "@42", "variable_declaration", "init_declarator_id",
  "opt_declarator_list", "declarator_list_cont", "@43", "init_declarator",
  "opt_ptr_operator_seq", "direct_abstract_declarator", "@44",
  "direct_declarator", "@45", "p_or_lp_or_la", "lp_or_la",
  "opt_array_or_parameters", "@46", "@47", "function_qualifiers",
  "abstract_declarator", "declarator", "opt_declarator_id",
  "declarator_id", "bitfield_size", "opt_array_decorator_seq",
  "array_decorator_seq", "@48", "array_decorator_seq_impl",
  "array_decorator", "@49", "array_size_specifier", "@50", "id_expression",
  "unqualified_id", "qualified_id", "nested_name_specifier", "@51",
  "identifier_sig", "scope_operator_sig", "template_id", "@52",
  "simple_id", "identifier", "decl_specifier_seq",
  "decl_specifier_seq_impl", "decl_specifier", "store_type", "type_ptr",
  "type_post", "type", "type_specifier", "unqualified_type_specifier",
  "@53", "cv_qualifier", "simple_type_specifier", "type_name",
  "primitive_type", "ptr_operator_seq", "reference", "pointer", "@54",
  "pointer_seq", "declaration_macro", "@55", "@56", "@57", "@58", "@59",
  "@60", "@61", "@62", "@63", "@64", "@65", "@66", "@67", "@68", "@69",
  "@70", "@71", "@72", "@73", "@74", "@75", "@76", "opt_comma",
  "operator_id", "operator_id_no_delim", "keyword", "literal",
  "constant_expression", "common_bracket_item", "any_bracket_contents",
  "bracket_pitem", "any_bracket_item", "braces_item",
  "angle_bracket_contents", "braces_contents", "angle_bracket_pitem",
  "angle_bracket_item", "angle_brackets_sig", "@77", "brackets_sig", "@78",
  "parentheses_sig", "@79", "@80", "@81", "braces_sig", "@82",
  "ignored_items", "ignored_expression", "ignored_item",
  "ignored_item_no_semi", "ignored_braces", "ignored_brackets",
  "ignored_parentheses", "ignored_left_parenthesis", 0
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
      59,   123,   125,    61,    58,    44,    40,    41,    60,    62,
      91,    93,   126,    38,    42,    37,    47,    45,    43,    33,
     124,    94,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   153,   154,   155,   156,   155,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   158,   158,   158,   159,   161,   160,   160,   162,   163,
     163,   164,   164,   165,   166,   165,   167,   165,   168,   170,
     169,   171,   169,   172,   172,   172,   173,   174,   173,   173,
     175,   175,   175,   176,   176,   176,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   177,   177,   178,   178,
     178,   178,   178,   179,   179,   180,   181,   181,   182,   182,
     182,   183,   183,   184,   184,   185,   185,   185,   186,   187,
     186,   188,   186,   190,   189,   191,   191,   192,   192,   193,
     193,   193,   194,   195,   194,   196,   197,   197,   198,   198,
     199,   199,   199,   200,   199,   201,   199,   202,   199,   203,
     199,   204,   205,   206,   205,   207,   208,   208,   210,   211,
     209,   212,   213,   214,   214,   214,   214,   214,   214,   215,
     216,   217,   216,   218,   219,   218,   221,   222,   220,   223,
     224,   220,   225,   226,   220,   227,   227,   228,   228,   230,
     229,   231,   231,   232,   232,   232,   232,   233,   234,   234,
     234,   235,   235,   236,   236,   237,   237,   237,   237,   238,
     238,   240,   241,   239,   243,   242,   245,   244,   247,   246,
     248,   249,   250,   250,   252,   251,   251,   251,   253,   253,
     255,   254,   256,   256,   258,   259,   257,   261,   260,   262,
     262,   263,   263,   264,   265,   266,   265,   267,   268,   267,
     267,   270,   271,   269,   272,   272,   274,   273,   275,   276,
     277,   277,   278,   279,   278,   280,   281,   281,   282,   283,
     282,   284,   285,   284,   286,   286,   286,   287,   287,   288,
     289,   290,   288,   288,   291,   291,   291,   291,   292,   292,
     293,   293,   294,   294,   295,   295,   296,   296,   296,   297,
     297,   299,   298,   300,   300,   302,   301,   303,   304,   303,
     305,   305,   306,   306,   307,   307,   307,   308,   308,   308,
     308,   309,   308,   310,   311,   313,   312,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   315,   315,   315,   315,   315,
     315,   315,   316,   317,   317,   318,   318,   318,   318,   318,
     318,   318,   319,   319,   319,   319,   320,   320,   321,   321,
     321,   321,   322,   322,   323,   323,   323,   324,   324,   324,
     325,   324,   324,   324,   326,   326,   326,   326,   327,   327,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   330,   330,   330,   331,   332,   333,   332,   334,   334,
     336,   335,   337,   338,   339,   335,   340,   335,   341,   335,
     342,   343,   335,   344,   335,   345,   346,   347,   335,   335,
     348,   335,   349,   335,   350,   335,   351,   335,   352,   335,
     353,   335,   354,   335,   355,   335,   356,   335,   357,   335,
     335,   335,   335,   358,   358,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   362,   362,   362,   362,   362,   362,   362,   363,   363,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   365,   365,   366,   366,   366,   367,   367,   367,   368,
     368,   369,   369,   370,   370,   371,   371,   372,   372,   372,
     374,   373,   376,   375,   378,   377,   379,   377,   380,   377,
     382,   381,   383,   383,   384,   384,   385,   385,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   387,   388,   389,   390,   390,   390
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     5,     0,     7,     5,     6,     0,
       1,     3,     4,     3,     0,     5,     0,     5,     4,     0,
       4,     0,     3,     1,     1,     1,     0,     0,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     4,     2,     2,     3,
       4,     5,     3,     0,     1,     2,     1,     3,     1,     3,
       3,     0,     1,     0,     1,     1,     1,     1,     3,     0,
       5,     0,     5,     0,     5,     2,     1,     0,     1,     1,
       2,     3,     1,     0,     4,     6,     3,     2,     5,     3,
       5,     4,     4,     0,     6,     0,     6,     0,     6,     0,
       6,     2,     0,     0,     4,     2,     1,     1,     0,     0,
       7,     1,     3,     1,     2,     2,     2,     3,     3,     4,
       3,     0,     5,     1,     0,     4,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     1,     1,     0,     1,     0,
       3,     1,     2,     2,     2,     2,     2,     2,     3,     2,
       3,     2,     3,     2,     3,     2,     1,     1,     2,     1,
       2,     0,     0,     7,     0,     3,     0,     3,     0,     5,
       2,     2,     0,     2,     0,     3,     1,     2,     3,     1,
       0,     5,     1,     1,     0,     0,     5,     0,     5,     0,
       2,     1,     3,     2,     0,     0,     2,     1,     0,     4,
       3,     0,     0,     5,     0,     1,     0,     3,     4,     2,
       0,     2,     0,     0,     4,     2,     0,     1,     2,     0,
       5,     2,     0,     5,     1,     1,     1,     1,     1,     0,
       0,     0,     6,     1,     0,     2,     2,     3,     1,     2,
       1,     2,     0,     1,     1,     3,     1,     1,     1,     0,
       1,     0,     2,     1,     2,     0,     4,     0,     0,     2,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     3,
       3,     0,     5,     1,     1,     0,     5,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     2,     3,     4,     1,     2,     1,     2,
       3,     4,     1,     2,     1,     2,     2,     1,     1,     1,
       0,     3,     2,     2,     1,     1,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     0,     3,     1,     2,
       0,     7,     0,     0,     0,     9,     0,     5,     0,     5,
       0,     0,    10,     0,     7,     0,     0,     0,     9,     6,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     9,     0,     9,
       4,     4,     7,     0,     1,     2,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     4,     1,    29,   374,   375,   376,   370,   371,
     372,   373,    44,    43,    45,    96,   364,   365,   335,   338,
     340,   341,   339,   336,   184,     0,   360,     0,     0,   294,
     391,   392,   393,   394,   395,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   396,   397,   398,   409,   410,
     377,   378,   389,   390,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,     0,     5,    17,    11,
       9,    10,     0,     8,    15,   236,     0,    41,    14,   236,
      93,    12,     7,     6,     0,    16,     0,     0,     0,     0,
     179,     0,    13,     0,   280,   359,     0,     0,     0,   358,
     282,   293,     0,   332,   333,     0,   342,   346,   348,   354,
       0,   357,   369,   368,    18,   299,   297,   298,   302,   303,
     301,   300,   312,   311,   323,   324,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   363,   281,     0,   283,
     366,   367,   337,     0,   141,     0,   374,   375,   376,   370,
     371,   372,   373,   339,   336,   377,   378,   389,   390,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   236,
      41,   236,   359,   358,     0,     0,     0,     0,     0,     0,
     133,     0,     0,     0,   422,   426,   428,     0,     0,   435,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   306,   304,   305,   309,   310,   308,
     307,     0,   414,   415,     0,   232,     0,    34,   237,   411,
     418,   412,    46,    73,   362,     0,    89,     0,     0,    21,
      41,    23,    22,     0,     0,   199,   582,   163,   165,   166,
     164,   181,    19,   291,   171,     0,   169,   204,   284,     0,
     283,   282,   287,   285,   286,   288,   295,     0,     0,   343,
       0,   334,   247,   248,     0,   180,   186,     0,   167,   192,
       0,   232,   224,     0,   269,     0,   203,   264,   347,   349,
     356,    36,    91,     0,   355,   283,     3,   185,     0,   140,
     146,   361,   337,     0,   122,     0,   119,   362,     0,   115,
     299,   297,   298,   302,   303,   301,   300,   131,   127,   122,
     126,   269,   264,   117,   113,   134,     0,   132,   184,   136,
     135,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   325,   327,   326,   330,   331,   329,   328,
     582,    25,     0,    33,   231,   235,   236,   413,   419,    47,
       0,    42,    74,    31,    73,    88,   236,    97,   363,   362,
       0,   202,     0,   215,     0,   207,   209,   289,   290,   561,
     362,   170,     0,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   498,   499,   493,   494,   495,   496,   497,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   472,   471,
       0,   469,   470,     0,   480,   481,   475,   474,   476,   477,
     478,   479,   482,   483,   190,   473,   192,   188,   191,   200,
       0,   226,   229,   225,   260,     0,     0,   241,   270,     0,
     172,   168,   203,     0,   350,   236,   236,   344,     0,     4,
       0,   143,     0,     0,     0,   111,   121,   125,   236,   112,
     236,     0,   128,   236,   236,   139,   138,   137,   420,     0,
       0,     0,   430,   433,     0,     0,   440,   444,   448,   452,
     442,   446,   450,   454,   456,   458,   460,   461,     0,     0,
       0,     0,   417,   233,     0,    50,    51,    52,    38,     0,
       0,    85,    86,    87,    83,    75,    76,    81,    78,    40,
       0,     0,    98,    99,   102,    32,   202,   374,   375,   376,
     370,   371,   372,   373,   608,   609,   536,   532,   533,   531,
     534,   535,   537,   512,   511,   513,   525,   515,   517,   516,
     518,   519,   521,   520,   522,   524,   514,   526,   510,   509,
     523,   484,   485,   529,   528,   527,   530,   592,   591,   603,
     587,   582,   198,   598,   594,   599,   607,   596,   597,   582,
     595,   602,   593,   600,   601,   583,   586,   588,   590,   589,
     582,     0,   221,     0,     0,   215,     0,   205,     0,   345,
       0,     0,   465,   466,   187,   215,   196,   194,     0,   193,
     215,   228,     0,   242,   261,   275,   272,   273,   267,   268,
     266,   265,   351,     0,     0,    24,   144,   142,   262,   155,
     156,   262,   262,   123,     0,     0,   110,   215,     0,     0,
       0,   423,   427,   429,     0,     0,   436,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,    27,
       0,     0,     3,   236,    35,     0,     0,     0,    65,    54,
      59,    48,    61,    55,    58,    56,    53,     0,    60,     0,
     176,   177,    57,     0,     0,   358,     0,     0,    62,    49,
       0,    84,     0,    82,     0,    90,    94,   100,   103,   584,
       0,     0,     0,   182,   216,   217,     0,   292,     0,   210,
     211,     0,   192,   576,   578,   546,   580,   568,   544,   569,
     574,   570,   296,   572,   545,   550,   549,   543,   547,   548,
     566,   567,   562,   565,   540,   541,   542,   467,   468,     0,
       0,   197,     0,   554,   555,   227,   553,   538,   249,   278,
     274,    37,    92,   146,   245,   246,   244,   147,   262,   269,
     263,   150,   153,   236,   120,   116,     0,   118,   114,     0,
     352,     0,   431,     0,     0,   439,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   464,     0,    28,     4,
     234,     0,    68,     0,     0,   358,     0,    63,   236,    67,
     173,    64,     0,   178,   175,   203,    79,    77,    80,   101,
       0,     0,   604,   605,   606,   192,   218,   262,   208,     0,
     213,   206,   551,   551,   563,   551,   561,   551,   189,   195,
     201,   539,   250,   243,   253,     0,     0,   145,   157,   258,
       0,   262,   238,   157,   157,   124,   129,   421,   353,   424,
       0,   434,   437,   441,   445,   449,   453,   443,   447,   451,
     455,     0,     0,   462,    26,   582,   584,   107,   362,     0,
      69,    72,     0,   174,   104,   105,   585,   183,   220,   221,
     222,   212,     0,     0,     0,     0,     0,     0,   215,   276,
     279,   159,   148,   158,   239,   259,   151,   154,   254,     0,
     584,     0,     0,     0,     0,     0,    70,   106,     0,    66,
     219,   224,   557,   558,   577,   556,   552,   579,   560,   581,
     559,   564,   575,   571,   573,     0,     0,   249,   130,   425,
       0,   438,   457,   459,   584,   109,    71,   223,   251,   160,
     161,   240,   256,   255,     0,   432,     0,   254,   162,   257,
     108,   252
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    87,    88,    89,    90,   511,    91,
      92,    93,    94,   376,   465,    95,    96,   384,   243,   277,
     379,   519,   520,   681,   682,   683,   381,   382,   525,   526,
     704,   700,   527,    98,   386,   466,    99,   247,   100,   531,
     532,   533,   820,   251,   802,   877,   101,   484,   480,   483,
     478,   313,   476,   773,   314,   327,   328,   647,   908,   329,
     102,   199,   103,   104,   310,   470,   763,   471,   472,   848,
     473,   853,   474,   854,   641,   902,   903,   936,   949,   105,
     106,   107,   108,   688,   689,   690,   110,   393,   825,   111,
     163,   285,   446,   286,   615,   287,   288,   448,   619,   750,
     257,   289,   620,   265,   691,   396,   722,   267,   605,   607,
     719,   720,   601,   602,   714,   889,   715,   716,   921,   452,
     453,   622,   112,   291,   234,   374,   673,   235,   236,   767,
     937,   292,   758,   768,   293,   843,   898,   957,   938,   850,
     455,   769,   770,   631,   457,   458,   459,   626,   627,   759,
     845,   846,   200,   114,   192,   158,   394,   117,   118,   193,
     399,   120,   121,   303,   123,   124,   806,   126,   127,   779,
     128,   129,   165,   468,   131,   132,   133,   238,   239,   240,
     372,   241,   134,   650,   343,   781,   909,   344,   345,   654,
     860,   655,   348,   784,   911,   658,   662,   659,   663,   660,
     664,   661,   665,   666,   667,   797,   444,   737,   738,   739,
     755,   756,   892,   925,   926,   931,   608,   894,   741,   742,
     743,   836,   744,   837,   745,   835,   832,   833,   746,   834,
     392,   821,   595,   596,   597,   598,   599,   600
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -862
static const yytype_int16 yypact[] =
{
    -862,    66,   109,  -862,  4009,   198,   253,   263,   268,   312,
     338,   371,  -862,  -862,  -862,  4857,   120,   102,  -862,  -862,
    -862,  -862,   125,   199,  -862,    88,  -862,  5207,  4501,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
      89,   131,   145,   183,   222,   229,   258,   267,   283,   304,
     316,   329,   330,   333,   136,   141,   149,   154,   174,   179,
     187,   195,   203,   213,   221,   228,   231,   239,   272,   296,
     303,   308,   326,   331,   337,  -862,   475,  -862,  -862,  -862,
    -862,  -862,   178,  -862,  -862,    84,   134,  4857,  -862,    84,
    -862,  -862,  -862,  -862,  5102,  -862,    27,    27,    27,    27,
    -862,   351,  -862,   257,  -862,   372,  4679,   439,  4857,   108,
    -862,   378,  5627,   514,  -862,  4525,  -862,    34,   514,   468,
    5417,  -862,  -862,  -862,  -862,   -16,   -11,    -2,    24,    78,
      83,   124,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,   387,  -862,  4873,   439,
    -862,  -862,   389,  5312,   391,  4857,   -16,   -11,    -2,    24,
      78,    83,   124,  -862,   510,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,    80,
    4857,    80,  -862,   439,  5627,  4396,  5417,  4857,  4857,   398,
    -862,  4728,  4857,  4927,  -862,  -862,  -862,  4927,  4927,  -862,
    4927,  4927,  4927,  4927,  4927,  4927,  4927,  4927,  4927,  4927,
    4927,  4927,  4927,  4927,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,   339,  -862,   478,   402,  -862,  4396,  -862,  -862,  -862,
    -862,    34,  -862,   421,   355,   426,  -862,   428,  4857,  -862,
    4857,  -862,  -862,  4907,  5522,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,   424,  -862,  -862,  -862,   439,
      13,   430,  -862,  -862,  -862,  -862,  -862,  4857,  4873,  -862,
    5522,  -862,  -862,  -862,  5022,  -862,  -862,   431,  -862,  -862,
     432,  -862,   429,  3753,   433,  4752,   439,   275,  -862,   468,
    -862,  -862,  -862,  5627,  -862,   439,  -862,  -862,  5522,  -862,
     251,  -862,  -862,   440,  -862,  4396,  -862,   129,   441,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,   101,   435,  -862,  -862,  -862,   442,  -862,  5022,  -862,
    -862,  4728,   443,  4927,  4927,  4927,   444,   445,  4927,   446,
     447,   449,   450,   451,   452,   453,   454,   459,   461,   463,
     437,   464,   465,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,   470,   468,  -862,   474,  -862,   226,  -862,  -862,    57,
    4452,  -862,  -862,  -862,   421,  -862,   226,  4927,  -862,   362,
    4752,  -862,   934,   473,   531,  -862,   479,  -862,  -862,  -862,
    -862,  -862,  5627,   472,   476,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
     477,  -862,  -862,   481,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,    46,  -862,
      99,  -862,  -862,  -862,  -862,   480,  4396,  -862,  -862,   483,
    -862,  -862,   439,    63,   514,   226,   226,  -862,  5732,   486,
     233,  -862,  5768,    81,   579,  -862,   484,  -862,    34,  -862,
      34,   121,  -862,    34,    34,  -862,  -862,  -862,  -862,   490,
     489,   491,  -862,  -862,   492,  5627,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  4927,  1084,
     418,   498,  -862,  -862,   500,  -862,  -862,  -862,  -862,  3881,
     497,  -862,  -862,  -862,   526,   499,  -862,   602,  -862,  -862,
     503,   505,   504,  -862,   502,  -862,   509,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,   501,  -862,   439,   378,   473,  4857,  -862,  3184,  -862,
     506,   507,  -862,  -862,    46,   473,  -862,  -862,   627,  -862,
     473,  -862,  3484,  -862,  -862,  -862,   483,  -862,  -862,  -862,
    -862,  -862,  -862,   520,   521,  -862,  -862,  -862,  4558,  -862,
    -862,  4558,  4558,  -862,   522,   523,  -862,   473,   524,   527,
    5627,  -862,  -862,  -862,  5627,  5627,  -862,   519,  5627,  5627,
    5627,  5627,  5627,  5627,  5627,  5627,  5627,  5627,   525,  -862,
     528,   439,  -862,    34,  -862,  4137,  4801,    39,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  4242,  -862,    27,
    -862,  -862,  -862,   529,  4752,   -13,  4347,  4525,  -862,  -862,
    4857,  -862,  4452,  -862,  4857,  -862,  -862,  4927,  -862,  -862,
    1234,  1384,  1534,  -862,   530,  -862,  5627,  -862,   532,   535,
    -862,    39,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,   536,
      52,  -862,   537,  -862,  -862,  3484,  -862,  -862,   256,   538,
    -862,  -862,  -862,   251,  -862,  -862,  -862,  -862,  3739,   433,
    -862,  -862,  -862,    34,  -862,  -862,   539,  -862,  -862,   540,
      34,  5627,  -862,   548,  5627,  -862,   549,   551,   557,   558,
     560,   564,   566,   571,   576,   577,  -862,   581,  -862,   582,
    -862,  4574,  -862,   533,    27,    13,  4907,  -862,   226,  -862,
    -862,  -862,   534,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    3484,  1834,  -862,  -862,  -862,  -862,   590,  4558,  -862,  4857,
    -862,    46,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,   572,  3484,  -862,   587,  -862,
     584,  4558,  -862,   587,   587,  -862,  -862,  -862,  -862,  -862,
     589,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,   650,   654,  -862,  -862,  -862,  -862,  -862,   369,  4574,
    -862,  -862,   592,  -862,  3484,  -862,  -862,    46,  -862,  -862,
    -862,  -862,  2584,  2734,  2434,  2884,  3334,  3034,   473,  -862,
    3484,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,   588,
    -862,   591,   593,   596,  1684,  1984,  -862,  -862,   383,  -862,
    -862,   429,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,   597,  3634,   256,    58,  -862,
    2134,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  3634,
    -862,  -862,  -862,  -862,    39,  -862,  2284,  -862,  -862,  -862,
    -862,    58
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -862,  -862,  -270,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,   216,   -78,  -862,  -862,    -6,  -862,  -862,  -862,    12,
    -862,  -862,  -862,  -862,  -862,  -862,   366,  -862,  -862,    37,
    -862,  -862,   227,   235,  -862,  -862,    26,  -862,  -862,  -862,
    -862,    45,  -862,  -862,   -48,  -813,   237,  -862,  -862,  -862,
    -862,  -151,   438,  -862,   -15,  -862,  -862,  -862,  -862,   455,
     238,  -862,  -862,  -445,  -862,  -862,  -862,     8,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -328,  -862,  -862,  -862,   655,
    -862,  -862,  -862,    86,    93,    47,   658,  -862,  -862,  -157,
    -862,  -250,  -862,  -862,  -862,  -196,  -277,  -413,  -862,  -862,
     -94,  -862,  -862,  -122,  -104,  -862,  -862,  -862,  -862,  -862,
    -862,   -54,  -568,  -862,  -862,  -862,  -113,  -862,  -862,  -144,
    -862,  -862,   260,   544,   -92,   493,  -862,   110,  -166,  -587,
    -862,   -61,  -862,  -862,  -862,  -152,  -862,  -862,  -171,  -862,
    -862,  -862,  -106,  -862,    18,  -724,  -862,  -862,   162,  -862,
    -862,  -862,     5,   -58,     2,     4,  -862,   -19,   -27,    -4,
    -862,    85,  -209,    44,  -862,   666,     0,   -91,  -862,  -643,
      82,   -63,  -862,    42,  -357,  -439,  -131,  -125,   550,   552,
    -862,  -862,   271,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,  -862,
    -862,  -862,  -862,  -862,  -862,  -862,  -862,  -274,  -350,  -294,
    -752,  -570,  -386,  -469,  -100,  -862,   -41,  -862,  -861,  -862,
    -862,  -862,  -862,  -862,    49,  -862,  -862,  -862,  -862,  -862,
    -342,  -819,  -862,  -780,  -862,  -862,  -634,  -862
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -417
static const yytype_int16 yytable[] =
{
     119,   202,   298,   290,   125,   340,   115,   245,   116,   113,
     445,   159,   266,   258,   259,   260,    97,   157,   461,   294,
     156,   189,   371,   315,   159,   315,   249,   195,   509,   642,
     157,   279,   201,   614,   844,   591,   469,   718,   740,   190,
     318,   886,   593,   807,   339,   460,   130,   749,   122,   544,
     545,   109,   752,   191,   771,   772,  -325,   915,   268,    29,
     273,  -327,   723,   724,   445,   917,     3,   304,   884,   196,
    -326,   194,   616,   827,   687,   950,   628,   629,   630,   776,
     515,   516,   517,   617,   952,    29,   953,   830,   958,   331,
     272,   940,   275,   159,   900,   954,  -330,   269,   594,   157,
     268,   639,   244,   279,   253,   917,    16,    17,   116,    -2,
      16,    17,   270,   461,   159,   638,   250,  -283,   592,   640,
     274,   296,  -325,  -203,   301,   956,   278,  -327,   161,   295,
     294,   290,   275,   304,   330,   886,  -326,   237,   859,   269,
     460,   246,   190,   268,   273,   487,   254,   160,   122,  -203,
    -331,   109,   591,   757,   305,  -329,   302,   255,   256,   593,
     886,   159,  -330,   307,   280,   -30,   275,   157,   456,   735,
     311,   300,   299,   290,   401,   586,   886,   232,   233,   618,
      29,   849,   269,   735,   486,   604,   159,   294,   730,   518,
     333,   304,   157,   159,   159,   317,  -328,   305,   159,   157,
     157,   271,   335,   336,   274,   308,   341,   194,   190,   331,
     297,   162,   467,   844,  -230,   594,  -331,   304,   231,  -312,
     268,  -329,   334,   232,   233,  -312,   164,   232,   233,   621,
     803,   316,   454,   319,   513,   592,   280,   482,  -283,   710,
     890,  -271,   397,   398,   159,   304,   159,   711,   301,   296,
     157,   646,   157,   388,   330,   389,   643,   390,   712,   269,
     -39,  -311,  -328,   -39,   905,   242,   190,  -311,   290,   275,
    -325,  -149,   203,   159,   270,  -323,   269,   204,   398,   157,
     332,  -323,   400,   268,   514,   205,   841,  -152,   342,  -149,
     206,   462,   346,   347,   530,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   831,
     207,   609,   315,  -324,   315,   208,   735,   315,   315,  -324,
     959,   332,   269,   209,   402,  -327,   740,   644,  -299,   645,
     935,   210,   648,   649,  -299,  -326,  -325,   305,   391,   211,
    -330,   464,   363,   364,   365,   366,   367,   368,   369,   212,
     294,   757,  -313,   591,   591,   591,  -230,   213,  -313,  -314,
     593,   593,   593,   271,   214,  -314,   740,   215,   636,   232,
     233,   269,   637,   633,   634,   216,   159,   757,   332,   740,
     391,   735,   157,  -297,  -331,   528,   462,   262,  -315,  -297,
     603,  -327,   842,  -298,  -315,   624,  -271,  -316,  -302,  -298,
     332,  -326,   799,  -316,  -302,   304,  -330,   735,   217,   463,
    -329,  -202,   887,  -317,   512,   841,   594,   594,   594,  -317,
     814,   363,   364,   365,   366,   367,   368,   369,   489,   490,
     491,   841,   218,   494,  -318,   398,   592,   592,   592,   219,
    -318,   680,  -303,  -328,   220,   735,  -319,   893,  -303,   895,
    -331,   897,  -319,   735,   735,   735,   735,   735,   735,  -320,
    -321,   735,   221,  -322,   591,  -320,  -321,   222,  -301,  -322,
     370,   593,   534,   223,  -301,   536,  -329,   736,   224,   225,
     226,   227,   228,   229,   230,   383,   -39,   261,   604,   -39,
      29,   736,   535,   -39,    16,    17,   -39,   735,   812,   916,
     875,  -300,  -281,   876,  -416,  -416,   671,  -300,   632,  -328,
     735,    29,   670,   946,   875,   695,   276,   876,   -95,   697,
     306,   115,   312,   694,   693,   906,   907,   594,   337,   814,
     309,    97,   373,   914,   363,   364,   365,   366,   367,   368,
     369,   332,    18,    19,    20,    21,   173,   592,   174,   521,
     522,   523,    12,    13,    14,   380,   385,   591,   591,   387,
     395,   130,   451,   696,   593,   593,  -202,   447,   449,   463,
     475,   479,   485,  -271,   506,   290,   717,   657,   488,   492,
     493,   495,   496,   591,   497,   498,   499,   500,   501,   502,
     593,   294,   813,   668,   503,   810,   504,   604,   505,   591,
     508,   507,   159,   510,   271,   279,   593,   315,   157,   513,
    -214,   721,   610,   606,   612,    25,   611,   623,   635,   643,
     594,   594,   613,   625,   736,   651,   652,   656,   653,   672,
     674,   699,   703,   705,   702,   708,   268,   706,   713,   707,
     592,   592,   709,   851,   275,   751,   594,   747,   748,   202,
     761,   762,   774,   775,   777,   858,   785,   778,   798,   811,
     796,   888,   594,   912,   883,   826,   592,   913,   275,   828,
     829,   805,   159,   838,   840,   269,   856,   857,   157,  -277,
     201,   808,   592,   805,   290,   861,   863,   801,   864,   736,
     305,   694,   805,   815,   865,   866,   159,   867,   159,   250,
     159,   868,   157,   869,   157,   816,   157,   528,   870,   818,
     881,   871,   872,   899,   874,   736,   882,   308,   873,   696,
     901,   904,   919,   332,   910,   939,   332,   332,   941,   308,
     942,   696,   780,   943,   948,   679,   782,   783,   280,   817,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     529,   701,   819,   736,   684,   880,   685,   686,   855,   252,
     391,   736,   736,   736,   736,   736,   736,   481,   804,   736,
     477,   847,   391,   809,   264,   891,   920,   947,   275,   692,
     375,   391,   297,   800,   450,   951,   961,   852,   760,   281,
     698,   377,   534,   378,   930,   896,     0,   159,   780,   839,
       0,     0,   815,   157,     0,   736,   878,     0,     0,     0,
       0,     0,     0,     0,     0,   879,     0,     0,   736,     0,
       0,     0,     0,     0,     0,   159,     0,     0,     0,     0,
       0,   157,     0,     0,   721,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   332,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   780,     0,     0,   862,     0,     0,     0,
       0,     0,     0,     0,     0,   159,     0,     0,     0,     0,
       0,   157,     0,     0,   918,     0,     0,     0,     0,     0,
       0,   391,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   332,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,   581,   582,   583,   584,   585,
     586,     0,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,   581,   669,   583,   584,   585,
     586,     0,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,   581,   822,   583,   584,   585,
     586,     0,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,   581,     0,   583,   584,   585,
     586,     0,   587,   588,   589,   823,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,   581,     0,   583,   584,   585,
     586,   824,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,   581,   944,   583,   584,   585,
     586,     0,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   885,   581,     0,   583,   584,   585,
     586,     0,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   945,   581,     0,   583,   584,   585,
     586,     0,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   581,     0,   583,   584,   585,
     586,   955,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,   577,   578,   579,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   960,   581,     0,   583,   584,   585,
     586,     0,   587,   588,   589,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   590,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   928,   726,   929,   922,   728,   923,
     730,     0,   753,   754,   733,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,   922,   728,   923,
     730,   924,   753,   754,   733,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,   922,   728,   923,
     730,   927,   753,   754,   733,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,   922,   728,   923,
     730,   932,   753,   754,   733,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,   922,   728,   923,
     730,     0,   753,   754,   733,   934,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,   727,   728,   729,
     730,     0,   731,   732,   733,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,   727,   728,   729,
     730,     0,   731,   933,   733,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   726,     0,     0,   728,     0,
     730,     0,   753,   754,   733,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,   537,   538,   539,
     540,   541,   542,   543,   723,   724,   546,   547,   548,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,     0,     0,   561,   562,     0,   563,     0,   564,   565,
     566,   567,   568,   569,   570,     0,   571,   572,   573,   574,
     575,   576,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   419,   420,   421,   422,
     423,   424,   425,   426,   427,     0,   725,     0,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,   175,   176,
     177,   178,   179,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   320,   321,   322,   323,   324,   325,   326,   764,
     765,     0,     0,     0,     0,     0,   320,   321,   322,   323,
     324,   325,   326,   282,   283,   726,     0,     0,   728,     0,
     730,     0,   731,     0,   733,     0,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   734,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   766,     0,     0,     0,     0,
       0,    86,   232,   233,     5,     6,     7,     8,     9,    10,
      11,     0,     0,     0,     0,    86,   232,   233,     0,     0,
      12,    13,    14,    15,     0,     0,     0,    16,    17,    18,
      19,    20,    21,   173,   675,   174,    24,    25,     0,    26,
      27,     0,   676,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    29,     0,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
     677,   678,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,    86,     0,     0,     0,     0,    12,    13,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,     0,    23,    24,    25,     0,    26,    27,     0,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    29,     0,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,     0,    85,
       5,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,    86,     0,     0,     0,     0,    12,    13,    14,   248,
       0,     0,     0,    16,    17,    18,    19,    20,    21,   173,
       0,   174,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,   248,     0,     0,     0,    16,    17,
      18,    19,    20,    21,   173,     0,   174,    24,     0,    86,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
       5,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,   248,
       0,     0,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   320,
     321,   322,   323,   324,   325,   326,   282,   283,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,   135,   136,   137,   138,   139,
     140,   141,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   521,   522,   523,     0,     0,
       0,     0,   524,     0,     0,     0,     0,     0,     0,    86,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   135,   136,   137,   138,   139,   140,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   282,   283,     0,    86,   197,
       0,   198,     0,     0,     0,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     284,   320,   321,   322,   323,   324,   325,   326,   764,   765,
       0,     0,     0,    29,     0,     0,     0,   135,   136,   137,
     138,   139,   140,   141,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,     0,     0,    29,     0,     0,     0,
       0,     0,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     0,    86,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   135,   136,   137,   138,   139,   140,   141,     0,
       0,     0,     0,     0,   766,     0,     0,     0,     0,     0,
      86,     0,     0,     0,     0,   875,     0,     0,   876,     0,
       0,     0,     0,     0,    24,   263,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   135,   136,   137,   138,   139,   140,   141,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,   136,   137,   138,   139,
     140,   141,     0,   338,   263,     0,     0,     0,     0,     0,
       0,     0,     0,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   284,   263,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,   137,   138,   139,   140,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     0,     0,     0,   197,
       0,     0,     0,     0,     0,     0,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     135,   136,   137,   138,   139,   140,   141,     0,     0,     0,
      86,     0,     0,    29,     0,     0,   135,   136,   137,   138,
     139,   140,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   263,
     135,   136,   137,   138,   139,   140,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
     320,   321,   322,   323,   324,   325,   326,     0,     0,     0,
       0,     0,   284,    86,     0,     0,     0,     0,     0,     0,
       0,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,     0,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,    86,     0,     0,     0,     0,
       0,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   403,   404,     0,     0,     0,    86,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   166,   167,   168,   169,   170,
     171,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,   248,     0,     0,     0,    16,    17,
      18,    19,    20,    21,   173,     0,   174,    24,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   428,     0,   429,   430,     0,
     431,   432,   433,     0,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     166,   167,   168,   169,   170,   171,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,    15,
       0,     0,     0,    16,    17,    18,    19,    20,    21,   173,
       0,   174,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   166,   167,   168,   169,   170,
     171,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,   248,     0,     0,     0,    16,    17,
      18,    19,    20,    21,   173,     0,   174,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     166,   167,   168,   169,   170,   171,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,    15,
       0,     0,     0,     0,     0,    18,    19,    20,    21,   173,
       0,   174,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   166,   167,   168,   169,   170,
     171,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,   248,     0,     0,     0,     0,     0,
      18,    19,    20,    21,   173,     0,   174,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     166,   167,   168,   169,   170,   171,   172,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    12,    13,    14,   248,
       0,     0,     0,    16,    17,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    29,
       0,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   166,   167,   168,   169,   170,
     171,   172,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,   248,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,   537,   538,   539,   540,   541,   542,   543,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    29,     0,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   188,
       0,     0,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,   187,   188
};

static const yytype_int16 yycheck[] =
{
       4,    28,   127,   125,     4,   201,     4,    99,     4,     4,
     284,    15,   116,   107,   108,   109,     4,    15,   295,   125,
      15,    27,   231,   189,    28,   191,   104,    27,   370,   474,
      28,   122,    28,   446,   758,   392,   306,   605,   608,    27,
     191,   821,   392,   677,   201,   295,     4,   615,     4,    10,
      11,     4,   620,    27,   641,   642,    72,   876,   116,    72,
     118,    72,    10,    11,   338,   878,     0,   130,   820,    27,
      72,    27,    26,   716,   519,   936,    13,    14,    15,   647,
      23,    24,    25,    37,    26,    72,    28,   721,   949,   195,
     117,   910,   119,    97,   846,    37,    72,   116,   392,    97,
     158,    20,    97,   194,   104,   918,    26,    27,   104,     0,
      26,    27,   116,   390,   118,   472,   104,   130,   392,    38,
     118,   125,   138,   136,   130,   944,   122,   138,    26,   125,
     236,   253,   159,   196,   195,   915,   138,    95,   781,   158,
     390,    99,   130,   201,   202,   341,   104,    27,   104,   136,
      72,   104,   509,   622,   158,    72,   130,   130,   131,   509,
     940,   165,   138,   163,   122,    40,   193,   165,   293,   608,
     165,   129,   128,   295,   278,   136,   956,   143,   144,   133,
      72,   768,   201,   622,   341,   394,   190,   293,   136,   132,
     196,   254,   190,   197,   198,   190,    72,   201,   202,   197,
     198,   116,   197,   198,   202,   163,   202,   163,   196,   315,
     125,    12,   303,   937,   130,   509,   138,   280,    40,   130,
     278,   138,   196,   143,   144,   136,   138,   143,   144,   130,
     675,   189,   293,   191,   135,   509,   194,   136,   130,   581,
     827,   140,   269,   270,   248,   308,   250,   589,   254,   253,
     248,   130,   250,   248,   315,   250,   135,   253,   600,   278,
     131,   130,   138,   134,   851,   131,   254,   136,   390,   296,
      72,    20,   136,   277,   278,   130,   295,   136,   305,   277,
     195,   136,   277,   341,   376,   136,   755,    36,   203,    38,
     136,   295,   207,   208,   386,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   722,
     136,   402,   478,   130,   480,   136,   755,   483,   484,   136,
     954,   236,   341,   136,   280,    72,   896,   478,   130,   480,
     898,   136,   483,   484,   136,    72,   138,   341,   253,   136,
      72,   299,     3,     4,     5,     6,     7,     8,     9,   136,
     456,   820,   130,   710,   711,   712,   130,   136,   136,   130,
     710,   711,   712,   278,   136,   136,   936,   136,   135,   143,
     144,   390,   139,   465,   466,   136,   380,   846,   293,   949,
     295,   820,   380,   130,    72,   380,   390,   130,   130,   136,
     394,   138,   136,   130,   136,   456,   140,   130,   130,   136,
     315,   138,   672,   136,   136,   468,   138,   846,   136,   134,
      72,   136,   825,   130,   372,   884,   710,   711,   712,   136,
     697,     3,     4,     5,     6,     7,     8,     9,   343,   344,
     345,   900,   136,   348,   130,   462,   710,   711,   712,   136,
     136,   519,   130,    72,   136,   884,   130,   833,   136,   835,
     138,   837,   136,   892,   893,   894,   895,   896,   897,   130,
     130,   900,   136,   130,   821,   136,   136,   136,   130,   136,
     131,   821,   387,   136,   136,   390,   138,   608,     3,     4,
       5,     6,     7,     8,     9,   130,   131,   136,   697,   134,
      72,   622,   130,   131,    26,    27,   134,   936,   694,   130,
     131,   130,   130,   134,    26,    27,   510,   136,   464,   138,
     949,    72,   510,   130,   131,   519,   138,   134,   131,   519,
     131,   519,    12,   519,   519,   853,   854,   821,   130,   806,
     139,   519,   130,   875,     3,     4,     5,     6,     7,     8,
       9,   456,    28,    29,    30,    31,    32,   821,    34,    23,
      24,    25,    19,    20,    21,   134,   130,   914,   915,   131,
     136,   519,   133,   519,   914,   915,   136,   136,   136,   134,
     130,   130,   130,   140,   137,   697,   603,   495,   135,   135,
     135,   135,   135,   940,   135,   135,   135,   135,   135,   135,
     940,   697,   696,   508,   135,   689,   135,   806,   135,   956,
     135,   137,   606,   133,   519,   696,   956,   773,   606,   135,
     137,   606,   140,   134,   137,    36,   140,   137,   132,   135,
     914,   915,   141,   140,   755,   135,   137,   135,   137,   131,
     130,   134,    30,   130,   135,   133,   694,   132,   137,   135,
     914,   915,   133,   768,   671,    18,   940,   141,   141,   676,
     130,   130,   130,   130,   130,   780,   137,   130,   130,   130,
     135,    71,   956,    13,   130,   135,   940,    13,   695,   137,
     135,   675,   676,   137,   137,   694,   137,   137,   676,   141,
     676,   687,   956,   687,   806,   137,   137,   675,   137,   820,
     694,   687,   696,   697,   137,   137,   700,   137,   702,   687,
     704,   137,   700,   137,   702,   700,   704,   702,   137,   704,
     804,   135,   135,   141,   132,   846,   808,   675,   137,   675,
     133,   137,   130,   638,   135,   137,   641,   642,   137,   687,
     137,   687,   650,   137,   137,   519,   654,   655,   696,   702,
     658,   659,   660,   661,   662,   663,   664,   665,   666,   667,
     384,   524,   707,   884,   519,   803,   519,   519,   773,   104,
     675,   892,   893,   894,   895,   896,   897,   329,   675,   900,
     315,   763,   687,   687,   116,   829,   889,   921,   805,   519,
     236,   696,   697,   673,   291,   937,   957,   769,   626,   123,
     519,   241,   707,   241,   894,   836,    -1,   801,   716,   750,
      -1,    -1,   806,   801,    -1,   936,   801,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   803,    -1,    -1,   949,    -1,
      -1,    -1,    -1,    -1,    -1,   829,    -1,    -1,    -1,    -1,
      -1,   829,    -1,    -1,   829,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   768,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   781,    -1,    -1,   784,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   879,    -1,    -1,    -1,    -1,
      -1,   879,    -1,    -1,   879,    -1,    -1,    -1,    -1,    -1,
      -1,   806,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   827,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   851,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,   133,   134,   135,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,    -1,    -1,   134,    -1,
     136,    -1,   138,   139,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,   131,    -1,    -1,   134,    -1,
     136,    -1,   138,    -1,   140,    -1,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
      -1,   142,   143,   144,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,   142,   143,   144,    -1,    -1,
      19,    20,    21,    22,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    36,    -1,    38,    39,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,   130,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    -1,   142,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    -1,   142,    38,
      -1,    40,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      35,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      -1,    -1,    -1,    72,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,   142,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,    -1,    -1,   131,    -1,    -1,   134,    -1,
      -1,    -1,    -1,    -1,    35,    36,   142,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
     142,    -1,    -1,    72,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    36,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    35,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   142,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,   142,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    -1,   135,   136,    -1,
     138,   139,   140,    -1,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   154,   155,     0,   156,     3,     4,     5,     6,     7,
       8,     9,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    32,    34,    35,    36,    38,    39,    41,    72,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   130,   142,   157,   158,   159,
     160,   162,   163,   164,   165,   168,   169,   172,   186,   189,
     191,   199,   213,   215,   216,   232,   233,   234,   235,   238,
     239,   242,   275,   305,   306,   307,   308,   310,   311,   312,
     314,   315,   316,   317,   318,   319,   320,   321,   323,   324,
     326,   327,   328,   329,   335,     3,     4,     5,     6,     7,
       8,     9,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   305,   307,   308,   312,
      27,    26,    12,   243,   138,   325,     3,     4,     5,     6,
       7,     8,     9,    32,    34,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   168,
     172,   189,   307,   312,   316,   319,   326,    38,    40,   214,
     305,   308,   311,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,     3,     4,     5,     6,     7,     8,
       9,    40,   143,   144,   277,   280,   281,   326,   330,   331,
     332,   334,   131,   171,   305,   277,   326,   190,    22,   165,
     172,   196,   232,   319,   326,   130,   131,   253,   253,   253,
     253,   136,   130,    36,   239,   256,   257,   260,   306,   310,
     312,   314,   311,   306,   307,   311,   138,   172,   308,   320,
     326,   318,    10,    11,    35,   244,   246,   248,   249,   254,
     256,   276,   284,   287,   295,   308,   312,   314,   330,   316,
     326,   168,   189,   316,   324,   312,   131,   319,   326,   139,
     217,   305,    12,   204,   207,   281,   326,   305,   204,   326,
       3,     4,     5,     6,     7,     8,     9,   208,   209,   212,
     284,   295,   314,   168,   189,   305,   305,   130,    35,   242,
     248,   308,   314,   337,   340,   341,   314,   314,   345,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,     3,     4,     5,     6,     7,     8,     9,
     131,   315,   333,   130,   278,   276,   166,   331,   332,   173,
     134,   179,   180,   130,   170,   130,   187,   131,   305,   305,
     308,   314,   383,   240,   309,   136,   258,   311,   311,   313,
     305,   257,   316,    42,    43,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,   133,   135,
     136,   138,   139,   140,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   359,   360,   245,   136,   250,   136,
     278,   133,   272,   273,   284,   293,   330,   297,   298,   299,
     244,   249,   312,   134,   326,   167,   188,   320,   326,   155,
     218,   220,   221,   223,   225,   130,   205,   212,   203,   130,
     201,   205,   136,   202,   200,   130,   242,   248,   135,   314,
     314,   314,   135,   135,   314,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   137,   137,   135,   383,
     133,   161,   326,   135,   277,    23,    24,    25,   132,   174,
     175,    23,    24,    25,    30,   181,   182,   185,   305,   179,
     277,   192,   193,   194,   314,   130,   314,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    29,    30,    32,    34,    35,    36,    37,    38,    39,
      40,    42,    43,    44,    45,    46,    47,    71,    72,    73,
     130,   131,   132,   133,   134,   135,   136,   138,   139,   140,
     152,   327,   360,   361,   362,   385,   386,   387,   388,   389,
     390,   265,   266,   312,   315,   261,   134,   262,   369,   320,
     140,   140,   137,   141,   250,   247,    26,    37,   133,   251,
     255,   130,   274,   137,   284,   140,   300,   301,    13,    14,
      15,   296,   316,   277,   277,   132,   135,   139,   327,    20,
      38,   227,   216,   135,   204,   204,   130,   210,   204,   204,
     336,   135,   137,   137,   342,   344,   135,   323,   348,   350,
     352,   354,   349,   351,   353,   355,   356,   357,   314,   132,
     307,   312,   131,   279,   130,    33,    41,   129,   130,   164,
     165,   176,   177,   178,   186,   199,   213,   216,   236,   237,
     238,   257,   275,   305,   308,   312,   316,   319,   335,   134,
     184,   185,   135,    30,   183,   130,   132,   135,   133,   133,
     383,   383,   383,   137,   267,   269,   270,   311,   265,   263,
     264,   305,   259,    10,    11,    72,   131,   133,   134,   135,
     136,   138,   139,   140,   152,   328,   329,   360,   361,   362,
     364,   371,   372,   373,   375,   377,   381,   141,   141,   265,
     252,    18,   265,   138,   139,   363,   364,   366,   285,   302,
     301,   130,   130,   219,    10,    11,   136,   282,   286,   294,
     295,   282,   282,   206,   130,   130,   265,   130,   130,   322,
     323,   338,   323,   323,   346,   137,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   135,   358,   130,   155,
     280,   172,   197,   216,   237,   312,   319,   389,   168,   236,
     253,   130,   248,   257,   249,   312,   305,   182,   305,   194,
     195,   384,   132,   141,   137,   241,   135,   322,   137,   135,
     389,   250,   379,   380,   382,   378,   374,   376,   137,   377,
     137,   366,   136,   288,   298,   303,   304,   220,   222,   282,
     292,   330,   297,   224,   226,   207,   137,   137,   330,   322,
     343,   137,   323,   137,   137,   137,   137,   137,   137,   137,
     137,   135,   135,   137,   132,   131,   134,   198,   305,   172,
     197,   253,   277,   130,   363,   130,   386,   250,    71,   268,
     282,   264,   365,   365,   370,   365,   369,   365,   289,   141,
     363,   133,   228,   229,   137,   282,   228,   228,   211,   339,
     135,   347,    13,    13,   383,   384,   130,   198,   305,   130,
     269,   271,   133,   135,   137,   366,   367,   137,   130,   132,
     367,   368,   137,   139,   141,   265,   230,   283,   291,   137,
     384,   137,   137,   137,   132,   130,   130,   272,   137,   231,
     371,   288,    26,    28,    37,   137,   384,   290,   371,   389,
     130,   291
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;                /* Cause a token to be read.  */

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
        YYSTACK_RELOCATE (yyss);
        YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 4:
#line 1395 "vtkParse.y"
    {
      startSig();
      clearStoredType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 25:
#line 1438 "vtkParse.y"
    { pushNamespace((yyvsp[(3) - (3)].str)); }
    break;

  case 26:
#line 1439 "vtkParse.y"
    { popNamespace(); }
    break;

  case 34:
#line 1459 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(2) - (2)].integer)); }
    break;

  case 36:
#line 1462 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(1) - (2)].integer)); }
    break;

  case 38:
#line 1467 "vtkParse.y"
    {
      const char *name = (currentClass ? currentClass->Name : NULL);
      clearTypeId();
      clearStoredType();
      if (name)
        {
        setTypeId(name);
        setStoredType(guess_id_type(name));
        }
      end_class();
    }
    break;

  case 39:
#line 1480 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].integer)); }
    break;

  case 41:
#line 1482 "vtkParse.y"
    { start_class(NULL, (yyvsp[(1) - (1)].integer)); }
    break;

  case 43:
#line 1486 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 44:
#line 1487 "vtkParse.y"
    { (yyval.integer) = 1; }
    break;

  case 45:
#line 1488 "vtkParse.y"
    { (yyval.integer) = 2; }
    break;

  case 47:
#line 1492 "vtkParse.y"
    {
      startSig();
      clearStoredType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 50:
#line 1504 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 51:
#line 1505 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 52:
#line 1506 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 72:
#line 1532 "vtkParse.y"
    { output_friend_function(); }
    break;

  case 78:
#line 1546 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(1) - (1)].str), access_level, 0); }
    break;

  case 79:
#line 1548 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(3) - (3)].str), (yyvsp[(2) - (3)].integer), 1); }
    break;

  case 80:
#line 1550 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].integer)); }
    break;

  case 81:
#line 1553 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 82:
#line 1554 "vtkParse.y"
    { (yyval.integer) = 1; }
    break;

  case 83:
#line 1557 "vtkParse.y"
    { (yyval.integer) = access_level; }
    break;

  case 85:
#line 1561 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PUBLIC; }
    break;

  case 86:
#line 1562 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PRIVATE; }
    break;

  case 87:
#line 1563 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PROTECTED; }
    break;

  case 89:
#line 1576 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(2) - (2)].integer)); }
    break;

  case 91:
#line 1579 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(1) - (2)].integer)); }
    break;

  case 93:
#line 1583 "vtkParse.y"
    { start_enum((yyvsp[(1) - (1)].str)); }
    break;

  case 94:
#line 1584 "vtkParse.y"
    {
      clearTypeId();
      clearStoredType();
      if ((yyvsp[(1) - (5)].str) != NULL)
        {
        setTypeId((yyvsp[(1) - (5)].str));
        setStoredType(guess_id_type((yyvsp[(1) - (5)].str)));
        }
      end_enum();
    }
    break;

  case 95:
#line 1596 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (2)].str); }
    break;

  case 96:
#line 1597 "vtkParse.y"
    { (yyval.str) = NULL; }
    break;

  case 102:
#line 1608 "vtkParse.y"
    { add_enum((yyvsp[(1) - (1)].str), NULL); }
    break;

  case 103:
#line 1609 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 104:
#line 1610 "vtkParse.y"
    { chopSig(); add_enum((yyvsp[(1) - (4)].str), copySig()); }
    break;

  case 113:
#line 1637 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(2) - (3)].integer)); }
    break;

  case 115:
#line 1640 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(3) - (3)].integer)); }
    break;

  case 117:
#line 1643 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(2) - (3)].integer)); }
    break;

  case 119:
#line 1646 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(3) - (3)].integer)); }
    break;

  case 123:
#line 1653 "vtkParse.y"
    { postSig(", "); }
    break;

  case 128:
#line 1663 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 129:
#line 1664 "vtkParse.y"
    { postSig(")"); }
    break;

  case 130:
#line 1665 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; popFunction(); }
    break;

  case 131:
#line 1669 "vtkParse.y"
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, getStoredType(), (yyvsp[(1) - (1)].integer), getSig());

      if (getVarName())
        {
        item->Name = vtkstrdup(getVarName());
        }

      if (item->Class == NULL)
        {
        vtkParse_FreeValue(item);
        }
      else if (currentClass)
        {
        vtkParse_AddTypedefToClass(currentClass, item);
        }
      else
        {
        vtkParse_AddTypedefToNamespace(currentNamespace, item);
        }
    }
    break;

  case 132:
#line 1702 "vtkParse.y"
    { add_using((yyvsp[(2) - (3)].str), 0); }
    break;

  case 134:
#line 1706 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (2)].str); }
    break;

  case 135:
#line 1708 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 136:
#line 1710 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 137:
#line 1712 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 138:
#line 1714 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 139:
#line 1717 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 1); }
    break;

  case 140:
#line 1725 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 141:
#line 1727 "vtkParse.y"
    { postSig("template<"); clearTypeId(); startTemplate(); }
    break;

  case 142:
#line 1729 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
    }
    break;

  case 144:
#line 1738 "vtkParse.y"
    { chopSig(); postSig(", "); clearTypeId(); }
    break;

  case 146:
#line 1742 "vtkParse.y"
    { markSig(); }
    break;

  case 147:
#line 1744 "vtkParse.y"
    { add_template_parameter((yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 149:
#line 1746 "vtkParse.y"
    { markSig(); }
    break;

  case 150:
#line 1748 "vtkParse.y"
    { add_template_parameter(0, (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 152:
#line 1750 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 153:
#line 1752 "vtkParse.y"
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (yyvsp[(3) - (3)].integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
    break;

  case 155:
#line 1763 "vtkParse.y"
    { postSig("class "); }
    break;

  case 156:
#line 1764 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 159:
#line 1770 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 160:
#line 1772 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = vtkstrdup(copySig());
    }
    break;

  case 163:
#line 1789 "vtkParse.y"
    { output_function(); }
    break;

  case 164:
#line 1790 "vtkParse.y"
    { output_function(); }
    break;

  case 165:
#line 1791 "vtkParse.y"
    { reject_function(); }
    break;

  case 166:
#line 1792 "vtkParse.y"
    { reject_function(); }
    break;

  case 173:
#line 1807 "vtkParse.y"
    { output_function(); }
    break;

  case 181:
#line 1822 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStoredType(), getTypeId(), 0);
    }
    break;

  case 182:
#line 1826 "vtkParse.y"
    { postSig(")"); }
    break;

  case 183:
#line 1828 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 184:
#line 1838 "vtkParse.y"
    { markSig(); postSig("operator "); }
    break;

  case 185:
#line 1839 "vtkParse.y"
    { (yyval.str) = vtkstrdup(copySig()); }
    break;

  case 186:
#line 1842 "vtkParse.y"
    { postSig(")"); }
    break;

  case 187:
#line 1843 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 188:
#line 1853 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getStoredType(), getTypeId(), 0);
    }
    break;

  case 190:
#line 1862 "vtkParse.y"
    { (yyval.str) = vtkstrcat("operator", (yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 191:
#line 1866 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (2)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 194:
#line 1878 "vtkParse.y"
    { postSig(" throw "); }
    break;

  case 195:
#line 1878 "vtkParse.y"
    { chopSig(); }
    break;

  case 196:
#line 1879 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 197:
#line 1881 "vtkParse.y"
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
    break;

  case 200:
#line 1893 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStoredType(), getTypeId(), 0);
    }
    break;

  case 201:
#line 1897 "vtkParse.y"
    { postSig(")"); }
    break;

  case 204:
#line 1909 "vtkParse.y"
    { closeSig(); }
    break;

  case 205:
#line 1910 "vtkParse.y"
    { openSig(); }
    break;

  case 206:
#line 1911 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      if (getStoredType() & VTK_PARSE_VIRTUAL)
        {
        currentFunction->IsVirtual = 1;
        }
      if (getStoredType() & VTK_PARSE_EXPLICIT)
        {
        currentFunction->IsExplicit = 1;
        }
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (5)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 207:
#line 1928 "vtkParse.y"
    { postSig("("); }
    break;

  case 208:
#line 1929 "vtkParse.y"
    { postSig(")"); }
    break;

  case 215:
#line 1946 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 217:
#line 1949 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 218:
#line 1950 "vtkParse.y"
    { clearTypeId(); postSig(", "); }
    break;

  case 220:
#line 1952 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
    break;

  case 221:
#line 1955 "vtkParse.y"
    { markSig(); }
    break;

  case 222:
#line 1957 "vtkParse.y"
    {
      ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(param);

      handle_complex_type(param, (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer), copySig());
      add_legacy_parameter(currentFunction, param);

      if (getVarName())
        {
        param->Name = vtkstrdup(getVarName());
        }

      vtkParse_AddParameterToFunction(currentFunction, param);
    }
    break;

  case 223:
#line 1972 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
        {
        currentFunction->Parameters[i]->Value = vtkstrdup(getVarValue());
        }
    }
    break;

  case 224:
#line 1981 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 226:
#line 1985 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 227:
#line 1986 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 229:
#line 1997 "vtkParse.y"
    {
      unsigned int type = getStoredType();
      ValueInfo *var = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(var);
      var->ItemType = VTK_VARIABLE_INFO;
      var->Access = access_level;

      handle_complex_type(var, type, (yyvsp[(1) - (2)].integer), getSig());

      var->Name = vtkstrdup(getVarName());

      if (getVarValue())
        {
        var->Value = vtkstrdup(getVarValue());
        }

      /* Is this a constant? */
      if (((type & VTK_PARSE_CONST) != 0) && var->Value != NULL &&
          (((type & VTK_PARSE_INDIRECT) == 0) ||
           ((type & VTK_PARSE_INDIRECT) == VTK_PARSE_ARRAY)))
        {
        var->ItemType = VTK_CONSTANT_INFO;
        if (currentClass)
          {
          vtkParse_AddConstantToClass(currentClass, var);
          }
        else
          {
          vtkParse_AddConstantToNamespace(currentNamespace, var);
          }
        }
      /* This is a true variable i.e. not constant */
      else
        {
        if (currentClass)
          {
          vtkParse_AddVariableToClass(currentClass, var);
          }
        else
          {
          vtkParse_AddVariableToNamespace(currentNamespace, var);
          }
        }
    }
    break;

  case 233:
#line 2046 "vtkParse.y"
    { postSig(", "); }
    break;

  case 236:
#line 2052 "vtkParse.y"
    { setStoredTypeIndirection(0); }
    break;

  case 237:
#line 2053 "vtkParse.y"
    { setStoredTypeIndirection((yyvsp[(1) - (1)].integer)); }
    break;

  case 238:
#line 2057 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 239:
#line 2058 "vtkParse.y"
    { postSig(")"); }
    break;

  case 240:
#line 2060 "vtkParse.y"
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].integer));
      if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_FUNCTION)
        {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        (yyval.integer) = (parens | VTK_PARSE_FUNCTION);
        }
      else if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_ARRAY)
        {
        (yyval.integer) = add_indirection_to_array(parens);
        }
    }
    break;

  case 241:
#line 2077 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 242:
#line 2078 "vtkParse.y"
    { postSig(")"); }
    break;

  case 243:
#line 2080 "vtkParse.y"
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].integer));
      if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_FUNCTION)
        {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        (yyval.integer) = (parens | VTK_PARSE_FUNCTION);
        }
      else if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_ARRAY)
        {
        (yyval.integer) = add_indirection_to_array(parens);
        }
    }
    break;

  case 244:
#line 2096 "vtkParse.y"
    { postSig("("); scopeSig(""); (yyval.integer) = 0; }
    break;

  case 245:
#line 2097 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 246:
#line 2099 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 247:
#line 2103 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 248:
#line 2105 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 249:
#line 2108 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 250:
#line 2109 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 251:
#line 2110 "vtkParse.y"
    { postSig(")"); }
    break;

  case 252:
#line 2111 "vtkParse.y"
    {
      (yyval.integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
    break;

  case 253:
#line 2115 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_ARRAY; }
    break;

  case 256:
#line 2119 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 259:
#line 2125 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 261:
#line 2130 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 262:
#line 2133 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 264:
#line 2137 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); }
    break;

  case 265:
#line 2138 "vtkParse.y"
    { setVarName((yyvsp[(1) - (3)].str)); }
    break;

  case 269:
#line 2146 "vtkParse.y"
    { clearArray(); }
    break;

  case 271:
#line 2150 "vtkParse.y"
    { clearArray(); }
    break;

  case 275:
#line 2157 "vtkParse.y"
    { postSig("["); }
    break;

  case 276:
#line 2157 "vtkParse.y"
    { postSig("]"); }
    break;

  case 277:
#line 2160 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 278:
#line 2161 "vtkParse.y"
    { markSig(); }
    break;

  case 279:
#line 2161 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 284:
#line 2177 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 285:
#line 2179 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 286:
#line 2181 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 287:
#line 2185 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 288:
#line 2187 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 289:
#line 2189 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 290:
#line 2191 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 291:
#line 2192 "vtkParse.y"
    { postSig("template "); }
    break;

  case 292:
#line 2194 "vtkParse.y"
    { (yyval.str) = vtkstrcat4((yyvsp[(1) - (5)].str), "template ", (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)); }
    break;

  case 293:
#line 2197 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 294:
#line 2200 "vtkParse.y"
    { (yyval.str) = "::"; postSig((yyval.str)); }
    break;

  case 295:
#line 2203 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<"); }
    break;

  case 296:
#line 2205 "vtkParse.y"
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();
    }
    break;

  case 297:
#line 2218 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 298:
#line 2219 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 299:
#line 2220 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 300:
#line 2221 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 301:
#line 2222 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 302:
#line 2223 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 303:
#line 2224 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 304:
#line 2225 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 305:
#line 2226 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 306:
#line 2227 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 307:
#line 2228 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 308:
#line 2229 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 309:
#line 2230 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 310:
#line 2231 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 311:
#line 2232 "vtkParse.y"
    { (yyval.str) = "size_t"; postSig((yyval.str)); }
    break;

  case 312:
#line 2233 "vtkParse.y"
    { (yyval.str) = "ssize_t"; postSig((yyval.str)); }
    break;

  case 313:
#line 2234 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt8"; postSig((yyval.str)); }
    break;

  case 314:
#line 2235 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt8"; postSig((yyval.str)); }
    break;

  case 315:
#line 2236 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt16"; postSig((yyval.str)); }
    break;

  case 316:
#line 2237 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt16"; postSig((yyval.str)); }
    break;

  case 317:
#line 2238 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt32"; postSig((yyval.str)); }
    break;

  case 318:
#line 2239 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt32"; postSig((yyval.str)); }
    break;

  case 319:
#line 2240 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt64"; postSig((yyval.str)); }
    break;

  case 320:
#line 2241 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt64"; postSig((yyval.str)); }
    break;

  case 321:
#line 2242 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat32"; postSig((yyval.str)); }
    break;

  case 322:
#line 2243 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat64"; postSig((yyval.str)); }
    break;

  case 323:
#line 2244 "vtkParse.y"
    { (yyval.str) = "vtkIdType"; postSig((yyval.str)); }
    break;

  case 324:
#line 2245 "vtkParse.y"
    { (yyval.str) = "vtkFloatingPointType"; postSig((yyval.str)); }
    break;

  case 332:
#line 2267 "vtkParse.y"
    { setStoredType(getStoredType() | (yyvsp[(1) - (1)].integer)); }
    break;

  case 334:
#line 2272 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 335:
#line 2275 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_MUTABLE; }
    break;

  case 336:
#line 2276 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 337:
#line 2277 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 338:
#line 2278 "vtkParse.y"
    { postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 339:
#line 2279 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 340:
#line 2280 "vtkParse.y"
    { postSig("virtual "); (yyval.integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 341:
#line 2281 "vtkParse.y"
    { postSig("explicit "); (yyval.integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 342:
#line 2289 "vtkParse.y"
    { setStoredType((yyvsp[(1) - (1)].integer)); }
    break;

  case 343:
#line 2291 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
      setStoredType((yyval.integer));
    }
    break;

  case 344:
#line 2296 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (3)].integer) | (yyvsp[(2) - (3)].integer) | (yyvsp[(3) - (3)].integer));
      setStoredType((yyval.integer));
    }
    break;

  case 345:
#line 2301 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (4)].integer) | (yyvsp[(2) - (4)].integer) | (yyvsp[(3) - (4)].integer) | (yyvsp[(4) - (4)].integer));
      setStoredType((yyval.integer));
    }
    break;

  case 347:
#line 2309 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 349:
#line 2314 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
    }
    break;

  case 350:
#line 2318 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (3)].integer) | (yyvsp[(2) - (3)].integer) | (yyvsp[(3) - (3)].integer));
    }
    break;

  case 351:
#line 2322 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (4)].integer) | (yyvsp[(2) - (4)].integer) | (yyvsp[(3) - (4)].integer) | (yyvsp[(4) - (4)].integer));
    }
    break;

  case 353:
#line 2329 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 355:
#line 2334 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 356:
#line 2336 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 358:
#line 2341 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 359:
#line 2343 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 360:
#line 2344 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 361:
#line 2345 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = guess_id_type((yyvsp[(3) - (3)].str)); }
    break;

  case 362:
#line 2347 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 363:
#line 2349 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 364:
#line 2352 "vtkParse.y"
    { postSig("const "); (yyval.integer) = VTK_PARSE_CONST; }
    break;

  case 365:
#line 2353 "vtkParse.y"
    { postSig("volatile "); (yyval.integer) = VTK_PARSE_VOLATILE; }
    break;

  case 366:
#line 2355 "vtkParse.y"
    {
    postSig("volatile const ");
    (yyval.integer) = (VTK_PARSE_VOLATILE | VTK_PARSE_CONST);
    }
    break;

  case 367:
#line 2360 "vtkParse.y"
    {
    postSig("volatile const ");
    (yyval.integer) = (VTK_PARSE_VOLATILE | VTK_PARSE_CONST);
    }
    break;

  case 370:
#line 2370 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING; }
    break;

  case 371:
#line 2371 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 372:
#line 2372 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 373:
#line 2373 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 374:
#line 2374 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 375:
#line 2375 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 376:
#line 2376 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_QOBJECT; }
    break;

  case 377:
#line 2377 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 378:
#line 2378 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T; }
    break;

  case 379:
#line 2379 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 380:
#line 2380 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 381:
#line 2381 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 382:
#line 2382 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 383:
#line 2383 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 384:
#line 2384 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 385:
#line 2385 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 386:
#line 2386 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 387:
#line 2387 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 388:
#line 2388 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 389:
#line 2389 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 390:
#line 2390 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 391:
#line 2393 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 392:
#line 2394 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 393:
#line 2395 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT; }
    break;

  case 394:
#line 2396 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 395:
#line 2397 "vtkParse.y"
    { typeSig("long double"); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 396:
#line 2398 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR; }
    break;

  case 397:
#line 2399 "vtkParse.y"
    { typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 398:
#line 2401 "vtkParse.y"
    { typeSig("unsigned char"); (yyval.integer) = VTK_PARSE_UNSIGNED_CHAR; }
    break;

  case 399:
#line 2402 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 400:
#line 2404 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 401:
#line 2405 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT; }
    break;

  case 402:
#line 2407 "vtkParse.y"
    { typeSig("unsigned short"); (yyval.integer) = VTK_PARSE_UNSIGNED_SHORT; }
    break;

  case 403:
#line 2408 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG; }
    break;

  case 404:
#line 2410 "vtkParse.y"
    { typeSig("unsigned long"); (yyval.integer) = VTK_PARSE_UNSIGNED_LONG; }
    break;

  case 405:
#line 2411 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG; }
    break;

  case 406:
#line 2413 "vtkParse.y"
    {typeSig("unsigned long long");(yyval.integer)=VTK_PARSE_UNSIGNED_LONG_LONG; }
    break;

  case 407:
#line 2414 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64; }
    break;

  case 408:
#line 2416 "vtkParse.y"
    { typeSig("unsigned __int64"); (yyval.integer) = VTK_PARSE_UNSIGNED___INT64; }
    break;

  case 409:
#line 2417 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 410:
#line 2418 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 413:
#line 2440 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 414:
#line 2443 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 415:
#line 2446 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 416:
#line 2447 "vtkParse.y"
    { postSig("*"); }
    break;

  case 417:
#line 2448 "vtkParse.y"
    {
      if (((yyvsp[(3) - (3)].integer) & VTK_PARSE_CONST) != 0)
        {
        (yyval.integer) = VTK_PARSE_CONST_POINTER;
        }
      if (((yyvsp[(3) - (3)].integer) & VTK_PARSE_VOLATILE) != 0)
        {
        (yyval.integer) = VTK_PARSE_BAD_INDIRECT;
        }
    }
    break;

  case 419:
#line 2464 "vtkParse.y"
    {
      unsigned int n;
      n = (((yyvsp[(1) - (2)].integer) << 2) | (yyvsp[(2) - (2)].integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
        {
        n = VTK_PARSE_BAD_INDIRECT;
        }
      (yyval.integer) = n;
    }
    break;

  case 420:
#line 2480 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 421:
#line 2481 "vtkParse.y"
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (7)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (yyvsp[(6) - (7)].integer), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 422:
#line 2490 "vtkParse.y"
    {postSig("Get");}
    break;

  case 423:
#line 2491 "vtkParse.y"
    {markSig();}
    break;

  case 424:
#line 2491 "vtkParse.y"
    {swapSig();}
    break;

  case 425:
#line 2492 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(7) - (9)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 426:
#line 2500 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 427:
#line 2501 "vtkParse.y"
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 428:
#line 2510 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 429:
#line 2511 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 430:
#line 2519 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 431:
#line 2519 "vtkParse.y"
    {closeSig();}
    break;

  case 432:
#line 2521 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (10)].str));
   currentFunction->Signature =
     vtkstrcat5("void ", currentFunction->Name, "(", typeText, ");");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (10)].str), "MinValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (10)].str), "MaxValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 433:
#line 2552 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 434:
#line 2553 "vtkParse.y"
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (7)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 435:
#line 2562 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 436:
#line 2563 "vtkParse.y"
    {markSig();}
    break;

  case 437:
#line 2563 "vtkParse.y"
    {swapSig();}
    break;

  case 438:
#line 2564 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 439:
#line 2573 "vtkParse.y"
    {
   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((yyvsp[(3) - (6)].str), "On");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((yyvsp[(3) - (6)].str), "Off");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 440:
#line 2590 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 441:
#line 2591 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 442:
#line 2595 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 443:
#line 2596 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 444:
#line 2600 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 445:
#line 2601 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 446:
#line 2605 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 447:
#line 2606 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 448:
#line 2610 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 449:
#line 2611 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 450:
#line 2615 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 451:
#line 2616 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 452:
#line 2620 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 453:
#line 2621 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 454:
#line 2625 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 455:
#line 2626 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 456:
#line 2630 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 457:
#line 2632 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();
   currentFunction->Macro = "vtkSetVectorMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (9)].str));
   currentFunction->Signature =
     vtkstrcat7("void ", currentFunction->Name, "(", typeText,
                " a[", (yyvsp[(8) - (9)].str), "]);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer)),
                 getTypeId(), (int)strtol((yyvsp[(8) - (9)].str), NULL, 0));
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 458:
#line 2647 "vtkParse.y"
    {startSig();}
    break;

  case 459:
#line 2649 "vtkParse.y"
    {
   chopSig();
   currentFunction->Macro = "vtkGetVectorMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (9)].str));
   postSig(" *");
   postSig(currentFunction->Name);
   postSig("();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer)),
              getTypeId(), (int)strtol((yyvsp[(8) - (9)].str), NULL, 0));
   output_function();
   }
    break;

  case 460:
#line 2662 "vtkParse.y"
    {
     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (4)].str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[2]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     output_function();
   }
    break;

  case 461:
#line 2699 "vtkParse.y"
    {
     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (4)].str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[3]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     output_function();
   }
    break;

  case 462:
#line 2737 "vtkParse.y"
    {
   int is_concrete = 0;
   unsigned long i;

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = vtkstrdup("GetClassName");
   currentFunction->Signature = vtkstrdup("const char *GetClassName();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = vtkstrdup("IsA");
   currentFunction->Signature = vtkstrdup("int IsA(const char *name);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
                "char", 0);
   set_return(currentFunction, VTK_PARSE_INT, "int", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = vtkstrdup("NewInstance");
   currentFunction->Signature = vtkstrcat((yyvsp[(3) - (7)].str), " *NewInstance();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, (yyvsp[(3) - (7)].str), 0);
   output_function();

   for (i = 0; i < NumberOfConcreteClasses; i++)
     {
     if (strcmp(currentClass->Name, ConcreteClasses[i]) == 0)
       {
       is_concrete = 1;
       break;
       }
     }

   if ( is_concrete )
     {
     currentFunction->Macro = "vtkTypeMacro";
     currentFunction->Name = vtkstrdup("SafeDownCast");
     currentFunction->Signature =
       vtkstrcat((yyvsp[(3) - (7)].str), " *SafeDownCast(vtkObject* o);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
     set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
                (yyvsp[(3) - (7)].str), 0);
     output_function();
     }
   }
    break;

  case 465:
#line 2796 "vtkParse.y"
    { (yyval.str) = "()"; }
    break;

  case 466:
#line 2797 "vtkParse.y"
    { (yyval.str) = "[]"; }
    break;

  case 467:
#line 2798 "vtkParse.y"
    { (yyval.str) = " new[]"; }
    break;

  case 468:
#line 2799 "vtkParse.y"
    { (yyval.str) = " delete[]"; }
    break;

  case 469:
#line 2800 "vtkParse.y"
    { (yyval.str) = "<"; }
    break;

  case 470:
#line 2801 "vtkParse.y"
    { (yyval.str) = ">"; }
    break;

  case 471:
#line 2802 "vtkParse.y"
    { (yyval.str) = ","; }
    break;

  case 472:
#line 2803 "vtkParse.y"
    { (yyval.str) = "="; }
    break;

  case 474:
#line 2807 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 475:
#line 2808 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 476:
#line 2809 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 477:
#line 2810 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 478:
#line 2811 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 479:
#line 2812 "vtkParse.y"
    { (yyval.str) = "!"; }
    break;

  case 480:
#line 2813 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 481:
#line 2814 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 482:
#line 2815 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 483:
#line 2816 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 484:
#line 2817 "vtkParse.y"
    { (yyval.str) = " new"; }
    break;

  case 485:
#line 2818 "vtkParse.y"
    { (yyval.str) = " delete"; }
    break;

  case 486:
#line 2819 "vtkParse.y"
    { (yyval.str) = "<<="; }
    break;

  case 487:
#line 2820 "vtkParse.y"
    { (yyval.str) = ">>="; }
    break;

  case 488:
#line 2821 "vtkParse.y"
    { (yyval.str) = "<<"; }
    break;

  case 489:
#line 2822 "vtkParse.y"
    { (yyval.str) = ">>"; }
    break;

  case 490:
#line 2823 "vtkParse.y"
    { (yyval.str) = ".*"; }
    break;

  case 491:
#line 2824 "vtkParse.y"
    { (yyval.str) = "->*"; }
    break;

  case 492:
#line 2825 "vtkParse.y"
    { (yyval.str) = "->"; }
    break;

  case 493:
#line 2826 "vtkParse.y"
    { (yyval.str) = "+="; }
    break;

  case 494:
#line 2827 "vtkParse.y"
    { (yyval.str) = "-="; }
    break;

  case 495:
#line 2828 "vtkParse.y"
    { (yyval.str) = "*="; }
    break;

  case 496:
#line 2829 "vtkParse.y"
    { (yyval.str) = "/="; }
    break;

  case 497:
#line 2830 "vtkParse.y"
    { (yyval.str) = "%="; }
    break;

  case 498:
#line 2831 "vtkParse.y"
    { (yyval.str) = "++"; }
    break;

  case 499:
#line 2832 "vtkParse.y"
    { (yyval.str) = "--"; }
    break;

  case 500:
#line 2833 "vtkParse.y"
    { (yyval.str) = "&="; }
    break;

  case 501:
#line 2834 "vtkParse.y"
    { (yyval.str) = "|="; }
    break;

  case 502:
#line 2835 "vtkParse.y"
    { (yyval.str) = "^="; }
    break;

  case 503:
#line 2836 "vtkParse.y"
    { (yyval.str) = "&&"; }
    break;

  case 504:
#line 2837 "vtkParse.y"
    { (yyval.str) = "||"; }
    break;

  case 505:
#line 2838 "vtkParse.y"
    { (yyval.str) = "=="; }
    break;

  case 506:
#line 2839 "vtkParse.y"
    { (yyval.str) = "!="; }
    break;

  case 507:
#line 2840 "vtkParse.y"
    { (yyval.str) = "<="; }
    break;

  case 508:
#line 2841 "vtkParse.y"
    { (yyval.str) = ">="; }
    break;

  case 509:
#line 2844 "vtkParse.y"
    { (yyval.str) = "typedef"; }
    break;

  case 510:
#line 2845 "vtkParse.y"
    { (yyval.str) = "typename"; }
    break;

  case 511:
#line 2846 "vtkParse.y"
    { (yyval.str) = "class"; }
    break;

  case 512:
#line 2847 "vtkParse.y"
    { (yyval.str) = "struct"; }
    break;

  case 513:
#line 2848 "vtkParse.y"
    { (yyval.str) = "union"; }
    break;

  case 514:
#line 2849 "vtkParse.y"
    { (yyval.str) = "template"; }
    break;

  case 515:
#line 2850 "vtkParse.y"
    { (yyval.str) = "public"; }
    break;

  case 516:
#line 2851 "vtkParse.y"
    { (yyval.str) = "protected"; }
    break;

  case 517:
#line 2852 "vtkParse.y"
    { (yyval.str) = "private"; }
    break;

  case 518:
#line 2853 "vtkParse.y"
    { (yyval.str) = "const"; }
    break;

  case 519:
#line 2854 "vtkParse.y"
    { (yyval.str) = "static"; }
    break;

  case 520:
#line 2855 "vtkParse.y"
    { (yyval.str) = "inline"; }
    break;

  case 521:
#line 2856 "vtkParse.y"
    { (yyval.str) = "virtual"; }
    break;

  case 522:
#line 2857 "vtkParse.y"
    { (yyval.str) = "extern"; }
    break;

  case 523:
#line 2858 "vtkParse.y"
    { (yyval.str) = "namespace"; }
    break;

  case 524:
#line 2859 "vtkParse.y"
    { (yyval.str) = "operator"; }
    break;

  case 525:
#line 2860 "vtkParse.y"
    { (yyval.str) = "enum"; }
    break;

  case 526:
#line 2861 "vtkParse.y"
    { (yyval.str) = "throw"; }
    break;

  case 527:
#line 2862 "vtkParse.y"
    { (yyval.str) = "const_cast"; }
    break;

  case 528:
#line 2863 "vtkParse.y"
    { (yyval.str) = "dynamic_cast"; }
    break;

  case 529:
#line 2864 "vtkParse.y"
    { (yyval.str) = "static_cast"; }
    break;

  case 530:
#line 2865 "vtkParse.y"
    { (yyval.str) = "reinterpret_cast"; }
    break;

  case 543:
#line 2889 "vtkParse.y"
    {
      if ((((yyvsp[(1) - (1)].str))[0] == '+' || ((yyvsp[(1) - (1)].str))[0] == '-' ||
           ((yyvsp[(1) - (1)].str))[0] == '*' || ((yyvsp[(1) - (1)].str))[0] == '&') &&
          ((yyvsp[(1) - (1)].str))[1] == '\0')
        {
        int c1 = 0;
        size_t l;
        const char *cp;
        chopSig();
        cp = getSig();
        l = getSigLength();
        if (l != 0) { c1 = cp[l-1]; }
        if (c1 != 0 && c1 != '(' && c1 != '[' && c1 != '=')
          {
          postSig(" ");
          }
        postSig((yyvsp[(1) - (1)].str));
        if ((c1 >= 'A' && c1 <= 'Z') || (c1 >= 'a' && c1 <= 'z') ||
            (c1 >= '0' && c1 <= '9') || c1 == '_' || c1 == '\'' ||
            c1 == '\"' || c1 == ')' || c1 == ']')
          {
          postSig(" ");
          }
        }
       else
        {
        postSig((yyvsp[(1) - (1)].str));
        postSig(" ");
        }
    }
    break;

  case 544:
#line 2919 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 545:
#line 2919 "vtkParse.y"
    { postSig("."); }
    break;

  case 546:
#line 2920 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 547:
#line 2921 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 548:
#line 2922 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 550:
#line 2925 "vtkParse.y"
    {
      int c1 = 0;
      size_t l;
      const char *cp;
      chopSig();
      cp = getSig();
      l = getSigLength();
      if (l != 0) { c1 = cp[l-1]; }
      while (((c1 >= 'A' && c1 <= 'Z') || (c1 >= 'a' && c1 <= 'z') ||
              (c1 >= '0' && c1 <= '9') || c1 == '_') && l != 0)
        {
        --l;
        c1 = cp[l-1];
        }
      if (l < 2 || cp[l-1] != ':' || cp[l-2] != ':')
        {
        cp = add_const_scope(&cp[l]);
        resetSig(l);
        postSig(cp);
        }
    }
    break;

  case 554:
#line 2951 "vtkParse.y"
    { postSig("< "); }
    break;

  case 555:
#line 2952 "vtkParse.y"
    { postSig("> "); }
    break;

  case 557:
#line 2955 "vtkParse.y"
    { postSig("= "); }
    break;

  case 558:
#line 2956 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 560:
#line 2959 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 568:
#line 2973 "vtkParse.y"
    { postSig("= "); }
    break;

  case 569:
#line 2974 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 570:
#line 2978 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 571:
#line 2984 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 572:
#line 2991 "vtkParse.y"
    { postSig("["); }
    break;

  case 573:
#line 2992 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 574:
#line 2995 "vtkParse.y"
    { postSig("("); }
    break;

  case 575:
#line 2996 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 576:
#line 2997 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*"); }
    break;

  case 577:
#line 2998 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 578:
#line 2999 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&"); }
    break;

  case 579:
#line 3000 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 580:
#line 3003 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 581:
#line 3003 "vtkParse.y"
    { postSig("} "); }
    break;


/* Line 1267 of yacc.c.  */
#line 7273 "vtkParse.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */


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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 3042 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct_or_union)
{
  ClassInfo *outerClass = currentClass;
  pushClass();
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  vtkParse_InitClass(currentClass);
  currentClass->Name = vtkstrdup(classname);
  if (is_struct_or_union == 1)
    {
    currentClass->ItemType = VTK_STRUCT_INFO;
    }
  if (is_struct_or_union == 2)
    {
    currentClass->ItemType = VTK_UNION_INFO;
    }

  if (classname && classname[strlen(classname)-1] != '>')
    {
    if (outerClass)
      {
      vtkParse_AddClassToClass(outerClass, currentClass);
      }
    else
      {
      vtkParse_AddClassToNamespace(currentNamespace, currentClass);
      }
    }

  /* template information */
  if (currentTemplate)
    {
    currentClass->Template = currentTemplate;
    currentTemplate = NULL;
    }

  /* comment, if any */
  currentClass->Comment = vtkstrdup(getComment());

  access_level = VTK_ACCESS_PRIVATE;
  if (is_struct_or_union)
    {
    access_level = VTK_ACCESS_PUBLIC;
    }

  vtkParse_InitFunction(currentFunction);
  startSig();
  clearComment();
}

/* reject the class */
void reject_class(const char *classname, int is_struct_or_union)
{
  static ClassInfo static_class;

  pushClass();
  currentClass = &static_class;
  currentClass->Name = vtkstrdup(classname);
  vtkParse_InitClass(currentClass);

  access_level = VTK_ACCESS_PRIVATE;
  if (is_struct_or_union)
    {
    access_level = VTK_ACCESS_PUBLIC;
    }

  vtkParse_InitFunction(currentFunction);
  startSig();
  clearComment();
}

/* reached the end of a class definition */
void end_class()
{
  /* add default constructors */
  vtkParse_AddDefaultConstructors(currentClass, data->Strings);

  popClass();
}

/* add a base class to the specified class */
void add_base_class(ClassInfo *cls, const char *name, int al, int virt)
{
  if (cls && al == VTK_ACCESS_PUBLIC)
    {
    vtkParse_AddStringToArray(&cls->SuperClasses,
                              &cls->NumberOfSuperClasses,
                              vtkstrdup(name));
    }
}

/* add a using declaration or directive */
void add_using(const char *name, int is_namespace)
{
  size_t i;
  UsingInfo *item;

  item = (UsingInfo *)malloc(sizeof(UsingInfo));
  vtkParse_InitUsing(item);
  if (is_namespace)
    {
    item->Name = NULL;
    item->Scope = vtkstrdup(name);
    }
  else
    {
    i = strlen(name);
    while (i > 0 && name[i-1] != ':') { i--; }
    item->Name = vtkstrdup(&name[i]);
    while (i > 0 && name[i-1] == ':') { i--; }
    item->Scope = vtkstrndup(name, i);
    }

  if (currentClass)
    {
    vtkParse_AddUsingToClass(currentClass, item);
    }
  else
    {
    vtkParse_AddUsingToNamespace(currentNamespace, item);
    }
}

/* start a new enum */
void start_enum(const char *name)
{
  static char text[256];
  EnumInfo *item;

  currentEnumName = "int";
  currentEnumValue = NULL;
  if (name)
    {
    strcpy(text, name);
    currentEnumName = text;
    item = (EnumInfo *)malloc(sizeof(EnumInfo));
    vtkParse_InitEnum(item);
    item->Name = vtkstrdup(name);
    item->Access = access_level;
    if (currentClass)
      {
      vtkParse_AddEnumToClass(currentClass, item);
      }
    else
      {
      vtkParse_AddEnumToNamespace(currentNamespace, item);
      }
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
  static char text[2048];
  unsigned long i;
  long j;

  if (value)
    {
    strcpy(text, value);
    currentEnumValue = text;
    }
  else if (currentEnumValue)
    {
    i = strlen(text);
    while (i > 0 && text[i-1] >= '0' &&
           text[i-1] <= '9') { i--; }

    if (i == 0 || text[i-1] == ' ' ||
        (i > 1 && text[i-2] == ' ' &&
         (text[i-1] == '-' || text[i-1] == '+')))
      {
      if (i > 0 && text[i-1] != ' ')
        {
        i--;
        }
      j = (int)strtol(&text[i], NULL, 10);
      sprintf(&text[i], "%li", j+1);
      }
    else
      {
      i = strlen(text);
      strcpy(&text[i], " + 1");
      }
    }
  else
    {
    strcpy(text, "0");
    currentEnumValue = text;
    }

  add_constant(name, currentEnumValue, VTK_PARSE_INT, currentEnumName, 2);
}

/* for a macro constant, guess the constant type, doesn't do any math */
unsigned int guess_constant_type(const char *valstring)
{
  unsigned int valtype = 0;
  size_t k;
  unsigned long i;
  int is_name = 0;

  if (valstring == NULL || valstring[0] == '\0')
    {
    return 0;
    }

  if (valstring[0] < '0' || valstring[0] > '9')
    {
    k = 0;
    while ((valstring[k] >= '0' && valstring[k] <= '9') ||
           (valstring[k] >= 'a' && valstring[k] <= 'z') ||
           (valstring[k] >= 'A' && valstring[k] <= 'Z') ||
           valstring[k] == '_') { k++; }

    if (valstring[k] == '\0')
      {
      is_name = 1;
      }
    }

  if (strcmp(valstring, "true") == 0 || strcmp(valstring, "false") == 0)
    {
    return VTK_PARSE_BOOL;
    }

  if (valstring[0] == '\'')
    {
    return VTK_PARSE_CHAR;
    }

  if (strncmp(valstring, "VTK_TYPE_CAST(", 14) == 0 ||
      strncmp(valstring, "static_cast<", 12) == 0 ||
      strncmp(valstring, "const_cast<", 11) == 0 ||
      strncmp(valstring, "(", 1) == 0)
    {
    const char *cp;
    size_t n;
    int is_unsigned = 0;

    cp = &valstring[1];
    if (valstring[0] == 'c')
      {
      cp = &valstring[11];
      }
    else if (valstring[0] == 's')
      {
      cp = &valstring[12];
      }
    else if (valstring[0] == 'V')
      {
      cp = &valstring[14];
      }

    if (strncmp(cp, "unsigned ", 9) == 0)
      {
      is_unsigned = 1;
      cp += 9;
      }

    n = strlen(cp);
    for (k = 0; k < n && cp[k] != ',' &&
         cp[k] != '>' && cp[k] != ')'; k++) { ; };

    if (strncmp(cp, "long long", k) == 0)
      { valtype = VTK_PARSE_LONG_LONG; }
    else if (strncmp(cp, "__int64", k) == 0)
      { valtype = VTK_PARSE___INT64; }
    else if (strncmp(cp, "long", k) == 0)
      { valtype = VTK_PARSE_LONG; }
    else if (strncmp(cp, "short", k) == 0)
      { valtype = VTK_PARSE_SHORT; }
    else if (strncmp(cp, "signed char", k) == 0)
      { valtype = VTK_PARSE_SIGNED_CHAR; }
    else if (strncmp(cp, "char", k) == 0)
      { valtype = VTK_PARSE_CHAR; }
    else if (strncmp(cp, "int", k) == 0 ||
             strncmp(cp, "signed", k) == 0)
      { valtype = VTK_PARSE_INT; }
    else if (strncmp(cp, "float", k) == 0)
      { valtype = VTK_PARSE_FLOAT; }
    else if (strncmp(cp, "double", k) == 0)
      { valtype = VTK_PARSE_DOUBLE; }
    else if (strncmp(cp, "char *", k) == 0)
      { valtype = VTK_PARSE_CHAR_PTR; }

    if (is_unsigned)
      {
      if (valtype == 0) { valtype = VTK_PARSE_INT; }
      valtype = (valtype | VTK_PARSE_UNSIGNED);
      }

    if (valtype != 0)
      {
      return valtype;
      }
    }

  /* check the current scope */
  if (is_name)
    {
    NamespaceInfo *scope = currentNamespace;
    if (namespaceDepth > 0)
      {
      scope = namespaceStack[0];
      }

    for (i = 0; i < scope->NumberOfConstants; i++)
      {
      if (strcmp(scope->Constants[i]->Name, valstring) == 0)
        {
        return scope->Constants[i]->Type;
        }
      }
    }

  /* check for preprocessor macros */
  if (is_name)
    {
    MacroInfo *macro = vtkParsePreprocess_GetMacro(
      preprocessor, valstring);

    if (macro && !macro->IsFunction)
      {
      return guess_constant_type(macro->Definition);
      }
    }

  /* fall back to the preprocessor to evaluate the constant */
    {
    preproc_int_t val;
    int is_unsigned;
    int result = vtkParsePreprocess_EvaluateExpression(
      preprocessor, valstring, &val, &is_unsigned);

    if (result == VTK_PARSE_PREPROC_DOUBLE)
      {
      return VTK_PARSE_DOUBLE;
      }
    else if (result == VTK_PARSE_PREPROC_FLOAT)
      {
      return VTK_PARSE_FLOAT;
      }
    else if (result == VTK_PARSE_PREPROC_STRING)
      {
      return VTK_PARSE_CHAR_PTR;
      }
    else if (result == VTK_PARSE_OK)
      {
      if (is_unsigned)
        {
        if ((preproc_uint_t)val <= VTK_UNSIGNED_INT_MAX)
          {
          return VTK_PARSE_UNSIGNED_INT;
          }
        else
          {
#if defined(VTK_TYPE_USE_LONG_LONG)
          return VTK_PARSE_UNSIGNED_LONG_LONG;
#elif defined(VTK_TYPE_USE___INT64)
          return VTK_PARSE_UNSIGNED___INT64;
#else
          return VTK_PARSE_UNSIGNED_LONG;
#endif
          }
        }
      else
        {
        if (val >= VTK_INT_MIN && val <= VTK_INT_MAX)
          {
          return VTK_PARSE_INT;
          }
        else
          {
#if defined(VTK_TYPE_USE_LONG_LONG)
          return VTK_PARSE_LONG_LONG;
#elif defined(VTK_TYPE_USE___INT64)
          return VTK_PARSE___INT64;
#else
          return VTK_PARSE_LONG;
#endif
          }
        }
      }
    }

  return 0;
}

/* add a constant to the current class or namespace */
void add_constant(const char *name, const char *value,
                  unsigned int type, const char *typeclass, int flag)
{
  ValueInfo *con = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(con);
  con->ItemType = VTK_CONSTANT_INFO;
  con->Name = vtkstrdup(name);
  con->Value = vtkstrdup(value);
  con->Type = type;
  if (typeclass)
    {
    con->Class = vtkstrdup(typeclass);
    }

  if (flag == 2)
    {
    con->IsEnum = 1;
    }

  if (flag == 1)
    {
    /* actually a macro, need to guess the type */
    ValueInfo **cptr = data->Contents->Constants;
    unsigned long n = data->Contents->NumberOfConstants;
    unsigned long i;

    con->Access = VTK_ACCESS_PUBLIC;
    if (con->Type == 0)
      {
      con->Type = guess_constant_type(con->Value);
      }

    for (i = 0; i < n; i++)
      {
      if (strcmp(cptr[i]->Name, con->Name) == 0)
        {
        break;
        }
      }

    if (i == n)
      {
      vtkParse_AddConstantToNamespace(data->Contents, con);
      }
    else
      {
      vtkParse_FreeValue(con);
      }
    }
  else if (currentClass)
    {
    con->Access = access_level;
    vtkParse_AddConstantToClass(currentClass, con);
    }
  else
    {
    con->Access = VTK_ACCESS_PUBLIC;
    vtkParse_AddConstantToNamespace(currentNamespace, con);
    }
}

/* if the name is a const in this namespace, the scope it */
const char *add_const_scope(const char *name)
{
  static char text[256];
  NamespaceInfo *scope = currentNamespace;
  unsigned long i, j;
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

/* guess the type from the ID */
unsigned int guess_id_type(const char *cp)
{
  unsigned int t = 0;

  if (cp)
    {
    size_t i;
    const char *dp;

    i = strlen(cp);
    while (i > 0 && cp[i-1] != ':') { i--; }
    dp = &cp[i];

    if (strcmp(dp, "vtkStdString") == 0 ||
        strcmp(cp, "std::string") == 0)
      {
      t = VTK_PARSE_STRING;
      }
    else if (strcmp(dp, "vtkUnicodeString") == 0)
      {
      t = VTK_PARSE_UNICODE_STRING;
      }
    else if (strncmp(dp, "vtk", 3) == 0)
      {
      t = VTK_PARSE_OBJECT;
      }
    else if (strncmp(dp, "Q", 1) == 0 ||
             strncmp(cp, "Qt::", 4) == 0)
      {
      t = VTK_PARSE_QOBJECT;
      }
    else
      {
      t = VTK_PARSE_UNKNOWN;
      }
    }

  return t;
}

/* add a template parameter to the current template */
void add_template_parameter(
  unsigned int datatype, unsigned int extra, const char *funcSig)
{
  ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(param);
  handle_complex_type(param, datatype, extra, funcSig);
  param->Name = vtkstrdup(getVarName());
  vtkParse_AddParameterToTemplate(currentTemplate, param);
}

/* add a parameter to a function */
void add_parameter(FunctionInfo *func, unsigned int type,
                   const char *typeclass, unsigned long count)
{
  char text[64];
  ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(param);

  param->Type = type;
  if (typeclass)
    {
    param->Class = vtkstrdup(typeclass);
    }

  if (count)
    {
    param->Count = count;
    sprintf(text, "%lu", count);
    vtkParse_AddStringToArray(&param->Dimensions, &param->NumberOfDimensions,
                              vtkstrdup(text));
    }

  add_legacy_parameter(func, param);

  vtkParse_AddParameterToFunction(func, param);
}

/* set the return type for the current function */
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count)
{
  char text[64];
  ValueInfo *val = (ValueInfo *)malloc(sizeof(ValueInfo));

  vtkParse_InitValue(val);
  val->Type = type;
  if (typeclass)
    {
    val->Class = vtkstrdup(typeclass);
    }

  if (count)
    {
    val->Count = count;
    sprintf(text, "%lu", count);
    vtkParse_AddStringToArray(&val->Dimensions, &val->NumberOfDimensions,
                              vtkstrdup(text));
    }

  func->ReturnValue = val;

#ifndef VTK_PARSE_LEGACY_REMOVE
  func->ReturnType = val->Type;
  func->ReturnClass = val->Class;
  func->HaveHint = (count > 0);
  func->HintSize = count;
#endif
}

unsigned long count_from_dimensions(ValueInfo *val)
{
  unsigned long count, i, n;
  const char *cp;

  /* count is the product of the dimensions */
  count = 0;
  if (val->NumberOfDimensions)
    {
    count = 1;
    for (i = 0; i < val->NumberOfDimensions; i++)
      {
      n = 0;
      cp = val->Dimensions[i];
      if (cp[0] != '\0')
        {
        while (*cp != '\0' && *cp >= '0' && *cp <= '9') { cp++; }
        while (*cp != '\0' && (*cp == 'u' || *cp == 'l' ||
                               *cp == 'U' || *cp == 'L')) { cp++; }
        if (*cp == '\0')
          {
          n = (int)strtol(val->Dimensions[i], NULL, 0);
          }
        }
      count *= n;
      }
    }

  return count;
}

/* deal with types that include function pointers or arrays */
void handle_complex_type(
  ValueInfo *val, unsigned int datatype, unsigned int extra,
  const char *funcSig)
{
  FunctionInfo *func = 0;

  /* if "extra" was set, parentheses were involved */
  if ((extra & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
    {
    /* the current type becomes the function return type */
    func = getFunction();
    func->ReturnValue = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(func->ReturnValue);
    func->ReturnValue->Type = datatype;
    func->ReturnValue->Class = vtkstrdup(getTypeId());
    if (funcSig) { func->Signature = vtkstrdup(funcSig); }
    val->Function = func;

#ifndef VTK_PARSE_LEGACY_REMOVE
    func->ReturnType = func->ReturnValue->Type;
    func->ReturnClass = func->ReturnValue->Class;
#endif

    /* the val type is whatever was inside the parentheses */
    clearTypeId();
    setTypeId(func->Class ? "method" : "function");
    datatype = (extra & VTK_PARSE_UNQUALIFIED_TYPE);
    }
  else if ((extra & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT)
    {
    datatype = (datatype | VTK_PARSE_BAD_INDIRECT);
    }
  else if ((extra & VTK_PARSE_INDIRECT) != 0)
    {
    extra = (extra & VTK_PARSE_INDIRECT);

    if ((extra & VTK_PARSE_REF) != 0)
      {
      datatype = (datatype | VTK_PARSE_REF);
      extra = (extra & ~VTK_PARSE_REF);
      }

    if (extra != 0 && getArrayNDims() > 0)
      {
      /* pointer represents an unsized array bracket */
      datatype = add_indirection(datatype, VTK_PARSE_ARRAY);
      extra = ((extra >> 2) & VTK_PARSE_POINTER_MASK);
      }

    datatype = add_indirection(datatype, extra);
    }

  if (getArrayNDims() == 1)
    {
    if ((datatype & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_ARRAY)
      {
      /* turn the first set of brackets into a pointer */
      datatype = add_indirection(datatype, VTK_PARSE_POINTER);
      }
    else
      {
      pushArrayFront("");
      }
    }
  else if (getArrayNDims() > 1)
    {
    if ((datatype & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_ARRAY)
      {
      /* turn the first set of brackets into a pointer */
      datatype = add_indirection(datatype, VTK_PARSE_ARRAY);
      }
    else
      {
      pushArrayFront("");
      }
    }

  /* get the data type */
  val->Type = datatype;
  val->Class = vtkstrdup(getTypeId());

  /* copy contents of all brackets to the ArgDimensions */
  val->NumberOfDimensions = getArrayNDims();
  val->Dimensions = getArray();
  clearArray();

  /* count is the product of the dimensions */
  val->Count = count_from_dimensions(val);
}

/* add a parameter to the legacy part of the FunctionInfo struct */
void add_legacy_parameter(FunctionInfo *func, ValueInfo *param)
{
#ifndef VTK_PARSE_LEGACY_REMOVE
  unsigned long i = func->NumberOfArguments;

  if (i < MAX_ARGS)
    {
    func->NumberOfArguments = i + 1;
    func->ArgTypes[i] = param->Type;
    func->ArgClasses[i] = param->Class;
    func->ArgCounts[i] = param->Count;
    }
  else
    {
    func->ArrayFailure = 1;
    }
#endif
}


/* reject the function, do not output it */
void reject_function()
{
  vtkParse_InitFunction(currentFunction);
  startSig();
  getMacro();
}

/* a simple routine that updates a few variables */
void output_function()
{
  const char *macro = getMacro();
  size_t n;
  unsigned long i, j;
  int match;

  /* reject template specializations */
  n = strlen(currentFunction->Name);
  if (currentFunction->Name[n-1] == '>')
    {
    /* make sure there is a matching angle bracket */
    while (n > 0 && currentFunction->Name[n-1] != '<') { n--; }
    if (n > 0)
      {
      reject_function();
      return;
      }
    }

  /* static */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_STATIC)
    {
    currentFunction->IsStatic = 1;
    }

  /* virtual */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_VIRTUAL)
    {
    currentFunction->IsVirtual = 1;
    }

  /* the signature */
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = getSig();
    }

  /* template information */
  if (currentTemplate)
    {
    currentFunction->Template = currentTemplate;
    currentTemplate = NULL;
    }

  /* a void argument is the same as no parameters */
  if (currentFunction->NumberOfParameters == 1 &&
      (currentFunction->Parameters[0]->Type & VTK_PARSE_UNQUALIFIED_TYPE) ==
      VTK_PARSE_VOID)
    {
    currentFunction->NumberOfParameters = 0;
    }

  /* is it defined in a legacy macro? */
  if (macro && strcmp(macro, "VTK_LEGACY") == 0)
    {
    currentFunction->IsLegacy = 1;
    }

  /* set public, protected */
  if (currentClass)
    {
    currentFunction->Access = access_level;
    }
  else
    {
    currentFunction->Access = VTK_ACCESS_PUBLIC;
    }

#ifndef VTK_PARSE_LEGACY_REMOVE
  /* a void argument is the same as no parameters */
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

  /* set legacy flags */
  if (currentClass)
    {
    currentFunction->IsPublic = (access_level == VTK_ACCESS_PUBLIC);
    currentFunction->IsProtected = (access_level == VTK_ACCESS_PROTECTED);
    }
  else
    {
    currentFunction->IsPublic = 1;
    currentFunction->IsProtected = 0;
    }

  /* look for legacy VAR FUNCTIONS */
  if (currentFunction->NumberOfParameters
      && (currentFunction->Parameters[0]->Type == VTK_PARSE_FUNCTION))
    {
    if (currentFunction->NumberOfParameters != 2 ||
        currentFunction->Parameters[1]->Type != VTK_PARSE_VOID_PTR)
      {
      currentFunction->ArrayFailure = 1;
      }
    }

  /* check for too many parameters */
  if (currentFunction->NumberOfParameters > MAX_ARGS)
    {
    currentFunction->ArrayFailure = 1;
    }

  /* also legacy: tell old wrappers that multi-dimensional arrays are bad */
  for (i = 0; i < currentFunction->NumberOfParameters; i++)
    {
    ValueInfo *param = currentFunction->Parameters[i];
    if ((param->Type & VTK_PARSE_POINTER_MASK) != 0)
      {
      if (((param->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION) ||
          ((param->Type & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT) ||
          ((param->Type & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_POINTER))
       {
       currentFunction->ArrayFailure = 1;
       }
      }
    }
#endif /* VTK_PARSE_LEGACY_REMOVE */

  if (currentClass)
    {
    /* is it a delete function */
    if (currentFunction->Name && !strcmp("Delete",currentFunction->Name))
      {
      currentClass->HasDelete = 1;
      }

    currentFunction->Class = vtkstrdup(currentClass->Name);
    vtkParse_AddFunctionToClass(currentClass, currentFunction);

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
        if (currentNamespace->Functions[i]->NumberOfParameters ==
            currentFunction->NumberOfParameters)
          {
          for (j = 0; j < currentFunction->NumberOfParameters; j++)
            {
            if (currentNamespace->Functions[i]->Parameters[j]->Type ==
                currentFunction->Parameters[j]->Type)
              {
              if (currentFunction->Parameters[j]->Type == VTK_PARSE_OBJECT &&
                  strcmp(currentNamespace->Functions[i]->Parameters[j]->Class,
                         currentFunction->Parameters[j]->Class) == 0)
                {
                break;
                }
              }
            }
          if (j == currentFunction->NumberOfParameters)
            {
            match = 1;
            break;
            }
          }
        }
      }

    if (!match)
      {
      vtkParse_AddFunctionToNamespace(currentNamespace, currentFunction);

      currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      }
    }

  vtkParse_InitFunction(currentFunction);
  startSig();
}

/* output a function that is not a method of the current class */
void output_friend_function()
{
  ClassInfo *tmpc = currentClass;
  currentClass = NULL;
  output_function();
  currentClass = tmpc;
}

void outputSetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n)
{
  static const char *mnames[] = {
    NULL, NULL,
    "vtkSetVector2Macro", "vtkSetVector3Macro", "vtkSetVector4Macro",
    NULL,
    "vtkSetVector6Macro",
    NULL };
  char ntext[32];
  unsigned long i, m;
  m = (n > 7 ? 0 : n);

  sprintf(ntext, "%lu", n);

  currentFunction->Macro = mnames[m];
  currentFunction->Name = vtkstrcat("Set", var);
  startSig();
  postSig("void ");
  postSig(currentFunction->Name);
  postSig("(");
  postSig(typeText);
  for (i = 1; i < n; i++)
    {
    postSig(", ");
    postSig(typeText);
    }
  postSig(");");
  for (i = 0; i < n; i++)
    {
    add_parameter(currentFunction, paramType, getTypeId(), 0);
    }
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();

  currentFunction->Macro = mnames[m];
  currentFunction->Name = vtkstrcat("Set", var);
  currentFunction->Signature =
    vtkstrcat7("void ", currentFunction->Name, "(", getTypeId(),
               " a[", ntext, "]);");
  add_parameter(currentFunction, (VTK_PARSE_POINTER | paramType),
                getTypeId(), n);
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();
}

void outputGetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n)
{
  static const char *mnames[] = {
    NULL, NULL,
    "vtkGetVector2Macro", "vtkGetVector3Macro", "vtkGetVector4Macro",
    NULL,
    "vtkGetVector6Macro",
    NULL };
  unsigned long m;
  m = (n > 7 ? 0 : n);

  currentFunction->Macro = mnames[m];
  currentFunction->Name = vtkstrcat("Get", var);
  currentFunction->Signature =
    vtkstrcat4(typeText, " *", currentFunction->Name, "();");
  set_return(currentFunction, (VTK_PARSE_POINTER | paramType), getTypeId(), n);
  output_function();
}

/* Set a flag to ignore BTX/ETX markers in the files */
void vtkParse_SetIgnoreBTX(int option)
{
  if (option)
    {
    IgnoreBTX = 1;
    }
  else
    {
    IgnoreBTX = 0;
    }
}

/* Set a flag to recurse into included files */
void vtkParse_SetRecursive(int option)
{
  if (option)
    {
    Recursive = 1;
    }
  else
    {
    Recursive = 0;
    }
}

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, FILE *ifile, FILE *errfile)
{
  unsigned long i, j;
  int ret;
  FileInfo *file_info;
  char *main_class;

  /* "data" is a global variable used by the parser */
  data = (FileInfo *)malloc(sizeof(FileInfo));
  vtkParse_InitFile(data);
  data->Strings = (StringCache *)malloc(sizeof(StringCache));
  vtkParse_InitStringCache(data->Strings);

  /* "preprocessor" is a global struct used by the parser */
  preprocessor = (PreprocessInfo *)malloc(sizeof(PreprocessInfo));
  vtkParsePreprocess_Init(preprocessor, filename);
  vtkParsePreprocess_AddStandardMacros(preprocessor, VTK_PARSE_NATIVE);

  /* add include files specified on the command line */
  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    vtkParsePreprocess_IncludeDirectory(preprocessor, IncludeDirectories[i]);
    }

  /* add macros specified on the command line */
  for (i = 0; i < NumberOfDefinitions; i++)
    {
    const char *cp = Definitions[i];

    if (*cp == 'U')
      {
      vtkParsePreprocess_RemoveMacro(preprocessor, &cp[1]);
      }
    else if (*cp == 'D')
      {
      const char *definition = &cp[1];
      while (*definition != '=' && *definition != '\0')
        {
        definition++;
        }
      if (*definition == '=')
        {
        definition++;
        }
      else
        {
        definition = NULL;
        }
      vtkParsePreprocess_AddMacro(preprocessor, &cp[1], definition);
      }
    }

  /* should explicitly check for vtkConfigure.h, or even explicitly load it */
#ifdef VTK_USE_64BIT_IDS
  vtkParsePreprocess_AddMacro(preprocessor, "VTK_USE_64BIT_IDS", NULL);
#endif

  data->FileName = vtkstrdup(filename);

  clearComment();

  namespaceDepth = 0;
  currentNamespace = (NamespaceInfo *)malloc(sizeof(NamespaceInfo));
  vtkParse_InitNamespace(currentNamespace);
  data->Contents = currentNamespace;

  templateDepth = 0;
  currentTemplate = NULL;

  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  vtkParse_InitFunction(currentFunction);
  startSig();

  parseDebug = 0;
  if (getenv("DEBUG") != NULL)
    {
    parseDebug = 1;
    }

  yyset_in(ifile);
  yyset_out(errfile);
  ret = yyparse();

  if (ret)
    {
    print_parser_error("syntax error", NULL, 0);
    return NULL;
    }

  free(currentFunction);
  yylex_destroy();

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
  strncpy(main_class, &filename[i], j-i);
  main_class[j-i] = '\0';

  /* special treatment of the main class in the file */
  for (i = 0; i < currentNamespace->NumberOfClasses; i++)
    {
    if (strcmp(currentNamespace->Classes[i]->Name, main_class) == 0)
      {
      data->MainClass = currentNamespace->Classes[i];
      break;
      }
    }
  free(main_class);

  vtkParsePreprocess_Free(preprocessor);
  preprocessor = NULL;
  macroName = NULL;

  file_info = data;
  data = NULL;

  return file_info;
}

/* Read a hints file and update the FileInfo */
int vtkParse_ReadHints(FileInfo *file_info, FILE *hfile, FILE *errfile)
{
  char h_cls[512];
  char h_func[512];
  unsigned int h_type, type;
  unsigned long h_value;
  FunctionInfo *func_info;
  ClassInfo *class_info;
  NamespaceInfo *contents;
  unsigned long i, j;
  int lineno = 0;
  int n;

  contents = file_info->Contents;

  /* read each hint line in succession */
  while ((n = fscanf(hfile,"%s %s %x %lu", h_cls, h_func, &h_type, &h_value))
         != EOF)
    {
    lineno++;
    if (n < 4)
      {
      fprintf(errfile, "Wrapping: error parsing hints file line %i\n", lineno);
      exit(1);
      }

    /* erase "ref" and qualifiers from hint type */
    type = ((h_type & VTK_PARSE_BASE_TYPE) |
            (h_type & VTK_PARSE_POINTER_LOWMASK));

    /* find the matching class */
    for (i = 0; i < contents->NumberOfClasses; i++)
      {
      class_info = contents->Classes[i];

      if (strcmp(h_cls, class_info->Name) == 0)
        {
        /* find the matching function */
        for (j = 0; j < class_info->NumberOfFunctions; j++)
          {
          func_info = class_info->Functions[j];

          if ((strcmp(h_func, func_info->Name) == 0) &&
              func_info->ReturnValue &&
              (type == ((func_info->ReturnValue->Type & ~VTK_PARSE_REF) &
                        VTK_PARSE_UNQUALIFIED_TYPE)))
            {
            /* types that hints are accepted for */
            switch (func_info->ReturnValue->Type & VTK_PARSE_UNQUALIFIED_TYPE)
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
              case VTK_PARSE_CHAR_PTR:
                {
                if (func_info->ReturnValue->NumberOfDimensions == 0)
                  {
                  char text[64];
                  sprintf(text, "%lu", h_value);
                  func_info->ReturnValue->Count = h_value;
                  vtkParse_AddStringToArray(
                    &func_info->ReturnValue->Dimensions,
                    &func_info->ReturnValue->NumberOfDimensions,
                    vtkParse_CacheString(
                      file_info->Strings, text, strlen(text)));
#ifndef VTK_PARSE_LEGACY_REMOVE
                  func_info->HaveHint = 1;
                  func_info->HintSize = h_value;
#endif
                  }
                break;
                }
              default:
                {
                fprintf(errfile,
                        "Wrapping: unhandled hint type %#x\n", h_type);
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
  vtkParse_FreeFile(file_info);
  vtkParse_FreeStringCache(file_info->Strings);
  free(file_info->Strings);
  free(file_info);
}

/* Set a property before parsing */
void vtkParse_SetClassProperty(
  const char *classname, const char *property)
{
   /* the only property recognized */
   if (strcmp(property, "concrete") == 0 ||
       strcmp(property, "CONCRETE") == 0 ||
       strcmp(property, "Concrete") == 0)
     {
     char *cp = (char *)malloc(strlen(classname) + 1);
     strcpy(cp, classname);

     vtkParse_AddStringToArray(&ConcreteClasses,
                               &NumberOfConcreteClasses,
                               cp);
     }
}

/** Define a preprocessor macro. Function macros are not supported.  */
void vtkParse_DefineMacro(const char *name, const char *definition)
{
  size_t n = vtkidlen(name);
  size_t l;
  char *cp;

  if (definition == NULL)
    {
    definition = "";
    }

  l = n + strlen(definition) + 3;
  cp = (char *)malloc(l);
  cp[0] = 'D';
  strncpy(&cp[1], name, n);
  cp[n+1] = '\0';
  if (definition[0] != '\0')
    {
    cp[n+1] = '=';
    strcpy(&cp[n+2], definition);
    }
  cp[l] = '\0';

  vtkParse_AddStringToArray(&Definitions, &NumberOfDefinitions, cp);
}

/** Undefine a preprocessor macro.  */
void vtkParse_UndefineMacro(const char *name)
{
  size_t n = vtkidlen(name);
  char *cp;

  cp = (char *)malloc(n+2);
  cp[0] = 'U';
  strncpy(&cp[1], name, n);
  cp[n+1] = '\0';

  vtkParse_AddStringToArray(&Definitions, &NumberOfDefinitions, cp);
}

/** Add an include directory, for use with the "-I" option.  */
void vtkParse_IncludeDirectory(const char *dirname)
{
  size_t n = strlen(dirname);
  char *cp;
  unsigned long i;

  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    if (strncmp(IncludeDirectories[i], dirname, n) == 0 &&
        IncludeDirectories[i][n] == '\0')
      {
      return;
      }
    }

  cp = (char *)malloc(n+1);
  strcpy(cp, dirname);

  vtkParse_AddStringToArray(
    &IncludeDirectories, &NumberOfIncludeDirectories, cp);
}

/** Return the full path to a header file.  */
const char *vtkParse_FindIncludeFile(const char *filename)
{
  static PreprocessInfo info = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int val;
  unsigned long i;

  /* add include files specified on the command line */
  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    vtkParsePreprocess_IncludeDirectory(&info, IncludeDirectories[i]);
    }

  return vtkParsePreprocess_FindIncludeFile(&info, filename, 0, &val);
}
