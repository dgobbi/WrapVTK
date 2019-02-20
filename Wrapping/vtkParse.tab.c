/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2015 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user declarations.  */
#line 15 "vtkParse.y" /* glr.c:240  */


/*

This file must be translated to C and modified to build everywhere.

Run yacc like this:

  yacc -b vtkParse vtkParse.y

Modify vtkParse.tab.c:
  - convert TABs to spaces (eight per tab)
  - remove spaces from ends of lines, s/ *$//g
  - replace all instances of "static inline" with "static".
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
refactored to make it more similar to the C++ 1998 grammar, but there
are still many very significant differences.

The most significant difference between this parser and a "standard"
parser is that it only parses declarations in detail.  All other
statements and expressions are parsed as arbitrary sequences of symbols,
without any syntactic analysis.

The "unqualified_id" does not directly include "operator_function_id" or
"conversion_function_id" (e.g. ids like "operator=" or "operator int*").
Instead, these two id types are used to allow operator functions to be
handled by their own rules, rather than by the generic function rules.
These ids can only be used in function declarations and using declarations.

Types are handled quite differently from the C++ BNF.  These differences
represent a prolonged (and ultimately successful) attempt to empirically
create a yacc parser without any shift/reduce conflicts.  The rules for
types are organized according to the way that types are usually defined
in working code, rather than strictly according to C++ grammar.


The declaration specifier "typedef" can only appear at the beginning
of a declaration sequence.  There are also restrictions on where class
and enum specifiers can be used: you can declare a new struct within a
variable declaration, but not within a parameter declaration.

The lexer returns each of "(scope::*", "(*", "(a::b::*", etc. as single
tokens.  The C++ BNF, in contrast, would consider these to be a "("
followed by a "ptr_operator".  The lexer concatenates these tokens in
order to eliminate shift/reduce conflicts in the parser.  However, this
means that this parser will only recognize "scope::*" as valid if it is
preceded by "(", e.g. as part of a member function pointer specification.

Variables that are initialized via constructor arguments, for example
"someclass variablename(arglist)", must take a literals as the first
argument.  If an identifier is used as the first argument, then the
parser will interpret the variable declaration as a function declaration,
since the parser will assume the identifier names a type.

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
#define yyerror(a) print_parser_error(a, NULL, 0)
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

/* Define the kinds of [[attributes]] to collect */
enum
{
  VTK_PARSE_ATTRIB_NONE,
  VTK_PARSE_ATTRIB_DECL,  /* modify a declaration */
  VTK_PARSE_ATTRIB_ID,    /* modify an id */
  VTK_PARSE_ATTRIB_REF,   /* modify *, &, or && */
  VTK_PARSE_ATTRIB_FUNC,  /* modify a function or method */
  VTK_PARSE_ATTRIB_ARRAY, /* modify an array size specifier */
  VTK_PARSE_ATTRIB_CLASS  /* modify class, struct, union, or enum */
};

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

/* options that can be set by the programs that use the parser */
int            IgnoreBTX = 0;
int            Recursive = 0;
const char    *CommandName = NULL;

/* various state variables */
NamespaceInfo *currentNamespace = NULL;
ClassInfo     *currentClass = NULL;
FunctionInfo  *currentFunction = NULL;
TemplateInfo  *currentTemplate = NULL;
const char    *currentEnumName = NULL;
const char    *currentEnumValue = NULL;
unsigned int   currentEnumType = 0;
parse_access_t access_level = VTK_ACCESS_PUBLIC;

/* functions from vtkParse.l */
void print_parser_error(const char *text, const char *cp, size_t n);

/* helper functions */
const char *type_class(unsigned int type, const char *classname);
void start_class(const char *classname, int is_struct_or_union);
void end_class();
void add_base_class(ClassInfo *cls, const char *name, int access_lev,
                    unsigned int extra);
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
void start_enum(const char *name, int is_scoped,
                unsigned int type, const char *basename);
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
void handle_attribute(const char *att, int pack);
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

/*----------------------------------------------------------------
 * Comments
 */

enum comment_enum
{
  ClosedComment = -2,
  StickyComment = -1,
  NoComment = 0,
  NormalComment = 1,
  NameComment = 2,
  DescriptionComment = 3,
  SeeAlsoComment = 4,
  CaveatsComment = 5,
  DoxygenComment = 6,
  TrailingComment = 7
};

/* "private" variables */
char          *commentText = NULL;
size_t         commentLength = 0;
size_t         commentAllocatedLength = 0;
int            commentState = 0;
int            commentMemberGroup = 0;
int            commentGroupDepth = 0;
parse_dox_t    commentType = DOX_COMMAND_OTHER;
const char    *commentTarget = NULL;

/* Struct for recognizing certain doxygen commands */
struct DoxygenCommandInfo
{
  const char *name;
  size_t length;
  parse_dox_t type;
};

/* List of doxygen commands (@cond is not handled yet) */
struct DoxygenCommandInfo doxygenCommands[] = {
  { "def", 3, DOX_COMMAND_DEF },
  { "category", 8, DOX_COMMAND_CATEGORY },
  { "interface", 9, DOX_COMMAND_INTERFACE },
  { "protocol", 8, DOX_COMMAND_PROTOCOL },
  { "class", 5, DOX_COMMAND_CLASS },
  { "enum", 4, DOX_COMMAND_ENUM },
  { "struct", 6, DOX_COMMAND_STRUCT },
  { "union", 5, DOX_COMMAND_UNION },
  { "namespace", 9, DOX_COMMAND_NAMESPACE },
  { "typedef", 7, DOX_COMMAND_TYPEDEF },
  { "fn", 2, DOX_COMMAND_FN },
  { "property", 8, DOX_COMMAND_PROPERTY },
  { "var", 3, DOX_COMMAND_VAR },
  { "name", 4, DOX_COMMAND_NAME },
  { "defgroup", 8, DOX_COMMAND_DEFGROUP },
  { "addtogroup", 10, DOX_COMMAND_ADDTOGROUP },
  { "weakgroup", 9, DOX_COMMAND_WEAKGROUP },
  { "example", 7, DOX_COMMAND_EXAMPLE },
  { "file", 4, DOX_COMMAND_FILE },
  { "dir", 3, DOX_COMMAND_DIR },
  { "mainpage", 8, DOX_COMMAND_MAINPAGE },
  { "page", 4, DOX_COMMAND_PAGE },
  { "subpage", 7, DOX_COMMAND_SUBPAGE },
  { "internal", 8, DOX_COMMAND_INTERNAL },
  { "package", 7, DOX_COMMAND_PACKAGE },
  { "privatesection", 14, DOX_COMMAND_PRIVATESECTION },
  { "protectedsection", 16, DOX_COMMAND_PROTECTEDSECTION },
  { "publicsection", 13, DOX_COMMAND_PUBLICSECTION },
  { NULL, 0, DOX_COMMAND_OTHER }
};

void closeComment();

/* Clear the comment buffer */
void clearComment()
{
  commentLength = 0;
  if (commentText)
  {
    commentText[commentLength] = '\0';
  }
  commentState = 0;
  commentType = DOX_COMMAND_OTHER;
}

/* This is called when entering or leaving a comment block */
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

/* Get the text from the comment buffer */
const char *getComment()
{
  const char *text = commentText;
  const char *cp = commentText;
  size_t l = commentLength;

  if (commentText != NULL && commentState != 0)
  {
    /* strip trailing blank lines */
    while (l > 0 && (cp[l-1] == ' ' || cp[l-1] == '\t' ||
                     cp[l-1] == '\r' || cp[l-1] == '\n'))
    {
      if (cp[l-1] == '\n')
      {
        commentLength = l;
      }
      l--;
    }
    commentText[commentLength] = '\0';
    /* strip leading blank lines */
    while (*cp == ' ' || *cp == '\t' || *cp == '\r' || *cp == '\n')
    {
      if (*cp == '\n')
      {
        text = cp + 1;
      }
      cp++;
    }
    return text;
  }

  return NULL;
}

/* Check for doxygen commands that mark unwanted comments */
parse_dox_t checkDoxygenCommand(const char *text, size_t n)
{
  struct DoxygenCommandInfo *info;
  for (info = doxygenCommands; info->name; info++)
  {
    if (info->length == n && strncmp(text, info->name, n) == 0)
    {
      return info->type;
    }
  }
  return DOX_COMMAND_OTHER;
}

/* This is called whenever a comment line is encountered */
void addCommentLine(const char *line, size_t n, int type)
{
  size_t i, j;
  parse_dox_t t = DOX_COMMAND_OTHER;

  if (type == DoxygenComment || commentState == DoxygenComment)
  {
    if (type == DoxygenComment)
    {
      /* search for '@' and backslash */
      for (i = 0; i+1 < n; i++)
      {
        if (line[i] == '@' || line[i] == '\\')
        {
          j = ++i;
          while (i < n && line[i] >= 'a' && line[i] <= 'z')
          {
            i++;
          }
          if (line[i-1] == '@' && (line[i] == '{' || line[i] == '}'))
          {
            if (line[i] == '{')
            {
              commentGroupDepth++;
            }
            else
            {
              --commentGroupDepth;
            }
            closeComment();
            return;
          }
          else
          {
            /* record the type of this comment */
            t = checkDoxygenCommand(&line[j], i-j);
            if (t != DOX_COMMAND_OTHER)
            {
              while (i < n && line[i] == ' ')
              {
                i++;
              }
              j = i;
              while (i < n && vtkParse_CharType(line[i], CPRE_XID))
              {
                i++;
              }
              commentTarget = vtkstrndup(&line[j], i-j);
              /* remove this line from the comment */
              n = 0;
            }
          }
        }
      }
    }
    else if (commentState == DoxygenComment)
    {
      return;
    }
    if (commentState != type)
    {
      setCommentState(type);
    }
    if (t != DOX_COMMAND_OTHER)
    {
      commentType = t;
    }
  }
  else if (type == TrailingComment)
  {
    if (commentState != type)
    {
      setCommentState(type);
    }
  }
  else if (commentState == 0 ||
           commentState == StickyComment ||
           commentState == ClosedComment)
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
    if (!commentText)
    {
      fprintf(stderr, "Wrapping: out of memory\n");
      exit(1);
    }
  }

  if (n > 0)
  {
    memcpy(&commentText[commentLength], line, n);
  }
  commentLength += n;
  commentText[commentLength++] = '\n';
  commentText[commentLength] = '\0';
}

/* Store a doxygen comment */
void storeComment()
{
  CommentInfo *info = (CommentInfo *)malloc(sizeof(CommentInfo));
  vtkParse_InitComment(info);
  info->Type = commentType;
  info->Name = commentTarget;
  info->Comment = vtkstrdup(getComment());

  if (commentType >= DOX_COMMAND_DEFGROUP)
  {
    /* comment has no scope, it is global to the project */
    vtkParse_AddCommentToNamespace(data->Contents, info);
  }
  else
  {
    /* comment is scoped to current namespace */
    if (currentClass)
    {
      vtkParse_AddCommentToClass(currentClass, info);
    }
    else
    {
      vtkParse_AddCommentToNamespace(currentNamespace, info);
    }
  }
}

/* Apply a doxygen trailing comment to the previous item */
void applyComment(ClassInfo *cls)
{
  unsigned long i;
  ItemInfo *item;
  const char *comment = vtkstrdup(getComment());

  i = cls->NumberOfItems;
  if (i > 0)
  {
    item = &cls->Items[--i];
    if (item->Type == VTK_NAMESPACE_INFO)
    {
      cls->Namespaces[item->Index]->Comment = comment;
    }
    else if (item->Type == VTK_CLASS_INFO ||
             item->Type == VTK_STRUCT_INFO ||
             item->Type == VTK_UNION_INFO)
    {
      cls->Classes[item->Index]->Comment = comment;
    }
    else if (item->Type == VTK_ENUM_INFO)
    {
      cls->Enums[item->Index]->Comment = comment;
    }
    else if (item->Type == VTK_FUNCTION_INFO)
    {
      cls->Functions[item->Index]->Comment = comment;
    }
    else if (item->Type == VTK_VARIABLE_INFO)
    {
      cls->Variables[item->Index]->Comment = comment;
    }
    else if (item->Type == VTK_CONSTANT_INFO)
    {
      cls->Constants[item->Index]->Comment = comment;
    }
    else if (item->Type == VTK_TYPEDEF_INFO)
    {
      cls->Typedefs[item->Index]->Comment = comment;
    }
    else if (item->Type == VTK_USING_INFO)
    {
      cls->Usings[item->Index]->Comment = comment;
    }
  }
}

/* This is called when a comment block ends */
void closeComment()
{
  const char *cp;
  size_t l;

  switch (commentState)
  {
    case ClosedComment:
      clearComment();
      break;
    case NormalComment:
      /* Make comment persist until a new comment starts */
      commentState = StickyComment;
      break;
    case NameComment:
      /* For NameComment, strip the comment */
      cp = getComment();
      l = strlen(cp);
      while (l > 0 &&
             (cp[l-1] == '\n' || cp[l-1] == '\r' || cp[l-1] == ' '))
      {
        l--;
      }
      data->NameComment = vtkstrndup(cp, l);
      clearComment();
      break;
    case DescriptionComment:
      data->Description = vtkstrdup(getComment());
      clearComment();
      break;
    case SeeAlsoComment:
      data->SeeAlso = vtkstrdup(getComment());
      clearComment();
      break;
    case CaveatsComment:
      data->Caveats = vtkstrdup(getComment());
      clearComment();
      break;
    case DoxygenComment:
      if (commentType == DOX_COMMAND_OTHER)
      {
        /* Apply only to next item unless within a member group */
        commentState = (commentMemberGroup ? StickyComment : ClosedComment);
      }
      else
      {
        /* Comment might not apply to next item, so store it */
        storeComment();
        clearComment();
      }
      break;
    case TrailingComment:
      if (currentClass)
      {
        applyComment(currentClass);
      }
      else
      {
        applyComment(currentNamespace);
      }
      clearComment();
      break;
  }
}

/* This is called when a blank line occurs in the header file */
void commentBreak()
{
  if (!commentMemberGroup && commentState == StickyComment)
  {
    clearComment();
  }
  else if (commentState == DoxygenComment)
  {
    /* blank lines only end targeted doxygen comments */
    if (commentType != DOX_COMMAND_OTHER)
    {
      closeComment();
    }
  }
  else
  {
    /* blank lines end VTK comments */
    closeComment();
  }
}

/* This is called when doxygen @{ or @} are encountered */
void setCommentMemberGroup(int g)
{
  commentMemberGroup = g;
  clearComment();
}

/* Assign comments to the items that they apply to */
void assignComments(ClassInfo *cls)
{
  unsigned long i, j;
  int t;
  const char *name;
  const char *comment;

  for (i = 0; i < cls->NumberOfComments; i++)
  {
    t = cls->Comments[i]->Type;
    name = cls->Comments[i]->Name;
    comment = cls->Comments[i]->Comment;
    /* find the item the comment applies to */
    if (t == DOX_COMMAND_CLASS ||
        t == DOX_COMMAND_STRUCT ||
        t == DOX_COMMAND_UNION)
    {
      for (j = 0; j < cls->NumberOfClasses; j++)
      {
        if (cls->Classes[j]->Name && name &&
            strcmp(cls->Classes[j]->Name, name) == 0)
        {
          cls->Classes[j]->Comment = comment;
          break;
        }
      }
    }
    else if (t == DOX_COMMAND_ENUM)
    {
      for (j = 0; j < cls->NumberOfEnums; j++)
      {
        if (cls->Enums[j]->Name && name &&
            strcmp(cls->Enums[j]->Name, name) == 0)
        {
          cls->Enums[j]->Comment = comment;
          break;
        }
      }
    }
    else if (t == DOX_COMMAND_TYPEDEF)
    {
      for (j = 0; j < cls->NumberOfTypedefs; j++)
      {
        if (cls->Typedefs[j]->Name && name &&
            strcmp(cls->Typedefs[j]->Name, name) == 0)
        {
          cls->Typedefs[j]->Comment = comment;
          break;
        }
      }
    }
    else if (t == DOX_COMMAND_FN)
    {
      for (j = 0; j < cls->NumberOfFunctions; j++)
      {
        if (cls->Functions[j]->Name && name &&
            strcmp(cls->Functions[j]->Name, name) == 0)
        {
          cls->Functions[j]->Comment = comment;
          break;
        }
      }
    }
    else if (t == DOX_COMMAND_VAR)
    {
      for (j = 0; j < cls->NumberOfVariables; j++)
      {
        if (cls->Variables[j]->Name && name &&
            strcmp(cls->Variables[j]->Name, name) == 0)
        {
          cls->Variables[j]->Comment = comment;
          break;
        }
      }
      for (j = 0; j < cls->NumberOfConstants; j++)
      {
        if (cls->Constants[j]->Name && name &&
            strcmp(cls->Constants[j]->Name, name) == 0)
        {
          cls->Constants[j]->Comment = comment;
          break;
        }
      }
    }
    else if (t == DOX_COMMAND_NAMESPACE)
    {
      for (j = 0; j < cls->NumberOfNamespaces; j++)
      {
        if (cls->Namespaces[j]->Name && name &&
            strcmp(cls->Namespaces[j]->Name, name) == 0)
        {
          cls->Namespaces[j]->Comment = comment;
          break;
        }
      }
    }
  }

  /* recurse into child classes */
  for (i = 0; i < cls->NumberOfClasses; i++)
  {
    if (cls->Classes[i])
    {
      assignComments(cls->Classes[i]);
    }
  }

  /* recurse into child namespaces */
  for (i = 0; i < cls->NumberOfNamespaces; i++)
  {
    if (cls->Namespaces[i])
    {
      assignComments(cls->Namespaces[i]);
    }
  }
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
    currentNamespace->Name = name;
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
  return vtkstrdup(cp);
}

/* cut the sig from the mark to the current location, and clear the mark */
const char *cutSig()
{
  const char *cp = NULL;
  if (sigMarkDepth > 0)
  {
    sigMarkDepth--;
  }
  if (signature)
  {
    sigLength = sigMark[sigMarkDepth];
    cp = vtkstrdup(&signature[sigLength]);
    signature[sigLength] = 0;
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
void chopSig()
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

/* chop the last space from the signature unless the preceding token
   is an operator (used to remove spaces before argument lists) */
void postSigLeftBracket(const char *s)
{
  if (signature)
  {
    size_t n = sigLength;
    if (n > 1 && signature[n-1] == ' ')
    {
      const char *ops = "%*/-+!~&|^<>=.,:;{}";
      char c = signature[n-2];
      const char *cp;
      for (cp = ops; *cp != '\0'; cp++)
      {
        if (*cp == c) { break; }
      }
      if (*cp == '\0')
      {
        signature[n-1] = '\0';
        sigLength--;
      }
    }
  }
  postSig(s);
}

/* chop trailing space and add a right bracket */
void postSigRightBracket(const char *s)
{
  chopSig();
  postSig(s);
}

/*----------------------------------------------------------------
 * Subroutines for building a type
 */

/* "private" variables */
unsigned int storedType;
unsigned int typeStack[10];
unsigned long typeDepth = 0;

/* save the type on the stack */
void pushType()
{
  typeStack[typeDepth++] = storedType;
}

/* pop the type stack */
void popType()
{
  storedType = typeStack[--typeDepth];
}

/* clear the storage type */
void clearType()
{
  storedType = 0;
}

/* save the type */
void setTypeBase(unsigned int base)
{
  storedType &= ~(unsigned int)(VTK_PARSE_BASE_TYPE);
  storedType |= base;
}

/* set a type modifier bit */
void setTypeMod(unsigned int mod)
{
  storedType |= mod;
}

/* modify the indirection (pointers, refs) in the storage type */
void setTypePtr(unsigned int ind)
{
  storedType &= ~(unsigned int)(VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE);
  ind &= (VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE);
  storedType |= ind;
}

/* retrieve the storage type */
unsigned int getType()
{
  return storedType;
}

/* combine two primitive type parts, e.g. "long int" */
unsigned int buildTypeBase(unsigned int a, unsigned int b)
{
  unsigned int base = (a & VTK_PARSE_BASE_TYPE);
  unsigned int basemod = (b & VTK_PARSE_BASE_TYPE);

  switch (base)
  {
    case 0:
      base = basemod;
      break;
    case VTK_PARSE_UNSIGNED_INT:
      base = (basemod | VTK_PARSE_UNSIGNED);
      break;
    case VTK_PARSE_INT:
      base = basemod;
      if (base == VTK_PARSE_CHAR)
      {
        base = VTK_PARSE_SIGNED_CHAR;
      }
      break;
    case VTK_PARSE_CHAR:
      if (basemod == VTK_PARSE_INT)
      {
        base = VTK_PARSE_SIGNED_CHAR;
      }
      else if (basemod == VTK_PARSE_UNSIGNED_INT)
      {
        base = VTK_PARSE_UNSIGNED_CHAR;
      }
      break;
    case VTK_PARSE_SHORT:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
      {
        base = VTK_PARSE_UNSIGNED_SHORT;
      }
      break;
    case VTK_PARSE_LONG:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
      {
        base = VTK_PARSE_UNSIGNED_LONG;
      }
      else if (basemod == VTK_PARSE_LONG)
      {
        base = VTK_PARSE_LONG_LONG;
      }
      else if (basemod == VTK_PARSE_DOUBLE)
      {
        base = VTK_PARSE_LONG_DOUBLE;
      }
      break;
    case VTK_PARSE_UNSIGNED_LONG:
      if (basemod == VTK_PARSE_LONG)
      {
        base = VTK_PARSE_UNSIGNED_LONG_LONG;
      }
      break;
    case VTK_PARSE_LONG_LONG:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
      {
        base = VTK_PARSE_UNSIGNED_LONG_LONG;
      }
      break;
    case VTK_PARSE___INT64:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
      {
        base = VTK_PARSE_UNSIGNED___INT64;
      }
      break;
    case VTK_PARSE_DOUBLE:
      if (basemod == VTK_PARSE_LONG)
      {
        base = VTK_PARSE_LONG_DOUBLE;
      }
      break;
  }

  return ((a & ~(unsigned int)(VTK_PARSE_BASE_TYPE)) | base);
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
                            size);
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

  arrayDimensions[0] = size;
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
const char *currentVarName = 0;
const char *currentVarValue = 0;
const char *currentId = 0;

/* clear the var Id */
void clearVarName(void)
{
  currentVarName = NULL;
}

/* set the var Id */
void setVarName(const char *text)
{
  currentVarName = text;
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
  currentVarValue = text;
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
  if (currentId == NULL)
  {
    currentId = text;
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
  functionVarNameStack[functionDepth] = getVarName();
  functionTypeIdStack[functionDepth] = getTypeId();
  pushType();
  clearType();
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
  popType();

  functionStack[functionDepth+1] = newFunction;
}

FunctionInfo *getFunction()
{
  return functionStack[functionDepth+1];
}

/*----------------------------------------------------------------
 * Attributes
 */

int attributeRole = 0;
const char *attributePrefix = NULL;

/* Set kind of attributes to collect in attribute_specifier_seq */
void setAttributeRole(int x)
{
  attributeRole = x;
}

/* Get the current kind of attribute */
int getAttributeRole()
{
  return attributeRole;
}

/* Ignore attributes until further notice */
void clearAttributeRole()
{
  attributeRole = 0;
}

/* Set the "using" prefix for attributes */
void setAttributePrefix(const char *x)
{
  attributePrefix = x;
}

/* Get the "using" prefix for attributes */
const char *getAttributePrefix()
{
  return attributePrefix;
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
         (vtkParse_CharType(cp[i-1], CPRE_XID) ||
          cp[i-1] == ':' || cp[i-1] == '>'))
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

  /* if there are two ampersands, it is an rvalue reference */
  if ((type1 & type2 & VTK_PARSE_REF) != 0)
  {
    result |= VTK_PARSE_RVALUE;
  }

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


#line 1861 "vtkParse.tab.c" /* glr.c:240  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
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
    BIN_LITERAL = 270,
    OCT_LITERAL = 271,
    FLOAT_LITERAL = 272,
    CHAR_LITERAL = 273,
    ZERO = 274,
    NULLPTR = 275,
    SSIZE_T = 276,
    SIZE_T = 277,
    NULLPTR_T = 278,
    BEGIN_ATTRIB = 279,
    STRUCT = 280,
    CLASS = 281,
    UNION = 282,
    ENUM = 283,
    PUBLIC = 284,
    PRIVATE = 285,
    PROTECTED = 286,
    CONST = 287,
    VOLATILE = 288,
    MUTABLE = 289,
    STATIC = 290,
    THREAD_LOCAL = 291,
    VIRTUAL = 292,
    EXPLICIT = 293,
    INLINE = 294,
    CONSTEXPR = 295,
    FRIEND = 296,
    EXTERN = 297,
    OPERATOR = 298,
    TEMPLATE = 299,
    THROW = 300,
    TRY = 301,
    CATCH = 302,
    NOEXCEPT = 303,
    DECLTYPE = 304,
    TYPENAME = 305,
    TYPEDEF = 306,
    NAMESPACE = 307,
    USING = 308,
    NEW = 309,
    DELETE = 310,
    DEFAULT = 311,
    STATIC_CAST = 312,
    DYNAMIC_CAST = 313,
    CONST_CAST = 314,
    REINTERPRET_CAST = 315,
    OP_LSHIFT_EQ = 316,
    OP_RSHIFT_EQ = 317,
    OP_LSHIFT = 318,
    OP_RSHIFT_A = 319,
    OP_DOT_POINTER = 320,
    OP_ARROW_POINTER = 321,
    OP_ARROW = 322,
    OP_INCR = 323,
    OP_DECR = 324,
    OP_PLUS_EQ = 325,
    OP_MINUS_EQ = 326,
    OP_TIMES_EQ = 327,
    OP_DIVIDE_EQ = 328,
    OP_REMAINDER_EQ = 329,
    OP_AND_EQ = 330,
    OP_OR_EQ = 331,
    OP_XOR_EQ = 332,
    OP_LOGIC_AND = 333,
    OP_LOGIC_OR = 334,
    OP_LOGIC_EQ = 335,
    OP_LOGIC_NEQ = 336,
    OP_LOGIC_LEQ = 337,
    OP_LOGIC_GEQ = 338,
    ELLIPSIS = 339,
    DOUBLE_COLON = 340,
    OTHER = 341,
    AUTO = 342,
    VOID = 343,
    BOOL = 344,
    FLOAT = 345,
    DOUBLE = 346,
    INT = 347,
    SHORT = 348,
    LONG = 349,
    INT64__ = 350,
    CHAR = 351,
    CHAR16_T = 352,
    CHAR32_T = 353,
    WCHAR_T = 354,
    SIGNED = 355,
    UNSIGNED = 356,
    IdType = 357,
    FloatType = 358,
    TypeInt8 = 359,
    TypeUInt8 = 360,
    TypeInt16 = 361,
    TypeUInt16 = 362,
    TypeInt32 = 363,
    TypeUInt32 = 364,
    TypeInt64 = 365,
    TypeUInt64 = 366,
    TypeFloat32 = 367,
    TypeFloat64 = 368,
    SetMacro = 369,
    GetMacro = 370,
    SetStringMacro = 371,
    GetStringMacro = 372,
    SetClampMacro = 373,
    SetObjectMacro = 374,
    GetObjectMacro = 375,
    BooleanMacro = 376,
    SetVector2Macro = 377,
    SetVector3Macro = 378,
    SetVector4Macro = 379,
    SetVector6Macro = 380,
    GetVector2Macro = 381,
    GetVector3Macro = 382,
    GetVector4Macro = 383,
    GetVector6Macro = 384,
    SetVectorMacro = 385,
    GetVectorMacro = 386,
    ViewportCoordinateMacro = 387,
    WorldCoordinateMacro = 388,
    TypeMacro = 389,
    VTK_BYTE_SWAP_DECL = 390
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 1839 "vtkParse.y" /* glr.c:245  */

  const char   *str;
  unsigned int  integer;

#line 2030 "vtkParse.tab.c" /* glr.c:245  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

#line 2060 "vtkParse.tab.c" /* glr.c:263  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9081

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  302
/* YYNRULES -- Number of rules.  */
#define YYNRULES  751
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1244
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   390

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   155,     2,     2,     2,   151,   145,     2,
     142,   143,   149,   154,   141,   153,   158,   152,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   140,   136,
     144,   139,   150,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   146,     2,   147,   157,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   137,   156,   138,   148,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  2015,  2015,  2017,  2019,  2018,  2029,  2030,  2031,  2032,
    2033,  2034,  2035,  2036,  2037,  2038,  2039,  2040,  2041,  2042,
    2043,  2044,  2045,  2046,  2049,  2050,  2051,  2052,  2053,  2054,
    2057,  2058,  2065,  2072,  2073,  2073,  2075,  2078,  2085,  2086,
    2089,  2090,  2091,  2094,  2095,  2098,  2098,  2113,  2112,  2118,
    2124,  2123,  2128,  2134,  2135,  2136,  2139,  2141,  2143,  2146,
    2147,  2150,  2151,  2153,  2155,  2154,  2163,  2167,  2168,  2169,
    2172,  2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,
    2182,  2183,  2184,  2185,  2186,  2187,  2190,  2191,  2192,  2193,
    2194,  2197,  2198,  2199,  2200,  2203,  2204,  2207,  2209,  2212,
    2217,  2218,  2221,  2222,  2225,  2226,  2227,  2238,  2239,  2240,
    2244,  2245,  2249,  2249,  2262,  2268,  2276,  2277,  2278,  2281,
    2282,  2282,  2286,  2287,  2289,  2290,  2291,  2291,  2299,  2303,
    2304,  2307,  2309,  2311,  2312,  2315,  2316,  2324,  2325,  2328,
    2329,  2331,  2333,  2335,  2339,  2341,  2342,  2345,  2348,  2349,
    2352,  2353,  2352,  2357,  2398,  2401,  2402,  2403,  2405,  2407,
    2409,  2413,  2416,  2416,  2448,  2451,  2450,  2468,  2470,  2469,
    2474,  2476,  2474,  2478,  2480,  2478,  2482,  2485,  2482,  2496,
    2497,  2500,  2501,  2503,  2504,  2507,  2507,  2517,  2518,  2526,
    2527,  2528,  2529,  2532,  2535,  2536,  2537,  2540,  2541,  2542,
    2545,  2546,  2547,  2551,  2552,  2553,  2554,  2557,  2558,  2559,
    2563,  2568,  2562,  2580,  2584,  2595,  2594,  2603,  2607,  2610,
    2620,  2624,  2625,  2628,  2629,  2631,  2632,  2633,  2636,  2637,
    2639,  2640,  2641,  2643,  2644,  2647,  2653,  2654,  2655,  2656,
    2663,  2664,  2667,  2667,  2675,  2676,  2677,  2680,  2682,  2683,
    2687,  2686,  2702,  2717,  2698,  2728,  2728,  2731,  2732,  2735,
    2736,  2739,  2740,  2746,  2747,  2747,  2750,  2751,  2751,  2753,
    2755,  2759,  2761,  2759,  2785,  2786,  2789,  2789,  2791,  2791,
    2793,  2793,  2798,  2799,  2799,  2807,  2810,  2880,  2881,  2883,
    2884,  2884,  2887,  2890,  2891,  2895,  2907,  2906,  2924,  2925,
    2929,  2931,  2931,  2949,  2949,  2951,  2955,  2956,  2957,  2956,
    2962,  2964,  2965,  2966,  2967,  2968,  2969,  2972,  2973,  2977,
    2978,  2982,  2983,  2987,  2988,  2989,  2990,  2993,  2994,  2997,
    2997,  3000,  3001,  3004,  3004,  3008,  3009,  3009,  3016,  3017,
    3020,  3021,  3022,  3023,  3024,  3027,  3029,  3031,  3035,  3037,
    3039,  3041,  3043,  3045,  3047,  3047,  3052,  3055,  3058,  3061,
    3061,  3069,  3069,  3077,  3078,  3079,  3080,  3081,  3082,  3083,
    3084,  3085,  3086,  3087,  3088,  3089,  3090,  3091,  3092,  3093,
    3094,  3095,  3096,  3097,  3098,  3105,  3106,  3107,  3108,  3109,
    3110,  3111,  3117,  3118,  3121,  3122,  3124,  3125,  3128,  3129,
    3132,  3133,  3134,  3135,  3138,  3139,  3140,  3141,  3142,  3146,
    3147,  3148,  3151,  3152,  3155,  3156,  3164,  3167,  3167,  3169,
    3169,  3173,  3174,  3176,  3180,  3181,  3183,  3183,  3186,  3188,
    3192,  3195,  3195,  3197,  3197,  3201,  3204,  3204,  3206,  3206,
    3210,  3211,  3213,  3215,  3217,  3219,  3221,  3225,  3226,  3229,
    3230,  3231,  3232,  3233,  3234,  3235,  3236,  3237,  3238,  3239,
    3240,  3241,  3242,  3243,  3244,  3245,  3246,  3247,  3248,  3249,
    3250,  3253,  3254,  3255,  3256,  3257,  3258,  3259,  3260,  3261,
    3262,  3263,  3264,  3265,  3266,  3267,  3287,  3288,  3289,  3290,
    3293,  3297,  3301,  3301,  3305,  3306,  3321,  3322,  3347,  3347,
    3351,  3351,  3355,  3355,  3359,  3359,  3363,  3363,  3367,  3367,
    3370,  3371,  3374,  3378,  3379,  3382,  3385,  3386,  3387,  3388,
    3391,  3391,  3395,  3396,  3399,  3400,  3401,  3401,  3404,  3405,
    3407,  3408,  3411,  3412,  3420,  3420,  3430,  3431,  3431,  3430,
    3440,  3440,  3450,  3450,  3459,  3459,  3459,  3492,  3491,  3502,
    3503,  3503,  3502,  3512,  3530,  3530,  3535,  3535,  3540,  3540,
    3545,  3545,  3550,  3550,  3555,  3555,  3560,  3560,  3565,  3565,
    3570,  3570,  3587,  3587,  3601,  3638,  3676,  3713,  3714,  3721,
    3722,  3723,  3724,  3725,  3726,  3727,  3728,  3729,  3730,  3731,
    3732,  3735,  3736,  3737,  3738,  3739,  3740,  3741,  3742,  3743,
    3744,  3745,  3746,  3747,  3748,  3749,  3750,  3751,  3752,  3753,
    3754,  3755,  3756,  3757,  3758,  3759,  3760,  3761,  3762,  3763,
    3764,  3765,  3766,  3767,  3768,  3771,  3772,  3773,  3774,  3775,
    3776,  3777,  3778,  3779,  3780,  3781,  3782,  3783,  3784,  3785,
    3786,  3787,  3788,  3789,  3790,  3791,  3792,  3793,  3794,  3795,
    3796,  3797,  3798,  3799,  3800,  3803,  3804,  3805,  3806,  3807,
    3808,  3809,  3810,  3811,  3818,  3819,  3822,  3823,  3824,  3825,
    3825,  3826,  3829,  3830,  3833,  3834,  3835,  3836,  3871,  3871,
    3872,  3873,  3874,  3875,  3898,  3899,  3902,  3903,  3904,  3905,
    3908,  3909,  3910,  3913,  3914,  3916,  3917,  3919,  3920,  3923,
    3924,  3927,  3928,  3929,  3933,  3932,  3946,  3947,  3950,  3950,
    3952,  3952,  3956,  3956,  3958,  3958,  3960,  3960,  3964,  3964,
    3969,  3970,  3972,  3973,  3976,  3977,  3980,  3981,  3984,  3985,
    3986,  3987,  3988,  3989,  3990,  3991,  3991,  3991,  3991,  3991,
    3992,  3993,  3994,  3995,  3996,  3999,  4002,  4003,  4006,  4009,
    4009,  4009
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "VTK_ID", "QT_ID", "StdString",
  "UnicodeString", "OSTREAM", "ISTREAM", "LP", "LA", "STRING_LITERAL",
  "INT_LITERAL", "HEX_LITERAL", "BIN_LITERAL", "OCT_LITERAL",
  "FLOAT_LITERAL", "CHAR_LITERAL", "ZERO", "NULLPTR", "SSIZE_T", "SIZE_T",
  "NULLPTR_T", "BEGIN_ATTRIB", "STRUCT", "CLASS", "UNION", "ENUM",
  "PUBLIC", "PRIVATE", "PROTECTED", "CONST", "VOLATILE", "MUTABLE",
  "STATIC", "THREAD_LOCAL", "VIRTUAL", "EXPLICIT", "INLINE", "CONSTEXPR",
  "FRIEND", "EXTERN", "OPERATOR", "TEMPLATE", "THROW", "TRY", "CATCH",
  "NOEXCEPT", "DECLTYPE", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING",
  "NEW", "DELETE", "DEFAULT", "STATIC_CAST", "DYNAMIC_CAST", "CONST_CAST",
  "REINTERPRET_CAST", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT_A", "OP_DOT_POINTER", "OP_ARROW_POINTER", "OP_ARROW",
  "OP_INCR", "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ",
  "OP_DIVIDE_EQ", "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND", "OP_LOGIC_OR", "OP_LOGIC_EQ", "OP_LOGIC_NEQ",
  "OP_LOGIC_LEQ", "OP_LOGIC_GEQ", "ELLIPSIS", "DOUBLE_COLON", "OTHER",
  "AUTO", "VOID", "BOOL", "FLOAT", "DOUBLE", "INT", "SHORT", "LONG",
  "INT64__", "CHAR", "CHAR16_T", "CHAR32_T", "WCHAR_T", "SIGNED",
  "UNSIGNED", "IdType", "FloatType", "TypeInt8", "TypeUInt8", "TypeInt16",
  "TypeUInt16", "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64",
  "TypeFloat32", "TypeFloat64", "SetMacro", "GetMacro", "SetStringMacro",
  "GetStringMacro", "SetClampMacro", "SetObjectMacro", "GetObjectMacro",
  "BooleanMacro", "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "';'", "'{'", "'}'", "'='", "':'", "','", "'('",
  "')'", "'<'", "'&'", "'['", "']'", "'~'", "'*'", "'>'", "'%'", "'/'",
  "'-'", "'+'", "'!'", "'|'", "'^'", "'.'", "$accept", "translation_unit",
  "opt_declaration_seq", "$@1", "declaration", "template_declaration",
  "explicit_instantiation", "linkage_specification",
  "namespace_definition", "$@2", "namespace_alias_definition",
  "forward_declaration", "simple_forward_declaration", "class_definition",
  "class_specifier", "$@3", "class_head", "$@4", "$@5", "class_key",
  "class_head_name", "class_name", "opt_final", "member_specification",
  "$@6", "member_access_specifier", "member_declaration",
  "template_member_declaration", "friend_declaration",
  "base_specifier_list", "base_specifier", "opt_virtual",
  "opt_access_specifier", "access_specifier", "opaque_enum_declaration",
  "enum_definition", "enum_specifier", "$@7", "enum_head", "enum_key",
  "opt_enum_base", "$@8", "enumerator_list", "enumerator_definition",
  "$@9", "nested_variable_initialization", "ignored_initializer",
  "ignored_class", "ignored_class_body", "typedef_declaration",
  "basic_typedef_declaration", "typedef_declarator_list",
  "typedef_declarator_list_cont", "typedef_declarator",
  "typedef_direct_declarator", "function_direct_declarator", "$@10",
  "$@11", "typedef_declarator_id", "using_declaration", "using_id",
  "using_directive", "alias_declaration", "$@12", "template_head", "$@13",
  "template_parameter_list", "$@14", "template_parameter", "$@15", "$@16",
  "$@17", "$@18", "$@19", "$@20", "opt_ellipsis", "class_or_typename",
  "opt_template_parameter_initializer", "template_parameter_initializer",
  "$@21", "template_parameter_value", "function_definition",
  "function_declaration", "nested_method_declaration",
  "nested_operator_declaration", "method_definition", "method_declaration",
  "operator_declaration", "conversion_function", "$@22", "$@23",
  "conversion_function_id", "operator_function_nr",
  "operator_function_sig", "$@24", "operator_function_id", "operator_sig",
  "function_nr", "function_trailer_clause", "func_cv_qualifier_seq",
  "func_cv_qualifier", "opt_noexcept_specifier", "noexcept_sig",
  "opt_ref_qualifier", "virt_specifier_seq", "virt_specifier",
  "opt_body_as_trailer", "opt_trailing_return_type",
  "trailing_return_type", "$@25", "function_body", "function_try_block",
  "handler_seq", "function_sig", "$@26", "structor_declaration", "$@27",
  "$@28", "structor_sig", "$@29", "opt_ctor_initializer",
  "mem_initializer_list", "mem_initializer",
  "parameter_declaration_clause", "$@30", "parameter_list", "$@31",
  "parameter_declaration", "$@32", "$@33", "opt_initializer",
  "initializer", "$@34", "$@35", "$@36", "constructor_args", "$@37",
  "variable_declaration", "init_declarator_id", "opt_declarator_list",
  "declarator_list_cont", "$@38", "init_declarator",
  "opt_ptr_operator_seq", "direct_abstract_declarator", "$@39",
  "opt_declarator_id", "direct_declarator", "$@40", "lp_or_la", "$@41",
  "opt_array_or_parameters", "$@42", "$@43", "function_qualifiers",
  "abstract_declarator", "declarator", "declarator_id", "bitfield_size",
  "opt_array_decorator_seq", "array_decorator_seq", "$@44",
  "array_decorator_seq_impl", "array_decorator", "$@45",
  "array_size_specifier", "$@46", "id_expression", "unqualified_id",
  "qualified_id", "nested_name_specifier", "$@47", "tilde_sig",
  "identifier_sig", "scope_operator_sig", "template_id", "$@48",
  "decltype_specifier", "$@49", "simple_id", "identifier",
  "opt_decl_specifier_seq", "decl_specifier2", "decl_specifier_seq",
  "decl_specifier", "storage_class_specifier", "function_specifier",
  "cv_qualifier", "cv_qualifier_seq", "store_type", "store_type_specifier",
  "$@50", "$@51", "type_specifier", "trailing_type_specifier", "$@52",
  "trailing_type_specifier_seq", "trailing_type_specifier_seq2", "$@53",
  "$@54", "tparam_type", "tparam_type_specifier2", "$@55", "$@56",
  "tparam_type_specifier", "simple_type_specifier", "type_name",
  "primitive_type", "ptr_operator_seq", "reference", "rvalue_reference",
  "pointer", "$@57", "ptr_cv_qualifier_seq", "pointer_seq",
  "decl_attribute_specifier_seq", "$@58", "id_attribute_specifier_seq",
  "$@59", "ref_attribute_specifier_seq", "$@60",
  "func_attribute_specifier_seq", "$@61", "array_attribute_specifier_seq",
  "$@62", "class_attribute_specifier_seq", "$@63",
  "attribute_specifier_seq", "attribute_specifier",
  "attribute_specifier_contents", "attribute_using_prefix",
  "attribute_list", "attribute", "$@64", "attribute_pack", "attribute_sig",
  "$@65", "attribute_token", "attribute_contents",
  "attribute_contents_item", "declaration_macro", "$@66", "$@67", "$@68",
  "$@69", "$@70", "$@71", "$@72", "$@73", "$@74", "$@75", "$@76", "$@77",
  "$@78", "$@79", "$@80", "$@81", "$@82", "$@83", "$@84", "$@85", "$@86",
  "$@87", "opt_comma", "operator_id", "operator_id_no_delim", "keyword",
  "literal", "constant_expression", "constant_expression_item", "$@88",
  "common_bracket_item", "common_bracket_item_no_scope_operator",
  "any_bracket_contents", "bracket_pitem", "any_bracket_item",
  "braces_item", "angle_bracket_contents", "braces_contents",
  "angle_bracket_pitem", "angle_bracket_item", "angle_brackets_sig",
  "$@89", "right_angle_bracket", "brackets_sig", "$@90", "$@91",
  "parentheses_sig", "$@92", "$@93", "$@94", "braces_sig", "$@95",
  "ignored_items", "ignored_expression", "ignored_item",
  "ignored_item_no_semi", "ignored_item_no_angle", "ignored_braces",
  "ignored_brackets", "ignored_parentheses", "ignored_left_parenthesis", YY_NULLPTR
};
#endif

#define YYPACT_NINF -1047
#define YYTABLE_NINF -705

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
   -1047,    99,   114, -1047, -1047,  6984, -1047,    17,    49,   142,
     145,   192,   281,   288,    20,   127,   154, -1047, -1047, -1047,
     266, -1047, -1047, -1047, -1047, -1047, -1047, -1047,    75, -1047,
     131, -1047,  4489, -1047, -1047,  8592,    83,  1843, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047,   159,   214,   249,   310,   315,   334,
     337,   342,   344,   356,   374,   384,    34,    56,   109,   122,
     140,   162,   169,   176,   218,   229,   259,   278,   285,   339,
     340,   355,   377,   385,   391,   392,   412, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047,    41, -1047, -1047, -1047, -1047, -1047,
   -1047,  8259, -1047,    37,    37,    37,    37, -1047,   419,  8592,
   -1047,   191, -1047,   256,   791,  8968,   477,  7662,   161,   195,
   -1047,   424,  8370, -1047, -1047, -1047, -1047,    98,    50, -1047,
   -1047, -1047, -1047, -1047, -1047,   560, -1047, -1047,   801,   460,
    4957, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,    36, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047,    94,  7662,    28,    40,    48,   165,   168,   185,
     186, -1047,   591, -1047, -1047, -1047, -1047, -1047,  7685,   477,
     477,  8592,    98, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047,   466,    28,    40,    48,   165,   168,   185,   186, -1047,
   -1047, -1047,  7662,  7662, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047,   470,   471, -1047,   791,
    7662,   477,   477,  6940, -1047, -1047, -1047,  6940,  6940, -1047,
    6940,  6940,  6940,  6940,  6940,  6940,  6940,  6940,  6940,  6940,
    6940,  6940,  6940,  6940,  8106,   480,  7912, -1047,  8106, -1047,
    1647,   474,  7662, -1047, -1047, -1047, -1047, -1047, -1047,  8259,
   -1047, -1047,  8481,    98,   494, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047,  8592, -1047, -1047, -1047, -1047, -1047,
   -1047,   304,   472,   477,   477,   477, -1047, -1047, -1047, -1047,
     424, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047,   791, -1047, -1047, -1047, -1047, -1047,
   -1047,  7735, -1047,   292,    61, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047,   362, -1047, -1047, -1047,    97, -1047,   498,
   -1047, -1047,  2305,  2461, -1047, -1047,   250, -1047,  2617,  3709,
    2773, -1047, -1047, -1047, -1047, -1047, -1047,  8134,  8024,  8134,
    7615, -1047, -1047, -1047, -1047, -1047, -1047,  7800, -1047,  2929,
     436,   499, -1047,   501, -1047,   500, -1047, -1047, -1047,  6829,
     791, -1047, -1047, -1047, -1047, -1047, -1047, -1047,   502,  6940,
    6940,  6940,   504,   506,  6940,   508,   509,   510,   512,   514,
     517,   518,   519,   520,   522,   525,   524,   526,   527, -1047,
   -1047,   534, -1047,    98, -1047, -1047, -1047, -1047, -1047, -1047,
      64, -1047,  8836,   691,   477,   477,   560,   536,  6940, -1047,
   -1047, -1047,   423, -1047,  7662,  8481,  7735,  7662,   540,  3085,
     530,  8947,   801, -1047, -1047, -1047,    94, -1047, -1047, -1047,
   -1047, -1047,  8106,  8024,  8106,  7615, -1047, -1047, -1047, -1047,
     416, -1047,   426, -1047,  7459, -1047,   426,   532, -1047,   791,
     212, -1047, -1047, -1047,   547,   543,  7800, -1047,   544,    98,
   -1047, -1047, -1047, -1047, -1047, -1047,  7213,  2191,   539,   361,
     550, -1047,   801, -1047,   555,  3865, -1047, -1047,   554, -1047,
   -1047, -1047, -1047,    29, -1047,  8703,   352,   660, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047,   569, -1047,    98,    82,
     570,   242,  8134,  8134,   272,   393, -1047, -1047, -1047, -1047,
     571,   477, -1047, -1047, -1047,   560,   705,   564,   565,    39,
   -1047, -1047,   572, -1047,   566, -1047, -1047, -1047, -1047, -1047,
   -1047,   573,   575,   576, -1047, -1047,   579,  8592, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
    7662, -1047,   580, -1047, -1047,   135,  1696, -1047, -1047,   583,
   -1047, -1047,   477,   477,  8836, -1047,   404, -1047,   577,  8592,
     588, -1047, -1047,   791,   584, -1047,   137, -1047, -1047,   585,
     643, -1047,   477, -1047, -1047, -1047,   530,  5893,   593,    81,
     594,   423,  7213, -1047,   416, -1047, -1047, -1047, -1047,   304,
   -1047,   589, -1047, -1047, -1047,   586,    27, -1047, -1047, -1047,
   -1047, -1047,  6361, -1047, -1047,  1345, -1047, -1047,   560,   416,
     595, -1047,   590,   550,   383,   477, -1047,   652,    71,   600,
   -1047, -1047, -1047, -1047, -1047,  7662,  7662,  7662, -1047,   477,
     477,  8592,    98,    50, -1047, -1047, -1047, -1047,    98,   352,
    5113,  5269,  5425, -1047,   601, -1047, -1047, -1047,   605,   607,
   -1047,    50, -1047,   604, -1047,   610,  8592, -1047,   598,   608,
   -1047, -1047, -1047, -1047,  8592, -1047, -1047, -1047,  8592,  8592,
   -1047,   611,  8592,  8592,  8592,  8592,  8592,  8592,  8592,  8592,
    8592,  8592,   618, -1047, -1047, -1047, -1047, -1047,   620, -1047,
   -1047, -1047,   548,   621, -1047,   724,   679, -1047, -1047, -1047,
   -1047,  6940, -1047, -1047, -1047,   332,  7662,   679,   679,  3241,
   -1047, -1047,   624, -1047, -1047, -1047,   766,   560,   627, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047,   637, -1047,    -1, -1047, -1047,   586,
   -1047,   614, -1047,   633,    50, -1047,  6049, -1047,  6361, -1047,
   -1047, -1047, -1047,   455, -1047,   434, -1047, -1047, -1047, -1047,
     801, -1047, -1047, -1047, -1047, -1047,   250, -1047, -1047, -1047,
   -1047,  7800, -1047, -1047, -1047, -1047, -1047,    98, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047,   530, -1047,    98, -1047, -1047,   634,  8592, -1047,
     636,  8592, -1047,   638,   639,   640,   641,   650,   658,   659,
     668,   635,   645, -1047,   673,  2025, -1047,  7662, -1047, -1047,
   -1047,  7662, -1047,  1696, -1047, -1047,  6361, -1047,   685, -1047,
   -1047, -1047, -1047, -1047,   426,   738,  8592, -1047, -1047,   494,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,   530,   676,
   -1047, -1047, -1047, -1047, -1047, -1047,   530, -1047,  6673, -1047,
    4645, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
     447, -1047,   694,    61,  7213,   694, -1047,   681,   700, -1047,
   -1047,   689, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047,   824,   825, -1047,  7235,   244,  2191,   100, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047,  7118, -1047,    37, -1047, -1047, -1047,   703,   472,   791,
    7352,    98, -1047,   679,  1696,   679,   621,  6361,  4801, -1047,
     794, -1047, -1047, -1047,    98, -1047,  5581,  5893,  5737,   776,
     702,   699,  6361,   704, -1047, -1047, -1047, -1047, -1047,  6361,
     530,  6205,  7213, -1047, -1047, -1047, -1047, -1047,   706,    98,
   -1047,   694, -1047, -1047,   707, -1047,   708,   710,   711, -1047,
   -1047, -1047,  1504,    37,   472,  7469,   679, -1047, -1047, -1047,
   -1047,  7118, -1047, -1047,  7469, -1047, -1047, -1047, -1047,   791,
    7735, -1047, -1047, -1047,   100, -1047, -1047,   709,   714, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047,  6361, -1047,  6361,   715,
   -1047, -1047, -1047,  6517, -1047, -1047, -1047, -1047, -1047,  4021,
   -1047, -1047, -1047,  7847, -1047, -1047,  1504, -1047, -1047,  7735,
    7469,   726, -1047, -1047,   727,   292,   243, -1047, -1047,  8814,
      70, -1047, -1047, -1047,  6517, -1047,   448,   366, -1047, -1047,
   -1047,   112, -1047,  7847, -1047,  7959, -1047,   731, -1047, -1047,
   -1047, -1047, -1047,  8814, -1047, -1047,    50, -1047,   560, -1047,
   -1047, -1047, -1047, -1047,   100,   130,  3397,  4177,   407,    92,
    7959,   118, -1047, -1047,  3553, -1047, -1047, -1047,   366, -1047,
   -1047, -1047, -1047, -1047,    93,   407, -1047, -1047,  7213, -1047,
    4333, -1047,  7213, -1047
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       3,     0,     4,     1,   498,     0,   510,   453,   454,   455,
     449,   450,   451,   452,   457,   458,   456,    54,    53,    55,
     116,   412,   413,   404,   407,   408,   410,   411,   409,   403,
     405,   218,     0,   361,   426,     0,     0,     0,   358,   471,
     472,   473,   474,   475,   480,   481,   482,   483,   476,   477,
     478,   479,   484,   485,   469,   470,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   356,     5,
      19,    20,    13,    11,    12,     9,    38,    17,   392,    45,
     508,    10,    16,   392,     0,   508,    14,   137,     7,     6,
       8,     0,    18,     0,     0,     0,     0,   207,     0,     0,
      15,     0,   338,   498,     0,     0,     0,     0,   498,   425,
     340,   357,     0,   498,   400,   401,   402,   179,   293,   417,
     421,   424,   498,   498,    21,   499,   118,   117,     0,   406,
       0,   453,   454,   455,   449,   450,   451,   452,   750,   751,
     661,   656,   657,   658,   655,   659,   660,   662,   663,   457,
     458,   456,   720,   628,   627,   629,   648,   631,   633,   632,
     634,   635,   636,   637,   640,   641,   639,   638,   644,   647,
     630,   649,   650,   642,   626,   625,   646,   645,   601,   602,
     643,   653,   652,   651,   654,   603,   604,   605,   734,   606,
     607,   608,   614,   615,   609,   610,   611,   612,   613,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   732,   731,
     744,   469,   470,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   720,   738,   735,   739,   749,   165,   598,
     720,   597,   592,   737,   591,   593,   594,   595,   596,   599,
     600,   736,   743,   742,   733,   740,   741,   722,   728,   730,
     729,   720,     0,     0,   453,   454,   455,   449,   450,   451,
     452,   409,   405,   392,   508,   392,   508,   498,     0,   498,
     425,     0,   179,   385,   387,   386,   390,   391,   389,   388,
     720,    34,   365,   363,   364,   368,   369,   367,   366,   372,
     371,   370,     0,     0,   383,   384,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,     0,   500,   339,     0,
       0,   341,   342,     0,   536,   540,   542,     0,     0,   549,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   293,     0,    52,   510,   293,   112,
     119,     0,     0,    27,    39,    24,   508,    26,    28,     0,
      25,    29,     0,   179,   257,   246,   720,   189,   245,   191,
     192,   190,   210,   508,     0,   213,    22,   429,   354,   197,
     195,   225,   345,     0,   341,   342,   343,    60,   344,    59,
       0,   348,   346,   347,   349,   428,   350,   359,   392,   508,
     392,   508,   138,   208,     0,   498,   419,   398,   303,   305,
     180,     0,   289,   274,   179,   502,   502,   502,   416,   294,
     486,   487,   496,   488,   392,   448,   447,   520,   511,     0,
       3,   722,     0,     0,   707,   706,   170,   164,     0,     0,
       0,   714,   716,   712,   362,   498,   406,   293,    52,   293,
     119,   345,   392,   392,   153,   149,   145,     0,   148,     0,
       0,     0,   156,     0,   154,     0,   510,   158,   157,     0,
       0,   365,   363,   364,   368,   369,   367,   366,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   397,
     396,     0,   289,   179,   498,   394,   395,    63,    41,    50,
     422,   498,     0,     0,    60,     0,   509,     0,   124,   108,
     120,   115,   498,   500,     0,     0,     0,     0,     0,     0,
     264,     0,     0,   229,   228,   504,   227,   255,   351,   352,
     353,   695,   293,    52,   293,   119,   198,   196,   399,   392,
     494,   209,   221,   500,     0,   193,   221,   327,   500,     0,
       0,   276,   286,   275,     0,     0,     0,   319,     0,   179,
     491,   510,   490,   492,   489,   497,   418,     0,     0,   520,
     514,   517,     0,     3,     4,     0,   725,   727,     0,   721,
     724,   726,   745,     0,   167,     0,     0,     0,   746,    31,
     723,   748,   684,   684,   684,   427,     0,   145,   179,   422,
       0,   498,   293,   293,     0,   327,   500,   341,   342,    33,
       0,     0,     3,   161,   162,   501,     0,   601,   602,     0,
     586,   585,     0,   583,     0,   584,   217,   590,   160,   159,
     534,     0,     0,     0,   544,   547,     0,     0,   554,   558,
     562,   566,   556,   560,   564,   568,   570,   572,   574,   575,
       0,    43,   288,   292,   393,    64,     0,    62,    40,    49,
      58,   498,    60,     0,     0,   110,     0,   122,   125,     0,
     114,   423,   498,     0,   258,   259,     0,   720,   244,     0,
     498,   422,     0,   233,   510,   226,   264,     0,     0,   422,
       0,   498,   420,   414,   495,   304,   223,   224,   214,   225,
     222,     0,   219,   300,   328,     0,   321,   199,   194,   500,
     285,   290,     0,   718,   279,     0,   301,   320,   503,   494,
       0,   155,     0,   513,   520,   528,   357,   522,   524,     4,
      32,    30,   747,   168,   166,     0,     0,     0,   443,   442,
     441,     0,   179,   293,   436,   440,   181,   182,   179,     0,
       0,     0,     0,   140,   144,   147,   142,   114,     0,     0,
     139,   293,   150,   321,    37,     4,     0,   589,     0,     0,
     588,   587,   579,   580,     0,   537,   541,   543,     0,     0,
     550,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   577,    67,    68,    69,    46,   498,     0,   104,
     105,   106,   102,    51,    95,   100,   179,    47,    56,   498,
     113,   124,   126,   121,   107,   340,     0,   179,   179,     0,
     211,   270,   265,   266,   271,   355,   252,   505,     0,   710,
     673,   702,   678,   703,   704,   708,   679,   683,   682,   677,
     680,   681,   700,   672,   701,   696,   699,   360,   674,   675,
     676,    44,    42,   111,   114,   415,   230,   215,   333,   330,
     331,     0,   250,     0,   293,   671,   668,   669,   277,   664,
     666,   667,   697,     0,   282,   306,   493,   515,   512,   519,
       0,   523,   521,   526,   525,    36,   170,   444,   445,   446,
     438,   298,   171,   502,   435,   392,   174,   179,   689,   691,
     692,   715,   687,   688,   686,   690,   685,   717,   713,   141,
     143,   146,   264,    35,   179,   581,   582,     0,     0,   545,
       0,     0,   553,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   578,     0,     0,    66,     0,   103,   498,
     101,     0,    97,     0,    57,   123,     0,   722,     0,   130,
     260,   262,   261,   248,   221,   267,     0,   235,   234,   257,
     256,   684,   695,   684,   109,   232,   231,   504,   264,   336,
     332,   324,   325,   326,   323,   322,   264,   291,     0,   665,
       0,   283,   281,   307,   302,   310,   529,   530,   169,   392,
     306,   299,   183,   179,   437,   183,   177,     0,     0,   535,
     538,     0,   548,   551,   555,   559,   563,   567,   557,   561,
     565,   569,     0,     0,   576,     0,   405,     0,     0,    85,
      81,    72,    78,    65,    80,    74,    73,    77,    75,    70,
      71,     0,    79,     0,   204,   205,    76,     0,   338,     0,
       0,   179,    82,   179,     0,   179,    48,   127,   129,   128,
     247,   212,   269,   498,   179,   253,     0,     0,     0,   240,
       0,     0,     0,     0,   670,   694,   719,   693,   698,     0,
     264,   527,   439,   295,   185,   172,   184,   317,     0,   179,
     175,   183,   151,   163,     0,   722,     0,     0,     0,    93,
     508,    91,     0,     0,     0,     0,   179,    83,    86,    88,
      89,     0,    87,    90,     0,   200,    84,   500,   206,     0,
       0,    98,    96,    99,     0,   268,   272,   236,     0,   705,
     709,   242,   233,   241,   216,   506,   337,   251,   284,     0,
     533,   531,   532,     0,   296,   318,   178,   311,   539,     0,
     552,   571,   573,     0,   508,    92,     0,    94,   508,     0,
       0,     0,   500,   203,     0,   274,     0,   254,   711,     0,
     236,   334,   510,   308,   186,   187,   306,   152,   546,   720,
     722,   422,   133,     0,   508,     0,   201,     0,   720,   273,
     239,   237,   238,     0,   431,   243,   293,   220,   507,   311,
     188,   297,   313,   312,     0,   316,     0,     0,     0,    61,
       0,   422,   134,   202,     0,   433,   392,   430,   504,   314,
     315,   722,   136,   131,    61,     0,   249,   392,   432,   309,
       0,   132,   434,   135
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1047, -1047,  -385, -1047, -1047,   858,   -87, -1047, -1047, -1047,
   -1047,  -886,  -105,     9,   -34, -1047, -1047, -1047, -1047,   232,
    -429,  -112,  -822, -1047, -1047, -1047, -1047,   -85, -1047,   -92,
    -192, -1047, -1047,    51,   -81,   -78,   -31, -1047, -1047,    19,
    -479, -1047, -1047,    47, -1047, -1047, -1047,  -237,  -848,   -76,
    -127,  -397,   263,   101, -1047, -1047, -1047, -1047,   265,   -74,
     299, -1047,    11, -1047,    12, -1047, -1047, -1047,   -19, -1047,
   -1047, -1047, -1047, -1047, -1047,   -80,   119,  -918, -1047, -1047,
   -1047,   884, -1047, -1047, -1047,   -64,  -143,    35,   -97, -1047,
   -1047,  -264,  -490, -1047, -1047,  -326,  -303,  -557,  -546, -1047,
   -1047,   189, -1047, -1047,  -233, -1047,  -275, -1047, -1047, -1047,
     -69, -1047, -1047, -1047, -1047,  -109, -1047, -1047, -1047, -1047,
     -68, -1047,    74,  -600, -1047, -1047, -1047,  -157, -1047, -1047,
    -258, -1047, -1047, -1047, -1047, -1047, -1047,    13,   406,  -309,
     408, -1047,    42,  -117,  -693, -1047, -1047,  -253, -1047,  -694,
   -1047,  -952, -1047, -1047,  -285, -1047, -1047,  -434, -1047, -1047,
    -444, -1047, -1047,    53, -1047, -1047, -1047,   933,  1047,  1142,
       5, -1047, -1047,   451,   528,    -5, -1047,    33, -1047,  1087,
       7,   -95, -1047,     6,   290, -1047, -1047,  -500, -1047,  1073,
     236, -1047, -1047,    31,  -785, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047,   322,   183,   233,  -405,   495,
   -1047,   496, -1047,   196, -1047,  1096, -1047,  -532, -1047,  -404,
   -1047,  -943, -1047, -1047, -1047,   -25, -1047,  -350, -1047, -1047,
   -1047,   341,   190, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
     -18, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047, -1047,
   -1047, -1047, -1047, -1047, -1047,    46,   173,    18,  -902,  -832,
   -1047,  -641,   -62,  -562,  -150,   -58, -1047,   -39, -1047, -1046,
   -1047,  -670, -1047,  -555, -1047, -1047, -1047,  -244, -1047, -1047,
   -1047,   373, -1047,  -241,  -416, -1047,  -388,    44,  -633, -1047,
    -662, -1047
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    89,   363,    91,    92,    93,   471,
      94,    95,    96,   365,    98,   355,    99,   963,   676,   383,
     520,   521,   679,   675,   817,   818,  1043,  1119,  1045,   823,
     824,   961,   957,   825,   101,   102,   103,   528,   104,   366,
     531,   689,   686,   687,   966,   367,   968,  1111,  1192,   106,
     107,   616,   624,   617,   464,   465,   932,  1157,   466,   108,
     326,   109,   368,   786,   369,   446,   603,   906,   604,   605,
    1012,   606,  1015,   607,  1101,   911,   768,  1095,  1096,  1153,
    1184,   370,   113,   114,   115,  1122,  1053,  1054,   117,   540,
     974,   118,   561,   562,   988,   563,   119,   565,   718,   719,
     720,   545,   546,   987,   846,   978,  1177,  1142,  1143,  1179,
     377,   378,  1070,   566,   996,  1055,   979,  1137,   391,   706,
     538,   694,   695,   699,   700,   842,  1073,   843,   976,  1175,
     572,   573,   732,   574,   575,   893,  1089,   371,   422,   511,
     570,   884,   512,   513,   912,  1186,  1010,   423,   895,   424,
     560,  1004,  1090,  1209,  1187,  1098,   578,   567,   995,   723,
    1005,   725,   879,   880,   989,  1081,  1082,   826,   122,   287,
     288,   542,   125,   126,   127,   289,   551,   290,   272,   130,
     131,   354,   514,   384,   133,   134,   135,   136,   714,  1061,
     138,   434,   559,   139,   140,   273,  1205,  1206,  1226,  1237,
     762,   763,   915,  1009,   764,   141,   142,   143,   429,   430,
     431,   432,   739,   715,   433,   691,     6,   475,   476,   580,
     581,   703,   704,  1181,  1182,   356,   357,   145,   438,   588,
     589,   590,   591,   592,   902,   747,  1007,   748,  1091,  1151,
     144,   794,   489,   938,  1104,   490,   491,   798,  1021,   799,
     494,   941,  1106,   802,   806,   803,   807,   804,   808,   805,
     809,   810,   811,   954,   646,   859,   860,   861,   888,   889,
     998,   890,   863,   770,   925,   926,  1088,   707,  1000,   864,
     865,   891,   982,   447,   868,   983,   981,   869,   614,   612,
     613,   870,   892,   442,   449,   599,   600,   601,   268,   269,
     270,   271
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
     128,   283,   443,   478,   285,   412,   364,   526,   358,   448,
     124,   132,   728,   396,    97,   390,   110,   111,   120,   579,
     722,   428,   582,   583,   105,   595,   479,   389,   454,   619,
     450,   721,   331,   625,   838,   413,   726,   866,   129,   468,
     116,   291,   329,   301,  1079,   379,   380,   381,   754,   527,
     266,   771,   772,   690,   286,   594,   999,   421,  1093,   469,
     713,   610,   620,   837,  1067,   477,   862,   677,   913,  1041,
     332,   418,   419,   977,   913,   916,   267,   985,   264,   727,
     360,   451,   452,   374,   677,   677,   293,   294,   295,   296,
     297,   298,   299,   444,   783,   677,   677,  1100,   408,     3,
     444,   410,  -385,   790,   451,   452,   848,  1185,   418,   419,
     158,   159,   701,  -385,    -2,   677,   124,   372,   564,   394,
     397,   677,   331,   724,   709,  -387,   635,   148,   425,   924,
     924,   924,   400,  -386,  -387,   539,   728,   414,  1210,   425,
     158,   159,   777,   149,   986,   420,   116,   158,   159,  1109,
     587,   411,   867,  -365,   649,   439,  -372,   395,   398,  -365,
     332,  -385,  -372,   416,   813,   814,   815,   881,   266,   882,
     753,   577,  -385,   375,   376,   150,   333,   479,   359,   445,
    1146,   724,   420,  1156,  -387,  -363,   445,  1148,   457,   791,
     459,  -363,  -386,  -387,   441,   426,   264,   883,   334,   427,
     678,   -61,   969,   727,   -61,   265,   426,   610,   749,  1176,
     427,   903,   467,   453,   875,   262,   648,   872,   -61,   -61,
     300,   -61,   -61,   913,  1016,   778,   779,  -386,   678,   872,
    -390,   738,   874,   564,  1211,   999,   453,   100,  -516,   713,
     913,  1018,   247,   708,  -516,   710,    38,   785,   678,   -61,
    -390,   335,   -61,  -391,   872,   -61,   456,   462,   -61,   458,
     463,   460,  1200,  -371,   336,   263,   564,   284,   331,  -371,
    -389,  -388,   247,   816,   243,   413,  -173,  -391,  -364,   247,
      38,  -368,   337,   394,  -364,  1239,  -386,  -368,   150,  -390,
    -370,   146,   147,   536,  -176,  -383,  -370,  -341,  1201,  1202,
    -173,  -383,   705,  -341,   338,   557,   332,   331,   331,  -390,
     286,   339,  -391,   552,   999,   554,   999,   556,   340,   913,
    1097,   395,   416,   265,   394,   331,   737,   386,  -369,  -389,
    -388,  -342,  1017,   262,  -369,   480,  -391,  -342,   408,   586,
     618,   534,   618,   100,   576,   332,   332,  1222,   730,   543,
    -384,   524,   544,   731,   847,   331,  -384,   331,   541,   924,
     341,   522,   395,   332,   409,   468,  -389,   622,   623,  1218,
    1233,   342,  1222,  -388,   124,   535,  1117,   414,   766,  -119,
     913,  1136,   530,   263,   553,  -373,   555,  1241,  1080,   525,
     564,  -373,  -339,   332,  1204,   332,  1083,  1218,  1212,  1235,
    1213,   343,   767,   416,   116,   913,  1155,   866,   780,   394,
     681,  1214,  1235,   781,  1215,   416,   331,  -367,  1225,  1076,
     344,  1078,   415,  -367,  -366,  -389,   569,   345,  1071,  -278,
    -366,   571,  -388,   576,  -280,   924,   862,   924,   413,   293,
     294,   295,   296,   297,   298,   299,  -374,   395,    21,    22,
     924,  -375,  -374,   524,   332,   331,   839,  -375,   716,   717,
     266,   266,   627,   522,   712,   631,   266,   266,   266,   243,
    -376,   967,  1174,  -377,   400,   394,  -376,  1011,  -378,  -377,
    -379,   346,   347,   866,  -378,    33,  -379,   266,   264,   264,
    1149,   525,  -380,   332,   264,   264,   264,   348,  -380,   576,
     628,   408,  -516,   525,   904,   618,   618,   426,  -516,  1013,
    -381,   427,   862,   395,   866,   264,  -381,   682,   631,   349,
    -382,    38,  1139,   284,  -518,   647,  -382,   350,   684,   331,
    -518,   331,   331,   351,   352,   782,   524,   702,   467,  -329,
     414,   693,   830,   862,  1189,   831,   522,  1190,   524,   400,
     331,  1068,  1229,  1230,   353,   683,   525,   266,   522,  -119,
    -119,   382,    38,   530,   394,   330,   416,   332,   407,   332,
     332,   627,   829,  1173,   525,   393,  1003,   819,   820,   821,
    -329,   415,   331,   400,   437,   264,   525,   516,   332,  1003,
    1003,   516,   329,  -329,  -329,  1171,  1001,   440,  1002,   746,
     759,   284,   395,   456,   409,   470,   474,  -155,  1099,   628,
     647,   761,  1173,   266,   547,   265,   265,   517,   248,   769,
     332,   265,   265,   265,   757,   262,   262,   991,   992,   993,
     994,   262,   262,   262,   537,   593,   632,   633,   760,   634,
    1197,   264,   265,   650,   515,   654,   914,   655,   515,   657,
     658,   659,   262,   660,   401,   661,   404,   406,   662,   663,
     664,   665,   415,   666,   618,   331,   667,   668,   670,   669,
     671,   331,   685,  -263,   415,   263,   263,   697,  -329,   682,
     610,   263,   263,   263,   733,   735,   742,   736,   394,  1159,
     516,   744,   516,   750,   293,   294,   295,   296,   297,   298,
     299,   752,   263,   332,   361,   773,   776,   784,   787,   332,
     788,   789,   265,   793,   795,   792,   832,   683,   796,   797,
     800,   731,   262,   827,   834,   836,   395,   841,   840,   871,
     873,   877,   878,  1127,  1191,   897,   901,   898,   905,   393,
      33,   929,   781,   930,   881,   935,   962,   515,   933,   515,
     331,   331,   331,   894,   942,   936,   564,   971,   972,   953,
     956,   960,   959,   420,  1219,   975,  1221,   284,   265,   977,
     980,   610,   263,   984,  1217,   882,  1032,  1019,   262,  1022,
     393,  1024,  1025,  1026,  1027,   516,  1033,   516,   332,   332,
     332,  1234,   910,  1028,   302,   303,   304,   305,   306,   307,
     308,  1029,  1030,  1172,   293,   294,   295,   296,   297,   298,
     299,  1031,   309,   310,   311,  1240,  1034,   404,   406,   516,
    1014,  1069,  1072,  -335,  1102,   415,   564,   564,   263,   610,
    1105,   331,  1208,  1094,    31,   388,  1103,  1107,  1108,  1126,
      33,  1134,   515,  1141,   515,  1144,  1145,  1147,  1176,  1154,
    1158,  1160,   610,  1161,  1162,   516,   516,   266,  1183,   404,
     406,  1178,  1196,    90,  1198,   393,   564,  1223,  1040,   332,
    1044,  1066,  1132,   958,  1046,  1165,   515,  1047,   965,  1048,
     774,  1049,   931,   775,   523,   264,   740,  1008,   917,   112,
     857,  1052,  1113,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,  1207,   627,   746,   876,  1180,
     970,  1075,   515,   515,  1092,   857,  1135,  1199,   400,   673,
     672,   548,   549,   550,  1228,   833,   997,   765,   584,   585,
     743,   393,   990,   412,   899,   896,  1084,  1062,   121,    88,
     858,  1152,  1087,  1077,   628,   516,   364,   734,  1216,     0,
     128,  1128,   331,   857,   857,   857,   331,  1224,   331,     0,
    1059,  1060,     0,   413,  1042,   858,  1050,  1051,  1056,     0,
     327,     0,     0,   393,   105,     0,     0,     0,     0,     0,
       0,  1130,     0,  1131,  1125,  1133,   523,     0,   129,     0,
     332,     0,     0,     0,   332,     0,   332,     0,     0,     0,
       0,     0,   515,   858,   858,   858,  1128,   364,     0,     0,
       0,     0,   265,     0,     0,  1128,     0,     0,   413,     0,
     393,     0,   262,     0,     0,     0,   408,   413,     0,   410,
     128,     0,   331,     0,     0,     0,  1169,     0,     0,     0,
       0,  1115,   329,   745,  1167,     0,   128,  1112,     0,     0,
       0,   415,   404,   406,   394,   128,  1059,  1124,     0,   331,
    1118,  1128,  1120,  1121,  1123,  1129,     0,     0,   129,   523,
     332,   857,   263,   413,     0,     0,     0,     0,   137,   411,
       0,   523,     0,     0,   129,  1163,   266,     0,     0,  1227,
     408,   416,   395,   129,     0,     0,     0,   332,     0,     0,
       5,     0,     0,     0,     0,     0,     0,     0,   292,     0,
     128,     0,     0,     0,   264,   330,   128,     0,  1166,   128,
       0,   858,     0,     0,   394,   627,  1059,  1170,     0,  1129,
    1118,  1238,  1120,  1121,  1123,   393,   408,   400,     0,  1193,
       0,     0,  1242,  1195,   393,     0,   416,   123,   129,   857,
       0,     0,     0,     0,   129,   416,     0,   129,   524,   404,
       0,     0,   395,   628,   627,   128,     0,     0,   522,  1220,
       0,   392,     0,     0,   402,  1129,   400,   266,     0,   328,
       0,   857,     0,   857,   373,  1203,     0,   100,   524,     0,
     524,     0,   385,     0,     0,     0,   525,     0,   522,   858,
     522,   416,   628,   129,     0,   264,   455,     0,     0,     0,
     549,   550,   399,     0,     0,   524,     0,     0,     0,   387,
       0,     0,     0,     0,   405,   522,   525,     0,   525,   417,
     845,   858,     0,   858,   266,   266,     0,     0,   435,   436,
       0,   265,   266,     0,     0,   472,   473,   516,     0,     0,
     857,   262,     0,   525,     0,     0,     0,     0,   266,   857,
     857,   857,   264,   264,     0,   857,     0,  1110,     0,   403,
     264,     0,   857,   900,   857,     0,     0,     0,     0,     0,
       0,     0,     0,   100,     0,     0,   264,   404,   406,     0,
       0,     0,   409,   532,     0,   533,     0,     0,     0,     0,
     858,   263,     0,     0,   515,     0,     0,     0,     0,   858,
     858,   858,     0,     0,     0,   858,     0,     0,     0,     0,
       0,     0,   858,     0,   858,   516,     0,     0,     0,   857,
       0,   857,   265,     0,     0,   461,   857,     0,     0,     0,
       0,     0,   262,     0,  1164,     0,     0,  1168,     0,     0,
     415,  1006,     0,   284,     0,     0,   409,   160,   161,   162,
     163,   164,   165,   166,   167,   168,     0,   857,     0,     0,
       0,     0,     0,     0,     0,     0,   461,   402,     0,   858,
       0,   858,   515,   387,     0,   405,   858,     0,     0,   265,
     265,     0,   263,   621,     0,     0,     0,   265,  1194,   262,
     262,     0,   284,     0,     0,   415,     0,   262,     0,     0,
       0,     0,     0,   265,   415,   328,     0,   858,     0,     0,
     488,     0,     0,   262,   492,   493,     0,   495,   496,   497,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     508,     0,   373,   399,     0,     0,     0,     0,     0,   263,
     263,     0,     0,     0,   328,   328,   415,   263,     0,     0,
     415,   392,     0,     0,     0,     0,     0,   692,   568,     0,
     696,   516,   403,   263,     0,   516,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   711,     0,
       0,     0,     0,   415,     0,     0,     0,     0,     0,     0,
       0,     0,   328,     0,   328,     0,     0,     0,     0,     0,
     393,   558,     0,     0,   626,     0,     0,     0,     0,     0,
     741,     0,     0,     0,     0,     0,     0,   461,   515,    17,
      18,    19,   515,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,   281,    29,   399,   282,     0,     0,     0,
       0,   615,   385,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   330,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   651,   652,   653,     0,
     393,   656,     0,   568,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   328,   812,     0,     0,     0,     0,     0,   399,
     674,     0,   630,     0,     0,   688,   729,   680,     0,     0,
       0,     0,     0,   626,     0,     0,     0,     0,   399,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     302,   303,   304,   305,   306,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   309,   310,
     311,     0,     0,     0,     0,     0,   328,     0,     0,   328,
       0,     0,     0,     0,     0,     0,     0,     0,   907,   908,
     909,   523,     0,     0,     0,     0,    33,   328,     0,   302,
     303,   304,   305,   306,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   309,   310,   311,
       0,   523,     0,   523,     0,   819,   820,   821,     0,   328,
     801,     0,    38,   822,     0,     0,     0,     0,     0,     0,
     729,     0,     0,     0,     0,    33,     0,   758,   523,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,     0,     0,     0,     0,     0,     0,     0,     0,   696,
       0,   399,     0,     0,     0,     0,     0,   828,     0,     0,
     835,    38,     0,   529,     0,     0,     0,   530,     0,     0,
       0,     0,     0,     0,     0,    88,   844,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
       0,     0,   328,     0,     0,     0,     0,     0,   328,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,   302,   303,   304,   305,
     306,   307,   308,     0,     0,     0,     0,     0,     0,   934,
       0,     0,     0,     0,   309,   310,   311,   937,     0,     0,
       0,   939,   940,     0,     0,   943,   944,   945,   946,   947,
     948,   949,   950,   951,   952,     0,     0,     0,  1057,     0,
    1063,     0,    33,   312,  1065,   313,     0,   328,   328,   328,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   955,     0,     0,     0,     0,   688,     0,
       0,     0,     0,     0,     0,   964,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,     0,   626,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     327,     0,     0,     0,     0,     0,     0,     0,   328,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1058,     0,     0,     0,     0,     0,     0,     0,
       0,  1020,     0,     0,  1023,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,    16,  1074,
      17,    18,    19,    20,     0,  1064,     0,    21,    22,    23,
      24,    25,    26,    27,   281,    29,  1035,  1036,    31,    32,
       0,     0,     0,     0,    33,    34,    35,     0,  1037,     0,
       0,     0,  1114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   123,  1114,   328,
       0,     0,     0,   328,     0,   328,   461,  1114,  1116,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    1038,  1039,  1114,     0,     0,     0,     0,     0,  1114,   844,
       0,  1114,     0,    88,     0,     0,   461,   568,     0,   328,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   302,   303,   304,   305,   306,   307,
     308,     0,     0,     0,     0,     0,   328,     0,     0,     0,
       0,     0,   309,   310,   311,     0,   729,  1114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,   312,     0,     0,     0,     0,     0,     0,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
     399,     0,   399,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,     0,     0,   399,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,    88,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   190,
     191,     0,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   596,   243,     0,   244,   245,   246,   247,     0,   597,
     249,   250,   598,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   190,   191,     0,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   596,   243,   602,
     244,   245,   246,   247,     0,   597,   249,   250,     0,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,     0,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   596,   243,     0,   244,   245,   246,   247,
       0,   597,   249,   250,   608,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   190,   191,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   596,
     243,     0,   244,   245,   246,   247,   611,   597,   249,   250,
       0,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,     0,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   190,   191,     0,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   596,   243,   629,   244,   245,
     246,   247,     0,   597,   249,   250,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,     0,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   190,
     191,     0,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   596,   243,   698,   244,   245,   246,   247,     0,   597,
     249,   250,     0,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   190,   191,     0,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   596,   243,   973,
     244,   245,   246,   247,     0,   597,   249,   250,     0,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,     0,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   596,   243,  1231,   244,   245,   246,   247,
       0,   597,   249,   250,     0,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   190,   191,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   596,
     243,  1236,   244,   245,   246,   247,     0,   597,   249,   250,
       0,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,     0,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   190,   191,     0,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   609,   243,     0,   244,   245,
     246,   247,     0,   597,   249,   250,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,     0,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   190,
     191,     0,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   751,   243,     0,   244,   245,   246,   247,     0,   597,
     249,   250,     0,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   190,   191,     0,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,     0,
     244,   245,   246,   247,  1188,   597,   249,   250,     0,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,     0,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1232,   243,     0,   244,   245,   246,   247,
       0,   597,   249,   250,     0,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   190,   191,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1243,
     243,     0,   244,   245,   246,   247,     0,   597,   249,   250,
       0,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,   181,     0,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   190,   191,     0,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   243,     0,   244,   245,
     246,   247,     0,   248,   249,   250,     0,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   151,   152,
     153,   154,   155,   156,   157,   451,   452,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   849,
     173,   174,   175,   176,   177,   178,   179,   180,   181,     0,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   190,
     191,     0,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   918,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,     0,
     850,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1085,   733,  1086,   919,   852,   920,   453,     0,   922,
     249,   855,     0,   251,   252,   923,   254,   255,   256,   257,
     258,   259,   260,   856,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   190,   191,     0,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   243,     0,
     244,   245,   246,   247,     0,   597,   249,   250,     0,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,     0,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   243,     0,   244,   245,   246,   247,
       0,     0,   249,   250,     0,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   151,   152,   153,   154,
     155,   156,   157,   451,   452,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   849,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   190,   191,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   918,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,   850,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,     0,   919,   852,   920,   453,   921,   922,   249,   855,
       0,   251,   252,   923,   254,   255,   256,   257,   258,   259,
     260,   856,   151,   152,   153,   154,   155,   156,   157,   451,
     452,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   849,   173,   174,   175,   176,   177,   178,
     179,   180,   181,     0,   182,   183,   184,   185,   186,   187,
       0,   188,   189,   190,   191,     0,     0,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   918,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,   850,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   733,     0,   919,   852,
     920,   453,   927,   922,   249,   855,     0,   251,   252,   923,
     254,   255,   256,   257,   258,   259,   260,   856,   151,   152,
     153,   154,   155,   156,   157,   451,   452,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   849,
     173,   174,   175,   176,   177,   178,   179,   180,   181,     0,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   190,
     191,     0,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   918,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,     0,
     850,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,     0,   919,   852,   920,   453,   928,   922,
     249,   855,     0,   251,   252,   923,   254,   255,   256,   257,
     258,   259,   260,   856,   151,   152,   153,   154,   155,   156,
     157,   451,   452,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   849,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   190,   191,     0,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   918,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,     0,   850,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   733,     0,
     919,   852,   920,   453,     0,   922,   249,   855,  1138,   251,
     252,   923,   254,   255,   256,   257,   258,   259,   260,   856,
     151,   152,   153,   154,   155,   156,   157,   451,   452,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   849,   173,   174,   175,   176,   177,   178,   179,   180,
     181,     0,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   918,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,     0,   850,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,     0,   919,   852,   920,   453,
       0,   922,   249,   855,  1140,   251,   252,   923,   254,   255,
     256,   257,   258,   259,   260,   856,   151,   152,   153,   154,
     155,   156,   157,   451,   452,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   849,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   190,   191,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   444,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,   850,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,     0,   851,   852,   853,   453,     0,   854,   249,   855,
       0,   251,   252,   445,   254,   255,   256,   257,   258,   259,
     260,   856,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,     0,  -668,  -668,  -668,  -668,  -668,  -668,
       0,  -668,  -668,  -668,  -668,     0,     0,  -668,  -668,  -668,
    -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,     0,  -668,     0,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,
    -668,  -668,  -668,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -668,     0,  -704,  -668,
    -668,  -668,     0,  -668,  -668,  -668,     0,  -668,  -668,  -668,
    -668,  -668,  -668,  -668,  -668,  -668,  -668,  -668,   151,   152,
     153,   154,   155,   156,   157,   451,   452,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   849,
     173,   174,   175,   176,   177,   178,   179,   180,   181,     0,
     182,   183,   184,   185,   186,   187,     0,   188,   189,   190,
     191,     0,     0,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   918,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,     0,
     850,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   733,     0,  1150,   852,     0,   453,     0,   922,
     249,   855,     0,   251,   252,   923,   254,   255,   256,   257,
     258,   259,   260,   856,   151,   152,   153,   154,   155,   156,
     157,   451,   452,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   849,   173,   174,   175,   176,
     177,   178,   179,   180,   181,     0,   182,   183,   184,   185,
     186,   187,     0,   188,   189,   190,   191,     0,     0,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   885,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,     0,   850,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   733,     0,
       0,   852,     0,   453,     0,   886,   249,   855,     0,   251,
     252,   887,   254,   255,   256,   257,   258,   259,   260,   856,
     151,   152,   153,   154,   155,   156,   157,   451,   452,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   849,   173,   174,   175,   176,   177,   178,   179,   180,
     181,     0,   182,   183,   184,   185,   186,   187,     0,   188,
     189,   190,   191,     0,     0,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,     0,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,     0,   850,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,     0,     0,   852,     0,   453,
       0,   854,   249,   855,     0,   251,   252,     0,   254,   255,
     256,   257,   258,   259,   260,   856,   151,   152,   153,   154,
     155,   156,   157,   451,   452,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   849,   173,   174,
     175,   176,   177,   178,   179,   180,   181,     0,   182,   183,
     184,   185,   186,   187,     0,   188,   189,   190,   191,     0,
       0,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,     0,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     733,     0,     0,   852,     0,   453,     0,     0,   249,   855,
       0,   251,   252,     0,   254,   255,   256,   257,   258,   259,
     260,   856,   274,   275,   276,   277,   278,   279,   280,     0,
       0,   636,     0,     0,     0,     0,     0,     0,     0,     0,
     169,   170,   171,     0,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,   281,    29,
       0,   282,     0,     0,     0,     0,     0,     0,    33,    34,
       0,     0,     0,   637,   638,     0,     0,     0,     0,     0,
     205,   206,   207,   639,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   481,   482,   483,   484,   485,   486,   487,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   309,   310,   311,     0,     0,     0,     0,   640,     0,
     641,   642,     0,   643,   249,   644,     0,   251,   252,   645,
     254,   255,   256,   257,   258,   259,   260,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,    16,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,    31,    32,     0,
       0,     0,     0,    33,    34,    35,    36,    37,     0,     0,
       0,     0,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,     0,
      87,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,    14,
      15,    16,     0,    17,    18,    19,    20,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    27,   281,    29,     0,
     282,    31,   361,     0,     0,     0,     0,    33,    34,     0,
       0,   362,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    21,    22,    23,    24,    25,
      26,    27,   281,    29,   509,   282,    14,    15,    16,     0,
      17,    18,    19,    20,   510,     0,    88,    21,    22,    23,
      24,    25,    26,    27,   281,    29,     0,   282,    31,   361,
       0,     0,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    16,     0,    17,    18,    19,
      20,     0,     0,    88,    21,    22,    23,    24,    25,    26,
      27,   281,    29,     0,   282,    31,     0,     0,     0,     0,
       0,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,   636,     7,     8,     9,    10,    11,    12,    13,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      14,    15,    16,     0,    17,    18,    19,    20,     0,     0,
      88,    21,    22,    23,    24,    25,    26,    27,   281,    29,
       0,   282,    31,   637,   638,     0,     0,     0,    33,    34,
     205,   206,   207,   639,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   640,     0,
     641,   642,     0,   643,   249,   644,     0,   251,   252,   645,
     254,   255,   256,   257,   258,   259,   260,    88,   302,   303,
     304,   305,   306,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   309,   310,   311,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,   302,   303,   304,   305,   306,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   309,   310,   311,     0,     0,   302,   303,
     304,   305,   306,   307,   308,     0,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,   309,   310,   311,     0,
       0,    33,     0,     0,     0,     0,     0,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   388,
       0,     0,     0,     0,    33,     0,     0,     0,   302,   303,
     304,   305,   306,   307,   308,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,   530,   309,   310,   311,     0,
       0,     0,     0,    88,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,     0,     0,    31,     0,
       0,     0,     0,     0,    33,     0,     0,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,     0,
       0,     0,     0,   302,   303,   304,   305,   306,   307,   308,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   309,   310,   311,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,    33,
     302,   303,   304,   305,   306,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   309,   310,
     311,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,     0,   302,   303,   304,   305,   306,
     307,   308,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,   309,   310,   311,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,    33,   302,   303,   304,   305,   306,   307,   308,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     309,   310,   311,   518,  1189,     0,     0,  1190,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,     0,   302,   303,   304,
     305,   306,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,   309,   310,   311,   518,     0,
       0,     0,   519,     0,     0,     0,     0,     0,     0,     0,
       0,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1189,     0,     0,  1190,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,    21,    22,
      23,    24,    25,    26,    27,   281,    29,   509,   282,     0,
       0,     0,     0,     0,     0,     0,     0,   510,     0,     0,
       0,     0,     0,     0,   519,     0,    21,    22,    23,    24,
      25,    26,    27,   281,    29,   509,   282,     0,     0,     0,
       0,     0,     0,     0,   425,   510,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     0,   425,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,     0,     0,
       0,     0,  -287,     0,     0,     0,     0,     0,     0,     0,
       0,   426,     0,     0,     0,   427,     0,     0,     0,     0,
       0,     0,   274,   275,   276,   277,   278,   279,   280,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   426,
     169,   170,   171,   427,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,   281,    29,
       0,   282,    31,   361,     0,     0,     0,     0,    33,    34,
       0,     0,   362,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   274,   275,   276,   277,   278,   279,   280,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   169,   170,   171,     0,    17,    18,    19,    20,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,   281,
      29,     0,   282,    31,     0,     0,     0,     0,     0,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   274,   275,   276,   277,   278,   279,
     280,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,   171,     0,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
     281,    29,     0,   282,    31,     0,     0,     0,     0,     0,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   274,   275,   276,   277,   278,
     279,   280,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,   171,     0,    17,    18,    19,
      20,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,   281,    29,     0,   282,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   274,   275,   276,   277,
     278,   279,   280,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,   170,   171,     0,   755,     0,
     756,    20,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,   281,    29,     0,   282,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   274,   275,   276,
     277,   278,   279,   280,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,   171,     0,   302,
     303,   304,   305,   306,   307,   308,    21,    22,    23,    24,
      25,    26,    27,   281,    29,     0,   282,   309,   310,   311,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     388,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     302,   303,   304,   305,   306,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   309,   310,
     311,   302,   303,   304,   305,   306,   307,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   309,
     310,   311,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325
};

static const short int yycheck[] =
{
       5,    35,   243,   329,    35,   132,   111,   357,   103,   250,
       5,     5,   569,   125,     5,   124,     5,     5,     5,   424,
     566,   138,   426,   427,     5,   441,   329,   124,   272,   458,
     271,   563,    37,   467,   696,   132,   568,   707,     5,   292,
       5,    35,    37,    36,   987,   114,   115,   116,   603,   358,
      32,   613,   614,   532,    35,   440,   888,   137,  1010,   300,
     560,   449,   459,   696,   966,   329,   707,     3,   762,   955,
      37,    10,    11,     3,   768,   768,    32,    78,    32,   569,
     105,    10,    11,    46,     3,     3,     3,     4,     5,     6,
       7,     8,     9,    64,   626,     3,     3,  1015,   132,     0,
      64,   132,    85,    64,    10,    11,   706,  1153,    10,    11,
      10,    11,   541,    85,     0,     3,   111,   111,   421,   124,
     125,     3,   127,   567,   553,    85,   476,    52,    78,   770,
     771,   772,   125,    85,    85,   376,   693,   132,  1184,    78,
      10,    11,   621,    12,   145,    84,   111,    10,    11,  1035,
      53,   132,   707,   136,   480,   148,   136,   124,   125,   142,
     127,   144,   142,   132,    29,    30,    31,   140,   150,   142,
     141,   424,   144,   136,   137,    44,   142,   480,   137,   150,
    1082,   625,    84,  1101,   144,   136,   150,  1089,   283,   150,
     285,   142,   144,   144,   150,   145,   150,   729,   142,   149,
     136,   137,   835,   693,   140,    32,   145,   595,   593,   139,
     149,   140,   292,   142,   714,    32,   480,   136,   137,   137,
     137,   140,   140,   917,   917,   622,   623,    85,   136,   136,
      85,   581,   711,   536,  1186,  1067,   142,     5,   141,   739,
     934,   934,   142,   552,   147,   554,    85,   632,   136,   137,
      85,   142,   140,    85,   136,   137,    12,   291,   140,   284,
     291,   286,    19,   136,   142,    32,   569,    35,   273,   142,
      85,    85,   142,   138,   137,   372,    26,    85,   136,   142,
      85,   136,   142,   288,   142,  1228,   144,   142,    44,   144,
     136,    25,    26,   373,    44,   136,   142,   136,    55,    56,
      50,   142,   546,   142,   142,   414,   273,   312,   313,   144,
     291,   142,   144,   408,  1146,   410,  1148,   414,   142,  1013,
    1013,   288,   291,   150,   329,   330,   579,   136,   136,   144,
     144,   136,   932,   150,   142,   330,   144,   142,   372,   434,
     457,   366,   459,   111,   424,   312,   313,  1195,   136,    45,
     136,   356,    48,   141,   704,   360,   142,   362,   383,  1000,
     142,   356,   329,   330,   132,   618,    85,   462,   463,  1191,
    1218,   142,  1220,    85,   369,   369,  1038,   372,    26,   137,
    1074,  1074,   140,   150,   409,   136,   411,  1235,   988,   356,
     693,   142,   136,   360,  1179,   362,   996,  1219,    32,  1221,
      34,   142,    50,   372,   369,  1099,  1099,  1077,   136,   414,
     522,    45,  1234,   141,    48,   384,   421,   136,  1203,   981,
     142,   983,   132,   142,   136,   144,   421,   142,   974,   137,
     142,   139,   144,   513,   142,  1076,  1077,  1078,   535,     3,
       4,     5,     6,     7,     8,     9,   136,   414,    32,    33,
    1091,   136,   142,   458,   421,   460,   697,   142,    32,    33,
     442,   443,   467,   458,   559,   470,   448,   449,   450,   137,
     136,   139,  1134,   136,   467,   480,   142,   911,   136,   142,
     136,   142,   142,  1153,   142,    49,   142,   469,   442,   443,
    1090,   458,   136,   460,   448,   449,   450,   142,   142,   579,
     467,   535,   141,   470,   748,   622,   623,   145,   147,   913,
     136,   149,  1153,   480,  1184,   469,   142,   522,   523,   142,
     136,    85,  1077,   291,   141,   479,   142,   142,   523,   534,
     147,   536,   537,   142,   142,   142,   541,   542,   618,   146,
     535,   536,   138,  1184,   137,   141,   541,   140,   553,   542,
     555,   967,  1214,  1215,   142,   522,   523,   539,   553,   136,
     137,   142,    85,   140,   569,    37,   535,   534,   144,   536,
     537,   576,   684,  1130,   541,   124,   142,    29,    30,    31,
     146,   291,   587,   576,    24,   539,   553,   354,   555,   142,
     142,   358,   587,   146,   146,  1127,   141,   137,   143,   592,
     605,   369,   569,    12,   372,   139,   136,   136,  1013,   576,
     564,   605,  1169,   595,   142,   442,   443,   137,   144,   607,
     587,   448,   449,   450,   605,   442,   443,    13,    14,    15,
      16,   448,   449,   450,   140,   137,   137,   136,   605,   139,
    1172,   595,   469,   141,   354,   141,   763,   141,   358,   141,
     141,   141,   469,   141,   126,   141,   128,   129,   141,   141,
     141,   141,   372,   141,   781,   670,   141,   143,   141,   143,
     136,   676,   136,   143,   384,   442,   443,   137,   146,   684,
    1068,   448,   449,   450,   137,   142,   147,   143,   693,  1105,
     457,   141,   459,   138,     3,     4,     5,     6,     7,     8,
       9,   147,   469,   670,    44,   136,   136,   136,     3,   676,
     146,   146,   539,   147,   141,   143,   139,   684,   143,   143,
     141,   141,   539,   140,   136,   141,   693,    84,   143,   136,
     136,   142,   146,  1059,  1163,   140,    84,   147,   138,   288,
      49,   136,   141,   136,   140,   147,   826,   457,   138,   459,
     755,   756,   757,   735,   143,   147,  1059,   837,   838,   141,
     140,    37,   141,    84,  1193,   141,  1195,   535,   595,     3,
     143,  1159,   539,   136,  1190,   142,   141,   143,   595,   143,
     329,   143,   143,   143,   143,   552,   141,   554,   755,   756,
     757,  1220,   761,   143,     3,     4,     5,     6,     7,     8,
       9,   143,   143,  1129,     3,     4,     5,     6,     7,     8,
       9,   143,    21,    22,    23,  1231,   143,   289,   290,   586,
     915,   136,    84,   147,   143,   535,  1129,  1130,   595,  1217,
     141,   836,  1182,   139,    43,    44,   136,    13,    13,   136,
      49,    47,   552,    67,   554,   143,   147,   143,   139,   143,
     143,   143,  1240,   143,   143,   622,   623,   839,   143,   331,
     332,   147,   136,     5,   137,   414,  1169,   136,   955,   836,
     955,   963,  1064,   822,   955,  1112,   586,   955,   831,   955,
     617,   955,   781,   618,   356,   839,   587,   906,   769,     5,
     707,   955,  1035,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,  1180,   911,   900,   719,  1142,
     836,   979,   622,   623,  1009,   732,  1073,  1175,   911,   513,
     512,   393,   394,   395,  1209,   689,   884,   605,   433,   433,
     589,   480,   879,  1060,   744,   739,   998,   955,     5,   148,
     707,  1091,  1000,   982,   911,   712,  1051,   574,  1189,    -1,
     955,  1060,   957,   770,   771,   772,   961,  1198,   963,    -1,
     955,   955,    -1,  1060,   955,   732,   955,   955,   955,    -1,
      37,    -1,    -1,   522,   955,    -1,    -1,    -1,    -1,    -1,
      -1,  1061,    -1,  1063,  1053,  1065,   458,    -1,   955,    -1,
     957,    -1,    -1,    -1,   961,    -1,   963,    -1,    -1,    -1,
      -1,    -1,   712,   770,   771,   772,  1115,  1112,    -1,    -1,
      -1,    -1,   839,    -1,    -1,  1124,    -1,    -1,  1115,    -1,
     569,    -1,   839,    -1,    -1,    -1,  1060,  1124,    -1,  1060,
    1035,    -1,  1037,    -1,    -1,    -1,  1116,    -1,    -1,    -1,
      -1,  1035,  1037,   592,  1113,    -1,  1051,  1035,    -1,    -1,
      -1,   761,   524,   525,  1059,  1060,  1051,  1051,    -1,  1064,
    1051,  1170,  1051,  1051,  1051,  1060,    -1,    -1,  1035,   541,
    1037,   888,   839,  1170,    -1,    -1,    -1,    -1,     5,  1060,
      -1,   553,    -1,    -1,  1051,  1110,  1068,    -1,    -1,  1206,
    1124,  1060,  1059,  1060,    -1,    -1,    -1,  1064,    -1,    -1,
       4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
    1115,    -1,    -1,    -1,  1068,   587,  1121,    -1,  1112,  1124,
      -1,   888,    -1,    -1,  1129,  1130,  1121,  1121,    -1,  1124,
    1121,  1226,  1121,  1121,  1121,   684,  1170,  1130,    -1,  1164,
      -1,    -1,  1237,  1168,   693,    -1,  1115,     5,  1115,   966,
      -1,    -1,    -1,    -1,  1121,  1124,    -1,  1124,  1163,   631,
      -1,    -1,  1129,  1130,  1169,  1170,    -1,    -1,  1163,  1194,
      -1,   124,    -1,    -1,   127,  1170,  1169,  1159,    -1,    37,
      -1,   998,    -1,  1000,   111,  1179,    -1,   955,  1193,    -1,
    1195,    -1,   119,    -1,    -1,    -1,  1163,    -1,  1193,   966,
    1195,  1170,  1169,  1170,    -1,  1159,   273,    -1,    -1,    -1,
     682,   683,   125,    -1,    -1,  1220,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,   128,  1220,  1193,    -1,  1195,   133,
     702,   998,    -1,  1000,  1216,  1217,    -1,    -1,   142,   143,
      -1,  1068,  1224,    -1,    -1,   312,   313,  1014,    -1,    -1,
    1067,  1068,    -1,  1220,    -1,    -1,    -1,    -1,  1240,  1076,
    1077,  1078,  1216,  1217,    -1,  1082,    -1,  1035,    -1,   127,
    1224,    -1,  1089,   745,  1091,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1051,    -1,    -1,  1240,   759,   760,    -1,
      -1,    -1,  1060,   360,    -1,   362,    -1,    -1,    -1,    -1,
    1067,  1068,    -1,    -1,  1014,    -1,    -1,    -1,    -1,  1076,
    1077,  1078,    -1,    -1,    -1,  1082,    -1,    -1,    -1,    -1,
      -1,    -1,  1089,    -1,  1091,  1092,    -1,    -1,    -1,  1146,
      -1,  1148,  1159,    -1,    -1,   288,  1153,    -1,    -1,    -1,
      -1,    -1,  1159,    -1,  1112,    -1,    -1,  1115,    -1,    -1,
    1060,   900,    -1,  1121,    -1,    -1,  1124,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,  1184,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,   330,    -1,  1146,
      -1,  1148,  1092,   287,    -1,   289,  1153,    -1,    -1,  1216,
    1217,    -1,  1159,   460,    -1,    -1,    -1,  1224,  1166,  1216,
    1217,    -1,  1170,    -1,    -1,  1115,    -1,  1224,    -1,    -1,
      -1,    -1,    -1,  1240,  1124,   273,    -1,  1184,    -1,    -1,
     333,    -1,    -1,  1240,   337,   338,    -1,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,    -1,   369,   356,    -1,    -1,    -1,    -1,    -1,  1216,
    1217,    -1,    -1,    -1,   312,   313,  1166,  1224,    -1,    -1,
    1170,   414,    -1,    -1,    -1,    -1,    -1,   534,   421,    -1,
     537,  1238,   330,  1240,    -1,  1242,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   555,    -1,
      -1,    -1,    -1,  1203,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   360,    -1,   362,    -1,    -1,    -1,    -1,    -1,
    1059,   415,    -1,    -1,   467,    -1,    -1,    -1,    -1,    -1,
     587,    -1,    -1,    -1,    -1,    -1,    -1,   480,  1238,    25,
      26,    27,  1242,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,   458,    42,    -1,    -1,    -1,
      -1,   455,   479,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1037,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   489,   490,   491,    -1,
    1129,   494,    -1,   536,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   460,   670,    -1,    -1,    -1,    -1,    -1,   522,
     514,    -1,   470,    -1,    -1,   528,   569,   521,    -1,    -1,
      -1,    -1,    -1,   576,    -1,    -1,    -1,    -1,   541,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     553,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,   534,    -1,    -1,   537,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   755,   756,
     757,  1163,    -1,    -1,    -1,    -1,    49,   555,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,  1193,    -1,  1195,    -1,    29,    30,    31,    -1,   587,
     657,    -1,    85,    37,    -1,    -1,    -1,    -1,    -1,    -1,
     693,    -1,    -1,    -1,    -1,    49,    -1,   605,  1220,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   836,
      -1,   684,    -1,    -1,    -1,    -1,    -1,   681,    -1,    -1,
     693,    85,    -1,   136,    -1,    -1,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   148,   700,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,   670,    -1,    -1,    -1,    -1,    -1,   676,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   148,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,   786,
      -1,    -1,    -1,    -1,    21,    22,    23,   794,    -1,    -1,
      -1,   798,   799,    -1,    -1,   802,   803,   804,   805,   806,
     807,   808,   809,   810,   811,    -1,    -1,    -1,   955,    -1,
     957,    -1,    49,    50,   961,    52,    -1,   755,   756,   757,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   817,    -1,    -1,    -1,    -1,   831,    -1,
      -1,    -1,    -1,    -1,    -1,   829,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,   911,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1037,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   836,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   955,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   938,    -1,    -1,   941,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,   976,
      25,    26,    27,    28,    -1,   959,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    49,    50,    51,    -1,    53,    -1,
      -1,    -1,  1035,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   955,  1051,   957,
      -1,    -1,    -1,   961,    -1,   963,  1059,  1060,  1035,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,  1115,    -1,    -1,    -1,    -1,    -1,  1121,  1073,
      -1,  1124,    -1,   148,    -1,    -1,  1129,  1130,    -1,  1037,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,  1064,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,  1169,  1170,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1163,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
    1193,    -1,  1195,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,  1220,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,   148,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,    -1,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,    -1,   139,   140,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,    -1,   139,   140,   141,   142,
      -1,   144,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,    -1,   139,   140,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
     139,   140,   141,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,
      -1,    -1,   145,   146,    -1,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,    -1,   139,   140,   141,   142,   143,   144,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,    -1,   139,   140,   141,   142,    -1,   144,   145,   146,
      -1,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,   139,   140,    -1,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
      -1,   140,    -1,   142,    -1,   144,   145,   146,    -1,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,    -1,    -1,   140,    -1,   142,
      -1,   144,   145,   146,    -1,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,    -1,    -1,   140,    -1,   142,    -1,    -1,   145,   146,
      -1,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,   139,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
     136,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    21,    22,    23,    -1,
      25,    26,    27,    28,    51,    -1,   148,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,   148,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    12,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    -1,    -1,
     148,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    54,    55,    -1,    -1,    -1,    49,    50,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
     141,   142,    -1,   144,   145,   146,    -1,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   148,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    44,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   140,    21,    22,    23,    -1,
      -1,    -1,    -1,   148,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    49,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    49,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,   136,   137,    -1,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    21,    22,    23,   136,    -1,
      -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,   140,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    -1,    -1,    -1,   149,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   145,
      21,    22,    23,   149,    25,    26,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    -1,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,     3,
       4,     5,     6,     7,     8,     9,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    21,    22,    23,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   160,   161,     0,   162,   374,   375,     3,     4,     5,
       6,     7,     8,     9,    21,    22,    23,    25,    26,    27,
      28,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      42,    43,    44,    49,    50,    51,    52,    53,    85,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   136,   148,   163,
     164,   165,   166,   167,   169,   170,   171,   172,   173,   175,
     178,   193,   194,   195,   197,   198,   208,   209,   218,   220,
     221,   223,   240,   241,   242,   243,   246,   247,   250,   255,
     296,   326,   327,   328,   329,   331,   332,   333,   334,   336,
     338,   339,   342,   343,   344,   345,   346,   348,   349,   352,
     353,   364,   365,   366,   399,   386,    25,    26,    52,    12,
      44,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    35,    36,    37,    38,    39,    40,    42,    43,
      44,    45,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   137,   139,   140,   141,   142,   144,   145,
     146,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   365,   366,   424,   425,   426,   456,   457,   458,
     459,   460,   337,   354,     3,     4,     5,     6,     7,     8,
       9,    39,    42,   173,   178,   195,   198,   328,   329,   334,
     336,   342,   348,     3,     4,     5,     6,     7,     8,     9,
     137,   339,     3,     4,     5,     6,     7,     8,     9,    21,
      22,    23,    50,    52,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   219,   326,   328,   329,
     333,   334,   336,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   340,   174,   384,   385,   340,   137,
     384,    44,    53,   164,   171,   172,   198,   204,   221,   223,
     240,   296,   342,   348,    46,   136,   137,   269,   270,   269,
     269,   269,   142,   178,   342,   348,   136,   374,    44,   247,
     274,   277,   327,   332,   334,   336,   180,   334,   336,   338,
     339,   333,   327,   328,   333,   374,   333,   144,   173,   178,
     195,   198,   209,   247,   329,   343,   352,   374,    10,    11,
      84,   234,   297,   306,   308,    78,   145,   149,   302,   367,
     368,   369,   370,   373,   350,   374,   374,    24,   387,   339,
     137,   456,   452,   452,    64,   150,   224,   442,   452,   453,
     452,    10,    11,   142,   446,   326,    12,   340,   384,   340,
     384,   327,   173,   195,   213,   214,   217,   234,   306,   452,
     139,   168,   326,   326,   136,   376,   377,   250,   254,   255,
     329,     3,     4,     5,     6,     7,     8,     9,   338,   401,
     404,   405,   338,   338,   409,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,    41,
      51,   298,   301,   302,   341,   343,   366,   137,   136,   140,
     179,   180,   329,   333,   334,   336,   386,   298,   196,   136,
     140,   199,   326,   326,   384,   342,   234,   140,   279,   452,
     248,   384,   330,    45,    48,   260,   261,   142,   333,   333,
     333,   335,   340,   384,   340,   384,   247,   274,   374,   351,
     309,   251,   252,   254,   255,   256,   272,   316,   327,   329,
     299,   139,   289,   290,   292,   293,   234,   306,   315,   367,
     378,   379,   378,   378,   368,   370,   340,    53,   388,   389,
     390,   391,   392,   137,   161,   453,   136,   144,   147,   454,
     455,   456,   138,   225,   227,   228,   230,   232,   147,   136,
     455,   143,   448,   449,   447,   374,   210,   212,   302,   179,
     210,   326,   340,   340,   211,   316,   327,   334,   336,   138,
     328,   334,   137,   136,   139,   386,    12,    54,    55,    64,
     139,   141,   142,   144,   146,   150,   423,   424,   250,   254,
     141,   338,   338,   338,   141,   141,   338,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   143,   143,
     141,   136,   299,   297,   374,   182,   177,     3,   136,   181,
     374,   180,   334,   336,   329,   136,   201,   202,   338,   200,
     199,   374,   326,   329,   280,   281,   326,   137,   138,   282,
     283,   179,   334,   380,   381,   446,   278,   436,   298,   179,
     298,   326,   340,   346,   347,   372,    32,    33,   257,   258,
     259,   376,   257,   318,   319,   320,   376,   251,   256,   327,
     136,   141,   291,   137,   450,   142,   143,   306,   386,   371,
     219,   326,   147,   390,   141,   332,   339,   394,   396,   161,
     138,   136,   147,   141,   442,    25,    27,   198,   328,   334,
     336,   342,   359,   360,   363,   364,    26,    50,   235,   223,
     432,   432,   432,   136,   211,   217,   136,   199,   210,   210,
     136,   141,   142,   376,   136,   161,   222,     3,   146,   146,
      64,   150,   143,   147,   400,   141,   143,   143,   406,   408,
     141,   348,   412,   414,   416,   418,   413,   415,   417,   419,
     420,   421,   326,    29,    30,    31,   138,   183,   184,    29,
      30,    31,    37,   188,   189,   192,   326,   140,   374,   180,
     138,   141,   139,   349,   136,   338,   141,   457,   459,   452,
     143,    84,   284,   286,   374,   333,   263,   386,   282,    24,
      85,   139,   140,   141,   144,   146,   158,   365,   366,   424,
     425,   426,   430,   431,   438,   439,   440,   442,   443,   446,
     450,   136,   136,   136,   199,   346,   260,   142,   146,   321,
     322,   140,   142,   376,   300,    64,   144,   150,   427,   428,
     430,   440,   451,   294,   426,   307,   372,   140,   147,   391,
     333,    84,   393,   140,   446,   138,   226,   326,   326,   326,
     352,   234,   303,   308,   302,   361,   303,   235,    64,   139,
     141,   143,   144,   150,   430,   433,   434,   143,   143,   136,
     136,   212,   215,   138,   348,   147,   147,   348,   402,   348,
     348,   410,   143,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   141,   422,   374,   140,   191,   192,   141,
      37,   190,   234,   176,   374,   202,   203,   139,   205,   457,
     281,   234,   234,   138,   249,   141,   287,     3,   264,   275,
     143,   445,   441,   444,   136,    78,   145,   262,   253,   323,
     322,    13,    14,    15,    16,   317,   273,   301,   429,   428,
     437,   141,   143,   142,   310,   319,   332,   395,   227,   362,
     305,   316,   229,   378,   340,   231,   303,   282,   303,   143,
     348,   407,   143,   348,   143,   143,   143,   143,   143,   143,
     143,   143,   141,   141,   143,    41,    42,    53,   135,   136,
     165,   170,   172,   185,   186,   187,   193,   194,   208,   218,
     221,   223,   244,   245,   246,   274,   296,   326,   327,   329,
     342,   348,   399,   326,   374,   326,   188,   427,   453,   136,
     271,   257,    84,   285,   348,   279,   432,   436,   432,   380,
     282,   324,   325,   282,   431,   136,   138,   434,   435,   295,
     311,   397,   340,   310,   139,   236,   237,   303,   314,   367,
     236,   233,   143,   136,   403,   141,   411,    13,    13,   170,
     178,   206,   223,   245,   327,   342,   348,   459,   172,   186,
     221,   223,   244,   296,   342,   269,   136,   254,   274,   329,
     234,   234,   189,   234,    47,   286,   303,   276,   147,   442,
     147,    67,   266,   267,   143,   147,   427,   143,   427,   282,
     139,   398,   433,   238,   143,   303,   236,   216,   143,   453,
     143,   143,   143,   384,   178,   206,   342,   269,   178,   234,
     342,   376,   254,   256,   459,   288,   139,   265,   147,   268,
     263,   382,   383,   143,   239,   438,   304,   313,   143,   137,
     140,   179,   207,   384,   178,   384,   136,   376,   137,   289,
      19,    55,    56,   342,   353,   355,   356,   265,   386,   312,
     438,   310,    32,    34,    45,    48,   452,   453,   181,   179,
     384,   179,   207,   136,   452,   353,   357,   302,   313,   459,
     459,   138,   136,   207,   179,   181,   138,   358,   340,   380,
     453,   207,   340,   136
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   159,   160,   161,   162,   161,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   164,   164,   164,   164,   164,   164,
     165,   165,   166,   167,   168,   167,   167,   169,   170,   170,
     171,   171,   171,   172,   172,   174,   173,   176,   175,   175,
     177,   175,   175,   178,   178,   178,   179,   179,   179,   180,
     180,   181,   181,   182,   183,   182,   182,   184,   184,   184,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   185,   186,   186,   186,   186,
     186,   187,   187,   187,   187,   188,   188,   189,   189,   189,
     190,   190,   191,   191,   192,   192,   192,   193,   193,   193,
     194,   194,   196,   195,   197,   197,   198,   198,   198,   199,
     200,   199,   201,   201,   202,   202,   203,   202,   204,   205,
     205,   206,   206,   206,   206,   207,   207,   208,   208,   209,
     209,   209,   209,   209,   210,   211,   211,   212,   213,   213,
     215,   216,   214,   217,   218,   219,   219,   219,   219,   219,
     219,   220,   222,   221,   223,   224,   223,   225,   226,   225,
     228,   229,   227,   230,   231,   227,   232,   233,   227,   234,
     234,   235,   235,   236,   236,   238,   237,   239,   239,   240,
     240,   240,   240,   241,   242,   242,   242,   243,   243,   243,
     244,   244,   244,   245,   245,   245,   245,   246,   246,   246,
     248,   249,   247,   250,   251,   253,   252,   254,   255,   256,
     257,   258,   258,   259,   259,   260,   260,   260,   261,   261,
     262,   262,   262,   263,   263,   264,   265,   265,   265,   265,
     266,   266,   268,   267,   269,   269,   269,   270,   271,   271,
     273,   272,   275,   276,   274,   278,   277,   279,   279,   280,
     280,   281,   281,   282,   283,   282,   284,   285,   284,   284,
     284,   287,   288,   286,   289,   289,   291,   290,   292,   290,
     293,   290,   294,   295,   294,   296,   297,   298,   298,   299,
     300,   299,   301,   302,   302,   303,   304,   303,   305,   305,
     306,   307,   306,   309,   308,   308,   310,   311,   312,   310,
     310,   313,   313,   313,   313,   313,   313,   314,   314,   315,
     315,   316,   316,   317,   317,   317,   317,   318,   318,   320,
     319,   321,   321,   323,   322,   324,   325,   324,   326,   326,
     327,   327,   327,   327,   327,   328,   328,   328,   329,   329,
     329,   329,   329,   329,   330,   329,   331,   332,   333,   335,
     334,   337,   336,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   339,   339,   339,   339,   339,
     339,   339,   340,   340,   341,   341,   341,   341,   342,   342,
     343,   343,   343,   343,   344,   344,   344,   344,   344,   345,
     345,   345,   346,   346,   347,   347,   348,   350,   349,   351,
     349,   352,   352,   352,   353,   353,   354,   353,   353,   353,
     355,   357,   356,   358,   356,   359,   361,   360,   362,   360,
     363,   363,   363,   363,   363,   363,   363,   364,   364,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   366,   366,   367,   367,   367,   367,
     368,   369,   371,   370,   372,   372,   373,   373,   375,   374,
     377,   376,   379,   378,   381,   380,   383,   382,   385,   384,
     386,   386,   387,   388,   388,   389,   390,   390,   390,   390,
     392,   391,   393,   393,   394,   394,   395,   394,   396,   396,
     397,   397,   398,   398,   400,   399,   401,   402,   403,   399,
     404,   399,   405,   399,   406,   407,   399,   408,   399,   409,
     410,   411,   399,   399,   412,   399,   413,   399,   414,   399,
     415,   399,   416,   399,   417,   399,   418,   399,   419,   399,
     420,   399,   421,   399,   399,   399,   399,   422,   422,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   423,
     423,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   426,   426,   426,   426,   426,
     426,   426,   426,   426,   427,   427,   428,   428,   428,   429,
     428,   428,   430,   430,   431,   431,   431,   431,   431,   431,
     431,   431,   431,   431,   432,   432,   433,   433,   433,   433,
     434,   434,   434,   435,   435,   436,   436,   437,   437,   438,
     438,   439,   439,   439,   441,   440,   442,   442,   444,   443,
     445,   443,   447,   446,   448,   446,   449,   446,   451,   450,
     452,   452,   453,   453,   454,   454,   455,   455,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   457,   458,   458,   459,   460,
     460,   460
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     2,     2,     2,
       5,     4,     5,     4,     0,     6,     6,     5,     1,     2,
       4,     3,     5,     4,     5,     0,     5,     0,     7,     4,
       0,     5,     2,     1,     1,     1,     3,     4,     2,     1,
       1,     0,     1,     0,     0,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     1,     2,     2,     2,     2,
       2,     2,     3,     2,     3,     1,     4,     2,     4,     4,
       0,     1,     0,     1,     1,     1,     1,     5,     3,     6,
       4,     5,     0,     5,     4,     3,     1,     2,     2,     0,
       0,     3,     1,     3,     0,     1,     0,     4,     6,     2,
       1,     5,     6,     3,     4,     5,     3,     1,     2,     5,
       5,     6,     5,     6,     2,     0,     3,     2,     1,     1,
       0,     0,     8,     1,     3,     1,     2,     2,     2,     3,
       3,     4,     0,     8,     3,     0,     5,     1,     0,     4,
       0,     0,     5,     0,     0,     5,     0,     0,     6,     0,
       1,     1,     1,     0,     1,     0,     3,     1,     2,     2,
       2,     2,     2,     3,     4,     2,     3,     2,     3,     4,
       2,     4,     5,     3,     1,     1,     2,     1,     2,     3,
       0,     0,     7,     2,     2,     0,     6,     2,     1,     2,
       7,     0,     1,     1,     1,     0,     2,     1,     1,     1,
       0,     1,     1,     0,     2,     1,     0,     2,     2,     2,
       0,     1,     0,     3,     3,     1,     1,     6,     0,     6,
       0,     6,     0,     0,     8,     0,     5,     0,     2,     1,
       3,     3,     3,     0,     0,     2,     1,     0,     4,     3,
       1,     0,     0,     6,     0,     1,     0,     3,     0,     2,
       0,     4,     1,     0,     4,     4,     2,     0,     2,     0,
       0,     4,     2,     0,     1,     3,     0,     6,     0,     1,
       3,     0,     5,     0,     3,     1,     0,     0,     0,     7,
       1,     0,     2,     2,     3,     3,     2,     1,     2,     1,
       2,     2,     4,     1,     1,     1,     1,     0,     1,     0,
       2,     1,     2,     0,     5,     0,     0,     2,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     0,     5,     1,     1,     1,     0,
       5,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     1,     1,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     0,     3,     0,
       4,     1,     3,     4,     1,     1,     0,     4,     2,     2,
       2,     0,     3,     0,     4,     2,     0,     3,     0,     4,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     0,     4,     0,     1,     1,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     4,     2,     1,     3,     0,     1,     2,     3,
       0,     3,     0,     1,     1,     2,     0,     4,     1,     3,
       0,     2,     1,     1,     0,     7,     0,     0,     0,     9,
       0,     5,     0,     5,     0,     0,    10,     0,     7,     0,
       0,     0,     9,     6,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     9,     0,     9,     4,     4,     7,     0,     1,     2,
       2,     3,     3,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     0,     4,     1,     1,     0,     4,
       0,     5,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     4,     3,     1,
       1,     1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned short int yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   261,     0,     0,     0,     0,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   263,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   257,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    11,    13,    15,    17,    19,    21,    23,
      25,    27,    29,    31,    33,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    55,    57,    59,    61,    63,
      65,    67,    69,     0,    71,    73,    75,    77,    79,    81,
       0,    83,    85,    87,    89,     0,     0,    91,    93,    95,
      97,    99,   101,   103,   105,   107,   109,   111,   113,   115,
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     137,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,     0,   163,     0,   165,   167,   169,   171,
     173,   175,   177,   179,   181,   183,   185,   187,   189,   191,
     193,   195,   197,   199,   201,   203,   205,   207,   209,   211,
     213,   215,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,     0,     0,   221,
     223,   225,     0,   227,   229,   231,     0,   233,   235,   237,
     239,   241,   243,   245,   247,   249,   251,   253,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   422,     0,   422,     0,   422,     0,   321,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   704,     0,   704,     0,   704,
       0,   704,     0,   704,     0,   306,     0,   306,     0,   306,
       0,   422,     0,   316,     0,   422,     0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static _Noreturn void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static _Noreturn void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = (yystackp->yysplitPoint == YY_NULLPTR);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 4:
#line 2019 "vtkParse.y" /* glr.c:816  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6508 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 34:
#line 2073 "vtkParse.y" /* glr.c:816  */
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6514 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 35:
#line 2074 "vtkParse.y" /* glr.c:816  */
    { popNamespace(); }
#line 6520 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 45:
#line 2098 "vtkParse.y" /* glr.c:816  */
    { pushType(); }
#line 6526 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 46:
#line 2099 "vtkParse.y" /* glr.c:816  */
    {
      const char *name = (currentClass ? currentClass->Name : NULL);
      popType();
      clearTypeId();
      if (name)
      {
        setTypeId(name);
        setTypeBase(guess_id_type(name));
      }
      end_class();
    }
#line 6542 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 47:
#line 2113 "vtkParse.y" /* glr.c:816  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer);
    }
#line 6551 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 49:
#line 2119 "vtkParse.y" /* glr.c:816  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer);
    }
#line 6560 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 50:
#line 2124 "vtkParse.y" /* glr.c:816  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer));
    }
#line 6568 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 52:
#line 2129 "vtkParse.y" /* glr.c:816  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer));
    }
#line 6576 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 53:
#line 2134 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6582 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 54:
#line 2135 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 1; }
#line 6588 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 55:
#line 2136 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 2; }
#line 6594 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 56:
#line 2140 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6600 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 57:
#line 2142 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6606 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 61:
#line 2150 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6612 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 62:
#line 2151 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0); }
#line 6618 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 64:
#line 2155 "vtkParse.y" /* glr.c:816  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6630 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 67:
#line 2167 "vtkParse.y" /* glr.c:816  */
    { access_level = VTK_ACCESS_PUBLIC; }
#line 6636 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 68:
#line 2168 "vtkParse.y" /* glr.c:816  */
    { access_level = VTK_ACCESS_PRIVATE; }
#line 6642 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 69:
#line 2169 "vtkParse.y" /* glr.c:816  */
    { access_level = VTK_ACCESS_PROTECTED; }
#line 6648 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 94:
#line 2200 "vtkParse.y" /* glr.c:816  */
    { output_friend_function(); }
#line 6654 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 97:
#line 2208 "vtkParse.y" /* glr.c:816  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 6660 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 98:
#line 2210 "vtkParse.y" /* glr.c:816  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6667 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 99:
#line 2213 "vtkParse.y" /* glr.c:816  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6674 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 100:
#line 2217 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6680 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 101:
#line 2218 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 6686 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 102:
#line 2221 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = access_level; }
#line 6692 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 104:
#line 2225 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
#line 6698 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 105:
#line 2226 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
#line 6704 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 106:
#line 2227 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
#line 6710 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 112:
#line 2249 "vtkParse.y" /* glr.c:816  */
    { pushType(); }
#line 6716 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 113:
#line 2250 "vtkParse.y" /* glr.c:816  */
    {
      popType();
      clearTypeId();
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str) != NULL)
      {
        setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
        setTypeBase(guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str)));
      }
      end_enum();
    }
#line 6731 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 114:
#line 2263 "vtkParse.y" /* glr.c:816  */
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
    }
#line 6741 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 115:
#line 2269 "vtkParse.y" /* glr.c:816  */
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
#line 6751 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 116:
#line 2276 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6757 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 117:
#line 2277 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 1; }
#line 6763 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 118:
#line 2278 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 1; }
#line 6769 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 119:
#line 2281 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6775 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 120:
#line 2282 "vtkParse.y" /* glr.c:816  */
    { pushType(); }
#line 6781 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 121:
#line 2283 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = getType(); popType(); }
#line 6787 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 125:
#line 2290 "vtkParse.y" /* glr.c:816  */
    { closeComment(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), NULL); }
#line 6793 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 126:
#line 2291 "vtkParse.y" /* glr.c:816  */
    { postSig("="); markSig(); closeComment(); }
#line 6799 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 127:
#line 2292 "vtkParse.y" /* glr.c:816  */
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), copySig()); }
#line 6805 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 150:
#line 2352 "vtkParse.y" /* glr.c:816  */
    { pushFunction(); postSig("("); }
#line 6811 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 151:
#line 2353 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 6817 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 152:
#line 2354 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.integer)); popFunction(); }
#line 6823 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 153:
#line 2358 "vtkParse.y" /* glr.c:816  */
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getSig());

      if (currentTemplate)
      {
        item->Template = currentTemplate;
        currentTemplate = NULL;
      }

      if (getVarName())
      {
        item->Name = getVarName();
        item->Comment = vtkstrdup(getComment());
      }

      if (item->TypeName == NULL)
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
#line 6861 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 154:
#line 2398 "vtkParse.y" /* glr.c:816  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 0); }
#line 6867 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 156:
#line 2402 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str); }
#line 6873 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 157:
#line 2404 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6879 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 158:
#line 2406 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6885 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 159:
#line 2408 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6891 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 160:
#line 2410 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6897 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 161:
#line 2413 "vtkParse.y" /* glr.c:816  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 1); }
#line 6903 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 162:
#line 2416 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 6909 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 163:
#line 2418 "vtkParse.y" /* glr.c:816  */
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer), copySig());

      item->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.str);
      item->Comment = vtkstrdup(getComment());

      if (currentTemplate)
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
#line 6938 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 164:
#line 2449 "vtkParse.y" /* glr.c:816  */
    { postSig("template<> "); clearTypeId(); }
#line 6944 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 165:
#line 2451 "vtkParse.y" /* glr.c:816  */
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
#line 6956 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 166:
#line 2459 "vtkParse.y" /* glr.c:816  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
#line 6968 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 168:
#line 2470 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
#line 6974 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 170:
#line 2474 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 6980 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 171:
#line 2476 "vtkParse.y" /* glr.c:816  */
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6986 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 173:
#line 2478 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 6992 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 174:
#line 2480 "vtkParse.y" /* glr.c:816  */
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6998 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 176:
#line 2482 "vtkParse.y" /* glr.c:816  */
    { pushTemplate(); markSig(); }
#line 7004 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 177:
#line 2485 "vtkParse.y" /* glr.c:816  */
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
#line 7017 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 179:
#line 2496 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 7023 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 180:
#line 2497 "vtkParse.y" /* glr.c:816  */
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 7029 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 181:
#line 2500 "vtkParse.y" /* glr.c:816  */
    { postSig("class "); }
#line 7035 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 182:
#line 2501 "vtkParse.y" /* glr.c:816  */
    { postSig("typename "); }
#line 7041 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 185:
#line 2507 "vtkParse.y" /* glr.c:816  */
    { postSig("="); markSig(); }
#line 7047 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 186:
#line 2509 "vtkParse.y" /* glr.c:816  */
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
#line 7058 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 189:
#line 2526 "vtkParse.y" /* glr.c:816  */
    { output_function(); }
#line 7064 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 190:
#line 2527 "vtkParse.y" /* glr.c:816  */
    { output_function(); }
#line 7070 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 191:
#line 2528 "vtkParse.y" /* glr.c:816  */
    { reject_function(); }
#line 7076 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 192:
#line 2529 "vtkParse.y" /* glr.c:816  */
    { reject_function(); }
#line 7082 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 200:
#line 2545 "vtkParse.y" /* glr.c:816  */
    { output_function(); }
#line 7088 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 210:
#line 2563 "vtkParse.y" /* glr.c:816  */
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7098 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 211:
#line 2568 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7104 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 212:
#line 2570 "vtkParse.y" /* glr.c:816  */
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
#line 7117 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 213:
#line 2581 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = copySig(); }
#line 7123 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 214:
#line 2585 "vtkParse.y" /* glr.c:816  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
#line 7135 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 215:
#line 2595 "vtkParse.y" /* glr.c:816  */
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7145 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 216:
#line 2600 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7151 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 217:
#line 2604 "vtkParse.y" /* glr.c:816  */
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7157 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 218:
#line 2607 "vtkParse.y" /* glr.c:816  */
    { markSig(); postSig("operator "); }
#line 7163 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 219:
#line 2611 "vtkParse.y" /* glr.c:816  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 7175 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 223:
#line 2628 "vtkParse.y" /* glr.c:816  */
    { postSig(" const"); currentFunction->IsConst = 1; }
#line 7181 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 224:
#line 2629 "vtkParse.y" /* glr.c:816  */
    { postSig(" volatile"); }
#line 7187 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 226:
#line 2632 "vtkParse.y" /* glr.c:816  */
    { chopSig(); }
#line 7193 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 228:
#line 2636 "vtkParse.y" /* glr.c:816  */
    { postSig(" noexcept"); }
#line 7199 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 229:
#line 2637 "vtkParse.y" /* glr.c:816  */
    { postSig(" throw"); }
#line 7205 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 231:
#line 2640 "vtkParse.y" /* glr.c:816  */
    { postSig("&"); }
#line 7211 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 232:
#line 2641 "vtkParse.y" /* glr.c:816  */
    { postSig("&&"); }
#line 7217 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 235:
#line 2648 "vtkParse.y" /* glr.c:816  */
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
#line 7226 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 237:
#line 2654 "vtkParse.y" /* glr.c:816  */
    { currentFunction->IsDeleted = 1; }
#line 7232 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 239:
#line 2657 "vtkParse.y" /* glr.c:816  */
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
#line 7242 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 242:
#line 2667 "vtkParse.y" /* glr.c:816  */
    { postSig(" -> "); clearType(); clearTypeId(); }
#line 7248 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 243:
#line 2669 "vtkParse.y" /* glr.c:816  */
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7257 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 250:
#line 2687 "vtkParse.y" /* glr.c:816  */
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7266 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 251:
#line 2691 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7272 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 252:
#line 2702 "vtkParse.y" /* glr.c:816  */
    {
      closeSig();
      if (getType() & VTK_PARSE_VIRTUAL)
      {
        currentFunction->IsVirtual = 1;
      }
      if (getType() & VTK_PARSE_EXPLICIT)
      {
        currentFunction->IsExplicit = 1;
      }
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 7291 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 253:
#line 2717 "vtkParse.y" /* glr.c:816  */
    {
      openSig();
    }
#line 7299 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 254:
#line 2721 "vtkParse.y" /* glr.c:816  */
    {
      postSig(";");
      closeSig();
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 7309 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 255:
#line 2728 "vtkParse.y" /* glr.c:816  */
    { pushType(); postSig("("); }
#line 7315 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 256:
#line 2729 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); popType(); }
#line 7321 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 264:
#line 2747 "vtkParse.y" /* glr.c:816  */
    { clearType(); clearTypeId(); }
#line 7327 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 266:
#line 2750 "vtkParse.y" /* glr.c:816  */
    { clearType(); clearTypeId(); }
#line 7333 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 267:
#line 2751 "vtkParse.y" /* glr.c:816  */
    { clearType(); clearTypeId(); postSig(", "); }
#line 7339 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 269:
#line 2754 "vtkParse.y" /* glr.c:816  */
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
#line 7345 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 270:
#line 2756 "vtkParse.y" /* glr.c:816  */
    { currentFunction->IsVariadic = 1; postSig("..."); }
#line 7351 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 271:
#line 2759 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 7357 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 272:
#line 2761 "vtkParse.y" /* glr.c:816  */
    {
      ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(param);

      handle_complex_type(param, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig());
      add_legacy_parameter(currentFunction, param);

      if (getVarName())
      {
        param->Name = getVarName();
      }

      vtkParse_AddParameterToFunction(currentFunction, param);
    }
#line 7376 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 273:
#line 2776 "vtkParse.y" /* glr.c:816  */
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
      {
        currentFunction->Parameters[i]->Value = getVarValue();
      }
    }
#line 7388 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 274:
#line 2785 "vtkParse.y" /* glr.c:816  */
    { clearVarValue(); }
#line 7394 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 276:
#line 2789 "vtkParse.y" /* glr.c:816  */
    { postSig("="); clearVarValue(); markSig(); }
#line 7400 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 277:
#line 2790 "vtkParse.y" /* glr.c:816  */
    { chopSig(); setVarValue(copySig()); }
#line 7406 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 278:
#line 2791 "vtkParse.y" /* glr.c:816  */
    { clearVarValue(); markSig(); }
#line 7412 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 279:
#line 2792 "vtkParse.y" /* glr.c:816  */
    { chopSig(); setVarValue(copySig()); }
#line 7418 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 280:
#line 2793 "vtkParse.y" /* glr.c:816  */
    { clearVarValue(); markSig(); postSig("("); }
#line 7424 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 281:
#line 2795 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(")"); setVarValue(copySig()); }
#line 7430 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 282:
#line 2798 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7436 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 283:
#line 2799 "vtkParse.y" /* glr.c:816  */
    { postSig(", "); }
#line 7442 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 286:
#line 2811 "vtkParse.y" /* glr.c:816  */
    {
      unsigned int type = getType();
      ValueInfo *var = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(var);
      var->ItemType = VTK_VARIABLE_INFO;
      var->Access = access_level;

      handle_complex_type(var, type, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), getSig());

      if (currentTemplate)
      {
        var->Template = currentTemplate;
        currentTemplate = NULL;
      }

      var->Name = getVarName();
      var->Comment = vtkstrdup(getComment());

      if (getVarValue())
      {
        var->Value = getVarValue();
      }

      /* Is this a typedef? */
      if ((type & VTK_PARSE_TYPEDEF) != 0)
      {
        var->ItemType = VTK_TYPEDEF_INFO;
        if (var->TypeName == NULL)
        {
          vtkParse_FreeValue(var);
        }
        else if (currentClass)
        {
          vtkParse_AddTypedefToClass(currentClass, var);
        }
        else
        {
          vtkParse_AddTypedefToNamespace(currentNamespace, var);
        }
      }
      /* Is this a constant? */
      else if (((type & VTK_PARSE_CONST) != 0) && var->Value != NULL &&
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
#line 7515 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 290:
#line 2884 "vtkParse.y" /* glr.c:816  */
    { postSig(", "); }
#line 7521 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 293:
#line 2890 "vtkParse.y" /* glr.c:816  */
    { setTypePtr(0); }
#line 7527 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 294:
#line 2891 "vtkParse.y" /* glr.c:816  */
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7533 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 295:
#line 2896 "vtkParse.y" /* glr.c:816  */
    {
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
      {
        ((*yyvalp).integer) = (VTK_PARSE_FUNCTION_PTR | (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer));
      }
      else
      {
        ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer);
      }
    }
#line 7548 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 296:
#line 2907 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7554 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 297:
#line 2908 "vtkParse.y" /* glr.c:816  */
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
      {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        ((*yyvalp).integer) = (parens | VTK_PARSE_FUNCTION);
      }
      else if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_ARRAY)
      {
        ((*yyvalp).integer) = add_indirection_to_array(parens);
      }
    }
#line 7573 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 298:
#line 2924 "vtkParse.y" /* glr.c:816  */
    { clearVarName(); chopSig(); }
#line 7579 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 300:
#line 2930 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer); }
#line 7585 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 301:
#line 2931 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7591 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 302:
#line 2933 "vtkParse.y" /* glr.c:816  */
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
      {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        ((*yyvalp).integer) = (parens | VTK_PARSE_FUNCTION);
      }
      else if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_ARRAY)
      {
        ((*yyvalp).integer) = add_indirection_to_array(parens);
      }
    }
#line 7610 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 303:
#line 2949 "vtkParse.y" /* glr.c:816  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 7616 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 304:
#line 2950 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 7622 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 305:
#line 2951 "vtkParse.y" /* glr.c:816  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 7629 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 306:
#line 2955 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 7635 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 307:
#line 2956 "vtkParse.y" /* glr.c:816  */
    { pushFunction(); postSig("("); }
#line 7641 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 308:
#line 2957 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7647 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 309:
#line 2958 "vtkParse.y" /* glr.c:816  */
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
#line 7656 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 310:
#line 2962 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
#line 7662 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 313:
#line 2966 "vtkParse.y" /* glr.c:816  */
    { currentFunction->IsConst = 1; }
#line 7668 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 318:
#line 2974 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7674 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 320:
#line 2979 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7680 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 321:
#line 2982 "vtkParse.y" /* glr.c:816  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7686 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 322:
#line 2984 "vtkParse.y" /* glr.c:816  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str)); }
#line 7692 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 327:
#line 2993 "vtkParse.y" /* glr.c:816  */
    { clearArray(); }
#line 7698 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 329:
#line 2997 "vtkParse.y" /* glr.c:816  */
    { clearArray(); }
#line 7704 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 333:
#line 3004 "vtkParse.y" /* glr.c:816  */
    { postSig("["); }
#line 7710 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 334:
#line 3005 "vtkParse.y" /* glr.c:816  */
    { postSig("]"); }
#line 7716 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 335:
#line 3008 "vtkParse.y" /* glr.c:816  */
    { pushArraySize(""); }
#line 7722 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 336:
#line 3009 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 7728 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 337:
#line 3009 "vtkParse.y" /* glr.c:816  */
    { chopSig(); pushArraySize(copySig()); }
#line 7734 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 343:
#line 3023 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7740 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 344:
#line 3024 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7746 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 345:
#line 3028 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7752 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 346:
#line 3030 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7758 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 347:
#line 3032 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7764 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 348:
#line 3036 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7770 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 349:
#line 3038 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7776 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 350:
#line 3040 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7782 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 351:
#line 3042 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7788 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 352:
#line 3044 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7794 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 353:
#line 3046 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7800 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 354:
#line 3047 "vtkParse.y" /* glr.c:816  */
    { postSig("template "); }
#line 7806 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 355:
#line 3049 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7812 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 356:
#line 3052 "vtkParse.y" /* glr.c:816  */
    { postSig("~"); }
#line 7818 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 357:
#line 3055 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7824 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 358:
#line 3058 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
#line 7830 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 359:
#line 3061 "vtkParse.y" /* glr.c:816  */
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); postSig("<"); }
#line 7836 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 360:
#line 3063 "vtkParse.y" /* glr.c:816  */
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
#line 7845 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 361:
#line 3069 "vtkParse.y" /* glr.c:816  */
    { markSig(); postSig("decltype"); }
#line 7851 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 362:
#line 3070 "vtkParse.y" /* glr.c:816  */
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
#line 7857 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 363:
#line 3077 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7863 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 364:
#line 3078 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7869 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 365:
#line 3079 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7875 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 366:
#line 3080 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7881 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 367:
#line 3081 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7887 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 368:
#line 3082 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7893 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 369:
#line 3083 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7899 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 370:
#line 3084 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7905 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 371:
#line 3085 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7911 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 372:
#line 3086 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7917 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 373:
#line 3087 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeInt8"; postSig(((*yyvalp).str)); }
#line 7923 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 374:
#line 3088 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeUInt8"; postSig(((*yyvalp).str)); }
#line 7929 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 375:
#line 3089 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeInt16"; postSig(((*yyvalp).str)); }
#line 7935 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 376:
#line 3090 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeUInt16"; postSig(((*yyvalp).str)); }
#line 7941 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 377:
#line 3091 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeInt32"; postSig(((*yyvalp).str)); }
#line 7947 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 378:
#line 3092 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeUInt32"; postSig(((*yyvalp).str)); }
#line 7953 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 379:
#line 3093 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeInt64"; postSig(((*yyvalp).str)); }
#line 7959 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 380:
#line 3094 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeUInt64"; postSig(((*yyvalp).str)); }
#line 7965 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 381:
#line 3095 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeFloat32"; postSig(((*yyvalp).str)); }
#line 7971 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 382:
#line 3096 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkTypeFloat64"; postSig(((*yyvalp).str)); }
#line 7977 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 383:
#line 3097 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkIdType"; postSig(((*yyvalp).str)); }
#line 7983 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 384:
#line 3098 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "vtkFloatingPointType"; postSig(((*yyvalp).str)); }
#line 7989 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 395:
#line 3123 "vtkParse.y" /* glr.c:816  */
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 7995 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 396:
#line 3124 "vtkParse.y" /* glr.c:816  */
    { setTypeMod(VTK_PARSE_TYPEDEF); }
#line 8001 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 397:
#line 3125 "vtkParse.y" /* glr.c:816  */
    { setTypeMod(VTK_PARSE_FRIEND); }
#line 8007 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 400:
#line 3132 "vtkParse.y" /* glr.c:816  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8013 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 401:
#line 3133 "vtkParse.y" /* glr.c:816  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8019 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 402:
#line 3134 "vtkParse.y" /* glr.c:816  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8025 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 403:
#line 3135 "vtkParse.y" /* glr.c:816  */
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
#line 8031 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 404:
#line 3138 "vtkParse.y" /* glr.c:816  */
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
#line 8037 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 405:
#line 3139 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 8043 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 406:
#line 3140 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 8049 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 407:
#line 3141 "vtkParse.y" /* glr.c:816  */
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
#line 8055 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 408:
#line 3143 "vtkParse.y" /* glr.c:816  */
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
#line 8061 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 409:
#line 3146 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 8067 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 410:
#line 3147 "vtkParse.y" /* glr.c:816  */
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 8073 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 411:
#line 3148 "vtkParse.y" /* glr.c:816  */
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
#line 8079 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 412:
#line 3151 "vtkParse.y" /* glr.c:816  */
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
#line 8085 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 413:
#line 3152 "vtkParse.y" /* glr.c:816  */
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
#line 8091 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 415:
#line 3157 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8097 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 417:
#line 3167 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8103 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 419:
#line 3169 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8109 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 422:
#line 3175 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8115 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 423:
#line 3177 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8121 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 425:
#line 3182 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 8127 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 426:
#line 3183 "vtkParse.y" /* glr.c:816  */
    { postSig("typename "); }
#line 8133 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 427:
#line 3185 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8139 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 428:
#line 3187 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8145 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 429:
#line 3189 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8151 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 431:
#line 3195 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8157 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 433:
#line 3197 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8163 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 436:
#line 3204 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8169 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 438:
#line 3206 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8175 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 441:
#line 3212 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 8181 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 442:
#line 3214 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8187 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 443:
#line 3216 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8193 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 444:
#line 3218 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8199 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 445:
#line 3220 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8205 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 446:
#line 3222 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8211 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 447:
#line 3225 "vtkParse.y" /* glr.c:816  */
    { setTypeId(""); }
#line 8217 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 449:
#line 3229 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
#line 8223 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 450:
#line 3230 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
#line 8229 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 451:
#line 3231 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
#line 8235 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 452:
#line 3232 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
#line 8241 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 453:
#line 3233 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
#line 8247 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 454:
#line 3234 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
#line 8253 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 455:
#line 3235 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
#line 8259 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 456:
#line 3236 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
#line 8265 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 457:
#line 3237 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
#line 8271 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 458:
#line 3238 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
#line 8277 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 459:
#line 3239 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeInt8"); ((*yyvalp).integer) = VTK_PARSE_INT8; }
#line 8283 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 460:
#line 3240 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeUInt8"); ((*yyvalp).integer) = VTK_PARSE_UINT8; }
#line 8289 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 461:
#line 3241 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeInt16"); ((*yyvalp).integer) = VTK_PARSE_INT16; }
#line 8295 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 462:
#line 3242 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeUInt16"); ((*yyvalp).integer) = VTK_PARSE_UINT16; }
#line 8301 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 463:
#line 3243 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeInt32"); ((*yyvalp).integer) = VTK_PARSE_INT32; }
#line 8307 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 464:
#line 3244 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeUInt32"); ((*yyvalp).integer) = VTK_PARSE_UINT32; }
#line 8313 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 465:
#line 3245 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeInt64"); ((*yyvalp).integer) = VTK_PARSE_INT64; }
#line 8319 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 466:
#line 3246 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeUInt64"); ((*yyvalp).integer) = VTK_PARSE_UINT64; }
#line 8325 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 467:
#line 3247 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeFloat32"); ((*yyvalp).integer) = VTK_PARSE_FLOAT32; }
#line 8331 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 468:
#line 3248 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkTypeFloat64"); ((*yyvalp).integer) = VTK_PARSE_FLOAT64; }
#line 8337 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 469:
#line 3249 "vtkParse.y" /* glr.c:816  */
    { typeSig("vtkIdType"); ((*yyvalp).integer) = VTK_PARSE_ID_TYPE; }
#line 8343 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 470:
#line 3250 "vtkParse.y" /* glr.c:816  */
    { typeSig("double"); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8349 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 471:
#line 3253 "vtkParse.y" /* glr.c:816  */
    { postSig("auto "); ((*yyvalp).integer) = 0; }
#line 8355 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 472:
#line 3254 "vtkParse.y" /* glr.c:816  */
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
#line 8361 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 473:
#line 3255 "vtkParse.y" /* glr.c:816  */
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
#line 8367 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 474:
#line 3256 "vtkParse.y" /* glr.c:816  */
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
#line 8373 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 475:
#line 3257 "vtkParse.y" /* glr.c:816  */
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8379 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 476:
#line 3258 "vtkParse.y" /* glr.c:816  */
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
#line 8385 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 477:
#line 3259 "vtkParse.y" /* glr.c:816  */
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
#line 8391 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 478:
#line 3260 "vtkParse.y" /* glr.c:816  */
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
#line 8397 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 479:
#line 3261 "vtkParse.y" /* glr.c:816  */
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
#line 8403 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 480:
#line 3262 "vtkParse.y" /* glr.c:816  */
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8409 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 481:
#line 3263 "vtkParse.y" /* glr.c:816  */
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
#line 8415 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 482:
#line 3264 "vtkParse.y" /* glr.c:816  */
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
#line 8421 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 483:
#line 3265 "vtkParse.y" /* glr.c:816  */
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
#line 8427 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 484:
#line 3266 "vtkParse.y" /* glr.c:816  */
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8433 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 485:
#line 3267 "vtkParse.y" /* glr.c:816  */
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
#line 8439 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 489:
#line 3290 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8445 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 490:
#line 3294 "vtkParse.y" /* glr.c:816  */
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 8451 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 491:
#line 3298 "vtkParse.y" /* glr.c:816  */
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
#line 8457 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 492:
#line 3301 "vtkParse.y" /* glr.c:816  */
    { postSig("*"); }
#line 8463 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 493:
#line 3302 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 8469 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 494:
#line 3305 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
#line 8475 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 495:
#line 3307 "vtkParse.y" /* glr.c:816  */
    {
      if (((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) & VTK_PARSE_CONST) != 0)
      {
        ((*yyvalp).integer) = VTK_PARSE_CONST_POINTER;
      }
      if (((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) & VTK_PARSE_VOLATILE) != 0)
      {
        ((*yyvalp).integer) = VTK_PARSE_BAD_INDIRECT;
      }
    }
#line 8490 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 497:
#line 3323 "vtkParse.y" /* glr.c:816  */
    {
      unsigned int n;
      n = (((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) << 2) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
      {
        n = VTK_PARSE_BAD_INDIRECT;
      }
      ((*yyvalp).integer) = n;
    }
#line 8504 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 498:
#line 3347 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_DECL); }
#line 8510 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 499:
#line 3348 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 8516 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 500:
#line 3351 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_ID); }
#line 8522 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 501:
#line 3352 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 8528 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 502:
#line 3355 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_REF); }
#line 8534 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 503:
#line 3356 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 8540 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 504:
#line 3359 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_FUNC); }
#line 8546 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 505:
#line 3360 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 8552 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 506:
#line 3363 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_ARRAY); }
#line 8558 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 507:
#line 3364 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 8564 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 508:
#line 3367 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_CLASS); }
#line 8570 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 509:
#line 3368 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 8576 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 512:
#line 3375 "vtkParse.y" /* glr.c:816  */
    { setAttributePrefix(NULL); }
#line 8582 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 515:
#line 3383 "vtkParse.y" /* glr.c:816  */
    { setAttributePrefix(vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "::")); }
#line 8588 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 520:
#line 3391 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 8594 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 521:
#line 3392 "vtkParse.y" /* glr.c:816  */
    { handle_attribute(cutSig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8600 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 522:
#line 3395 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 8606 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 523:
#line 3396 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 8612 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 526:
#line 3401 "vtkParse.y" /* glr.c:816  */
    { postSig(": "); }
#line 8618 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 533:
#line 3412 "vtkParse.y" /* glr.c:816  */
    { postSig("= "); }
#line 8624 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 534:
#line 3420 "vtkParse.y" /* glr.c:816  */
    {preSig("void Set"); postSig("(");}
#line 8630 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 535:
#line 3421 "vtkParse.y" /* glr.c:816  */
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8644 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 536:
#line 3430 "vtkParse.y" /* glr.c:816  */
    {postSig("Get");}
#line 8650 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 537:
#line 3431 "vtkParse.y" /* glr.c:816  */
    {markSig();}
#line 8656 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 538:
#line 3431 "vtkParse.y" /* glr.c:816  */
    {swapSig();}
#line 8662 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 539:
#line 3432 "vtkParse.y" /* glr.c:816  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
#line 8675 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 540:
#line 3440 "vtkParse.y" /* glr.c:816  */
    {preSig("void Set");}
#line 8681 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 541:
#line 3441 "vtkParse.y" /* glr.c:816  */
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8695 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 542:
#line 3450 "vtkParse.y" /* glr.c:816  */
    {preSig("char *Get");}
#line 8701 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 543:
#line 3451 "vtkParse.y" /* glr.c:816  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
#line 8714 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 544:
#line 3459 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8720 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 545:
#line 3459 "vtkParse.y" /* glr.c:816  */
    {closeSig();}
#line 8726 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 546:
#line 3461 "vtkParse.y" /* glr.c:816  */
    {
   const char *typeText;
   chopSig();
   typeText = copySig();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.str));
   currentFunction->Signature =
     vtkstrcat5("void ", currentFunction->Name, "(", typeText, ");");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.str), "MinValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.str), "MaxValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
#line 8761 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 547:
#line 3492 "vtkParse.y" /* glr.c:816  */
    {preSig("void Set"); postSig("("); }
#line 8767 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 548:
#line 3493 "vtkParse.y" /* glr.c:816  */
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8781 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 549:
#line 3502 "vtkParse.y" /* glr.c:816  */
    {postSig("*Get");}
#line 8787 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 550:
#line 3503 "vtkParse.y" /* glr.c:816  */
    {markSig();}
#line 8793 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 551:
#line 3503 "vtkParse.y" /* glr.c:816  */
    {swapSig();}
#line 8799 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 552:
#line 3504 "vtkParse.y" /* glr.c:816  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
#line 8812 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 553:
#line 3513 "vtkParse.y" /* glr.c:816  */
    {
   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), "On");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), "Off");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8834 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 554:
#line 3530 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8840 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 555:
#line 3531 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8849 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 556:
#line 3535 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8855 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 557:
#line 3536 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8864 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 558:
#line 3540 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8870 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 559:
#line 3541 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8879 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 560:
#line 3545 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8885 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 561:
#line 3546 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8894 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 562:
#line 3550 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8900 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 563:
#line 3551 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8909 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 564:
#line 3555 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8915 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 565:
#line 3556 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8924 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 566:
#line 3560 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8930 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 567:
#line 3561 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8939 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 568:
#line 3565 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8945 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 569:
#line 3566 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8954 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 570:
#line 3570 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8960 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 571:
#line 3572 "vtkParse.y" /* glr.c:816  */
    {
   const char *typeText;
   chopSig();
   typeText = copySig();
   currentFunction->Macro = "vtkSetVectorMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.str));
   currentFunction->Signature =
     vtkstrcat7("void ", currentFunction->Name, "(", typeText,
                " a[", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "]);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_POINTER | getType()),
                 getTypeId(), (int)strtol((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), NULL, 0));
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8980 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 572:
#line 3587 "vtkParse.y" /* glr.c:816  */
    {startSig();}
#line 8986 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 573:
#line 3589 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   currentFunction->Macro = "vtkGetVectorMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.str));
   postSig(" *");
   postSig(currentFunction->Name);
   postSig("();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_POINTER | getType()),
              getTypeId(), (int)strtol((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), NULL, 0));
   output_function();
   }
#line 9003 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 574:
#line 3602 "vtkParse.y" /* glr.c:816  */
    {
     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[2]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     output_function();
   }
#line 9044 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 575:
#line 3639 "vtkParse.y" /* glr.c:816  */
    {
     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[3]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     output_function();
   }
#line 9086 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 576:
#line 3677 "vtkParse.y" /* glr.c:816  */
    {
   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "GetClassName";
   currentFunction->Signature = "const char *GetClassName();";
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "IsA";
   currentFunction->Signature = "virtual int IsA(const char *name);";
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
                "char", 0);
   set_return(currentFunction, VTK_PARSE_INT, "int", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "NewInstance";
   currentFunction->Signature = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), " *NewInstance();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "SafeDownCast";
   currentFunction->Signature =
     vtkstrcat3("static ", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), " *SafeDownCast(vtkObject *o);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
   set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
              (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), 0);
   output_function();
   }
#line 9126 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 579:
#line 3721 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "()"; }
#line 9132 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 580:
#line 3722 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "[]"; }
#line 9138 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 581:
#line 3723 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = " new[]"; }
#line 9144 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 582:
#line 3724 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = " delete[]"; }
#line 9150 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 583:
#line 3725 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "<"; }
#line 9156 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 584:
#line 3726 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">"; }
#line 9162 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 585:
#line 3727 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ","; }
#line 9168 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 586:
#line 3728 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "="; }
#line 9174 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 587:
#line 3729 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">>"; }
#line 9180 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 588:
#line 3730 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">>"; }
#line 9186 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 589:
#line 3731 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 9192 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 591:
#line 3735 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "%"; }
#line 9198 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 592:
#line 3736 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "*"; }
#line 9204 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 593:
#line 3737 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "/"; }
#line 9210 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 594:
#line 3738 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "-"; }
#line 9216 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 595:
#line 3739 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "+"; }
#line 9222 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 596:
#line 3740 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "!"; }
#line 9228 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 597:
#line 3741 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "~"; }
#line 9234 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 598:
#line 3742 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "&"; }
#line 9240 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 599:
#line 3743 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "|"; }
#line 9246 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 600:
#line 3744 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "^"; }
#line 9252 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 601:
#line 3745 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = " new"; }
#line 9258 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 602:
#line 3746 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = " delete"; }
#line 9264 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 603:
#line 3747 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "<<="; }
#line 9270 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 604:
#line 3748 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">>="; }
#line 9276 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 605:
#line 3749 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "<<"; }
#line 9282 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 606:
#line 3750 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ".*"; }
#line 9288 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 607:
#line 3751 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "->*"; }
#line 9294 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 608:
#line 3752 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "->"; }
#line 9300 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 609:
#line 3753 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "+="; }
#line 9306 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 610:
#line 3754 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "-="; }
#line 9312 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 611:
#line 3755 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "*="; }
#line 9318 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 612:
#line 3756 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "/="; }
#line 9324 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 613:
#line 3757 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "%="; }
#line 9330 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 614:
#line 3758 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "++"; }
#line 9336 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 615:
#line 3759 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "--"; }
#line 9342 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 616:
#line 3760 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "&="; }
#line 9348 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 617:
#line 3761 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "|="; }
#line 9354 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 618:
#line 3762 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "^="; }
#line 9360 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 619:
#line 3763 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "&&"; }
#line 9366 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 620:
#line 3764 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "||"; }
#line 9372 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 621:
#line 3765 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "=="; }
#line 9378 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 622:
#line 3766 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "!="; }
#line 9384 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 623:
#line 3767 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "<="; }
#line 9390 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 624:
#line 3768 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">="; }
#line 9396 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 625:
#line 3771 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "typedef"; }
#line 9402 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 626:
#line 3772 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "typename"; }
#line 9408 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 627:
#line 3773 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "class"; }
#line 9414 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 628:
#line 3774 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "struct"; }
#line 9420 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 629:
#line 3775 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "union"; }
#line 9426 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 630:
#line 3776 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "template"; }
#line 9432 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 631:
#line 3777 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "public"; }
#line 9438 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 632:
#line 3778 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "protected"; }
#line 9444 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 633:
#line 3779 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "private"; }
#line 9450 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 634:
#line 3780 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "const"; }
#line 9456 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 635:
#line 3781 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "volatile"; }
#line 9462 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 636:
#line 3782 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "static"; }
#line 9468 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 637:
#line 3783 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "thread_local"; }
#line 9474 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 638:
#line 3784 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "constexpr"; }
#line 9480 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 639:
#line 3785 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "inline"; }
#line 9486 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 640:
#line 3786 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "virtual"; }
#line 9492 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 641:
#line 3787 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "explicit"; }
#line 9498 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 642:
#line 3788 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "decltype"; }
#line 9504 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 643:
#line 3789 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "default"; }
#line 9510 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 644:
#line 3790 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "extern"; }
#line 9516 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 645:
#line 3791 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "using"; }
#line 9522 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 646:
#line 3792 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "namespace"; }
#line 9528 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 647:
#line 3793 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "operator"; }
#line 9534 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 648:
#line 3794 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "enum"; }
#line 9540 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 649:
#line 3795 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "throw"; }
#line 9546 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 650:
#line 3796 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "noexcept"; }
#line 9552 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 651:
#line 3797 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "const_cast"; }
#line 9558 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 652:
#line 3798 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "dynamic_cast"; }
#line 9564 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 653:
#line 3799 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "static_cast"; }
#line 9570 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 654:
#line 3800 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "reinterpret_cast"; }
#line 9576 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 668:
#line 3824 "vtkParse.y" /* glr.c:816  */
    { postSig("< "); }
#line 9582 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 669:
#line 3825 "vtkParse.y" /* glr.c:816  */
    { postSig("> "); }
#line 9588 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 671:
#line 3826 "vtkParse.y" /* glr.c:816  */
    { postSig(">"); }
#line 9594 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 673:
#line 3830 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig("::"); }
#line 9600 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 677:
#line 3837 "vtkParse.y" /* glr.c:816  */
    {
      const char *op = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str);
      if ((op[0] == '+' || op[0] == '-' || op[0] == '*' || op[0] == '&') &&
          op[1] == '\0')
      {
        int c1 = 0;
        size_t l;
        const char *cp;
        chopSig();
        cp = getSig();
        l = getSigLength();
        if (l > 0) { c1 = cp[l-1]; }
        if (c1 != 0 && c1 != '(' && c1 != '[' && c1 != '=')
        {
          postSig(" ");
        }
        postSig(op);
        if (vtkParse_CharType(c1, (CPRE_XID|CPRE_QUOTE)) ||
            c1 == ')' || c1 == ']')
        {
          postSig(" ");
        }
      }
      else if ((op[0] == '-' && op[1] == '>') || op[0] == '.')
      {
        chopSig();
        postSig(op);
      }
      else
      {
        postSig(op);
        postSig(" ");
      }
    }
#line 9639 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 678:
#line 3871 "vtkParse.y" /* glr.c:816  */
    { postSig(":"); postSig(" "); }
#line 9645 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 679:
#line 3871 "vtkParse.y" /* glr.c:816  */
    { postSig("."); }
#line 9651 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 680:
#line 3872 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9657 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 681:
#line 3873 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9663 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 683:
#line 3876 "vtkParse.y" /* glr.c:816  */
    {
      int c1 = 0;
      size_t l;
      const char *cp;
      chopSig();
      cp = getSig();
      l = getSigLength();
      if (l != 0) { c1 = cp[l-1]; }
      while (vtkParse_CharType(c1, CPRE_XID) && l != 0)
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
      postSig(" ");
    }
#line 9689 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 687:
#line 3903 "vtkParse.y" /* glr.c:816  */
    { postSig("< "); }
#line 9695 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 688:
#line 3904 "vtkParse.y" /* glr.c:816  */
    { postSig("> "); }
#line 9701 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 689:
#line 3905 "vtkParse.y" /* glr.c:816  */
    { postSig(">"); }
#line 9707 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 691:
#line 3909 "vtkParse.y" /* glr.c:816  */
    { postSig("= "); }
#line 9713 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 692:
#line 3910 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(", "); }
#line 9719 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 694:
#line 3914 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(";"); }
#line 9725 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 702:
#line 3928 "vtkParse.y" /* glr.c:816  */
    { postSig("= "); }
#line 9731 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 703:
#line 3929 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(", "); }
#line 9737 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 704:
#line 3933 "vtkParse.y" /* glr.c:816  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
#line 9747 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 705:
#line 3939 "vtkParse.y" /* glr.c:816  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
#line 9757 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 708:
#line 3950 "vtkParse.y" /* glr.c:816  */
    { postSigLeftBracket("["); }
#line 9763 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 709:
#line 3951 "vtkParse.y" /* glr.c:816  */
    { postSigRightBracket("] "); }
#line 9769 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 710:
#line 3952 "vtkParse.y" /* glr.c:816  */
    { postSig("[["); }
#line 9775 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 711:
#line 3953 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig("]] "); }
#line 9781 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 712:
#line 3956 "vtkParse.y" /* glr.c:816  */
    { postSigLeftBracket("("); }
#line 9787 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 713:
#line 3957 "vtkParse.y" /* glr.c:816  */
    { postSigRightBracket(") "); }
#line 9793 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 714:
#line 3958 "vtkParse.y" /* glr.c:816  */
    { postSigLeftBracket("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 9799 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 715:
#line 3959 "vtkParse.y" /* glr.c:816  */
    { postSigRightBracket(") "); }
#line 9805 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 716:
#line 3960 "vtkParse.y" /* glr.c:816  */
    { postSigLeftBracket("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&"); }
#line 9811 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 717:
#line 3961 "vtkParse.y" /* glr.c:816  */
    { postSigRightBracket(") "); }
#line 9817 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 718:
#line 3964 "vtkParse.y" /* glr.c:816  */
    { postSig("{ "); }
#line 9823 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 719:
#line 3964 "vtkParse.y" /* glr.c:816  */
    { postSig("} "); }
#line 9829 "vtkParse.tab.c" /* glr.c:816  */
    break;


#line 9833 "vtkParse.tab.c" /* glr.c:816  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete", yymsg);
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1047)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YYASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YYASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                                              );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULLPTR;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = yylex ();
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

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex ();
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
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULLPTR);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = yylex ();
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

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULLPTR ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYASSERT (yyp->yystate.yyisState);
          YYASSERT (yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYASSERT (!yyp->yystate.yyisState);
          YYASSERT (!yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 4011 "vtkParse.y" /* glr.c:2584  */

#include <string.h>
#include "lex.yy.c"

/* fill in the type name if none given */
const char *type_class(unsigned int type, const char *classname)
{
  if (classname)
  {
    if (classname[0] == '\0')
    {
      switch ((type & VTK_PARSE_BASE_TYPE))
      {
        case 0:
          classname = "auto";
          break;
        case VTK_PARSE_VOID:
          classname = "void";
          break;
        case VTK_PARSE_BOOL:
          classname = "bool";
          break;
        case VTK_PARSE_FLOAT:
          classname = "float";
          break;
        case VTK_PARSE_DOUBLE:
          classname = "double";
          break;
        case VTK_PARSE_LONG_DOUBLE:
          classname = "long double";
          break;
        case VTK_PARSE_CHAR:
          classname = "char";
          break;
        case VTK_PARSE_CHAR16_T:
          classname = "char16_t";
          break;
        case VTK_PARSE_CHAR32_T:
          classname = "char32_t";
          break;
        case VTK_PARSE_WCHAR_T:
          classname = "wchar_t";
          break;
        case VTK_PARSE_UNSIGNED_CHAR:
          classname = "unsigned char";
          break;
        case VTK_PARSE_SIGNED_CHAR:
          classname = "signed char";
          break;
        case VTK_PARSE_SHORT:
          classname = "short";
          break;
        case VTK_PARSE_UNSIGNED_SHORT:
          classname = "unsigned short";
          break;
        case VTK_PARSE_INT:
          classname = "int";
          break;
        case VTK_PARSE_UNSIGNED_INT:
          classname = "unsigned int";
          break;
        case VTK_PARSE_LONG:
          classname = "long";
          break;
        case VTK_PARSE_UNSIGNED_LONG:
          classname = "unsigned long";
          break;
        case VTK_PARSE_LONG_LONG:
          classname = "long long";
          break;
        case VTK_PARSE_UNSIGNED_LONG_LONG:
          classname = "unsigned long long";
          break;
        case VTK_PARSE___INT64:
          classname = "__int64";
          break;
        case VTK_PARSE_UNSIGNED___INT64:
          classname = "unsigned __int64";
          break;
      }
    }
  }

  return classname;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct_or_union)
{
  ClassInfo *outerClass = currentClass;
  pushClass();
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  vtkParse_InitClass(currentClass);
  currentClass->Name = classname;
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

/* reached the end of a class definition */
void end_class()
{
  /* add default constructors */
  vtkParse_AddDefaultConstructors(currentClass, data->Strings);

  popClass();
}

/* add a base class to the specified class */
void add_base_class(ClassInfo *cls, const char *name, int al,
  unsigned int extra)
{
  /* "extra" can contain VTK_PARSE_VIRTUAL and VTK_PARSE_PACK */
  if (cls && al == VTK_ACCESS_PUBLIC &&
      (extra & VTK_PARSE_PACK) == 0)
  {
    vtkParse_AddStringToArray(&cls->SuperClasses,
                              &cls->NumberOfSuperClasses,
                              name);
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
    item->Scope = name;
  }
  else
  {
    i = strlen(name);
    while (i > 0 && name[i-1] != ':') { i--; }
    item->Name = vtkstrdup(&name[i]);
    while (i > 0 && name[i-1] == ':') { i--; }
    item->Scope = vtkstrndup(name, i);
    item->Access = access_level;
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
void start_enum(const char *name, int is_scoped,
                unsigned int type, const char *basename)
{
  EnumInfo *item;

  currentEnumType = (type ? type : VTK_PARSE_INT);
  currentEnumName = "int";
  currentEnumValue = NULL;

  if (type == 0 && is_scoped)
  {
    type = VTK_PARSE_INT;
  }

  if (name)
  {
    currentEnumName = name;
    item = (EnumInfo *)malloc(sizeof(EnumInfo));
    vtkParse_InitEnum(item);
    item->Name = name;
    item->Comment = vtkstrdup(getComment());
    item->Access = access_level;

    if (currentClass)
    {
      vtkParse_AddEnumToClass(currentClass, item);
    }
    else
    {
      vtkParse_AddEnumToNamespace(currentNamespace, item);
    }

    if (type)
    {
      vtkParse_AddStringToArray(&item->SuperClasses,
                                &item->NumberOfSuperClasses,
                                type_class(type, basename));
    }

    if (is_scoped)
    {
      pushClass();
      currentClass = item;
    }
  }
}

/* finish the enum */
void end_enum()
{
  if (currentClass && currentClass->ItemType == VTK_ENUM_INFO)
  {
    popClass();
  }

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
    currentEnumValue = value;
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
    currentEnumValue = vtkstrdup(text);
  }
  else
  {
    strcpy(text, "0");
    currentEnumValue = "0";
  }

  add_constant(name, currentEnumValue, currentEnumType, currentEnumName, 2);
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

  k = vtkParse_SkipId(valstring);
  if (valstring[k] == '\0')
  {
    is_name = 1;
  }

  if (strcmp(valstring, "true") == 0 || strcmp(valstring, "false") == 0)
  {
    return VTK_PARSE_BOOL;
  }

  if (strcmp(valstring, "nullptr") == 0 || strcmp(valstring, "NULL") == 0)
  {
    return VTK_PARSE_NULLPTR_T;
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
  con->Name = name;
  con->Comment = vtkstrdup(getComment());
  con->Value = value;
  con->Type = type;
  con->TypeName = type_class(type, typeclass);

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

/* if the name is a const in this namespace, then scope it */
const char *add_const_scope(const char *name)
{
  static char text[256];
  NamespaceInfo *scope = currentNamespace;
  TemplateInfo *tparams;
  const char *classname;
  unsigned long i, j;
  int addscope = 0;

  strcpy(text, name);

  if (currentClass)
  {
    for (j = 0; j < currentClass->NumberOfConstants; j++)
    {
      if (strcmp(currentClass->Constants[j]->Name, text) == 0)
      {
        classname = currentClass->Name;
        tparams = currentClass->Template;
        if (tparams)
        {
          classname = vtkstrcat(classname, "<");
          for (i = 0; i < tparams->NumberOfParameters; i++)
          {
            if (i != 0)
            {
              classname = vtkstrcat(classname, ",");
            }
            classname = vtkstrcat(classname, tparams->Parameters[i]->Name);
          }
          classname = vtkstrcat(classname, ">");
        }
        prepend_scope(text, classname);
        addscope = 1;
        break;
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
          break;
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
  param->Name = getVarName();
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
  param->TypeName = type_class(type, typeclass);

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
  val->TypeName = type_class(type, typeclass);

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
  func->ReturnClass = val->TypeName;
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

  /* remove specifiers like "friend" and "typedef" */
  datatype &= VTK_PARSE_QUALIFIED_TYPE;

  /* remove the pack specifier caused by "..." */
  if ((extra & VTK_PARSE_PACK) != 0)
  {
    val->IsPack = 1;
    extra ^= VTK_PARSE_PACK;
  }

  /* if "extra" was set, parentheses were involved */
  if ((extra & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
  {
    /* the current type becomes the function return type */
    func = getFunction();
    func->ReturnValue = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(func->ReturnValue);
    func->ReturnValue->Type = datatype;
    func->ReturnValue->TypeName = type_class(datatype, getTypeId());
    if (funcSig) { func->Signature = vtkstrdup(funcSig); }
    val->Function = func;

#ifndef VTK_PARSE_LEGACY_REMOVE
    func->ReturnType = func->ReturnValue->Type;
    func->ReturnClass = func->ReturnValue->TypeName;
#endif

    /* the val type is whatever was inside the parentheses */
    clearTypeId();
    setTypeId(func->Class ? "method" : "function");
    datatype = (extra & (VTK_PARSE_UNQUALIFIED_TYPE | VTK_PARSE_RVALUE));
  }
  else if ((extra & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT)
  {
    datatype = (datatype | VTK_PARSE_BAD_INDIRECT);
  }
  else if ((extra & VTK_PARSE_INDIRECT) != 0)
  {
    extra = (extra & (VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE));

    if ((extra & VTK_PARSE_REF) != 0)
    {
      datatype = (datatype | (extra & (VTK_PARSE_REF | VTK_PARSE_RVALUE)));
      extra = (extra & ~(VTK_PARSE_REF | VTK_PARSE_RVALUE));
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
  val->TypeName = type_class(datatype, getTypeId());

  /* copy contents of all brackets to the ArgDimensions */
  val->NumberOfDimensions = getArrayNDims();
  val->Dimensions = getArray();
  clearArray();

  /* count is the product of the dimensions */
  val->Count = count_from_dimensions(val);
}

/* handle [[attributes]] */
void handle_attribute(const char *att, int pack)
{
  /* the role means "this is what the attribute applies to" */
  int role = getAttributeRole();

  size_t l = 0;
  size_t la = 0;
  const char *args = NULL;

  if (!att)
  {
    return;
  }

  /* append the prefix from the "using" statement */
  if (getAttributePrefix())
  {
    att = vtkstrcat(getAttributePrefix(), att);
  }

  /* search for arguments */
  l = vtkParse_SkipId(att);
  while (att[l] == ':' && att[l+1] == ':')
  {
    l += 2;
    l += vtkParse_SkipId(&att[l]);
  }
  if (att[l] == '(')
  {
    /* strip the parentheses and whitespace from the args */
    args = &att[l+1];
    while (*args == ' ') { args++; }
    la = strlen(args);
    while (la > 0 && args[la-1] == ' ') { la--; }
    if (la > 0 && args[la-1] == ')') { la--; }
    while (la > 0 && args[la-1] == ' ') { la--; }
  }

  /* check for namespace */
  if (strncmp(att, "vtk::", 5) == 0)
  {
    if (pack)
    {
      /* no current vtk attributes use '...' */
      print_parser_error("attribute takes no ...", att, l);
      exit(1);
    }
    else if (l == 16 && strncmp(att, "vtk::newinstance", l) == 0 &&
             !args && role == VTK_PARSE_ATTRIB_DECL)
    {
      setTypeMod(VTK_PARSE_NEWINSTANCE);
    }
    else if (l == 13 && strncmp(att, "vtk::zerocopy", l) == 0 &&
             !args && role == VTK_PARSE_ATTRIB_DECL)
    {
      setTypeMod(VTK_PARSE_ZEROCOPY);
    }
    else if (l == 12 && strncmp(att, "vtk::expects", l) == 0 &&
             args && role == VTK_PARSE_ATTRIB_FUNC)
    {
      /* add to the preconditions */
      vtkParse_AddStringToArray(&currentFunction->Preconds,
                                &currentFunction->NumberOfPreconds,
                                vtkstrndup(args, la));
    }
    else if (l == 13 && strncmp(att, "vtk::sizehint", l) == 0 &&
             args && role == VTK_PARSE_ATTRIB_FUNC)
    {
      /* first arg is parameter name, unless return value hint */
      ValueInfo *arg = currentFunction->ReturnValue;
      size_t n = vtkParse_SkipId(args);
      preproc_int_t count;
      int is_unsigned;
      unsigned long i;

      l = n;
      while (args[n] == ' ') { n++; }
      if (l > 0 && args[n] == ',')
      {
        do { n++; } while (args[n] == ' ');
        /* find the named parameter */
        for (i = 0; i < currentFunction->NumberOfParameters; i++)
        {
          arg = currentFunction->Parameters[i];
          if (arg->Name && strlen(arg->Name) == l &&
              strncmp(arg->Name, args, l) == 0)
          {
            break;
          }
        }
        if (i == currentFunction->NumberOfParameters)
        {
          print_parser_error("unrecognized parameter name", args, l);
          exit(1);
        }
        /* advance args to second attribute arg */
        args += n;
        la -= n;
      }
      /* set the size hint */
      arg->CountHint = vtkstrndup(args, la);
      /* see if hint is an integer */
      if (VTK_PARSE_OK == vtkParsePreprocess_EvaluateExpression(
          preprocessor, arg->CountHint, &count, &is_unsigned))
      {
        if (count > 0 && count < 127)
        {
          arg->CountHint = NULL;
          arg->Count = (int)count;
#ifndef VTK_PARSE_LEGACY_REMOVE
          if (arg == currentFunction->ReturnValue)
          {
            currentFunction->HaveHint = 1;
            currentFunction->HintSize = arg->Count;
          }
#endif
        }
      }
    }
    else
    {
      print_parser_error("attribute cannot be used here", att, l);
      exit(1);
    }
  }
  else if (strncmp(att, "expects:", 8) == 0 && att[8] != ':' &&
           role == VTK_PARSE_ATTRIB_FUNC)
  {
    /* add to the preconditions */
    args = att + 8;
    while (*args == ' ') { args++; }
    la = strlen(args);
    while (la > 0 && args[la-1] == ' ') { la--; }
    vtkParse_AddStringToArray(&currentFunction->Preconds,
                              &currentFunction->NumberOfPreconds,
                              vtkstrndup(args, la));
  }
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
    func->ArgClasses[i] = param->TypeName;
    func->ArgCounts[i] = param->Count;

    /* legacy wrappers need VTK_PARSE_FUNCTION without POINTER */
    if (param->Type == VTK_PARSE_FUNCTION_PTR)
    {
      /* check for signature "void (*func)(void *)" */
      if (param->Function->NumberOfParameters == 1 &&
          param->Function->Parameters[0]->Type == VTK_PARSE_VOID_PTR &&
          param->Function->Parameters[0]->NumberOfDimensions == 0 &&
          param->Function->ReturnValue->Type == VTK_PARSE_VOID)
      {
        func->ArgTypes[i] = VTK_PARSE_FUNCTION;
      }
    }
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

  /* friend */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_FRIEND)
  {
    currentFunction->ReturnValue->Type ^= VTK_PARSE_FRIEND;
    output_friend_function();
    return;
  }

  /* typedef */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_TYPEDEF)
  {
    ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(item);
    item->ItemType = VTK_TYPEDEF_INFO;
    item->Access = access_level;
    item->Type = VTK_PARSE_FUNCTION;
    item->TypeName = "function";
    item->Function = currentFunction;
    item->Name = currentFunction->Name;

    currentFunction->ReturnValue->Type ^= VTK_PARSE_TYPEDEF;
    currentFunction->Class = NULL;

    if (currentClass)
    {
      vtkParse_AddTypedefToClass(currentClass, item);
    }
    else
    {
      vtkParse_AddTypedefToNamespace(currentNamespace, item);
    }

    currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    reject_function();
    return;
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
    vtkParse_FreeValue(currentFunction->Parameters[0]);
    free(currentFunction->Parameters);
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
    currentFunction->ReturnClass = "void";
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

    /* allow only "void (*func)(void *)" as a valid function pointer */
    if ((param->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
    {
      if (i != 0 || param->Type != VTK_PARSE_FUNCTION_PTR ||
          currentFunction->NumberOfParameters != 2 ||
          currentFunction->Parameters[1]->Type != VTK_PARSE_VOID_PTR ||
          param->Function->NumberOfParameters != 1 ||
          param->Function->Parameters[0]->Type != VTK_PARSE_VOID_PTR ||
          param->Function->Parameters[0]->NumberOfDimensions != 0 ||
          param->Function->ReturnValue->Type != VTK_PARSE_VOID)
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

    currentFunction->Class = currentClass->Name;
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
                  strcmp(currentNamespace->Functions[i]->Parameters[j]->TypeName,
                         currentFunction->Parameters[j]->TypeName) == 0)
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
    vtkstrcat7("void ", currentFunction->Name, "(", typeText,
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

/* Set the global variable that stores the current executable */
void vtkParse_SetCommandName(const char *name)
{
  CommandName = name;
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
  preprocessor->Strings = data->Strings;
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

  /* assign doxygen comments to their targets */
  assignComments(data->Contents);

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

/** Define a preprocessor macro. Function macros are not supported.  */
void vtkParse_DefineMacro(const char *name, const char *definition)
{
  size_t n = vtkParse_SkipId(name);
  size_t l;
  char *cp;

  if (definition == NULL)
  {
    definition = "";
  }

  l = n + strlen(definition) + 2;
  cp = (char *)malloc(l + 1);
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
  size_t n = vtkParse_SkipId(name);
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
  static StringCache cache = {0, 0, 0, 0};
  static PreprocessInfo info = {0, 0, 0, 0, 0, 0, &cache, 0, 0, 0};
  int val;
  unsigned long i;

  /* add include files specified on the command line */
  for (i = 0; i < NumberOfIncludeDirectories; i++)
  {
    vtkParsePreprocess_IncludeDirectory(&info, IncludeDirectories[i]);
  }

  return vtkParsePreprocess_FindIncludeFile(&info, filename, 0, &val);
}
