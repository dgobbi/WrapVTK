/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2013 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user declarations.  */
#line 15 "vtkParse.y" /* glr.c:207  */


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


#line 1861 "vtkParse.tab.c" /* glr.c:207  */

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
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 1839 "vtkParse.y" /* glr.c:212  */

  const char   *str;
  unsigned int  integer;

#line 2030 "vtkParse.tab.c" /* glr.c:212  */
};
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

#line 2058 "vtkParse.tab.c" /* glr.c:230  */

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
#define YYLAST   9133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  302
/* YYNRULES -- Number of rules.  */
#define YYNRULES  749
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1233
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
    2057,  2058,  2065,  2072,  2073,  2073,  2077,  2084,  2085,  2088,
    2089,  2090,  2093,  2094,  2097,  2097,  2112,  2111,  2117,  2123,
    2122,  2127,  2133,  2134,  2135,  2138,  2140,  2142,  2145,  2146,
    2149,  2150,  2152,  2154,  2153,  2162,  2166,  2167,  2168,  2171,
    2172,  2173,  2174,  2175,  2176,  2177,  2178,  2179,  2180,  2181,
    2182,  2183,  2184,  2185,  2186,  2189,  2190,  2191,  2192,  2193,
    2196,  2197,  2198,  2199,  2202,  2203,  2206,  2208,  2211,  2216,
    2217,  2220,  2221,  2224,  2225,  2226,  2237,  2238,  2239,  2243,
    2244,  2248,  2248,  2261,  2267,  2275,  2276,  2277,  2280,  2281,
    2281,  2285,  2286,  2288,  2289,  2290,  2290,  2298,  2302,  2303,
    2306,  2308,  2310,  2311,  2314,  2315,  2323,  2324,  2327,  2328,
    2330,  2332,  2334,  2338,  2340,  2341,  2344,  2347,  2348,  2351,
    2352,  2351,  2356,  2397,  2400,  2401,  2402,  2404,  2406,  2408,
    2412,  2415,  2415,  2447,  2450,  2449,  2467,  2469,  2468,  2473,
    2475,  2473,  2477,  2479,  2477,  2481,  2484,  2481,  2495,  2496,
    2499,  2500,  2502,  2503,  2506,  2506,  2516,  2517,  2525,  2526,
    2527,  2528,  2531,  2534,  2535,  2536,  2539,  2540,  2541,  2544,
    2545,  2546,  2550,  2551,  2552,  2553,  2556,  2557,  2558,  2562,
    2567,  2561,  2579,  2583,  2594,  2593,  2602,  2606,  2609,  2619,
    2623,  2624,  2627,  2628,  2630,  2631,  2632,  2635,  2636,  2638,
    2639,  2640,  2642,  2643,  2646,  2652,  2653,  2654,  2655,  2662,
    2663,  2666,  2666,  2674,  2675,  2676,  2679,  2681,  2682,  2686,
    2685,  2697,  2698,  2697,  2717,  2717,  2720,  2721,  2724,  2725,
    2728,  2734,  2735,  2735,  2738,  2739,  2739,  2741,  2743,  2747,
    2749,  2747,  2773,  2774,  2777,  2777,  2779,  2779,  2781,  2781,
    2786,  2787,  2787,  2795,  2798,  2868,  2869,  2871,  2872,  2872,
    2875,  2878,  2879,  2883,  2895,  2894,  2912,  2913,  2917,  2919,
    2919,  2937,  2937,  2939,  2943,  2944,  2945,  2944,  2950,  2952,
    2953,  2954,  2955,  2956,  2957,  2960,  2961,  2965,  2966,  2970,
    2971,  2975,  2976,  2977,  2978,  2981,  2982,  2985,  2985,  2988,
    2989,  2992,  2992,  2996,  2997,  2997,  3004,  3005,  3008,  3009,
    3010,  3011,  3012,  3015,  3017,  3019,  3023,  3025,  3027,  3029,
    3031,  3033,  3035,  3035,  3040,  3043,  3046,  3049,  3049,  3057,
    3057,  3065,  3066,  3067,  3068,  3069,  3070,  3071,  3072,  3073,
    3074,  3075,  3076,  3077,  3078,  3079,  3080,  3081,  3082,  3083,
    3084,  3085,  3086,  3093,  3094,  3095,  3096,  3097,  3098,  3099,
    3105,  3106,  3109,  3110,  3112,  3113,  3116,  3117,  3120,  3121,
    3122,  3123,  3126,  3127,  3128,  3129,  3130,  3134,  3135,  3136,
    3139,  3140,  3143,  3144,  3152,  3155,  3155,  3157,  3157,  3161,
    3162,  3164,  3168,  3169,  3171,  3171,  3174,  3176,  3180,  3183,
    3183,  3185,  3185,  3189,  3192,  3192,  3194,  3194,  3198,  3199,
    3201,  3203,  3205,  3207,  3209,  3213,  3214,  3217,  3218,  3219,
    3220,  3221,  3222,  3223,  3224,  3225,  3226,  3227,  3228,  3229,
    3230,  3231,  3232,  3233,  3234,  3235,  3236,  3237,  3238,  3241,
    3242,  3243,  3244,  3245,  3246,  3247,  3248,  3249,  3250,  3251,
    3252,  3253,  3254,  3255,  3275,  3276,  3277,  3278,  3281,  3285,
    3289,  3289,  3293,  3294,  3309,  3310,  3335,  3335,  3339,  3339,
    3343,  3343,  3347,  3347,  3351,  3351,  3355,  3355,  3358,  3359,
    3362,  3366,  3367,  3370,  3373,  3374,  3375,  3376,  3379,  3379,
    3383,  3384,  3387,  3388,  3389,  3389,  3392,  3393,  3395,  3396,
    3399,  3400,  3408,  3408,  3418,  3419,  3419,  3418,  3428,  3428,
    3438,  3438,  3447,  3447,  3447,  3480,  3479,  3490,  3491,  3491,
    3490,  3500,  3518,  3518,  3523,  3523,  3528,  3528,  3533,  3533,
    3538,  3538,  3543,  3543,  3548,  3548,  3553,  3553,  3558,  3558,
    3575,  3575,  3589,  3626,  3664,  3701,  3702,  3709,  3710,  3711,
    3712,  3713,  3714,  3715,  3716,  3717,  3718,  3719,  3720,  3723,
    3724,  3725,  3726,  3727,  3728,  3729,  3730,  3731,  3732,  3733,
    3734,  3735,  3736,  3737,  3738,  3739,  3740,  3741,  3742,  3743,
    3744,  3745,  3746,  3747,  3748,  3749,  3750,  3751,  3752,  3753,
    3754,  3755,  3756,  3759,  3760,  3761,  3762,  3763,  3764,  3765,
    3766,  3767,  3768,  3769,  3770,  3771,  3772,  3773,  3774,  3775,
    3776,  3777,  3778,  3779,  3780,  3781,  3782,  3783,  3784,  3785,
    3786,  3787,  3788,  3791,  3792,  3793,  3794,  3795,  3796,  3797,
    3798,  3799,  3806,  3807,  3810,  3811,  3812,  3813,  3813,  3814,
    3817,  3818,  3821,  3822,  3823,  3824,  3859,  3859,  3860,  3861,
    3862,  3863,  3886,  3887,  3890,  3891,  3892,  3893,  3896,  3897,
    3898,  3901,  3902,  3904,  3905,  3907,  3908,  3911,  3912,  3915,
    3916,  3917,  3921,  3920,  3934,  3935,  3938,  3938,  3940,  3940,
    3944,  3944,  3946,  3946,  3948,  3948,  3952,  3952,  3957,  3958,
    3960,  3961,  3964,  3965,  3968,  3969,  3972,  3973,  3974,  3975,
    3976,  3977,  3978,  3979,  3979,  3979,  3979,  3979,  3980,  3981,
    3982,  3983,  3984,  3987,  3990,  3991,  3994,  3997,  3997,  3997
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

#define YYPACT_NINF -1078
#define YYTABLE_NINF -703

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
   -1078,   126,   136, -1078, -1078,  6987, -1078,     5,     9,   176,
     189,   216,   256,   281,   -21,    -2,   153, -1078, -1078, -1078,
     458, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
     100, -1078,  4492, -1078, -1078,  8644,    75,  1894, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078,   175,   240,   252,   254,   270,   290,
     291,   302,   337,   344,   345,   349,   -24,     6,    33,    46,
     117,   201,   222,   268,   282,   289,   303,   324,   326,   360,
     380,   382,   385,   388,   390,   394,   401, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078,    29, -1078, -1078, -1078, -1078, -1078,
   -1078,  8311, -1078,    41,    41,    41,    41, -1078,   409,  8644,
   -1078,   251, -1078,   320,  1612,  9020,   242,  7743,   161,   239,
   -1078,   408,  8422, -1078, -1078, -1078, -1078,   147,   123, -1078,
   -1078, -1078, -1078, -1078, -1078,   530, -1078, -1078,   419,  4960,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078,    22, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078,    92,  7743,   131,   139,   155,   184,   185,   191,   203,
     547, -1078, -1078, -1078, -1078, -1078,  7768,   242,   242,  8644,
     147, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,   425,
     131,   139,   155,   184,   185,   191,   203, -1078, -1078, -1078,
    7743,  7743, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078,   436,   442, -1078,  1612,  7743,   242,
     242,  2159, -1078, -1078, -1078,  2159,  2159, -1078,  2159,  2159,
    2159,  2159,  2159,  2159,  2159,  2159,  2159,  2159,  2159,  2159,
    2159,  2159,  8186,   449,  7992, -1078,  8186, -1078,  7583,   435,
    7743, -1078, -1078, -1078, -1078, -1078, -1078,  8311, -1078, -1078,
    8533,   147,   447, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078,  8644, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
     446,   242,   242,   242, -1078, -1078, -1078, -1078,   408, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078,  1612, -1078, -1078, -1078, -1078, -1078, -1078,  7815,
   -1078,   148,    81, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078,   228, -1078, -1078, -1078,    23, -1078, -1078, -1078,  2308,
    2464, -1078, -1078,   236, -1078,  2620,  3712,  2776, -1078, -1078,
   -1078, -1078, -1078, -1078,  7450,  8104,  7450,  7630, -1078, -1078,
   -1078, -1078, -1078, -1078,  7880, -1078,  2932,   245,   457, -1078,
     459, -1078,   468, -1078, -1078, -1078,  6832,  1612, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078,   456,  2159,  2159,  2159,   467,
     474,  2159,   478,   479,   480,   484,   492,   493,   494,   497,
     504,   505,   506,   455,   466,   509, -1078, -1078,   481, -1078,
     147, -1078, -1078, -1078, -1078, -1078, -1078,    56, -1078,  8888,
     709,   242,   242,   530,   500,  2159, -1078, -1078, -1078,   361,
   -1078,  7743,  8533,  7815,  7743,   514,  3088,   510,  8999,   825,
     447, -1078, -1078, -1078, -1078, -1078,  8186,  8104,  8186,  7630,
   -1078, -1078, -1078, -1078,   476, -1078,   508, -1078,  2145, -1078,
     508,   511, -1078,  1612,   130, -1078, -1078, -1078,   515,   513,
    7880, -1078,   517,   147, -1078, -1078, -1078, -1078, -1078, -1078,
    2151,  7695,   518,   347,   520, -1078,   825,   524,  3868, -1078,
   -1078,   519, -1078, -1078, -1078, -1078,    21, -1078,  8755,   111,
     623, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,   533,
   -1078,   147,    63,   537,    65,  7450,  7450,   137,   156, -1078,
   -1078, -1078, -1078,   539,   242, -1078, -1078, -1078,   530,   676,
     536,   538,    37, -1078, -1078,   540, -1078,   542, -1078, -1078,
   -1078, -1078, -1078, -1078,   549,   550,   551, -1078, -1078,   555,
    8644, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078,  7743, -1078,   557, -1078, -1078,    44,  1660,
   -1078, -1078,   552, -1078, -1078,   242,   242,  8888, -1078,   221,
   -1078,   560,  8644,   564, -1078, -1078,  1612,   562, -1078,    95,
   -1078, -1078,   558,   624, -1078,   242, -1078,   510,  5896,   573,
      74,   575,   361,  2151, -1078,   476, -1078, -1078, -1078, -1078,
     465, -1078,   578, -1078, -1078, -1078,   576,    14, -1078, -1078,
   -1078, -1078, -1078,  6364, -1078, -1078,   734, -1078, -1078,   530,
     476,   583, -1078,   577,   520,   359,   242, -1078,   642,   118,
   -1078, -1078, -1078, -1078, -1078,  7743,  7743,  7743, -1078,   242,
     242,  8644,   147,   123, -1078, -1078, -1078, -1078,   147,   111,
    5116,  5272,  5428, -1078,   587, -1078, -1078, -1078,   594,   597,
   -1078,   123, -1078,   595, -1078,   596,  8644, -1078,   590,   591,
   -1078, -1078, -1078, -1078,  8644, -1078, -1078, -1078,  8644,  8644,
   -1078,   600,  8644,  8644,  8644,  8644,  8644,  8644,  8644,  8644,
    8644,  8644,   603, -1078, -1078, -1078, -1078, -1078,   619, -1078,
   -1078, -1078,   532,   620, -1078,   723,   681, -1078, -1078, -1078,
   -1078,  2159, -1078, -1078, -1078,   170,  7743,   681,  3244, -1078,
   -1078,   625, -1078, -1078, -1078,   508,   629, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078,   638, -1078, -1078, -1078,    15,    92, -1078, -1078,
     576, -1078,   503, -1078,   633,   123, -1078,  6052, -1078,  6364,
   -1078, -1078, -1078, -1078,   207, -1078,   192, -1078, -1078, -1078,
   -1078,   825, -1078, -1078, -1078, -1078,   236, -1078, -1078, -1078,
   -1078,  7880, -1078, -1078, -1078, -1078, -1078,   147, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078,   510, -1078,   147, -1078, -1078,   635,  8644, -1078,
     637,  8644, -1078,   640,   641,   643,   644,   645,   646,   647,
     649,   653,   655, -1078,   654,  2013, -1078,  7743, -1078, -1078,
   -1078,  7743, -1078,  1660, -1078, -1078,  6364, -1078,   664, -1078,
   -1078, -1078, -1078,   508,   692,  8644, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078,   510,   634, -1078, -1078,
   -1078, -1078, -1078, -1078,   510, -1078,  6676, -1078,  4648, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,   255, -1078,
     663,    81,  2151,   663, -1078,   661,   669, -1078, -1078,   665,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
     794,   795, -1078,  7238,   119,  7695,    95, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,  7121,
   -1078,    41, -1078, -1078, -1078,   675,   446,  1612,  7355,   147,
   -1078,   681,  1660,   681,   620,  6364,  4804, -1078,   767, -1078,
   -1078, -1078,   147,  5584,  5896,  5740,   748, -1078,   673,   677,
    6364,   680, -1078, -1078, -1078, -1078, -1078,  6364,   510,  6208,
    2151, -1078, -1078, -1078, -1078, -1078,   682,   147, -1078,   663,
   -1078, -1078,   683, -1078,   694,   698,   699, -1078, -1078, -1078,
    1529,    41,   446,  7472,   681, -1078, -1078, -1078, -1078,  7121,
   -1078, -1078,  7472, -1078, -1078, -1078, -1078,  1612,  7815, -1078,
   -1078, -1078,    95, -1078, -1078,   696, -1078, -1078, -1078, -1078,
   -1078,   530, -1078, -1078,  6364, -1078,  6364,   701, -1078, -1078,
   -1078,  6520, -1078, -1078, -1078, -1078, -1078,  4024, -1078, -1078,
   -1078,  7927, -1078, -1078,  1529, -1078, -1078,  7815,  7472,   684,
   -1078, -1078,   708,   148, -1078,  8866,    55, -1078, -1078, -1078,
    6520, -1078,   365,   426, -1078, -1078, -1078,   105, -1078,  7927,
   -1078,  8039, -1078,   710, -1078, -1078,  8866, -1078, -1078,   123,
   -1078,   353, -1078, -1078,   530, -1078, -1078, -1078, -1078, -1078,
      95,   122,  3400,  4180,   383,    68,  8039,   107, -1078, -1078,
    3556, -1078, -1078, -1078, -1078, -1078, -1078,   426, -1078, -1078,
   -1078, -1078, -1078,    86,   383, -1078, -1078,  2151, -1078,  4336,
   -1078,  2151, -1078
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       3,     0,     4,     1,   496,     0,   508,   451,   452,   453,
     447,   448,   449,   450,   455,   456,   454,    53,    52,    54,
     115,   410,   411,   402,   405,   406,   408,   409,   407,   401,
     403,   217,     0,   359,   424,     0,     0,     0,   356,   469,
     470,   471,   472,   473,   478,   479,   480,   481,   474,   475,
     476,   477,   482,   483,   467,   468,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   354,     5,
      19,    20,    13,    11,    12,     9,    37,    17,   390,    44,
     506,    10,    16,   390,     0,   506,    14,   136,     7,     6,
       8,     0,    18,     0,     0,     0,     0,   206,     0,     0,
      15,     0,   336,   496,     0,     0,     0,     0,   496,   423,
     338,   355,     0,   496,   398,   399,   400,   178,   291,   415,
     419,   422,   496,   496,    21,   497,   117,   116,   404,     0,
     451,   452,   453,   447,   448,   449,   450,   748,   749,   659,
     654,   655,   656,   653,   657,   658,   660,   661,   455,   456,
     454,   718,   626,   625,   627,   646,   629,   631,   630,   632,
     633,   634,   635,   638,   639,   637,   636,   642,   645,   628,
     647,   648,   640,   624,   623,   644,   643,   599,   600,   641,
     651,   650,   649,   652,   601,   602,   603,   732,   604,   605,
     606,   612,   613,   607,   608,   609,   610,   611,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   730,   729,   742,
     467,   468,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   718,   736,   733,   737,   747,   164,   596,   718,
     595,   590,   735,   589,   591,   592,   593,   594,   597,   598,
     734,   741,   740,   731,   738,   739,   720,   726,   728,   727,
     718,     0,     0,   451,   452,   453,   447,   448,   449,   450,
     403,   390,   506,   390,   506,   496,     0,   496,   423,     0,
     178,   383,   385,   384,   388,   389,   387,   386,   718,    34,
     363,   361,   362,   366,   367,   365,   364,   370,   369,   368,
       0,     0,   381,   382,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,     0,   498,   337,     0,     0,   339,
     340,     0,   534,   538,   540,     0,     0,   547,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   291,     0,    51,   508,   291,   111,   118,     0,
       0,    27,    38,    24,   506,    26,    28,     0,    25,    29,
       0,   178,   256,   245,   718,   188,   244,   190,   191,   189,
     209,   506,     0,   212,    22,   427,   352,   196,   194,   251,
     343,     0,   339,   340,   341,    59,   342,    58,     0,   346,
     344,   345,   347,   426,   348,   357,   390,   506,   390,   506,
     137,   207,     0,   496,   417,   396,   301,   303,   179,     0,
     287,   272,   178,   500,   500,   500,   414,   292,   484,   485,
     494,   486,   390,   446,   445,   518,   509,     3,   720,     0,
       0,   705,   704,   169,   163,     0,     0,     0,   712,   714,
     710,   360,   496,   404,   291,    51,   291,   118,   343,   390,
     390,   152,   148,   144,     0,   147,     0,     0,     0,   155,
       0,   153,     0,   508,   157,   156,     0,     0,   363,   361,
     362,   366,   367,   365,   364,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   395,   394,     0,   287,
     178,   496,   392,   393,    62,    40,    49,   420,   496,     0,
       0,    59,     0,   507,     0,   123,   107,   119,   114,   496,
     498,     0,     0,     0,     0,     0,     0,   262,     0,     0,
     256,   254,   349,   350,   351,   693,   291,    51,   291,   118,
     197,   195,   397,   390,   492,   208,   220,   498,     0,   192,
     220,   325,   498,     0,     0,   274,   284,   273,     0,     0,
       0,   317,     0,   178,   489,   508,   488,   490,   487,   495,
     416,     0,     0,   518,   512,   515,     0,     4,     0,   723,
     725,     0,   719,   722,   724,   743,     0,   166,     0,     0,
       0,   744,    31,   721,   746,   682,   682,   682,   425,     0,
     144,   178,   420,     0,   496,   291,   291,     0,   325,   498,
     339,   340,    33,     0,     0,     3,   160,   161,   499,     0,
     599,   600,     0,   584,   583,     0,   581,     0,   582,   216,
     588,   159,   158,   532,     0,     0,     0,   542,   545,     0,
       0,   552,   556,   560,   564,   554,   558,   562,   566,   568,
     570,   572,   573,     0,    42,   286,   290,   391,    63,     0,
      61,    39,    48,    57,   496,    59,     0,     0,   109,     0,
     121,   124,     0,   113,   421,   496,     0,   257,   258,     0,
     718,   243,     0,   496,   420,     0,   252,   262,     0,     0,
     420,     0,   496,   418,   412,   493,   302,   222,   223,   213,
     224,   221,     0,   218,   298,   326,     0,   319,   198,   193,
     498,   283,   288,     0,   716,   277,     0,   299,   318,   501,
     492,     0,   154,     0,   511,   518,   526,   355,   520,   522,
      32,    30,   745,   167,   165,     0,     0,     0,   441,   440,
     439,     0,   178,   291,   434,   438,   180,   181,   178,     0,
       0,     0,     0,   139,   143,   146,   141,   113,     0,     0,
     138,   291,   149,   319,    36,     4,     0,   587,     0,     0,
     586,   585,   577,   578,     0,   535,   539,   541,     0,     0,
     548,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   575,    66,    67,    68,    45,   496,     0,   103,
     104,   105,   101,    50,    94,    99,   178,    46,    55,   496,
     112,   123,   125,   120,   106,   338,     0,   178,     0,   210,
     268,   263,   264,   269,   353,   220,     0,   708,   671,   700,
     676,   701,   702,   706,   677,   681,   680,   675,   678,   679,
     698,   670,   699,   694,   697,   358,   672,   673,   674,    43,
      41,   110,   113,   413,   228,   227,   229,   226,   214,   331,
     328,   329,     0,   249,     0,   291,   669,   666,   667,   275,
     662,   664,   665,   695,     0,   280,   304,   491,   513,   510,
     517,     0,   521,   519,   524,   523,   169,   442,   443,   444,
     436,   296,   170,   500,   433,   390,   173,   178,   687,   689,
     690,   713,   685,   686,   684,   688,   683,   715,   711,   140,
     142,   145,   262,    35,   178,   579,   580,     0,     0,   543,
       0,     0,   551,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   576,     0,     0,    65,     0,   102,   496,
     100,     0,    96,     0,    56,   122,     0,   720,     0,   129,
     259,   260,   247,   220,   265,     0,   253,   255,   682,   693,
     682,   108,   231,   230,   502,   225,   262,   334,   330,   322,
     323,   324,   321,   320,   262,   289,     0,   663,     0,   281,
     279,   305,   300,   308,   527,   528,   168,   390,   304,   297,
     182,   178,   435,   182,   176,     0,     0,   533,   536,     0,
     546,   549,   553,   557,   561,   565,   555,   559,   563,   567,
       0,     0,   574,     0,   403,     0,     0,    84,    80,    71,
      77,    64,    79,    73,    72,    76,    74,    69,    70,     0,
      78,     0,   203,   204,    75,     0,   336,     0,     0,   178,
      81,   178,     0,   178,    47,   126,   128,   127,   246,   211,
     267,   496,   178,     0,     0,     0,   239,   508,     0,     0,
       0,     0,   668,   692,   717,   691,   696,     0,   262,   525,
     437,   293,   184,   171,   183,   315,     0,   178,   174,   182,
     150,   162,     0,   720,     0,     0,     0,    92,   506,    90,
       0,     0,     0,     0,   178,    82,    85,    87,    88,     0,
      86,    89,     0,   199,    83,   498,   205,     0,     0,    97,
      95,    98,     0,   266,   270,     0,   703,   707,   241,   232,
     240,   503,   215,   504,   335,   250,   282,     0,   531,   529,
     530,     0,   294,   316,   177,   309,   537,     0,   550,   569,
     571,     0,   506,    91,     0,    93,   506,     0,     0,     0,
     498,   202,     0,   272,   709,     0,   235,   332,   508,   306,
     185,   186,   304,   151,   544,   718,   720,   420,   132,     0,
     506,     0,   200,     0,   718,   271,     0,   429,   242,   291,
     234,     0,   233,   219,   505,   309,   187,   295,   311,   310,
       0,   314,     0,     0,     0,    60,     0,   420,   133,   201,
       0,   431,   390,   428,   238,   236,   237,   502,   312,   313,
     720,   135,   130,    60,     0,   248,   390,   430,   307,     0,
     131,   432,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1078, -1078,  -404, -1078, -1078,   842,   -95, -1078, -1078, -1078,
   -1078,  -828,  -103,    10,   -33, -1078, -1078, -1078, -1078,   204,
    -424,   -97,  -766, -1078, -1078, -1078, -1078,   -94, -1078,  -105,
    -199, -1078, -1078,    42,   -90,   -89,   -32, -1078, -1078,     7,
    -464, -1078, -1078,    36, -1078, -1078, -1078,  -241,  -811,   -85,
    -128,  -388,   253,    91, -1078, -1078, -1078, -1078,   257,   -81,
     284, -1078,    12, -1078,    -4, -1078, -1078, -1078,   -29, -1078,
   -1078, -1078, -1078, -1078, -1078,   495,   110,  -899, -1078, -1078,
   -1078,   866, -1078, -1078, -1078,   -72,  -151,    24,   -86, -1078,
   -1078,  -280,  -502, -1078, -1078,  -322,  -308,  -543,  -544, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
     -91, -1078, -1078, -1078, -1078,   -73, -1078, -1078, -1078, -1078,
     334, -1078,    50,  -630, -1078, -1078, -1078,  -183, -1078, -1078,
    -284, -1078, -1078, -1078, -1078, -1078, -1078,    13,   370,  -313,
     373, -1078,    16,  -112,  -701, -1078, -1078,  -254, -1078,  -688,
   -1078,  -959, -1078, -1078,  -311, -1078, -1078,  -437, -1078, -1078,
    -466, -1078, -1078,    17, -1078, -1078, -1078,  1126,   801,  1146,
      35, -1078, -1078,    18,   314,    -5, -1078,    93, -1078,  1104,
      -1,   -92, -1078,     2,   421, -1078, -1078,  -498, -1078,  1062,
     206, -1078, -1078,    67, -1077, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078,   287,   231,   183,  -409,   461,
   -1078,   462, -1078,   159, -1078,   879, -1078,  -512, -1078,  -372,
   -1078,  -323, -1078, -1078, -1078,   -99, -1078,  -346, -1078, -1078,
   -1078,   315,   162, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
     -46, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078, -1078,
   -1078, -1078, -1078, -1078, -1078,   -11,    30,   144,  -896,  -857,
   -1078,  -377,   -84,  -552,  -178,   -80, -1078,   -66, -1078, -1045,
   -1078,  -649, -1078,  -582, -1078, -1078, -1078,  -261, -1078, -1078,
   -1078,   336, -1078,  -201,  -408, -1078,  -402,    31,    82, -1078,
    -655, -1078
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    89,   361,    91,    92,    93,   468,
      94,    95,    96,   363,    98,   353,    99,   953,   669,   381,
     517,   518,   672,   668,   807,   808,  1031,  1107,  1033,   813,
     814,   951,   947,   815,   101,   102,   103,   525,   104,   364,
     528,   682,   679,   680,   956,   365,   958,  1099,  1178,   106,
     107,   609,   617,   610,   461,   462,   922,  1145,   463,   108,
     324,   109,   366,   776,   367,   443,   596,   896,   597,   598,
    1000,   599,  1003,   600,  1089,   901,   758,  1083,  1084,  1141,
    1170,   368,   113,   114,   115,  1110,  1041,  1042,   117,   537,
     963,   118,   555,   556,   976,   557,   119,   559,   709,   710,
     711,   866,   867,   974,  1166,  1192,  1193,  1129,  1130,  1165,
     375,   376,  1058,   560,   984,  1043,   540,   835,   389,   697,
     535,   687,   688,   692,   693,   831,  1061,   832,   965,  1163,
     566,   567,   723,   568,   569,   884,  1077,   369,   420,   508,
     564,   875,   509,   510,   902,  1172,   998,   421,   886,   422,
     554,   992,  1078,  1195,  1173,  1086,   572,   561,   983,   714,
     993,   716,   870,   871,   977,  1069,  1070,   816,   122,   285,
     286,   539,   125,   126,   127,   287,   545,   288,   271,   130,
     131,   352,   511,   382,   133,   134,   135,   136,   705,  1049,
     138,   432,   553,   139,   140,   272,  1188,  1189,  1212,  1226,
     752,   753,   905,   997,   754,   141,   142,   143,   427,   428,
     429,   430,   730,   706,   431,   684,     6,   472,   473,   574,
     575,  1066,  1067,  1167,  1168,   354,   355,   145,   436,   582,
     583,   584,   585,   586,   893,   738,   995,   739,  1079,  1139,
     144,   784,   486,   928,  1092,   487,   488,   788,  1009,   789,
     491,   931,  1094,   792,   796,   793,   797,   794,   798,   795,
     799,   800,   801,   944,   639,   847,   848,   849,   879,   880,
     986,   881,   851,   760,   915,   916,  1076,   698,   988,   852,
     853,   882,   969,   444,   856,   970,   968,   857,   607,   605,
     606,   858,   883,   439,   446,   592,   593,   594,   267,   268,
     269,   270
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
     128,   111,   281,   283,   410,   475,   358,   132,   362,   523,
     451,   356,   105,   573,   744,    97,   713,   110,   120,   476,
     719,   263,   987,   377,   378,   379,   426,   618,   394,   116,
     588,   612,   329,   587,   827,   299,   465,   289,   387,  1081,
     124,   440,   284,   524,   603,   712,   411,   474,   445,   854,
     717,   388,   576,   577,   761,   762,   704,   906,  1190,   670,
    1055,   718,   264,   266,   903,   683,   670,   836,   613,   447,
     903,   670,   327,   803,   804,   805,   581,   670,   291,   292,
     293,   294,   295,   296,   297,   441,   441,   372,  1187,   670,
    -383,   416,   417,   972,  -385,   715,  1171,   466,   129,   406,
     408,   780,   448,   449,  1088,   157,   158,   773,   670,  1211,
     670,   558,   148,   370,   694,  -370,   855,  1029,   331,   392,
     395,  -370,   329,   700,   398,  1196,     3,   628,   448,   449,
     330,   453,   157,   158,  -369,   116,    -2,   756,   263,   409,
    -369,  -363,   391,   719,   149,  -361,   124,  -363,   332,  -383,
     767,  -361,   715,  -385,   872,   642,   873,   416,   417,   423,
     973,   757,   743,   149,  -514,   418,   357,   412,   571,   476,
    -514,   442,   442,   536,  1134,   333,   265,   373,   374,   264,
     438,  1136,   806,   455,   718,   457,   603,   781,   334,   454,
    1144,   456,   671,   -60,  1191,  1097,   -60,   641,   987,   414,
     -60,   423,  -118,   -60,   671,   527,  1004,   863,   874,   100,
     860,   -60,   298,  1197,   -60,   262,  -383,   393,   396,   903,
     330,   775,   860,  1006,  -385,   558,   424,   768,   769,   729,
     425,   418,   704,   699,   450,   701,   903,   246,   862,   282,
    -384,   671,   -60,   860,   -60,   -60,    38,   -60,   291,   292,
     293,   294,   295,   296,   297,   558,   459,   460,   894,   335,
     450,  -384,  -172,   261,   246,   531,   721,   329,   424,  -388,
    -389,   722,   425,   770,  -388,  -383,  -387,   987,   771,   987,
    -175,   392,   538,  -385,   411,  -276,  -172,   565,  -386,  -368,
    -278,   966,  1005,   265,    33,  -368,   284,  -339,   772,  -384,
    1085,  -389,  -327,  -339,   391,   329,   329,   242,   547,   957,
     549,  -381,  -362,   903,   546,   100,   548,  -381,  -362,   728,
    -384,   850,   392,   329,    38,  -366,   550,    38,  -388,  -389,
      38,  -366,   262,  -388,   991,  -387,   407,   406,  -327,   551,
     580,  -387,   611,   336,   611,   391,  1068,  -386,   989,   521,
     990,   328,  -367,   329,  1071,   329,   414,   465,  -367,   820,
    -389,  1124,   821,   477,   337,   330,  -386,   615,   616,   532,
    1208,  1105,  1214,   424,   903,  -340,  -382,   425,   558,   393,
     261,  -340,  -382,   914,   914,   914,  1143,   384,  -371,   519,
    -372,   116,  -365,  1222,  -371,  1208,  -372,   991,  -365,   903,
    -387,  -327,   124,   330,   330,   412,  -373,   392,  1215,  1216,
     338,  1204,  -373,  1230,   329,   854,  1063,  -364,  1065,  1059,
     393,   330,   674,  -364,   339,  -386,  -374,  -375,   263,   263,
     391,   340,  -374,  -375,   263,   263,   263,   414,  -376,  1204,
     399,  1224,   402,   404,  -376,   341,   411,   522,  1137,   414,
     521,   330,   329,   330,   563,   263,  -337,  1224,  1198,   620,
    1199,   703,   624,   398,   999,   640,   342,  1162,   343,   264,
     264,  1200,   392,  -377,  1201,   264,   264,   264,   895,  -377,
    -378,  -379,  1126,   146,   147,  -380,  -378,  -379,  -514,   828,
     519,  -380,   854,   282,  -514,   391,   264,  -118,  -118,   406,
    -516,   527,   344,   611,   611,   393,  -516,   991,    21,    22,
     864,  -327,   330,   865,   675,   624,   979,   980,   981,   982,
    1175,   854,   345,  1176,   346,   263,   329,   347,   329,   329,
     348,  1001,   349,   521,   695,   513,   350,   391,   398,   513,
     707,   708,   521,   351,   329,  1218,  1219,   640,   522,  1056,
     330,   380,   405,   413,   435,   677,   437,   621,   392,   453,
     522,   809,   810,   811,   467,   620,   264,   412,   686,   398,
     393,   282,   471,   519,   407,  1161,   329,   263,  -154,   247,
     819,   391,   519,   265,   265,   737,   514,   534,   541,   265,
     265,   265,  1087,   749,   625,   626,   759,   643,   661,   414,
     751,   402,   404,  1159,   736,   747,   975,   627,   647,   662,
     265,   914,   676,   522,  1161,   648,   327,   664,   264,   650,
     651,   652,   262,   262,   330,   653,   330,   330,   262,   262,
     262,   522,   419,   654,   655,   656,   678,   513,   657,   513,
     522,   904,   330,   402,   404,   658,   659,   660,  1183,   262,
     663,   690,   724,  -261,   603,   726,   393,  -327,   329,   611,
     727,   735,   740,   621,   329,   733,   742,   359,   520,   763,
     261,   261,   675,   766,   330,   774,   261,   261,   261,   777,
     265,   392,   778,   782,   779,  1147,   914,   850,   914,   783,
     785,   750,   817,   786,   787,   391,   790,   261,   722,   822,
     824,   829,   914,   826,   391,   542,   543,   544,   830,   859,
     413,   861,   291,   292,   293,   294,   295,   296,   297,   262,
     868,  1131,   869,   888,   889,  1115,   892,  1177,   771,   513,
     919,   513,   265,   920,   923,   872,   282,   925,   926,   558,
     329,   329,   329,   932,   943,   603,   159,   160,   161,   162,
     163,   164,   165,   166,   167,  1205,   330,  1207,    33,   946,
     950,   949,   330,   513,   850,   418,   964,   261,  1203,   520,
     676,   262,   967,   512,   971,   873,  1060,   512,  1007,   393,
    1010,  -333,  1223,  1012,  1013,   464,  1014,  1015,  1016,  1017,
    1018,   413,  1019,   850,  1020,  1160,  1021,  1022,   513,   513,
    1057,   603,  1082,   413,  1090,  1091,  1093,  1095,  1096,   558,
     558,  1114,  1229,  1002,  1122,  1128,  1132,   263,   900,   261,
    1182,   329,  1194,  1135,  1133,  1142,  1146,   603,   291,   292,
     293,   294,   295,   296,   297,   402,   404,  1148,   330,   330,
     330,  1149,  1150,  1164,  1169,  1184,  1209,    90,  1054,   558,
    1028,  1032,   520,  1120,   948,  1034,  1035,   955,   264,  1153,
    1036,   520,   921,   764,  1037,   731,   533,   996,   765,   907,
     885,   112,  1101,  1040,   696,   512,   960,   512,  1123,  1185,
     666,   846,   665,     5,  1217,   755,   513,   978,   823,   887,
     737,   985,   578,   579,  1228,   328,   620,   890,   734,  1050,
     398,  1140,  1072,  1064,   725,  1080,   846,   959,  1075,   994,
       0,     0,     0,     0,     0,     0,     0,   570,     0,   330,
     410,     0,     0,     0,     0,   390,     0,     0,   400,   845,
       0,     0,     0,     0,     0,     0,   362,     0,   402,     0,
     128,  1039,   329,   846,   846,   846,   329,  1048,   329,     0,
    1113,     0,   105,   413,   845,  1030,     0,  1038,  1044,     0,
       0,     0,   411,     0,     0,     0,     0,   512,     0,   512,
       0,     0,   265,     0,  1202,  1116,     0,     0,     0,     0,
    1047,     0,     0,  1210,     0,     0,     0,     0,     0,   543,
     544,   845,   845,   845,   621,     0,     0,   362,     0,  1151,
       0,   512,   385,     0,     0,   570,     0,   403,     0,   834,
    1155,   262,   415,     0,     0,   406,   408,   411,   128,  1100,
     329,   433,   434,     0,     0,  1103,   411,     0,     0,     0,
    1116,     0,     0,     0,   128,  1109,   512,   512,   129,  1116,
     330,  1112,   392,   128,   330,   263,   330,   329,     0,  1106,
     891,  1108,  1111,  1179,     0,   409,     0,  1181,     0,   261,
     327,     0,   846,   402,   404,   391,     0,   137,   570,     0,
       0,     0,   411,     0,  1047,     0,     0,  1213,     0,   406,
       0,  1206,     0,  1117,     0,  1116,   264,   458,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   290,   128,     0,
       0,     0,  1154,     0,   128,  1109,   464,   128,     0,     0,
     845,  1158,   392,   620,     0,   414,   129,   398,   330,  1106,
    1227,  1108,  1111,     0,   512,   406,     0,     0,   458,   400,
       0,   121,   129,     0,  1231,   391,   263,     0,     0,   846,
     393,   129,     0,     0,  1047,   330,   521,  1117,     0,   100,
       0,   123,   620,   128,     0,     0,   398,     0,     0,     0,
       0,     0,     0,   325,   385,     0,   403,  1186,     0,   846,
     414,   846,   413,   371,   521,     0,   521,   264,     0,   414,
       0,   383,     0,   326,     0,   513,   519,   845,     0,     0,
       0,   263,   263,  1117,     0,     0,   129,     0,     0,   263,
     265,   521,   129,     0,     0,   129,     0,     0,     0,     0,
     393,   621,     0,   390,   519,     0,   519,   845,   263,   845,
     562,     0,     0,     0,     0,   414,     0,  1098,     0,   397,
       0,     0,   264,   264,     0,     0,     0,     0,   846,   262,
     264,   519,     0,   100,   522,     0,   846,   846,   846,     0,
     621,   129,   407,   846,     0,     0,     0,     0,     0,   264,
     846,     0,   846,   513,     0,   619,     0,     0,     0,     0,
       0,     0,   522,   401,   522,     0,     0,     0,   458,     0,
       0,     0,     0,     0,     0,     0,   845,   261,     0,     0,
       0,   265,   552,     0,   845,   845,   845,     0,     0,   522,
       0,   845,     0,     0,  1152,     0,     0,  1156,   845,     0,
     845,   952,     0,   282,     0,     0,   407,   846,     0,   846,
       0,     0,   961,     0,   846,     0,     0,     0,     0,     0,
     262,   608,     0,     0,   562,     0,     0,     0,     0,   328,
       0,     0,     0,     0,     0,     0,   265,   265,     0,     0,
       0,     0,     0,   846,   265,     0,     0,     0,  1180,     0,
       0,     0,   282,     0,   720,   845,     0,   845,     0,     0,
       0,   619,   845,   265,     0,     0,     0,     0,   261,     0,
       0,     0,     0,     0,     0,   262,   262,     0,     0,     0,
     667,     0,     0,   262,     0,     0,     0,   673,   452,     0,
       0,   845,     0,     0,     0,     0,     0,     0,     0,     0,
     513,     0,   262,     0,   513,     0,     0,     0,   326,     0,
       0,     0,     0,   512,     0,     0,     0,     0,     0,   371,
       0,     0,     0,   261,   261,   485,   469,   470,     0,   489,
     490,   261,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   326,   326,   397,     0,
     261,     0,     0,     0,     0,   520,     0,     0,     0,   413,
       0,     0,     0,     0,   401,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   529,     0,   530,   720,     0,     0,
       0,     0,     0,   520,     0,   520,     0,     0,     0,     0,
       0,   512,     0,     0,   326,     0,   326,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     520,     0,     0,     0,   413,     0,     0,     0,     0,     0,
       0,     0,     0,   413,     0,     0,     0,     0,   383,     0,
       0,     0,     0,     0,  1118,     0,  1119,     0,  1121,     0,
       0,     0,     0,   818,    17,    18,    19,     0,     0,   397,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,   280,   833,     0,     0,   413,     0,     0,     0,   413,
       0,     0,     0,   614,     0,     0,     0,     0,     0,     0,
     644,   645,   646,     0,     0,   649,     0,     0,     0,  1157,
       0,     0,     0,   326,     0,     0,     0,   413,     0,     0,
       0,     0,     0,   623,     0,   300,   301,   302,   303,   304,
     305,   306,     0,   397,     0,     0,     0,     0,     0,   681,
       0,     0,     0,   307,   308,   309,     0,     0,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,   512,     0,
       0,   397,   512,     0,     0,    31,   386,   685,     0,     0,
     689,    33,     0,   300,   301,   302,   303,   304,   305,   306,
       0,     0,     0,     0,     0,   702,     0,   326,     0,     0,
     326,   307,   308,   309,     0,     0,   945,     0,     0,   809,
     810,   811,     0,     0,     0,   326,     0,   812,   954,     0,
       0,     0,   619,     0,     0,     0,     0,   732,     0,    33,
       0,     0,   791,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   748,    38,  1046,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,     0,     0,     0,     0,
       0,   397,     0,     0,     0,     0,     0,     0,     0,   802,
     825,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,   326,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,  1102,     0,     0,     0,  1052,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   924,     0,
    1102,     0,     0,     0,     0,     0,   927,     0,   458,  1102,
     929,   930,     0,     0,   933,   934,   935,   936,   937,   938,
     939,   940,   941,   942,     0,     0,     0,     0,     0,     0,
       0,   897,   898,   899,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   326,   326,   326,     0,     0,     0,   300,   301,   302,
     303,   304,   305,   306,  1102,     0,     0,     0,     0,     0,
    1102,     0,     0,  1102,     0,   307,   308,   309,   458,   562,
       0,     0,     0,     0,     0,   681,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     833,     0,     0,    33,   310,     0,   311,     0,     0,     0,
       0,     0,   689,     0,     0,     0,     0,     0,   720,  1102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1008,     0,     0,  1011,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,     0,     0,     0,     0,  1062,     0,     0,
       0,     0,     0,     0,    14,    15,    16,     0,    17,    18,
      19,    20,    88,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,  1023,  1024,    31,    32,     0,     0,
       0,     0,    33,    34,    35,     0,  1025,     0,     0,     0,
       0,  1045,     0,  1051,     0,     0,     0,  1053,     0,     0,
       0,     0,     0,     0,     0,  1104,     0,     0,     0,     0,
       0,   123,     0,   326,     0,     0,     0,   326,    38,   326,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,  1026,  1027,
       0,   325,     0,     0,     0,     0,     0,   629,     0,     0,
       0,    88,   478,   479,   480,   481,   482,   483,   484,     0,
       0,   326,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,    21,    22,    23,    24,    25,    26,    27,
      28,    29,   506,   280,     0,     0,     0,     0,   326,   630,
     631,     0,   507,     0,     0,     0,   204,   205,   206,   632,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,   397,     0,     0,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   633,   397,   634,   635,     0,   636,
     248,   637,     0,   250,   251,   638,   253,   254,   255,   256,
     257,   258,   259,     0,     0,     0,     0,     0,     0,     0,
     397,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   589,   242,     0,   243,   244,   245,
     246,     0,   590,   248,   249,   591,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     589,   242,   595,   243,   244,   245,   246,     0,   590,   248,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   589,   242,     0,   243,
     244,   245,   246,     0,   590,   248,   249,   601,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   589,   242,     0,   243,   244,   245,   246,   604,
     590,   248,   249,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   589,   242,
     622,   243,   244,   245,   246,     0,   590,   248,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   589,   242,   691,   243,   244,   245,
     246,     0,   590,   248,   249,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     589,   242,   962,   243,   244,   245,   246,     0,   590,   248,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   589,   242,  1220,   243,
     244,   245,   246,     0,   590,   248,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   589,   242,  1225,   243,   244,   245,   246,     0,
     590,   248,   249,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   602,   242,
       0,   243,   244,   245,   246,     0,   590,   248,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   741,   242,     0,   243,   244,   245,
     246,     0,   590,   248,   249,     0,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,  1174,   590,   248,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1221,   242,     0,   243,
     244,   245,   246,     0,   590,   248,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1232,   242,     0,   243,   244,   245,   246,     0,
     590,   248,   249,     0,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,     0,   247,   248,   249,     0,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   150,   151,   152,   153,   154,   155,   156,   448,   449,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   837,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   908,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,     0,   838,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1073,   724,  1074,   909,   840,   910,
     450,     0,   912,   248,   843,     0,   250,   251,   913,   253,
     254,   255,   256,   257,   258,   259,   844,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   242,     0,   243,   244,   245,   246,     0,   590,   248,
     249,     0,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,   243,
     244,   245,   246,     0,     0,   248,   249,     0,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   150,
     151,   152,   153,   154,   155,   156,   448,   449,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     837,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     908,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
       0,   838,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   724,     0,   909,   840,   910,   450,   911,
     912,   248,   843,     0,   250,   251,   913,   253,   254,   255,
     256,   257,   258,   259,   844,   150,   151,   152,   153,   154,
     155,   156,   448,   449,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   837,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   908,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,     0,   838,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   724,
       0,   909,   840,   910,   450,   917,   912,   248,   843,     0,
     250,   251,   913,   253,   254,   255,   256,   257,   258,   259,
     844,   150,   151,   152,   153,   154,   155,   156,   448,   449,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   837,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   908,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,     0,   838,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,   909,   840,   910,
     450,   918,   912,   248,   843,     0,   250,   251,   913,   253,
     254,   255,   256,   257,   258,   259,   844,   150,   151,   152,
     153,   154,   155,   156,   448,   449,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   837,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   908,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,     0,   838,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,   909,   840,   910,   450,     0,   912,   248,
     843,  1125,   250,   251,   913,   253,   254,   255,   256,   257,
     258,   259,   844,   150,   151,   152,   153,   154,   155,   156,
     448,   449,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   837,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   908,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,     0,   838,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   724,     0,   909,
     840,   910,   450,     0,   912,   248,   843,  1127,   250,   251,
     913,   253,   254,   255,   256,   257,   258,   259,   844,   150,
     151,   152,   153,   154,   155,   156,   448,   449,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     837,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     441,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
       0,   838,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   724,     0,   839,   840,   841,   450,     0,
     842,   248,   843,     0,   250,   251,   442,   253,   254,   255,
     256,   257,   258,   259,   844,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,     0,  -666,  -666,  -666,
    -666,  -666,  -666,     0,  -666,  -666,  -666,  -666,     0,     0,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,     0,  -666,     0,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,  -666,  -666,  -666,  -666,  -666,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  -666,
       0,  -702,  -666,  -666,  -666,     0,  -666,  -666,  -666,     0,
    -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,  -666,
    -666,   150,   151,   152,   153,   154,   155,   156,   448,   449,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   837,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   908,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,     0,   838,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   724,     0,  1138,   840,     0,
     450,     0,   912,   248,   843,     0,   250,   251,   913,   253,
     254,   255,   256,   257,   258,   259,   844,   150,   151,   152,
     153,   154,   155,   156,   448,   449,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   837,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   876,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,     0,   838,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   724,     0,     0,   840,     0,   450,     0,   877,   248,
     843,     0,   250,   251,   878,   253,   254,   255,   256,   257,
     258,   259,   844,   150,   151,   152,   153,   154,   155,   156,
     448,   449,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   837,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,     0,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,     0,   838,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   724,     0,     0,
     840,     0,   450,     0,   842,   248,   843,     0,   250,   251,
       0,   253,   254,   255,   256,   257,   258,   259,   844,   150,
     151,   152,   153,   154,   155,   156,   448,   449,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     837,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
       0,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   724,     0,     0,   840,     0,   450,     0,
       0,   248,   843,     0,   250,   251,     0,   253,   254,   255,
     256,   257,   258,   259,   844,   273,   274,   275,   276,   277,
     278,   279,     0,     0,   629,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,     0,    17,    18,    19,
      20,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   280,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,     0,   630,   631,     0,     0,
       0,     0,     0,   204,   205,   206,   632,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   633,     0,   634,   635,     0,   636,   248,   637,     0,
     250,   251,   638,   253,   254,   255,   256,   257,   258,   259,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      16,     0,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,    30,
      31,    32,     0,     0,     0,     0,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,     0,    87,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    14,    15,    16,     0,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,   280,    31,   359,     0,     0,     0,     0,
      33,    34,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,     0,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,     0,    17,    18,    19,    20,     0,     0,    88,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
     280,    31,   359,     0,     0,     0,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    14,    15,    16,     0,
      17,    18,    19,    20,     0,     0,    88,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   280,    31,     0,
       0,     0,     0,     0,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   506,   280,    14,    15,    16,     0,    17,    18,    19,
      20,   507,     0,    88,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   280,    31,     0,     0,     0,     0,
       0,    33,    34,     0,     0,     0,     0,     0,   423,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   300,   301,   302,   303,
     304,   305,   306,     0,     0,   424,     0,     0,     0,   425,
       0,     0,     0,     0,   307,   308,   309,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,   300,   301,   302,   303,   304,   305,   306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,     0,   300,   301,
     302,   303,   304,   305,   306,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,   307,   308,   309,   526,
       0,     0,     0,   527,     0,     0,     0,     0,     0,     0,
       0,    88,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,    33,   310,   300,   301,   302,   303,
     304,   305,   306,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   307,   308,   309,     0,     0,     0,
     527,   300,   301,   302,   303,   304,   305,   306,    88,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,   307,
     308,   309,    33,     0,     0,     0,     0,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
       0,     0,   386,     0,     0,     0,     0,    33,   300,   301,
     302,   303,   304,   305,   306,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,   307,   308,   309,     0,
       0,     0,     0,    88,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,     0,    31,     0,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,     0,   300,   301,   302,   303,   304,   305,   306,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    33,
     300,   301,   302,   303,   304,   305,   306,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,   308,
     309,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,   307,   308,   309,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,    33,   300,   301,   302,   303,   304,   305,   306,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,   515,  1175,     0,     0,  1176,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,   300,   301,   302,
     303,   304,   305,   306,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,   307,   308,   309,   515,     0,
       0,     0,   516,     0,     0,     0,     0,     0,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1175,     0,     0,  1176,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   506,   280,     0,
       0,     0,     0,     0,     0,     0,     0,   507,     0,     0,
       0,     0,     0,     0,   516,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   423,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   273,   274,   275,   276,   277,   278,
     279,     0,  -285,     0,     0,     0,     0,     0,     0,     0,
       0,   424,   168,   169,   170,   425,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,   280,    31,   359,     0,     0,     0,     0,
      33,    34,     0,     0,   360,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   273,   274,   275,   276,   277,
     278,   279,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,     0,    17,    18,    19,
      20,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   280,    31,     0,     0,     0,     0,
       0,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   273,   274,   275,   276,
     277,   278,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   168,   169,   170,     0,    17,    18,
      19,    20,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,   280,    31,     0,     0,     0,
       0,     0,    33,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   273,   274,   275,
     276,   277,   278,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   280,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
     745,     0,   746,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   280,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   273,
     274,   275,   276,   277,   278,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   170,
       0,   300,   301,   302,   303,   304,   305,   306,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,   280,   307,
     308,   309,     0,     0,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   386,     0,     0,     0,     0,    33,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   300,   301,   302,   303,   304,   305,   306,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,   300,   301,   302,   303,   304,   305,   306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323
};

static const short int yycheck[] =
{
       5,     5,    35,    35,   132,   327,   105,     5,   111,   355,
     271,   103,     5,   422,   596,     5,   560,     5,     5,   327,
     563,    32,   879,   114,   115,   116,   138,   464,   125,     5,
     438,   455,    37,   437,   689,    36,   290,    35,   124,   998,
       5,   242,    35,   356,   446,   557,   132,   327,   249,   698,
     562,   124,   424,   425,   606,   607,   554,   758,     3,     3,
     956,   563,    32,    32,   752,   529,     3,   697,   456,   270,
     758,     3,    37,    29,    30,    31,    53,     3,     3,     4,
       5,     6,     7,     8,     9,    64,    64,    46,  1165,     3,
      85,    10,    11,    78,    85,   561,  1141,   298,     5,   132,
     132,    64,    10,    11,  1003,    10,    11,   619,     3,  1186,
       3,   419,    12,   111,   538,   136,   698,   945,   142,   124,
     125,   142,   127,   547,   125,  1170,     0,   473,    10,    11,
      37,    12,    10,    11,   136,   111,     0,    26,   149,   132,
     142,   136,   124,   686,    44,   136,   111,   142,   142,   144,
     614,   142,   618,   144,   140,   477,   142,    10,    11,    78,
     145,    50,   141,    44,   141,    84,   137,   132,   422,   477,
     147,   150,   150,   374,  1070,   142,    32,   136,   137,   149,
     149,  1077,   138,   282,   686,   284,   588,   150,   142,   281,
    1089,   283,   136,   137,   139,  1023,   140,   477,  1055,   132,
     137,    78,   137,   140,   136,   140,   907,   705,   720,     5,
     136,   137,   137,  1172,   140,    32,    85,   124,   125,   907,
     127,   625,   136,   924,    85,   533,   145,   615,   616,   575,
     149,    84,   730,   546,   142,   548,   924,   142,   702,    35,
      85,   136,   137,   136,   137,   140,    85,   140,     3,     4,
       5,     6,     7,     8,     9,   563,   289,   289,   140,   142,
     142,    85,    26,    32,   142,   364,   136,   272,   145,    85,
      85,   141,   149,   136,    85,   144,    85,  1134,   141,  1136,
      44,   286,   381,   144,   370,   137,    50,   139,    85,   136,
     142,   835,   922,   149,    49,   142,   289,   136,   142,   144,
    1001,    85,   146,   142,   286,   310,   311,   137,   407,   139,
     409,   136,   136,  1001,   406,   111,   408,   142,   142,   573,
     144,   698,   327,   328,    85,   136,   412,    85,   144,   144,
      85,   142,   149,   144,   142,   144,   132,   370,   146,   412,
     432,    85,   454,   142,   456,   327,   976,   144,   141,   354,
     143,    37,   136,   358,   984,   360,   289,   611,   142,   138,
     144,  1062,   141,   328,   142,   272,    85,   459,   460,   367,
    1181,  1026,    19,   145,  1062,   136,   136,   149,   686,   286,
     149,   142,   142,   760,   761,   762,  1087,   136,   136,   354,
     136,   367,   136,  1204,   142,  1206,   142,   142,   142,  1087,
     144,   146,   367,   310,   311,   370,   136,   412,    55,    56,
     142,  1177,   142,  1224,   419,  1064,   968,   136,   970,   963,
     327,   328,   519,   142,   142,   144,   136,   136,   439,   440,
     412,   142,   142,   142,   445,   446,   447,   370,   136,  1205,
     126,  1207,   128,   129,   142,   142,   532,   354,  1078,   382,
     455,   358,   457,   360,   419,   466,   136,  1223,    32,   464,
      34,   553,   467,   464,   901,   476,   142,  1122,   142,   439,
     440,    45,   477,   136,    48,   445,   446,   447,   739,   142,
     136,   136,  1064,    25,    26,   136,   142,   142,   141,   690,
     455,   142,  1141,   289,   147,   477,   466,   136,   137,   532,
     141,   140,   142,   615,   616,   412,   147,   142,    32,    33,
      45,   146,   419,    48,   519,   520,    13,    14,    15,    16,
     137,  1170,   142,   140,   142,   536,   531,   142,   533,   534,
     142,   903,   142,   538,   539,   352,   142,   519,   539,   356,
      32,    33,   547,   142,   549,  1200,  1201,   558,   455,   957,
     457,   142,   144,   132,    24,   520,   137,   464,   563,    12,
     467,    29,    30,    31,   139,   570,   536,   532,   533,   570,
     477,   367,   136,   538,   370,  1118,   581,   588,   136,   144,
     677,   563,   547,   439,   440,   586,   137,   140,   142,   445,
     446,   447,  1001,   598,   137,   136,   600,   141,   143,   532,
     598,   287,   288,  1115,   586,   598,   867,   139,   141,   143,
     466,   988,   519,   520,  1157,   141,   581,   136,   588,   141,
     141,   141,   439,   440,   531,   141,   533,   534,   445,   446,
     447,   538,   137,   141,   141,   141,   136,   454,   141,   456,
     547,   753,   549,   329,   330,   141,   141,   141,  1160,   466,
     141,   137,   137,   143,  1056,   142,   563,   146,   663,   771,
     143,   141,   138,   570,   669,   147,   147,    44,   354,   136,
     439,   440,   677,   136,   581,   136,   445,   446,   447,     3,
     536,   686,   146,   143,   146,  1093,  1063,  1064,  1065,   147,
     141,   598,   140,   143,   143,   677,   141,   466,   141,   139,
     136,   143,  1079,   141,   686,   391,   392,   393,    84,   136,
     289,   136,     3,     4,     5,     6,     7,     8,     9,   536,
     142,  1067,   146,   140,   147,  1047,    84,  1151,   141,   546,
     136,   548,   588,   136,   138,   140,   532,   147,   147,  1047,
     745,   746,   747,   143,   141,  1147,    12,    13,    14,    15,
      16,    17,    18,    19,    20,  1179,   663,  1181,    49,   140,
      37,   141,   669,   580,  1141,    84,   141,   536,  1176,   455,
     677,   588,   143,   352,   136,   142,    84,   356,   143,   686,
     143,   147,  1206,   143,   143,   290,   143,   143,   143,   143,
     143,   370,   143,  1170,   141,  1117,   141,   143,   615,   616,
     136,  1203,   139,   382,   143,   136,   141,    13,    13,  1117,
    1118,   136,  1220,   905,    47,    67,   143,   828,   751,   588,
     136,   826,  1168,   143,   147,   143,   143,  1229,     3,     4,
       5,     6,     7,     8,     9,   521,   522,   143,   745,   746,
     747,   143,   143,   147,   143,   137,   136,     5,   953,  1157,
     945,   945,   538,  1052,   812,   945,   945,   821,   828,  1100,
     945,   547,   771,   610,   945,   581,   371,   896,   611,   759,
     726,     5,  1023,   945,   540,   454,   826,   456,  1061,  1163,
     510,   698,   509,     4,  1195,   598,   703,   870,   682,   730,
     891,   875,   431,   431,  1217,   581,   901,   735,   583,   945,
     901,  1079,   986,   969,   568,   997,   723,   825,   988,   891,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,    -1,   826,
    1048,    -1,    -1,    -1,    -1,   124,    -1,    -1,   127,   698,
      -1,    -1,    -1,    -1,    -1,    -1,  1039,    -1,   624,    -1,
     945,   945,   947,   760,   761,   762,   951,   945,   953,    -1,
    1041,    -1,   945,   532,   723,   945,    -1,   945,   945,    -1,
      -1,    -1,  1048,    -1,    -1,    -1,    -1,   546,    -1,   548,
      -1,    -1,   828,    -1,  1175,  1048,    -1,    -1,    -1,    -1,
     945,    -1,    -1,  1184,    -1,    -1,    -1,    -1,    -1,   675,
     676,   760,   761,   762,   901,    -1,    -1,  1100,    -1,  1098,
      -1,   580,   123,    -1,    -1,   510,    -1,   128,    -1,   695,
    1101,   828,   133,    -1,    -1,  1048,  1048,  1103,  1023,  1023,
    1025,   142,   143,    -1,    -1,  1023,  1112,    -1,    -1,    -1,
    1103,    -1,    -1,    -1,  1039,  1039,   615,   616,   945,  1112,
     947,  1039,  1047,  1048,   951,  1056,   953,  1052,    -1,  1039,
     736,  1039,  1039,  1152,    -1,  1048,    -1,  1156,    -1,   828,
    1025,    -1,   879,   749,   750,  1047,    -1,     5,   573,    -1,
      -1,    -1,  1158,    -1,  1039,    -1,    -1,  1189,    -1,  1112,
      -1,  1180,    -1,  1048,    -1,  1158,  1056,   286,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,  1103,    -1,
      -1,    -1,  1100,    -1,  1109,  1109,   611,  1112,    -1,    -1,
     879,  1109,  1117,  1118,    -1,  1048,  1023,  1118,  1025,  1109,
    1212,  1109,  1109,    -1,   703,  1158,    -1,    -1,   327,   328,
      -1,     5,  1039,    -1,  1226,  1117,  1147,    -1,    -1,   956,
    1047,  1048,    -1,    -1,  1109,  1052,  1151,  1112,    -1,   945,
      -1,     5,  1157,  1158,    -1,    -1,  1157,    -1,    -1,    -1,
      -1,    -1,    -1,    37,   285,    -1,   287,  1165,    -1,   986,
    1103,   988,   751,   111,  1179,    -1,  1181,  1147,    -1,  1112,
      -1,   119,    -1,    37,    -1,  1002,  1151,   956,    -1,    -1,
      -1,  1202,  1203,  1158,    -1,    -1,  1103,    -1,    -1,  1210,
    1056,  1206,  1109,    -1,    -1,  1112,    -1,    -1,    -1,    -1,
    1117,  1118,    -1,   412,  1179,    -1,  1181,   986,  1229,   988,
     419,    -1,    -1,    -1,    -1,  1158,    -1,  1023,    -1,   125,
      -1,    -1,  1202,  1203,    -1,    -1,    -1,    -1,  1055,  1056,
    1210,  1206,    -1,  1039,  1151,    -1,  1063,  1064,  1065,    -1,
    1157,  1158,  1048,  1070,    -1,    -1,    -1,    -1,    -1,  1229,
    1077,    -1,  1079,  1080,    -1,   464,    -1,    -1,    -1,    -1,
      -1,    -1,  1179,   127,  1181,    -1,    -1,    -1,   477,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1055,  1056,    -1,    -1,
      -1,  1147,   413,    -1,  1063,  1064,  1065,    -1,    -1,  1206,
      -1,  1070,    -1,    -1,  1100,    -1,    -1,  1103,  1077,    -1,
    1079,   816,    -1,  1109,    -1,    -1,  1112,  1134,    -1,  1136,
      -1,    -1,   827,    -1,  1141,    -1,    -1,    -1,    -1,    -1,
    1147,   452,    -1,    -1,   533,    -1,    -1,    -1,    -1,  1025,
      -1,    -1,    -1,    -1,    -1,    -1,  1202,  1203,    -1,    -1,
      -1,    -1,    -1,  1170,  1210,    -1,    -1,    -1,  1154,    -1,
      -1,    -1,  1158,    -1,   563,  1134,    -1,  1136,    -1,    -1,
      -1,   570,  1141,  1229,    -1,    -1,    -1,    -1,  1147,    -1,
      -1,    -1,    -1,    -1,    -1,  1202,  1203,    -1,    -1,    -1,
     511,    -1,    -1,  1210,    -1,    -1,    -1,   518,   272,    -1,
      -1,  1170,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1227,    -1,  1229,    -1,  1231,    -1,    -1,    -1,   272,    -1,
      -1,    -1,    -1,  1002,    -1,    -1,    -1,    -1,    -1,   367,
      -1,    -1,    -1,  1202,  1203,   331,   310,   311,    -1,   335,
     336,  1210,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   310,   311,   354,    -1,
    1229,    -1,    -1,    -1,    -1,  1151,    -1,    -1,    -1,  1048,
      -1,    -1,    -1,    -1,   328,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   358,    -1,   360,   686,    -1,    -1,
      -1,    -1,    -1,  1179,    -1,  1181,    -1,    -1,    -1,    -1,
      -1,  1080,    -1,    -1,   358,    -1,   360,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1206,    -1,    -1,    -1,  1103,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1112,    -1,    -1,    -1,    -1,   476,    -1,
      -1,    -1,    -1,    -1,  1049,    -1,  1051,    -1,  1053,    -1,
      -1,    -1,    -1,   674,    25,    26,    27,    -1,    -1,   455,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,   693,    -1,    -1,  1154,    -1,    -1,    -1,  1158,
      -1,    -1,    -1,   457,    -1,    -1,    -1,    -1,    -1,    -1,
     486,   487,   488,    -1,    -1,   491,    -1,    -1,    -1,  1104,
      -1,    -1,    -1,   457,    -1,    -1,    -1,  1186,    -1,    -1,
      -1,    -1,    -1,   467,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,   519,    -1,    -1,    -1,    -1,    -1,   525,
      -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,   538,    -1,    -1,    -1,    -1,    -1,  1227,    -1,
      -1,   547,  1231,    -1,    -1,    43,    44,   531,    -1,    -1,
     534,    49,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,   549,    -1,   531,    -1,    -1,
     534,    21,    22,    23,    -1,    -1,   807,    -1,    -1,    29,
      30,    31,    -1,    -1,    -1,   549,    -1,    37,   819,    -1,
      -1,    -1,   901,    -1,    -1,    -1,    -1,   581,    -1,    49,
      -1,    -1,   650,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,   581,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   598,    85,   945,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   677,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   663,
     686,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   148,   663,
      -1,    -1,    -1,    -1,    -1,   669,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,   949,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   776,    -1,
    1039,    -1,    -1,    -1,    -1,    -1,   784,    -1,  1047,  1048,
     788,   789,    -1,    -1,   792,   793,   794,   795,   796,   797,
     798,   799,   800,   801,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   745,   746,   747,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   745,   746,   747,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,  1103,    -1,    -1,    -1,    -1,    -1,
    1109,    -1,    -1,  1112,    -1,    21,    22,    23,  1117,  1118,
      -1,    -1,    -1,    -1,    -1,   821,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1061,    -1,    -1,    49,    50,    -1,    52,    -1,    -1,    -1,
      -1,    -1,   826,    -1,    -1,    -1,    -1,    -1,  1157,  1158,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   826,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     928,    -1,    -1,   931,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,   965,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,   148,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,   945,    -1,   947,    -1,    -1,    -1,   951,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1023,    -1,    -1,    -1,    -1,
      -1,   945,    -1,   947,    -1,    -1,    -1,   951,    85,   953,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
      -1,  1025,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,   148,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,  1025,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,  1052,    54,
      55,    -1,    51,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,  1151,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1179,   139,  1181,   141,   142,    -1,   144,
     145,   146,    -1,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1206,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,    -1,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,    -1,   139,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
     138,   139,   140,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,
     140,   141,   142,    -1,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
      -1,   139,   140,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,    -1,   139,   140,   141,
     142,    -1,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,    -1,   139,
     140,   141,   142,    -1,   144,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,    -1,   139,   140,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,   140,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,   139,   140,   141,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,
     140,   141,   142,    -1,    -1,   145,   146,    -1,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,   141,
     142,   143,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,   139,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,    -1,
     144,   145,   146,    -1,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,   140,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,    -1,
     142,    -1,   144,   145,   146,    -1,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    -1,   140,    -1,   142,    -1,   144,   145,
     146,    -1,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,
     140,    -1,   142,    -1,   144,   145,   146,    -1,   148,   149,
      -1,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,    -1,   140,    -1,   142,    -1,
      -1,   145,   146,    -1,   148,   149,    -1,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,
      -1,    -1,    -1,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   139,    -1,   141,   142,    -1,   144,   145,   146,    -1,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,   136,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    -1,    -1,   148,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,   148,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    21,    22,    23,    -1,    25,    26,    27,
      28,    51,    -1,   148,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,   145,    -1,    -1,    -1,   149,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    21,    22,    23,   136,
      -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   148,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    49,    50,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,
     140,     3,     4,     5,     6,     7,     8,     9,   148,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    49,    -1,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      -1,    -1,    -1,   148,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,   148,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   148,   102,   103,   104,
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
      -1,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   145,    21,    22,    23,   149,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    -1,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,     3,     4,     5,     6,     7,     8,     9,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    21,
      22,    23,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113
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
     353,   364,   365,   366,   399,   386,    25,    26,    12,    44,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    35,    36,    37,    38,    39,    40,    42,    43,    44,
      45,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   137,   139,   140,   141,   142,   144,   145,   146,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   365,   366,   424,   425,   426,   456,   457,   458,   459,
     460,   337,   354,     3,     4,     5,     6,     7,     8,     9,
      42,   173,   178,   195,   198,   328,   329,   334,   336,   342,
     348,     3,     4,     5,     6,     7,     8,     9,   137,   339,
       3,     4,     5,     6,     7,     8,     9,    21,    22,    23,
      50,    52,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   219,   326,   328,   329,   333,   334,
     336,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   340,   174,   384,   385,   340,   137,   384,    44,
      53,   164,   171,   172,   198,   204,   221,   223,   240,   296,
     342,   348,    46,   136,   137,   269,   270,   269,   269,   269,
     142,   178,   342,   348,   136,   374,    44,   247,   274,   277,
     327,   332,   334,   336,   180,   334,   336,   338,   339,   333,
     327,   328,   333,   374,   333,   144,   173,   178,   195,   198,
     209,   247,   329,   343,   352,   374,    10,    11,    84,   234,
     297,   306,   308,    78,   145,   149,   302,   367,   368,   369,
     370,   373,   350,   374,   374,    24,   387,   137,   456,   452,
     452,    64,   150,   224,   442,   452,   453,   452,    10,    11,
     142,   446,   326,    12,   340,   384,   340,   384,   327,   173,
     195,   213,   214,   217,   234,   306,   452,   139,   168,   326,
     326,   136,   376,   377,   250,   254,   255,   329,     3,     4,
       5,     6,     7,     8,     9,   338,   401,   404,   405,   338,
     338,   409,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,    41,    51,   298,   301,
     302,   341,   343,   366,   137,   136,   140,   179,   180,   329,
     333,   334,   336,   386,   298,   196,   136,   140,   199,   326,
     326,   384,   342,   234,   140,   279,   452,   248,   384,   330,
     275,   142,   333,   333,   333,   335,   340,   384,   340,   384,
     247,   274,   374,   351,   309,   251,   252,   254,   255,   256,
     272,   316,   327,   329,   299,   139,   289,   290,   292,   293,
     234,   306,   315,   367,   378,   379,   378,   378,   368,   370,
     340,    53,   388,   389,   390,   391,   392,   161,   453,   136,
     144,   147,   454,   455,   456,   138,   225,   227,   228,   230,
     232,   147,   136,   455,   143,   448,   449,   447,   374,   210,
     212,   302,   179,   210,   326,   340,   340,   211,   316,   327,
     334,   336,   138,   328,   334,   137,   136,   139,   386,    12,
      54,    55,    64,   139,   141,   142,   144,   146,   150,   423,
     424,   250,   254,   141,   338,   338,   338,   141,   141,   338,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   143,   143,   141,   136,   299,   297,   374,   182,   177,
       3,   136,   181,   374,   180,   334,   336,   329,   136,   201,
     202,   338,   200,   199,   374,   326,   329,   280,   281,   326,
     137,   138,   282,   283,   179,   334,   279,   278,   436,   298,
     179,   298,   326,   340,   346,   347,   372,    32,    33,   257,
     258,   259,   376,   257,   318,   319,   320,   376,   251,   256,
     327,   136,   141,   291,   137,   450,   142,   143,   306,   386,
     371,   219,   326,   147,   390,   141,   332,   339,   394,   396,
     138,   136,   147,   141,   442,    25,    27,   198,   328,   334,
     336,   342,   359,   360,   363,   364,    26,    50,   235,   223,
     432,   432,   432,   136,   211,   217,   136,   199,   210,   210,
     136,   141,   142,   376,   136,   161,   222,     3,   146,   146,
      64,   150,   143,   147,   400,   141,   143,   143,   406,   408,
     141,   348,   412,   414,   416,   418,   413,   415,   417,   419,
     420,   421,   326,    29,    30,    31,   138,   183,   184,    29,
      30,    31,    37,   188,   189,   192,   326,   140,   374,   180,
     138,   141,   139,   349,   136,   338,   141,   459,   452,   143,
      84,   284,   286,   374,   333,   276,   282,    24,    85,   139,
     140,   141,   144,   146,   158,   365,   366,   424,   425,   426,
     430,   431,   438,   439,   440,   442,   443,   446,   450,   136,
     136,   136,   199,   346,    45,    48,   260,   261,   142,   146,
     321,   322,   140,   142,   376,   300,    64,   144,   150,   427,
     428,   430,   440,   451,   294,   426,   307,   372,   140,   147,
     391,   333,    84,   393,   140,   446,   226,   326,   326,   326,
     352,   234,   303,   308,   302,   361,   303,   235,    64,   139,
     141,   143,   144,   150,   430,   433,   434,   143,   143,   136,
     136,   212,   215,   138,   348,   147,   147,   348,   402,   348,
     348,   410,   143,   348,   348,   348,   348,   348,   348,   348,
     348,   348,   348,   141,   422,   374,   140,   191,   192,   141,
      37,   190,   234,   176,   374,   202,   203,   139,   205,   457,
     281,   234,   138,   249,   141,   287,   257,   143,   445,   441,
     444,   136,    78,   145,   262,   446,   253,   323,   322,    13,
      14,    15,    16,   317,   273,   301,   429,   428,   437,   141,
     143,   142,   310,   319,   332,   395,   227,   362,   305,   316,
     229,   378,   340,   231,   303,   282,   303,   143,   348,   407,
     143,   348,   143,   143,   143,   143,   143,   143,   143,   143,
     141,   141,   143,    41,    42,    53,   135,   136,   165,   170,
     172,   185,   186,   187,   193,   194,   208,   218,   221,   223,
     244,   245,   246,   274,   296,   326,   327,   329,   342,   348,
     399,   326,   374,   326,   188,   427,   453,   136,   271,   257,
      84,   285,   348,   432,   436,   432,   380,   381,   282,   324,
     325,   282,   431,   136,   138,   434,   435,   295,   311,   397,
     340,   310,   139,   236,   237,   303,   314,   367,   236,   233,
     143,   136,   403,   141,   411,    13,    13,   170,   178,   206,
     223,   245,   327,   342,   348,   459,   172,   186,   221,   223,
     244,   296,   342,   269,   136,   254,   274,   329,   234,   234,
     189,   234,    47,   286,   303,   147,   442,   147,    67,   266,
     267,   386,   143,   147,   427,   143,   427,   282,   139,   398,
     433,   238,   143,   303,   236,   216,   143,   453,   143,   143,
     143,   384,   178,   206,   342,   269,   178,   234,   342,   376,
     254,   256,   459,   288,   147,   268,   263,   382,   383,   143,
     239,   438,   304,   313,   143,   137,   140,   179,   207,   384,
     178,   384,   136,   376,   137,   289,   342,   353,   355,   356,
       3,   139,   264,   265,   386,   312,   438,   310,    32,    34,
      45,    48,   452,   453,   181,   179,   384,   179,   207,   136,
     452,   353,   357,   302,    19,    55,    56,   313,   459,   459,
     138,   136,   207,   179,   181,   138,   358,   340,   380,   453,
     207,   340,   136
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   159,   160,   161,   162,   161,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   164,   164,   164,   164,   164,   164,
     165,   165,   166,   167,   168,   167,   169,   170,   170,   171,
     171,   171,   172,   172,   174,   173,   176,   175,   175,   177,
     175,   175,   178,   178,   178,   179,   179,   179,   180,   180,
     181,   181,   182,   183,   182,   182,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   186,   186,   186,   186,   186,
     187,   187,   187,   187,   188,   188,   189,   189,   189,   190,
     190,   191,   191,   192,   192,   192,   193,   193,   193,   194,
     194,   196,   195,   197,   197,   198,   198,   198,   199,   200,
     199,   201,   201,   202,   202,   203,   202,   204,   205,   205,
     206,   206,   206,   206,   207,   207,   208,   208,   209,   209,
     209,   209,   209,   210,   211,   211,   212,   213,   213,   215,
     216,   214,   217,   218,   219,   219,   219,   219,   219,   219,
     220,   222,   221,   223,   224,   223,   225,   226,   225,   228,
     229,   227,   230,   231,   227,   232,   233,   227,   234,   234,
     235,   235,   236,   236,   238,   237,   239,   239,   240,   240,
     240,   240,   241,   242,   242,   242,   243,   243,   243,   244,
     244,   244,   245,   245,   245,   245,   246,   246,   246,   248,
     249,   247,   250,   251,   253,   252,   254,   255,   256,   257,
     258,   258,   259,   259,   260,   260,   260,   261,   261,   262,
     262,   262,   263,   263,   264,   265,   265,   265,   265,   266,
     266,   268,   267,   269,   269,   269,   270,   271,   271,   273,
     272,   275,   276,   274,   278,   277,   279,   279,   280,   280,
     281,   282,   283,   282,   284,   285,   284,   284,   284,   287,
     288,   286,   289,   289,   291,   290,   292,   290,   293,   290,
     294,   295,   294,   296,   297,   298,   298,   299,   300,   299,
     301,   302,   302,   303,   304,   303,   305,   305,   306,   307,
     306,   309,   308,   308,   310,   311,   312,   310,   310,   313,
     313,   313,   313,   313,   313,   314,   314,   315,   315,   316,
     316,   317,   317,   317,   317,   318,   318,   320,   319,   321,
     321,   323,   322,   324,   325,   324,   326,   326,   327,   327,
     327,   327,   327,   328,   328,   328,   329,   329,   329,   329,
     329,   329,   330,   329,   331,   332,   333,   335,   334,   337,
     336,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   338,   339,   339,   339,   339,   339,   339,   339,
     340,   340,   341,   341,   341,   341,   342,   342,   343,   343,
     343,   343,   344,   344,   344,   344,   344,   345,   345,   345,
     346,   346,   347,   347,   348,   350,   349,   351,   349,   352,
     352,   352,   353,   353,   354,   353,   353,   353,   355,   357,
     356,   358,   356,   359,   361,   360,   362,   360,   363,   363,
     363,   363,   363,   363,   363,   364,   364,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   365,   365,   365,   365,   365,   365,   365,   366,
     366,   366,   366,   366,   366,   366,   366,   366,   366,   366,
     366,   366,   366,   366,   367,   367,   367,   367,   368,   369,
     371,   370,   372,   372,   373,   373,   375,   374,   377,   376,
     379,   378,   381,   380,   383,   382,   385,   384,   386,   386,
     387,   388,   388,   389,   390,   390,   390,   390,   392,   391,
     393,   393,   394,   394,   395,   394,   396,   396,   397,   397,
     398,   398,   400,   399,   401,   402,   403,   399,   404,   399,
     405,   399,   406,   407,   399,   408,   399,   409,   410,   411,
     399,   399,   412,   399,   413,   399,   414,   399,   415,   399,
     416,   399,   417,   399,   418,   399,   419,   399,   420,   399,
     421,   399,   399,   399,   399,   422,   422,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   423,   423,   423,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   424,   424,   424,   424,   424,   424,   424,
     424,   424,   424,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   427,   427,   428,   428,   428,   429,   428,   428,
     430,   430,   431,   431,   431,   431,   431,   431,   431,   431,
     431,   431,   432,   432,   433,   433,   433,   433,   434,   434,
     434,   435,   435,   436,   436,   437,   437,   438,   438,   439,
     439,   439,   441,   440,   442,   442,   444,   443,   445,   443,
     447,   446,   448,   446,   449,   446,   451,   450,   452,   452,
     453,   453,   454,   454,   455,   455,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   457,   458,   458,   459,   460,   460,   460
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     2,     2,     2,
       5,     4,     5,     4,     0,     6,     5,     1,     2,     4,
       3,     5,     4,     5,     0,     5,     0,     7,     4,     0,
       5,     2,     1,     1,     1,     3,     4,     2,     1,     1,
       0,     1,     0,     0,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     1,     4,     2,     4,     4,     0,
       1,     0,     1,     1,     1,     1,     5,     3,     6,     4,
       5,     0,     5,     4,     3,     1,     2,     2,     0,     0,
       3,     1,     3,     0,     1,     0,     4,     6,     2,     1,
       5,     6,     3,     4,     5,     3,     1,     2,     5,     5,
       6,     5,     6,     2,     0,     3,     2,     1,     1,     0,
       0,     8,     1,     3,     1,     2,     2,     2,     3,     3,
       4,     0,     8,     3,     0,     5,     1,     0,     4,     0,
       0,     5,     0,     0,     5,     0,     0,     6,     0,     1,
       1,     1,     0,     1,     0,     3,     1,     2,     2,     2,
       2,     2,     3,     4,     2,     3,     2,     3,     4,     2,
       4,     5,     3,     1,     1,     2,     1,     2,     3,     0,
       0,     7,     2,     2,     0,     6,     2,     1,     2,     7,
       0,     1,     1,     1,     0,     2,     1,     1,     1,     0,
       1,     1,     0,     2,     1,     0,     2,     2,     2,     0,
       1,     0,     3,     3,     1,     1,     6,     0,     6,     0,
       6,     0,     0,     5,     0,     5,     0,     2,     1,     3,
       3,     0,     0,     2,     1,     0,     4,     3,     1,     0,
       0,     6,     0,     1,     0,     3,     0,     2,     0,     4,
       1,     0,     4,     4,     2,     0,     2,     0,     0,     4,
       2,     0,     1,     3,     0,     6,     0,     1,     3,     0,
       5,     0,     3,     1,     0,     0,     0,     7,     1,     0,
       2,     2,     3,     3,     2,     1,     2,     1,     2,     2,
       4,     1,     1,     1,     1,     0,     1,     0,     2,     1,
       2,     0,     5,     0,     0,     2,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     0,     5,     1,     1,     1,     0,     5,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     1,     1,     1,     1,     2,     3,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     0,     3,     0,     4,     1,
       3,     4,     1,     1,     0,     4,     2,     2,     2,     0,
       3,     0,     4,     2,     0,     3,     0,     4,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       0,     4,     0,     1,     1,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       4,     2,     1,     3,     0,     1,     2,     3,     0,     3,
       0,     1,     1,     2,     0,     4,     1,     3,     0,     2,
       1,     1,     0,     7,     0,     0,     0,     9,     0,     5,
       0,     5,     0,     0,    10,     0,     7,     0,     0,     0,
       9,     6,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     9,
       0,     9,     4,     4,     7,     0,     1,     2,     2,     3,
       3,     1,     1,     1,     1,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     1,     1,     1,
       1,     1,     0,     4,     1,     1,     0,     4,     0,     5,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     4,     3,     1,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,     0,
     265,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   263,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   255,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   257,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,    65,    67,    69,     0,    71,    73,    75,
      77,    79,    81,     0,    83,    85,    87,    89,     0,     0,
      91,    93,    95,    97,    99,   101,   103,   105,   107,   109,
     111,   113,   115,   117,   119,   121,   123,   125,   127,   129,
     131,   133,   135,   137,   139,   141,   143,   145,   147,   149,
     151,   153,   155,   157,   159,   161,     0,   163,     0,   165,
     167,   169,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   189,   191,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   217,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,     0,   221,   223,   225,     0,   227,   229,   231,     0,
     233,   235,   237,   239,   241,   243,   245,   247,   249,   251,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   420,     0,   420,     0,   420,     0,   319,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   702,     0,   702,     0,   702,
       0,   702,     0,   702,     0,   304,     0,   304,     0,   304,
       0,   420,     0,   314,     0,   420,     0
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
#line 2019 "vtkParse.y" /* glr.c:783  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6512 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 34:
#line 2073 "vtkParse.y" /* glr.c:783  */
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6518 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 35:
#line 2074 "vtkParse.y" /* glr.c:783  */
    { popNamespace(); }
#line 6524 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 44:
#line 2097 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6530 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 45:
#line 2098 "vtkParse.y" /* glr.c:783  */
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
#line 6546 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 46:
#line 2112 "vtkParse.y" /* glr.c:783  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer);
    }
#line 6555 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 48:
#line 2118 "vtkParse.y" /* glr.c:783  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer);
    }
#line 6564 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 49:
#line 2123 "vtkParse.y" /* glr.c:783  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer));
    }
#line 6572 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 51:
#line 2128 "vtkParse.y" /* glr.c:783  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer));
    }
#line 6580 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 52:
#line 2133 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6586 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 53:
#line 2134 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6592 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 54:
#line 2135 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 2; }
#line 6598 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 55:
#line 2139 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6604 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 56:
#line 2141 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6610 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 60:
#line 2149 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6616 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 61:
#line 2150 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0); }
#line 6622 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 63:
#line 2154 "vtkParse.y" /* glr.c:783  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6634 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 66:
#line 2166 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PUBLIC; }
#line 6640 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 67:
#line 2167 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PRIVATE; }
#line 6646 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 68:
#line 2168 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PROTECTED; }
#line 6652 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 93:
#line 2199 "vtkParse.y" /* glr.c:783  */
    { output_friend_function(); }
#line 6658 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 96:
#line 2207 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 6664 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 97:
#line 2209 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6671 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 98:
#line 2212 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6678 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 99:
#line 2216 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6684 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 100:
#line 2217 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 6690 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 101:
#line 2220 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = access_level; }
#line 6696 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 103:
#line 2224 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
#line 6702 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 104:
#line 2225 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
#line 6708 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 105:
#line 2226 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
#line 6714 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 111:
#line 2248 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6720 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 112:
#line 2249 "vtkParse.y" /* glr.c:783  */
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
#line 6735 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 113:
#line 2262 "vtkParse.y" /* glr.c:783  */
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
    }
#line 6745 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 114:
#line 2268 "vtkParse.y" /* glr.c:783  */
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
#line 6755 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 115:
#line 2275 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6761 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 116:
#line 2276 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6767 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 117:
#line 2277 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6773 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 118:
#line 2280 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6779 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 119:
#line 2281 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6785 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 120:
#line 2282 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = getType(); popType(); }
#line 6791 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 124:
#line 2289 "vtkParse.y" /* glr.c:783  */
    { closeComment(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), NULL); }
#line 6797 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 125:
#line 2290 "vtkParse.y" /* glr.c:783  */
    { postSig("="); markSig(); closeComment(); }
#line 6803 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 126:
#line 2291 "vtkParse.y" /* glr.c:783  */
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), copySig()); }
#line 6809 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 149:
#line 2351 "vtkParse.y" /* glr.c:783  */
    { pushFunction(); postSig("("); }
#line 6815 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 150:
#line 2352 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 6821 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 151:
#line 2353 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.integer)); popFunction(); }
#line 6827 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 152:
#line 2357 "vtkParse.y" /* glr.c:783  */
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
#line 6865 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 153:
#line 2397 "vtkParse.y" /* glr.c:783  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 0); }
#line 6871 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 155:
#line 2401 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str); }
#line 6877 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 156:
#line 2403 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6883 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 157:
#line 2405 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6889 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 158:
#line 2407 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6895 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 159:
#line 2409 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6901 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 160:
#line 2412 "vtkParse.y" /* glr.c:783  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 1); }
#line 6907 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 161:
#line 2415 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6913 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 162:
#line 2417 "vtkParse.y" /* glr.c:783  */
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
#line 6942 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 163:
#line 2448 "vtkParse.y" /* glr.c:783  */
    { postSig("template<> "); clearTypeId(); }
#line 6948 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 164:
#line 2450 "vtkParse.y" /* glr.c:783  */
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
#line 6960 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 165:
#line 2458 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
#line 6972 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 167:
#line 2469 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
#line 6978 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 169:
#line 2473 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6984 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 170:
#line 2475 "vtkParse.y" /* glr.c:783  */
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6990 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 172:
#line 2477 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6996 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 173:
#line 2479 "vtkParse.y" /* glr.c:783  */
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 7002 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 175:
#line 2481 "vtkParse.y" /* glr.c:783  */
    { pushTemplate(); markSig(); }
#line 7008 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 176:
#line 2484 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
#line 7021 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 178:
#line 2495 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7027 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 179:
#line 2496 "vtkParse.y" /* glr.c:783  */
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 7033 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 180:
#line 2499 "vtkParse.y" /* glr.c:783  */
    { postSig("class "); }
#line 7039 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 181:
#line 2500 "vtkParse.y" /* glr.c:783  */
    { postSig("typename "); }
#line 7045 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 184:
#line 2506 "vtkParse.y" /* glr.c:783  */
    { postSig("="); markSig(); }
#line 7051 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 185:
#line 2508 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
#line 7062 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 188:
#line 2525 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 7068 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 189:
#line 2526 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 7074 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 190:
#line 2527 "vtkParse.y" /* glr.c:783  */
    { reject_function(); }
#line 7080 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 191:
#line 2528 "vtkParse.y" /* glr.c:783  */
    { reject_function(); }
#line 7086 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 199:
#line 2544 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 7092 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 209:
#line 2562 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7102 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 210:
#line 2567 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7108 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 211:
#line 2569 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
#line 7121 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 212:
#line 2580 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = copySig(); }
#line 7127 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 213:
#line 2584 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
#line 7139 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 214:
#line 2594 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7149 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 215:
#line 2599 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7155 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 216:
#line 2603 "vtkParse.y" /* glr.c:783  */
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7161 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 217:
#line 2606 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig("operator "); }
#line 7167 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 218:
#line 2610 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 7179 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 222:
#line 2627 "vtkParse.y" /* glr.c:783  */
    { postSig(" const"); currentFunction->IsConst = 1; }
#line 7185 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 223:
#line 2628 "vtkParse.y" /* glr.c:783  */
    { postSig(" volatile"); }
#line 7191 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 225:
#line 2631 "vtkParse.y" /* glr.c:783  */
    { chopSig(); }
#line 7197 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 227:
#line 2635 "vtkParse.y" /* glr.c:783  */
    { postSig(" noexcept"); }
#line 7203 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 228:
#line 2636 "vtkParse.y" /* glr.c:783  */
    { postSig(" throw"); }
#line 7209 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 230:
#line 2639 "vtkParse.y" /* glr.c:783  */
    { postSig("&"); }
#line 7215 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 231:
#line 2640 "vtkParse.y" /* glr.c:783  */
    { postSig("&&"); }
#line 7221 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 234:
#line 2647 "vtkParse.y" /* glr.c:783  */
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
#line 7230 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 236:
#line 2653 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsDeleted = 1; }
#line 7236 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 238:
#line 2656 "vtkParse.y" /* glr.c:783  */
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
#line 7246 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 241:
#line 2666 "vtkParse.y" /* glr.c:783  */
    { postSig(" -> "); clearType(); clearTypeId(); }
#line 7252 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 242:
#line 2668 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7261 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 249:
#line 2686 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7270 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 250:
#line 2690 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7276 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 251:
#line 2697 "vtkParse.y" /* glr.c:783  */
    { closeSig(); }
#line 7282 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 252:
#line 2698 "vtkParse.y" /* glr.c:783  */
    { openSig(); }
#line 7288 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 253:
#line 2700 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      if (getType() & VTK_PARSE_VIRTUAL)
      {
        currentFunction->IsVirtual = 1;
      }
      if (getType() & VTK_PARSE_EXPLICIT)
      {
        currentFunction->IsExplicit = 1;
      }
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 7308 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 254:
#line 2717 "vtkParse.y" /* glr.c:783  */
    { pushType(); postSig("("); }
#line 7314 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 255:
#line 2718 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); popType(); }
#line 7320 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 262:
#line 2735 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); }
#line 7326 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 264:
#line 2738 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); }
#line 7332 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 265:
#line 2739 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); postSig(", "); }
#line 7338 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 267:
#line 2742 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
#line 7344 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 268:
#line 2744 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsVariadic = 1; postSig("..."); }
#line 7350 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 269:
#line 2747 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 7356 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 270:
#line 2749 "vtkParse.y" /* glr.c:783  */
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
#line 7375 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 271:
#line 2764 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
      {
        currentFunction->Parameters[i]->Value = getVarValue();
      }
    }
#line 7387 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 272:
#line 2773 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); }
#line 7393 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 274:
#line 2777 "vtkParse.y" /* glr.c:783  */
    { postSig("="); clearVarValue(); markSig(); }
#line 7399 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 275:
#line 2778 "vtkParse.y" /* glr.c:783  */
    { chopSig(); setVarValue(copySig()); }
#line 7405 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 276:
#line 2779 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); markSig(); }
#line 7411 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 277:
#line 2780 "vtkParse.y" /* glr.c:783  */
    { chopSig(); setVarValue(copySig()); }
#line 7417 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 278:
#line 2781 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); markSig(); postSig("("); }
#line 7423 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 279:
#line 2783 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(")"); setVarValue(copySig()); }
#line 7429 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 280:
#line 2786 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7435 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 281:
#line 2787 "vtkParse.y" /* glr.c:783  */
    { postSig(", "); }
#line 7441 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 284:
#line 2799 "vtkParse.y" /* glr.c:783  */
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
#line 7514 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 288:
#line 2872 "vtkParse.y" /* glr.c:783  */
    { postSig(", "); }
#line 7520 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 291:
#line 2878 "vtkParse.y" /* glr.c:783  */
    { setTypePtr(0); }
#line 7526 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 292:
#line 2879 "vtkParse.y" /* glr.c:783  */
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7532 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 293:
#line 2884 "vtkParse.y" /* glr.c:783  */
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
#line 7547 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 294:
#line 2895 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7553 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 295:
#line 2896 "vtkParse.y" /* glr.c:783  */
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
#line 7572 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 296:
#line 2912 "vtkParse.y" /* glr.c:783  */
    { clearVarName(); chopSig(); }
#line 7578 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 298:
#line 2918 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer); }
#line 7584 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 299:
#line 2919 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7590 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 300:
#line 2921 "vtkParse.y" /* glr.c:783  */
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
#line 7609 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 301:
#line 2937 "vtkParse.y" /* glr.c:783  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 7615 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 302:
#line 2938 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 7621 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 303:
#line 2939 "vtkParse.y" /* glr.c:783  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 7628 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 304:
#line 2943 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7634 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 305:
#line 2944 "vtkParse.y" /* glr.c:783  */
    { pushFunction(); postSig("("); }
#line 7640 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 306:
#line 2945 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7646 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 307:
#line 2946 "vtkParse.y" /* glr.c:783  */
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
#line 7655 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 308:
#line 2950 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
#line 7661 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 311:
#line 2954 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsConst = 1; }
#line 7667 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 316:
#line 2962 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7673 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 318:
#line 2967 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7679 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 319:
#line 2970 "vtkParse.y" /* glr.c:783  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7685 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 320:
#line 2972 "vtkParse.y" /* glr.c:783  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str)); }
#line 7691 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 325:
#line 2981 "vtkParse.y" /* glr.c:783  */
    { clearArray(); }
#line 7697 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 327:
#line 2985 "vtkParse.y" /* glr.c:783  */
    { clearArray(); }
#line 7703 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 331:
#line 2992 "vtkParse.y" /* glr.c:783  */
    { postSig("["); }
#line 7709 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 332:
#line 2993 "vtkParse.y" /* glr.c:783  */
    { postSig("]"); }
#line 7715 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 333:
#line 2996 "vtkParse.y" /* glr.c:783  */
    { pushArraySize(""); }
#line 7721 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 334:
#line 2997 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 7727 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 335:
#line 2997 "vtkParse.y" /* glr.c:783  */
    { chopSig(); pushArraySize(copySig()); }
#line 7733 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 341:
#line 3011 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7739 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 342:
#line 3012 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7745 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 343:
#line 3016 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7751 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 344:
#line 3018 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7757 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 345:
#line 3020 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7763 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 346:
#line 3024 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7769 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 347:
#line 3026 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7775 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 348:
#line 3028 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7781 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 349:
#line 3030 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7787 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 350:
#line 3032 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7793 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 351:
#line 3034 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7799 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 352:
#line 3035 "vtkParse.y" /* glr.c:783  */
    { postSig("template "); }
#line 7805 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 353:
#line 3037 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7811 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 354:
#line 3040 "vtkParse.y" /* glr.c:783  */
    { postSig("~"); }
#line 7817 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 355:
#line 3043 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7823 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 356:
#line 3046 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
#line 7829 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 357:
#line 3049 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); postSig("<"); }
#line 7835 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 358:
#line 3051 "vtkParse.y" /* glr.c:783  */
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
#line 7844 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 359:
#line 3057 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig("decltype"); }
#line 7850 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 360:
#line 3058 "vtkParse.y" /* glr.c:783  */
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
#line 7856 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 361:
#line 3065 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7862 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 362:
#line 3066 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7868 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 363:
#line 3067 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7874 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 364:
#line 3068 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7880 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 365:
#line 3069 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7886 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 366:
#line 3070 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7892 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 367:
#line 3071 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7898 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 368:
#line 3072 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7904 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 369:
#line 3073 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7910 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 370:
#line 3074 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7916 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 371:
#line 3075 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt8"; postSig(((*yyvalp).str)); }
#line 7922 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 372:
#line 3076 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt8"; postSig(((*yyvalp).str)); }
#line 7928 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 373:
#line 3077 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt16"; postSig(((*yyvalp).str)); }
#line 7934 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 374:
#line 3078 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt16"; postSig(((*yyvalp).str)); }
#line 7940 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 375:
#line 3079 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt32"; postSig(((*yyvalp).str)); }
#line 7946 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 376:
#line 3080 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt32"; postSig(((*yyvalp).str)); }
#line 7952 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 377:
#line 3081 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt64"; postSig(((*yyvalp).str)); }
#line 7958 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 378:
#line 3082 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt64"; postSig(((*yyvalp).str)); }
#line 7964 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 379:
#line 3083 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeFloat32"; postSig(((*yyvalp).str)); }
#line 7970 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 380:
#line 3084 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeFloat64"; postSig(((*yyvalp).str)); }
#line 7976 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 381:
#line 3085 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkIdType"; postSig(((*yyvalp).str)); }
#line 7982 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 382:
#line 3086 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkFloatingPointType"; postSig(((*yyvalp).str)); }
#line 7988 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 393:
#line 3111 "vtkParse.y" /* glr.c:783  */
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 7994 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 394:
#line 3112 "vtkParse.y" /* glr.c:783  */
    { setTypeMod(VTK_PARSE_TYPEDEF); }
#line 8000 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 395:
#line 3113 "vtkParse.y" /* glr.c:783  */
    { setTypeMod(VTK_PARSE_FRIEND); }
#line 8006 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 398:
#line 3120 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8012 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 399:
#line 3121 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8018 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 400:
#line 3122 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8024 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 401:
#line 3123 "vtkParse.y" /* glr.c:783  */
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
#line 8030 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 402:
#line 3126 "vtkParse.y" /* glr.c:783  */
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
#line 8036 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 403:
#line 3127 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 8042 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 404:
#line 3128 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 8048 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 405:
#line 3129 "vtkParse.y" /* glr.c:783  */
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
#line 8054 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 406:
#line 3131 "vtkParse.y" /* glr.c:783  */
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
#line 8060 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 407:
#line 3134 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 8066 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 408:
#line 3135 "vtkParse.y" /* glr.c:783  */
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 8072 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 409:
#line 3136 "vtkParse.y" /* glr.c:783  */
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
#line 8078 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 410:
#line 3139 "vtkParse.y" /* glr.c:783  */
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
#line 8084 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 411:
#line 3140 "vtkParse.y" /* glr.c:783  */
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
#line 8090 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 413:
#line 3145 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8096 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 415:
#line 3155 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8102 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 417:
#line 3157 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8108 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 420:
#line 3163 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8114 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 421:
#line 3165 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8120 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 423:
#line 3170 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 8126 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 424:
#line 3171 "vtkParse.y" /* glr.c:783  */
    { postSig("typename "); }
#line 8132 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 425:
#line 3173 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8138 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 426:
#line 3175 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8144 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 427:
#line 3177 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8150 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 429:
#line 3183 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8156 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 431:
#line 3185 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8162 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 434:
#line 3192 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8168 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 436:
#line 3194 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8174 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 439:
#line 3200 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 8180 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 440:
#line 3202 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8186 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 441:
#line 3204 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8192 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 442:
#line 3206 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8198 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 443:
#line 3208 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8204 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 444:
#line 3210 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8210 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 445:
#line 3213 "vtkParse.y" /* glr.c:783  */
    { setTypeId(""); }
#line 8216 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 447:
#line 3217 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
#line 8222 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 448:
#line 3218 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
#line 8228 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 449:
#line 3219 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
#line 8234 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 450:
#line 3220 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
#line 8240 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 451:
#line 3221 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
#line 8246 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 452:
#line 3222 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
#line 8252 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 453:
#line 3223 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
#line 8258 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 454:
#line 3224 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
#line 8264 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 455:
#line 3225 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
#line 8270 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 456:
#line 3226 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
#line 8276 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 457:
#line 3227 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt8"); ((*yyvalp).integer) = VTK_PARSE_INT8; }
#line 8282 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 458:
#line 3228 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt8"); ((*yyvalp).integer) = VTK_PARSE_UINT8; }
#line 8288 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 459:
#line 3229 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt16"); ((*yyvalp).integer) = VTK_PARSE_INT16; }
#line 8294 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 460:
#line 3230 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt16"); ((*yyvalp).integer) = VTK_PARSE_UINT16; }
#line 8300 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 461:
#line 3231 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt32"); ((*yyvalp).integer) = VTK_PARSE_INT32; }
#line 8306 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 462:
#line 3232 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt32"); ((*yyvalp).integer) = VTK_PARSE_UINT32; }
#line 8312 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 463:
#line 3233 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt64"); ((*yyvalp).integer) = VTK_PARSE_INT64; }
#line 8318 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 464:
#line 3234 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt64"); ((*yyvalp).integer) = VTK_PARSE_UINT64; }
#line 8324 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 465:
#line 3235 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeFloat32"); ((*yyvalp).integer) = VTK_PARSE_FLOAT32; }
#line 8330 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 466:
#line 3236 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeFloat64"); ((*yyvalp).integer) = VTK_PARSE_FLOAT64; }
#line 8336 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 467:
#line 3237 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkIdType"); ((*yyvalp).integer) = VTK_PARSE_ID_TYPE; }
#line 8342 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 468:
#line 3238 "vtkParse.y" /* glr.c:783  */
    { typeSig("double"); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8348 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 469:
#line 3241 "vtkParse.y" /* glr.c:783  */
    { postSig("auto "); ((*yyvalp).integer) = 0; }
#line 8354 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 470:
#line 3242 "vtkParse.y" /* glr.c:783  */
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
#line 8360 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 471:
#line 3243 "vtkParse.y" /* glr.c:783  */
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
#line 8366 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 472:
#line 3244 "vtkParse.y" /* glr.c:783  */
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
#line 8372 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 473:
#line 3245 "vtkParse.y" /* glr.c:783  */
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8378 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 474:
#line 3246 "vtkParse.y" /* glr.c:783  */
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
#line 8384 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 475:
#line 3247 "vtkParse.y" /* glr.c:783  */
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
#line 8390 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 476:
#line 3248 "vtkParse.y" /* glr.c:783  */
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
#line 8396 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 477:
#line 3249 "vtkParse.y" /* glr.c:783  */
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
#line 8402 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 478:
#line 3250 "vtkParse.y" /* glr.c:783  */
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8408 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 479:
#line 3251 "vtkParse.y" /* glr.c:783  */
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
#line 8414 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 480:
#line 3252 "vtkParse.y" /* glr.c:783  */
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
#line 8420 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 481:
#line 3253 "vtkParse.y" /* glr.c:783  */
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
#line 8426 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 482:
#line 3254 "vtkParse.y" /* glr.c:783  */
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8432 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 483:
#line 3255 "vtkParse.y" /* glr.c:783  */
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
#line 8438 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 487:
#line 3278 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8444 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 488:
#line 3282 "vtkParse.y" /* glr.c:783  */
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 8450 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 489:
#line 3286 "vtkParse.y" /* glr.c:783  */
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
#line 8456 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 490:
#line 3289 "vtkParse.y" /* glr.c:783  */
    { postSig("*"); }
#line 8462 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 491:
#line 3290 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 8468 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 492:
#line 3293 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
#line 8474 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 493:
#line 3295 "vtkParse.y" /* glr.c:783  */
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
#line 8489 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 495:
#line 3311 "vtkParse.y" /* glr.c:783  */
    {
      unsigned int n;
      n = (((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) << 2) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
      {
        n = VTK_PARSE_BAD_INDIRECT;
      }
      ((*yyvalp).integer) = n;
    }
#line 8503 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 496:
#line 3335 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_DECL); }
#line 8509 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 497:
#line 3336 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8515 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 498:
#line 3339 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_ID); }
#line 8521 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 499:
#line 3340 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8527 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 500:
#line 3343 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_REF); }
#line 8533 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 501:
#line 3344 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8539 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 502:
#line 3347 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_FUNC); }
#line 8545 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 503:
#line 3348 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8551 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 504:
#line 3351 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_ARRAY); }
#line 8557 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 505:
#line 3352 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8563 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 506:
#line 3355 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_CLASS); }
#line 8569 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 507:
#line 3356 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8575 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 510:
#line 3363 "vtkParse.y" /* glr.c:783  */
    { setAttributePrefix(NULL); }
#line 8581 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 513:
#line 3371 "vtkParse.y" /* glr.c:783  */
    { setAttributePrefix(vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "::")); }
#line 8587 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 518:
#line 3379 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 8593 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 519:
#line 3380 "vtkParse.y" /* glr.c:783  */
    { handle_attribute(cutSig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8599 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 520:
#line 3383 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 8605 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 521:
#line 3384 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 8611 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 524:
#line 3389 "vtkParse.y" /* glr.c:783  */
    { postSig(": "); }
#line 8617 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 531:
#line 3400 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 8623 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 532:
#line 3408 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set"); postSig("(");}
#line 8629 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 533:
#line 3409 "vtkParse.y" /* glr.c:783  */
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8643 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 534:
#line 3418 "vtkParse.y" /* glr.c:783  */
    {postSig("Get");}
#line 8649 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 535:
#line 3419 "vtkParse.y" /* glr.c:783  */
    {markSig();}
#line 8655 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 536:
#line 3419 "vtkParse.y" /* glr.c:783  */
    {swapSig();}
#line 8661 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 537:
#line 3420 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
#line 8674 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 538:
#line 3428 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set");}
#line 8680 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 539:
#line 3429 "vtkParse.y" /* glr.c:783  */
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8694 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 540:
#line 3438 "vtkParse.y" /* glr.c:783  */
    {preSig("char *Get");}
#line 8700 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 541:
#line 3439 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
#line 8713 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 542:
#line 3447 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8719 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 543:
#line 3447 "vtkParse.y" /* glr.c:783  */
    {closeSig();}
#line 8725 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 544:
#line 3449 "vtkParse.y" /* glr.c:783  */
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
#line 8760 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 545:
#line 3480 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set"); postSig("("); }
#line 8766 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 546:
#line 3481 "vtkParse.y" /* glr.c:783  */
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8780 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 547:
#line 3490 "vtkParse.y" /* glr.c:783  */
    {postSig("*Get");}
#line 8786 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 548:
#line 3491 "vtkParse.y" /* glr.c:783  */
    {markSig();}
#line 8792 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 549:
#line 3491 "vtkParse.y" /* glr.c:783  */
    {swapSig();}
#line 8798 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 550:
#line 3492 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
#line 8811 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 551:
#line 3501 "vtkParse.y" /* glr.c:783  */
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
#line 8833 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 552:
#line 3518 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8839 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 553:
#line 3519 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8848 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 554:
#line 3523 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8854 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 555:
#line 3524 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8863 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 556:
#line 3528 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8869 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 557:
#line 3529 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8878 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 558:
#line 3533 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8884 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 559:
#line 3534 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8893 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 560:
#line 3538 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8899 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 561:
#line 3539 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8908 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 562:
#line 3543 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8914 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 563:
#line 3544 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8923 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 564:
#line 3548 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8929 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 565:
#line 3549 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8938 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 566:
#line 3553 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8944 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 567:
#line 3554 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8953 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 568:
#line 3558 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8959 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 569:
#line 3560 "vtkParse.y" /* glr.c:783  */
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
#line 8979 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 570:
#line 3575 "vtkParse.y" /* glr.c:783  */
    {startSig();}
#line 8985 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 571:
#line 3577 "vtkParse.y" /* glr.c:783  */
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
#line 9002 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 572:
#line 3590 "vtkParse.y" /* glr.c:783  */
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
#line 9043 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 573:
#line 3627 "vtkParse.y" /* glr.c:783  */
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
#line 9085 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 574:
#line 3665 "vtkParse.y" /* glr.c:783  */
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
#line 9125 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 577:
#line 3709 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "()"; }
#line 9131 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 578:
#line 3710 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "[]"; }
#line 9137 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 579:
#line 3711 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " new[]"; }
#line 9143 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 580:
#line 3712 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " delete[]"; }
#line 9149 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 581:
#line 3713 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<"; }
#line 9155 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 582:
#line 3714 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">"; }
#line 9161 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 583:
#line 3715 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ","; }
#line 9167 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 584:
#line 3716 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "="; }
#line 9173 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 585:
#line 3717 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>"; }
#line 9179 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 586:
#line 3718 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>"; }
#line 9185 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 587:
#line 3719 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 9191 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 589:
#line 3723 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "%"; }
#line 9197 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 590:
#line 3724 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "*"; }
#line 9203 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 591:
#line 3725 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "/"; }
#line 9209 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 592:
#line 3726 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "-"; }
#line 9215 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 593:
#line 3727 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "+"; }
#line 9221 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 594:
#line 3728 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "!"; }
#line 9227 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 595:
#line 3729 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "~"; }
#line 9233 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 596:
#line 3730 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&"; }
#line 9239 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 597:
#line 3731 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "|"; }
#line 9245 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 598:
#line 3732 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "^"; }
#line 9251 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 599:
#line 3733 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " new"; }
#line 9257 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 600:
#line 3734 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " delete"; }
#line 9263 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 601:
#line 3735 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<<="; }
#line 9269 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 602:
#line 3736 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>="; }
#line 9275 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 603:
#line 3737 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<<"; }
#line 9281 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 604:
#line 3738 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ".*"; }
#line 9287 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 605:
#line 3739 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "->*"; }
#line 9293 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 606:
#line 3740 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "->"; }
#line 9299 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 607:
#line 3741 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "+="; }
#line 9305 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 608:
#line 3742 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "-="; }
#line 9311 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 609:
#line 3743 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "*="; }
#line 9317 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 610:
#line 3744 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "/="; }
#line 9323 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 611:
#line 3745 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "%="; }
#line 9329 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 612:
#line 3746 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "++"; }
#line 9335 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 613:
#line 3747 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "--"; }
#line 9341 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 614:
#line 3748 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&="; }
#line 9347 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 615:
#line 3749 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "|="; }
#line 9353 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 616:
#line 3750 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "^="; }
#line 9359 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 617:
#line 3751 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&&"; }
#line 9365 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 618:
#line 3752 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "||"; }
#line 9371 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 619:
#line 3753 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "=="; }
#line 9377 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 620:
#line 3754 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "!="; }
#line 9383 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 621:
#line 3755 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<="; }
#line 9389 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 622:
#line 3756 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">="; }
#line 9395 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 623:
#line 3759 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "typedef"; }
#line 9401 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 624:
#line 3760 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "typename"; }
#line 9407 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 625:
#line 3761 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "class"; }
#line 9413 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 626:
#line 3762 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "struct"; }
#line 9419 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 627:
#line 3763 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "union"; }
#line 9425 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 628:
#line 3764 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "template"; }
#line 9431 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 629:
#line 3765 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "public"; }
#line 9437 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 630:
#line 3766 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "protected"; }
#line 9443 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 631:
#line 3767 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "private"; }
#line 9449 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 632:
#line 3768 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "const"; }
#line 9455 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 633:
#line 3769 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "volatile"; }
#line 9461 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 634:
#line 3770 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "static"; }
#line 9467 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 635:
#line 3771 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "thread_local"; }
#line 9473 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 636:
#line 3772 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "constexpr"; }
#line 9479 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 637:
#line 3773 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "inline"; }
#line 9485 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 638:
#line 3774 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "virtual"; }
#line 9491 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 639:
#line 3775 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "explicit"; }
#line 9497 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 640:
#line 3776 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "decltype"; }
#line 9503 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 641:
#line 3777 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "default"; }
#line 9509 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 642:
#line 3778 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "extern"; }
#line 9515 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 643:
#line 3779 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "using"; }
#line 9521 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 644:
#line 3780 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "namespace"; }
#line 9527 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 645:
#line 3781 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "operator"; }
#line 9533 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 646:
#line 3782 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "enum"; }
#line 9539 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 647:
#line 3783 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "throw"; }
#line 9545 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 648:
#line 3784 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "noexcept"; }
#line 9551 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 649:
#line 3785 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "const_cast"; }
#line 9557 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 650:
#line 3786 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "dynamic_cast"; }
#line 9563 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 651:
#line 3787 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "static_cast"; }
#line 9569 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 652:
#line 3788 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "reinterpret_cast"; }
#line 9575 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 666:
#line 3812 "vtkParse.y" /* glr.c:783  */
    { postSig("< "); }
#line 9581 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 667:
#line 3813 "vtkParse.y" /* glr.c:783  */
    { postSig("> "); }
#line 9587 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 669:
#line 3814 "vtkParse.y" /* glr.c:783  */
    { postSig(">"); }
#line 9593 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 671:
#line 3818 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("::"); }
#line 9599 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 675:
#line 3825 "vtkParse.y" /* glr.c:783  */
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
#line 9638 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 676:
#line 3859 "vtkParse.y" /* glr.c:783  */
    { postSig(":"); postSig(" "); }
#line 9644 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 677:
#line 3859 "vtkParse.y" /* glr.c:783  */
    { postSig("."); }
#line 9650 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 678:
#line 3860 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9656 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 679:
#line 3861 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9662 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 681:
#line 3864 "vtkParse.y" /* glr.c:783  */
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
#line 9688 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 685:
#line 3891 "vtkParse.y" /* glr.c:783  */
    { postSig("< "); }
#line 9694 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 686:
#line 3892 "vtkParse.y" /* glr.c:783  */
    { postSig("> "); }
#line 9700 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 687:
#line 3893 "vtkParse.y" /* glr.c:783  */
    { postSig(">"); }
#line 9706 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 689:
#line 3897 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 9712 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 690:
#line 3898 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); }
#line 9718 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 692:
#line 3902 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(";"); }
#line 9724 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 700:
#line 3916 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 9730 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 701:
#line 3917 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); }
#line 9736 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 702:
#line 3921 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
#line 9746 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 703:
#line 3927 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
#line 9756 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 706:
#line 3938 "vtkParse.y" /* glr.c:783  */
    { postSigLeftBracket("["); }
#line 9762 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 707:
#line 3939 "vtkParse.y" /* glr.c:783  */
    { postSigRightBracket("] "); }
#line 9768 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 708:
#line 3940 "vtkParse.y" /* glr.c:783  */
    { postSig("[["); }
#line 9774 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 709:
#line 3941 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("]] "); }
#line 9780 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 710:
#line 3944 "vtkParse.y" /* glr.c:783  */
    { postSigLeftBracket("("); }
#line 9786 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 711:
#line 3945 "vtkParse.y" /* glr.c:783  */
    { postSigRightBracket(") "); }
#line 9792 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 712:
#line 3946 "vtkParse.y" /* glr.c:783  */
    { postSigLeftBracket("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 9798 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 713:
#line 3947 "vtkParse.y" /* glr.c:783  */
    { postSigRightBracket(") "); }
#line 9804 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 714:
#line 3948 "vtkParse.y" /* glr.c:783  */
    { postSigLeftBracket("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&"); }
#line 9810 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 715:
#line 3949 "vtkParse.y" /* glr.c:783  */
    { postSigRightBracket(") "); }
#line 9816 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 716:
#line 3952 "vtkParse.y" /* glr.c:783  */
    { postSig("{ "); }
#line 9822 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 717:
#line 3952 "vtkParse.y" /* glr.c:783  */
    { postSig("} "); }
#line 9828 "vtkParse.tab.c" /* glr.c:783  */
    break;


#line 9832 "vtkParse.tab.c" /* glr.c:783  */
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
  (!!((Yystate) == (-1078)))

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



#line 3999 "vtkParse.y" /* glr.c:2551  */

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
      int i;

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
