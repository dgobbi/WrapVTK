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
#include <limits.h>
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

#include "vtkParse.h"
#include "vtkParsePreprocess.h"
#include "vtkParseData.h"

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


#line 1817 "vtkParse.tab.c" /* glr.c:240  */

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
    SetMacro = 357,
    GetMacro = 358,
    SetStringMacro = 359,
    GetStringMacro = 360,
    SetClampMacro = 361,
    SetObjectMacro = 362,
    GetObjectMacro = 363,
    BooleanMacro = 364,
    SetVector2Macro = 365,
    SetVector3Macro = 366,
    SetVector4Macro = 367,
    SetVector6Macro = 368,
    GetVector2Macro = 369,
    GetVector3Macro = 370,
    GetVector4Macro = 371,
    GetVector6Macro = 372,
    SetVectorMacro = 373,
    GetVectorMacro = 374,
    ViewportCoordinateMacro = 375,
    WorldCoordinateMacro = 376,
    TypeMacro = 377,
    VTK_BYTE_SWAP_DECL = 378
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 1795 "vtkParse.y" /* glr.c:245  */

  const char   *str;
  unsigned int  integer;

#line 1974 "vtkParse.tab.c" /* glr.c:245  */
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

#line 2004 "vtkParse.tab.c" /* glr.c:263  */

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
#if 1
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
#define YYLAST   7860

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  147
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  302
/* YYNRULES -- Number of rules.  */
#define YYNRULES  728
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1209
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   378

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   143,     2,     2,     2,   139,   133,     2,
     130,   131,   137,   142,   129,   141,   146,   140,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   128,   124,
     132,   127,   138,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   134,     2,   135,   145,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   125,   144,   126,   136,     2,     2,     2,
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
     115,   116,   117,   118,   119,   120,   121,   122,   123
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  1957,  1957,  1959,  1961,  1960,  1971,  1972,  1973,  1974,
    1975,  1976,  1977,  1978,  1979,  1980,  1981,  1982,  1983,  1984,
    1985,  1986,  1987,  1988,  1991,  1992,  1993,  1994,  1995,  1996,
    1999,  2000,  2007,  2014,  2015,  2015,  2017,  2020,  2027,  2028,
    2031,  2032,  2033,  2036,  2037,  2040,  2040,  2055,  2054,  2060,
    2066,  2065,  2070,  2076,  2077,  2078,  2081,  2083,  2085,  2088,
    2089,  2092,  2093,  2095,  2097,  2096,  2105,  2109,  2110,  2111,
    2114,  2115,  2116,  2117,  2118,  2119,  2120,  2121,  2122,  2123,
    2124,  2125,  2126,  2127,  2128,  2129,  2132,  2133,  2134,  2135,
    2136,  2137,  2140,  2141,  2142,  2143,  2146,  2147,  2150,  2152,
    2155,  2160,  2161,  2164,  2165,  2168,  2169,  2170,  2181,  2182,
    2183,  2187,  2188,  2192,  2192,  2205,  2211,  2219,  2220,  2221,
    2224,  2225,  2225,  2229,  2230,  2232,  2233,  2234,  2234,  2242,
    2246,  2247,  2250,  2252,  2254,  2255,  2258,  2259,  2267,  2268,
    2271,  2272,  2274,  2276,  2278,  2282,  2284,  2285,  2288,  2291,
    2292,  2295,  2296,  2295,  2300,  2341,  2344,  2345,  2346,  2348,
    2350,  2352,  2356,  2359,  2359,  2391,  2394,  2393,  2411,  2413,
    2412,  2417,  2419,  2417,  2421,  2423,  2421,  2425,  2428,  2425,
    2439,  2440,  2443,  2444,  2446,  2447,  2450,  2450,  2460,  2461,
    2469,  2470,  2471,  2472,  2475,  2478,  2479,  2480,  2483,  2484,
    2485,  2488,  2489,  2490,  2494,  2495,  2496,  2497,  2500,  2501,
    2502,  2506,  2511,  2505,  2523,  2527,  2538,  2537,  2546,  2550,
    2553,  2563,  2567,  2568,  2571,  2572,  2574,  2575,  2576,  2579,
    2580,  2582,  2583,  2584,  2586,  2587,  2590,  2596,  2597,  2598,
    2599,  2606,  2607,  2610,  2610,  2618,  2619,  2620,  2623,  2625,
    2626,  2630,  2629,  2645,  2660,  2641,  2671,  2671,  2674,  2675,
    2678,  2679,  2682,  2683,  2689,  2690,  2690,  2693,  2694,  2694,
    2696,  2698,  2702,  2704,  2702,  2728,  2729,  2732,  2732,  2734,
    2734,  2736,  2736,  2741,  2742,  2742,  2750,  2753,  2823,  2824,
    2826,  2827,  2827,  2830,  2833,  2834,  2838,  2850,  2849,  2867,
    2868,  2872,  2874,  2874,  2892,  2892,  2894,  2898,  2899,  2900,
    2899,  2905,  2907,  2908,  2909,  2910,  2911,  2912,  2915,  2916,
    2920,  2921,  2925,  2926,  2930,  2931,  2932,  2933,  2936,  2937,
    2940,  2940,  2943,  2944,  2947,  2947,  2951,  2952,  2952,  2959,
    2960,  2963,  2964,  2965,  2966,  2967,  2970,  2972,  2974,  2978,
    2980,  2982,  2984,  2986,  2988,  2990,  2990,  2995,  2998,  3001,
    3004,  3004,  3012,  3012,  3020,  3021,  3022,  3023,  3024,  3025,
    3026,  3027,  3028,  3029,  3036,  3037,  3038,  3039,  3040,  3041,
    3042,  3048,  3049,  3052,  3053,  3055,  3056,  3059,  3060,  3063,
    3064,  3065,  3066,  3069,  3070,  3071,  3072,  3073,  3077,  3078,
    3079,  3082,  3083,  3086,  3087,  3095,  3098,  3098,  3100,  3100,
    3104,  3105,  3107,  3111,  3112,  3114,  3114,  3117,  3119,  3123,
    3126,  3126,  3128,  3128,  3132,  3135,  3135,  3137,  3137,  3141,
    3142,  3144,  3146,  3148,  3150,  3152,  3156,  3157,  3160,  3161,
    3162,  3163,  3164,  3165,  3166,  3167,  3168,  3169,  3172,  3173,
    3174,  3175,  3176,  3177,  3178,  3179,  3180,  3181,  3182,  3183,
    3184,  3185,  3186,  3206,  3207,  3208,  3209,  3212,  3216,  3220,
    3220,  3224,  3225,  3240,  3241,  3266,  3266,  3270,  3270,  3274,
    3274,  3278,  3278,  3282,  3282,  3286,  3286,  3289,  3290,  3293,
    3297,  3298,  3301,  3304,  3305,  3306,  3307,  3310,  3310,  3314,
    3315,  3318,  3319,  3320,  3320,  3323,  3324,  3326,  3327,  3330,
    3331,  3339,  3339,  3349,  3350,  3350,  3349,  3359,  3359,  3369,
    3369,  3378,  3378,  3378,  3411,  3410,  3421,  3422,  3422,  3421,
    3431,  3449,  3449,  3454,  3454,  3459,  3459,  3464,  3464,  3469,
    3469,  3474,  3474,  3479,  3479,  3484,  3484,  3489,  3489,  3506,
    3506,  3520,  3557,  3595,  3632,  3633,  3640,  3641,  3642,  3643,
    3644,  3645,  3646,  3647,  3648,  3649,  3650,  3651,  3654,  3655,
    3656,  3657,  3658,  3659,  3660,  3661,  3662,  3663,  3664,  3665,
    3666,  3667,  3668,  3669,  3670,  3671,  3672,  3673,  3674,  3675,
    3676,  3677,  3678,  3679,  3680,  3681,  3682,  3683,  3684,  3685,
    3686,  3687,  3690,  3691,  3692,  3693,  3694,  3695,  3696,  3697,
    3698,  3699,  3700,  3701,  3702,  3703,  3704,  3705,  3706,  3707,
    3708,  3709,  3710,  3711,  3712,  3713,  3714,  3715,  3716,  3717,
    3718,  3719,  3722,  3723,  3724,  3725,  3726,  3727,  3728,  3729,
    3730,  3737,  3738,  3741,  3742,  3743,  3744,  3744,  3745,  3748,
    3749,  3752,  3753,  3754,  3755,  3790,  3790,  3791,  3792,  3793,
    3794,  3796,  3797,  3800,  3801,  3802,  3803,  3806,  3807,  3808,
    3811,  3812,  3814,  3815,  3817,  3818,  3821,  3822,  3825,  3826,
    3827,  3831,  3830,  3844,  3845,  3848,  3848,  3850,  3850,  3854,
    3854,  3856,  3856,  3858,  3858,  3862,  3862,  3867,  3868,  3870,
    3871,  3874,  3875,  3878,  3879,  3882,  3883,  3884,  3885,  3886,
    3887,  3888,  3889,  3889,  3889,  3889,  3889,  3890,  3891,  3892,
    3893,  3894,  3897,  3900,  3901,  3904,  3907,  3907,  3907
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
  "UNSIGNED", "SetMacro", "GetMacro", "SetStringMacro", "GetStringMacro",
  "SetClampMacro", "SetObjectMacro", "GetObjectMacro", "BooleanMacro",
  "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
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

#define YYPACT_NINF -1041
#define YYTABLE_NINF -682

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
   -1041,   111,   139, -1041, -1041,  6515, -1041,   216,   228,   298,
     448,   459,   507,   539,    -8,   207,   209, -1041, -1041, -1041,
     374, -1041, -1041, -1041, -1041, -1041, -1041, -1041,    50, -1041,
      91, -1041,  4233, -1041, -1041,  7561,   175,  1396, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,    23,    58,    99,   110,   117,   137,
     155,   160,   165,   173,   186,   206,   223,   246,   303,   308,
     319,   322,   334,   338,   355, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041,   364, -1041, -1041, -1041, -1041, -1041, -1041,  7264,
   -1041,    36,    36,    36,    36, -1041,   377,  7561, -1041,   389,
   -1041,   402,  1722,  1190,   447,  1967,   313,   333, -1041,   404,
    7363, -1041, -1041, -1041, -1041,   138,   149, -1041, -1041, -1041,
   -1041, -1041, -1041,   513, -1041, -1041,  1431,   417,  4665, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,    28, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,    89,  1967,
      42,   147,   180,   185,   188,   195,   196, -1041,   542, -1041,
   -1041, -1041, -1041, -1041,   852,   447,   447,  7561,   138, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041,   430,    42,   147,
     180,   185,   188,   195,   196, -1041, -1041, -1041,  1967,  1967,
     439,   446, -1041,  1722,  1967,   447,   447,   595, -1041, -1041,
   -1041,   595,   595, -1041,   595,   595,   595,   595,   595,   595,
     595,   595,   595,   595,   595,   595,   595,   595,  7081,   457,
    6963, -1041,  7081, -1041,  1639,   441,  1967, -1041, -1041, -1041,
   -1041, -1041, -1041,  7264, -1041, -1041,  7462,   138,   456, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,  7561, -1041,
   -1041, -1041, -1041, -1041, -1041,    38,   455,   447,   447,   447,
   -1041, -1041, -1041, -1041,   404, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,  1722, -1041,
   -1041, -1041, -1041, -1041, -1041,  6906, -1041,   224,    66, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041,   125, -1041, -1041,
   -1041,   162, -1041,   462, -1041, -1041,  2217,  2361, -1041, -1041,
     321, -1041,  2505,  3513,  2649, -1041, -1041, -1041, -1041, -1041,
   -1041,  7151,  7013,  7151,  1731, -1041, -1041, -1041, -1041, -1041,
   -1041,  6690, -1041,  2793,   399,   463, -1041,   470, -1041,   468,
   -1041, -1041, -1041,  1815,  1722, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041,   461,   595,   595,   595,   476,   480,   595,   481,
     483,   496,   499,   501,   504,   505,   526,   531,   533,   537,
     511,   528,   541, -1041, -1041,   473, -1041,   138, -1041, -1041,
   -1041, -1041, -1041, -1041,    65, -1041,  6800,  1062,   447,   447,
     513,   512,   595, -1041, -1041, -1041,   423, -1041,  1967,  7462,
    6906,  1967,   543,  2937,   544,  7022,  1431, -1041, -1041, -1041,
      89, -1041, -1041, -1041, -1041, -1041,  7081,  7013,  7081,  1731,
   -1041, -1041, -1041, -1041,   140, -1041,   497, -1041,  2073, -1041,
     497,   540, -1041,  1722,     8, -1041, -1041, -1041,   548,   546,
    6690, -1041,   547,   138, -1041, -1041, -1041, -1041, -1041, -1041,
    6371,  1960,   549,   232,   552, -1041,  1431, -1041,   556,  3657,
   -1041, -1041,   553, -1041, -1041, -1041, -1041,    17, -1041,  7660,
      63,   648, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
     571, -1041,   138,   103,   572,   129,  7151,  7151,   126,   247,
   -1041, -1041, -1041, -1041,   573,   447, -1041, -1041, -1041,   513,
     690,   564,   565,    60, -1041, -1041,   570, -1041,   567, -1041,
   -1041, -1041, -1041, -1041, -1041,   574,   577,   578, -1041, -1041,
     575,  7561, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,  1967, -1041,   576, -1041, -1041,   134,
    1581, -1041, -1041,   583, -1041, -1041,   447,   447,  6800, -1041,
     146, -1041,   585,  7561,   589, -1041, -1041,  1722,   588, -1041,
     131, -1041, -1041,   587,   636, -1041,   447, -1041, -1041, -1041,
     544,  5529,   599,    67,   600,   423,  6371, -1041,   140, -1041,
   -1041, -1041, -1041,    53, -1041,   597, -1041, -1041, -1041,   591,
     238, -1041, -1041, -1041, -1041, -1041,  5961, -1041, -1041,   935,
   -1041, -1041,   513,   140,   601, -1041,   596,   552,   260,   447,
   -1041,   646,   141,   606, -1041, -1041, -1041, -1041, -1041,  1967,
    1967,  1967, -1041,   447,   447,  7561,   138,   149, -1041, -1041,
   -1041, -1041,   138,    63,  4809,  4953,  5097, -1041,   605, -1041,
   -1041, -1041,   612,   613, -1041,   149, -1041,   610, -1041,   615,
    7561, -1041,   604,   607, -1041, -1041, -1041, -1041,  7561, -1041,
   -1041, -1041,  7561,  7561, -1041,   614,  7561,  7561,  7561,  7561,
    7561,  7561,  7561,  7561,  7561,  7561,   620, -1041, -1041, -1041,
   -1041, -1041,   616, -1041, -1041, -1041,   530,   621, -1041,   706,
     667, -1041, -1041, -1041, -1041,   595, -1041, -1041, -1041,   393,
    1967,   667,   667,  3081, -1041, -1041,   623, -1041, -1041, -1041,
     750,   513,   625, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,   630, -1041,
   -1041, -1041,    38, -1041, -1041,   591, -1041,   633, -1041,   627,
     149, -1041,  5673, -1041,  5961, -1041, -1041, -1041, -1041,   392,
   -1041,   267, -1041, -1041, -1041, -1041,  1431, -1041, -1041, -1041,
   -1041, -1041,   321, -1041, -1041, -1041, -1041,  6690, -1041, -1041,
   -1041, -1041, -1041,   138, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,   544, -1041,
     138, -1041, -1041,   628,  7561, -1041,   632,  7561, -1041,   634,
     635,   637,   640,   642,   643,   649,   650,   629,   638, -1041,
     651,  6393, -1041,  1967, -1041, -1041, -1041,  1967, -1041,  1581,
   -1041, -1041,  5961, -1041,   655, -1041, -1041, -1041, -1041, -1041,
     497,   680,  7561, -1041, -1041,   456, -1041, -1041, -1041, -1041,
   -1041, -1041,   544,   652, -1041, -1041, -1041, -1041, -1041, -1041,
     544, -1041,  6249, -1041,  4377, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041,   301, -1041,   658,    66,  6371,   658,
   -1041,   659,   662, -1041, -1041,   660, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041,   778,   779, -1041,  6637,
     234,  1960,   109, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041,  2021, -1041,    36, -1041, -1041,
   -1041,   669,   455,  1722,  6742,   138, -1041,   667,  1581,   667,
     621,  5961,  4521, -1041,   751, -1041, -1041, -1041,   138, -1041,
    5241,  5529,  5385,   732,   670,   673,  5961,   674, -1041, -1041,
   -1041, -1041, -1041,  5961,   544,  5817,  6371, -1041, -1041, -1041,
   -1041, -1041,   678,   138, -1041,   658, -1041, -1041,   679, -1041,
     681,   682,   684, -1041, -1041, -1041,  1769,    36,   455,  6847,
     667, -1041, -1041, -1041, -1041, -1041,  2021, -1041, -1041,  6847,
   -1041, -1041, -1041, -1041,  1722,  6906, -1041, -1041, -1041,   109,
   -1041, -1041,   691,   676, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041,  5961, -1041,  5961,   686, -1041, -1041, -1041,  6105, -1041,
   -1041, -1041, -1041, -1041,  3801, -1041, -1041, -1041,  6953, -1041,
   -1041,  1769, -1041, -1041,  6906,  6847,   696, -1041, -1041,   697,
     224,   288, -1041, -1041,  7759,    69, -1041, -1041, -1041,  6105,
   -1041,   332,   424, -1041, -1041, -1041,    82, -1041,  6953, -1041,
    6984, -1041,   699, -1041, -1041, -1041, -1041, -1041,  7759, -1041,
   -1041,   149, -1041,   513, -1041, -1041, -1041, -1041, -1041,   109,
     123,  3225,  3945,   217,    77,  6984,    92, -1041, -1041,  3369,
   -1041, -1041, -1041,   424, -1041, -1041, -1041, -1041, -1041,   102,
     217, -1041, -1041,  6371, -1041,  4089, -1041,  6371, -1041
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       3,     0,     4,     1,   475,     0,   487,   442,   443,   444,
     438,   439,   440,   441,   446,   447,   445,    54,    53,    55,
     117,   401,   402,   393,   396,   397,   399,   400,   398,   392,
     394,   219,     0,   362,   415,     0,     0,     0,   359,   448,
     449,   450,   451,   452,   457,   458,   459,   460,   453,   454,
     455,   456,   461,   462,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    23,   357,     5,    19,    20,
      13,    11,    12,     9,    38,    17,   381,    45,   485,    10,
      16,   381,     0,   485,    14,   138,     7,     6,     8,     0,
      18,     0,     0,     0,     0,   208,     0,     0,    15,     0,
     339,   475,     0,     0,     0,     0,   475,   414,   341,   358,
       0,   475,   389,   390,   391,   180,   294,   406,   410,   413,
     475,   475,    21,   476,   119,   118,     0,   395,     0,   442,
     443,   444,   438,   439,   440,   441,   727,   728,   638,   633,
     634,   635,   632,   636,   637,   639,   640,   446,   447,   445,
     697,   605,   604,   606,   625,   608,   610,   609,   611,   612,
     613,   614,   617,   618,   616,   615,   621,   624,   607,   626,
     627,   619,   603,   602,   623,   622,   578,   579,   620,   630,
     629,   628,   631,   580,   581,   582,   711,   583,   584,   585,
     591,   592,   586,   587,   588,   589,   590,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   709,   708,   721,   697,
     715,   712,   716,   726,   166,   575,   697,   574,   569,   714,
     568,   570,   571,   572,   573,   576,   577,   713,   720,   719,
     710,   717,   718,   699,   705,   707,   706,   697,     0,     0,
     442,   443,   444,   438,   439,   440,   441,   398,   394,   381,
     485,   381,   485,   475,     0,   475,   414,     0,   180,   374,
     376,   375,   379,   380,   378,   377,   697,    34,   366,   364,
     365,   369,   370,   368,   367,   373,   372,   371,     0,     0,
       0,   477,   340,     0,     0,   342,   343,     0,   513,   517,
     519,     0,     0,   526,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   294,     0,
      52,   487,   294,   113,   120,     0,     0,    27,    39,    24,
     485,    26,    28,     0,    25,    29,     0,   180,   258,   247,
     697,   190,   246,   192,   193,   191,   211,   485,     0,   214,
      22,   418,   355,   198,   196,   226,   346,     0,   342,   343,
     344,    60,   345,    59,     0,   349,   347,   348,   350,   417,
     351,   360,   381,   485,   381,   485,   139,   209,     0,   475,
     408,   387,   304,   306,   181,     0,   290,   275,   180,   479,
     479,   479,   405,   295,   463,   464,   473,   465,   381,   437,
     436,   497,   488,     0,     3,   699,     0,     0,   684,   683,
     171,   165,     0,     0,     0,   691,   693,   689,   363,   475,
     395,   294,    52,   294,   120,   346,   381,   381,   154,   150,
     146,     0,   149,     0,     0,     0,   157,     0,   155,     0,
     487,   159,   158,     0,     0,   366,   364,   365,   369,   370,
     368,   367,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   386,   385,     0,   290,   180,   475,   383,
     384,    63,    41,    50,   411,   475,     0,     0,    60,     0,
     486,     0,   125,   109,   121,   116,   475,   477,     0,     0,
       0,     0,     0,     0,   265,     0,     0,   230,   229,   481,
     228,   256,   352,   353,   354,   672,   294,    52,   294,   120,
     199,   197,   388,   381,   471,   210,   222,   477,     0,   194,
     222,   328,   477,     0,     0,   277,   287,   276,     0,     0,
       0,   320,     0,   180,   468,   487,   467,   469,   466,   474,
     407,     0,     0,   497,   491,   494,     0,     3,     4,     0,
     702,   704,     0,   698,   701,   703,   722,     0,   168,     0,
       0,     0,   723,    31,   700,   725,   661,   661,   661,   416,
       0,   146,   180,   411,     0,   475,   294,   294,     0,   328,
     477,   342,   343,    33,     0,     0,     3,   162,   163,   478,
       0,   578,   579,     0,   563,   562,     0,   560,     0,   561,
     218,   567,   161,   160,   511,     0,     0,     0,   521,   524,
       0,     0,   531,   535,   539,   543,   533,   537,   541,   545,
     547,   549,   551,   552,     0,    43,   289,   293,   382,    64,
       0,    62,    40,    49,    58,   475,    60,     0,     0,   111,
       0,   123,   126,     0,   115,   412,   475,     0,   259,   260,
       0,   697,   245,     0,   475,   411,     0,   234,   487,   227,
     265,     0,     0,   411,     0,   475,   409,   403,   472,   305,
     224,   225,   215,   231,   223,     0,   220,   301,   329,     0,
     322,   200,   195,   477,   286,   291,     0,   695,   280,     0,
     302,   321,   480,   471,     0,   156,     0,   490,   497,   505,
     358,   499,   501,     4,    32,    30,   724,   169,   167,     0,
       0,     0,   432,   431,   430,     0,   180,   294,   425,   429,
     182,   183,   180,     0,     0,     0,     0,   141,   145,   148,
     143,   115,     0,     0,   140,   294,   151,   322,    37,     4,
       0,   566,     0,     0,   565,   564,   556,   557,     0,   514,
     518,   520,     0,     0,   527,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   554,    67,    68,    69,
      46,   475,     0,   105,   106,   107,   103,    51,    96,   101,
     180,    47,    56,   475,   114,   125,   127,   122,   108,   341,
       0,   180,   180,     0,   212,   271,   266,   267,   272,   356,
     253,   482,     0,   687,   650,   679,   655,   680,   681,   685,
     656,   660,   659,   654,   657,   658,   677,   649,   678,   673,
     676,   361,   651,   652,   653,    44,    42,   112,   115,   404,
     233,   232,   226,   216,   334,   331,   332,     0,   251,     0,
     294,   648,   645,   646,   278,   641,   643,   644,   674,     0,
     283,   307,   470,   492,   489,   496,     0,   500,   498,   503,
     502,    36,   171,   433,   434,   435,   427,   299,   172,   479,
     424,   381,   175,   180,   666,   668,   669,   692,   664,   665,
     663,   667,   662,   694,   690,   142,   144,   147,   265,    35,
     180,   558,   559,     0,     0,   522,     0,     0,   530,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   555,
       0,     0,    66,     0,   104,   475,   102,     0,    98,     0,
      57,   124,     0,   699,     0,   131,   261,   263,   262,   249,
     222,   268,     0,   236,   235,   258,   257,   661,   672,   661,
     110,   481,   265,   337,   333,   325,   326,   327,   324,   323,
     265,   292,     0,   642,     0,   284,   282,   308,   303,   311,
     506,   507,   170,   381,   307,   300,   184,   180,   426,   184,
     178,     0,     0,   512,   515,     0,   525,   528,   532,   536,
     540,   544,   534,   538,   542,   546,     0,     0,   553,     0,
     394,     0,     0,    85,    81,    72,    78,    65,    80,    74,
      73,    77,    75,    70,    71,     0,    79,     0,   205,   206,
      76,     0,   339,     0,     0,   180,    82,   180,     0,   180,
      48,   128,   130,   129,   248,   213,   270,   475,   180,   254,
       0,     0,     0,   241,     0,     0,     0,     0,   647,   671,
     696,   670,   675,     0,   265,   504,   428,   296,   186,   173,
     185,   318,     0,   180,   176,   184,   152,   164,     0,   699,
       0,     0,     0,    94,   485,    92,     0,     0,     0,     0,
     180,    83,    86,    88,    91,    89,     0,    87,    90,     0,
     201,    84,   477,   207,     0,     0,    99,    97,   100,     0,
     269,   273,   237,     0,   682,   686,   243,   234,   242,   217,
     483,   338,   252,   285,     0,   510,   508,   509,     0,   297,
     319,   179,   312,   516,     0,   529,   548,   550,     0,   485,
      93,     0,    95,   485,     0,     0,     0,   477,   204,     0,
     275,     0,   255,   688,     0,   237,   335,   487,   309,   187,
     188,   307,   153,   523,   697,   699,   411,   134,     0,   485,
       0,   202,     0,   697,   274,   240,   238,   239,     0,   420,
     244,   294,   221,   484,   312,   189,   298,   314,   313,     0,
     317,     0,     0,     0,    61,     0,   411,   135,   203,     0,
     422,   381,   419,   481,   315,   316,   699,   137,   132,    61,
       0,   250,   381,   421,   310,     0,   133,   423,   136
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1041, -1041,  -348, -1041, -1041,   816,   -97, -1041, -1041, -1041,
   -1041,  -828,   -79,    -4,   -32, -1041, -1041, -1041, -1041,    39,
    -388,   -90,  -744, -1041, -1041, -1041, -1041,   -96,   -93,  -100,
    -194, -1041, -1041,    49,   -85,   -83,   -29, -1041, -1041,    10,
    -438, -1041, -1041,    52, -1041, -1041, -1041,  -232,  -666,   -76,
    -116,  -363,   268,   107, -1041, -1041, -1041, -1041,   266,   -68,
     312, -1041,     9, -1041,     6, -1041, -1041, -1041,   -18, -1041,
   -1041, -1041, -1041, -1041, -1041,   569,   132,  -895, -1041, -1041,
   -1041,   859, -1041, -1041, -1041,   -55,  -131,    41,   -49, -1041,
   -1041,  -226,  -443, -1041, -1041,  -275,  -288,  -514,  -489, -1041,
   -1041,    27, -1041, -1041,  -237, -1041,  -274, -1041, -1041, -1041,
     -75, -1041, -1041, -1041, -1041,   -86, -1041, -1041, -1041, -1041,
     -69, -1041,    78,  -630, -1041, -1041, -1041,  -154, -1041, -1041,
    -263, -1041, -1041, -1041, -1041, -1041, -1041,    11,   407,  -267,
     409, -1041,    43,  -113,  -675, -1041, -1041,  -220, -1041,  -679,
   -1041,  -908, -1041, -1041,  -286, -1041, -1041,  -398, -1041, -1041,
    -444, -1041, -1041,    54, -1041, -1041, -1041,   999,   998,  1072,
       5, -1041, -1041,   823,    -2,    -5, -1041,   121, -1041,  1034,
     -15,   -48, -1041,     2,   466, -1041, -1041,  -473, -1041,   791,
     233, -1041, -1041,   154,  -902, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041,   323,   273,   244,  -366,   494,
   -1041,   500, -1041,   191, -1041,    46, -1041,  -496, -1041,  -352,
   -1041,  -897, -1041, -1041, -1041,   353, -1041,  -304, -1041, -1041,
   -1041,   347,   194, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
     -17, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041, -1041,
   -1041, -1041, -1041, -1041, -1041,   -20,    64,    47,  -859,  -779,
   -1041,  -160,   -59,  -513,  -150,   -57, -1041,   -39, -1041, -1040,
   -1041,  -609, -1041,  -543, -1041, -1041, -1041,  -196, -1041, -1041,
   -1041,   372, -1041,  -217,  -380, -1041,  -405,    37,  -599, -1041,
    -611, -1041
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    77,   327,    79,    80,    81,   435,
      82,    83,    84,   329,    86,   319,    87,   929,   640,   347,
     484,   485,   643,   639,   781,   782,  1007,  1083,  1084,   787,
     788,   927,   923,   789,    89,    90,    91,   492,    92,   330,
     495,   653,   650,   651,   932,   331,   934,  1075,  1157,    94,
      95,   580,   588,   581,   428,   429,   898,  1122,   430,    96,
     290,    97,   332,   750,   333,   410,   567,   872,   568,   569,
     976,   570,   979,   571,  1065,   877,   732,  1059,  1060,  1118,
    1149,   334,   101,   102,   103,  1087,  1017,  1018,   105,   504,
     940,   106,   525,   526,   952,   527,   107,   529,   682,   683,
     684,   509,   510,   842,   810,   944,  1142,  1107,  1108,  1144,
     341,   342,  1034,   530,   960,  1019,   945,  1102,   355,   670,
     502,   658,   659,   663,   664,   806,  1037,   807,   942,  1140,
     536,   537,   696,   538,   539,   859,  1053,   335,   386,   475,
     534,   850,   476,   477,   878,  1151,   974,   387,   861,   388,
     524,   968,  1054,  1174,  1152,  1062,   542,   531,   959,   687,
     969,   689,   845,   846,   953,  1045,  1046,   790,   110,   263,
     264,   506,   113,   114,   115,   265,   515,   266,   248,   118,
     119,   318,   478,   348,   121,   122,   123,   124,   678,  1025,
     126,   398,   523,   127,   128,   249,  1170,  1171,  1191,  1202,
     726,   727,   881,   973,   728,   129,   130,   131,   393,   394,
     395,   396,   703,   679,   397,   655,     6,   439,   440,   544,
     545,   667,   668,  1146,  1147,   320,   321,   133,   402,   552,
     553,   554,   555,   556,   868,   711,   971,   712,  1055,  1116,
     132,   758,   453,   904,  1068,   454,   455,   762,   985,   763,
     458,   907,  1070,   766,   770,   767,   771,   768,   772,   769,
     773,   774,   775,   920,   610,   823,   824,   825,   854,   855,
     962,   856,   827,   734,   891,   892,  1052,   671,   964,   828,
     829,   857,   948,   411,   832,   949,   947,   833,   578,   576,
     577,   834,   858,   406,   413,   563,   564,   565,   244,   245,
     246,   247
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
     116,    85,   407,   259,   376,   443,   261,   120,   574,   412,
     112,    99,   240,   392,    98,    93,   108,   490,   442,   692,
     328,   277,   543,   360,   718,   559,   354,   343,   344,   345,
     414,   685,   295,   589,   583,   294,   690,   267,   546,   547,
     812,   686,   293,   322,    88,   262,   104,   879,   432,   802,
       5,   677,   418,   879,  1043,   491,   558,   882,   654,   433,
     584,   801,   830,   353,   735,   736,  1057,   441,   641,   243,
     641,   377,   943,  1031,   260,   963,   382,   383,  1150,   242,
     641,   408,   338,   507,  1064,   641,   508,   688,   372,   730,
     691,   374,   408,  1005,   747,   641,   241,   528,   364,   415,
     416,   336,   136,   137,   112,   641,   641,   358,   361,  1175,
     295,     3,   365,   731,   368,   370,  -373,   665,   240,   146,
     147,   403,  -373,   503,   754,   378,   117,  -374,   831,   673,
     375,   840,   694,   146,   147,   138,   599,   695,    88,    -2,
     104,   146,   147,   692,   389,   688,   717,   741,   382,   383,
     384,   415,   416,   297,   574,   409,   443,   351,   296,   373,
     339,   340,   369,   777,   778,   779,   409,   381,   541,   613,
    1121,  1073,    21,    22,  -374,   405,   399,   400,   269,   270,
     271,   272,   273,   274,   275,   242,   841,  1111,   298,   642,
     -61,   836,   -61,   -61,  1113,   -61,  1141,   849,   755,   390,
     935,   642,   241,   391,   879,   839,   642,   -61,   980,   713,
     -61,   421,   528,   423,   691,   551,   836,   -61,   612,   417,
     -61,   879,   384,   742,   743,   982,   836,   389,   -61,   299,
     677,   -61,  -376,   359,   362,   426,   296,   838,   427,   223,
     300,   702,  1169,  1176,   295,   528,   420,   301,   749,   672,
     744,   674,   963,   223,  -120,   745,   219,   494,   390,   358,
     780,   223,   391,   368,   370,  -375,  1190,   302,   981,   869,
    -379,   417,   794,  -380,   380,   795,   239,   262,   138,  -376,
    -378,  -377,   390,   295,   295,   303,   391,   377,   358,   295,
     304,  -493,   521,   368,   370,   305,  1204,  -493,   879,   444,
     276,  -374,  1061,   306,   372,   238,   260,  1165,   582,   351,
     582,   369,  -375,  -376,   669,   488,   307,  -379,   487,   295,
    -380,   295,  1044,   701,   516,   486,   518,  -378,  -377,   520,
    1047,  -372,   963,  -371,   963,   499,   308,  -372,   112,  -371,
    -366,   378,  1154,  1166,  1167,  1155,  -366,  -174,  -374,  -279,
     550,   535,  -364,   309,  -281,   512,   513,   514,  -364,   879,
    -376,  -493,   432,  1101,   811,  -177,   847,  -493,   848,   528,
     296,  -174,   260,   358,   104,   373,   310,   746,   586,   587,
     295,  -330,   239,  -375,   879,   359,   240,   240,  1120,  -495,
     533,  1081,   240,   240,   240,  -495,   645,   967,    38,   134,
     135,  -330,   269,   270,   271,   272,   273,   274,   275,   296,
     296,   238,  1183,   240,   359,   296,   364,   488,    38,   295,
     487,   380,  -365,   611,  1114,   522,   591,   486,  -365,   595,
    -375,   967,   830,   311,  1040,  -330,  1042,  -342,   312,   358,
    1183,   489,  1200,  -342,   803,   296,   324,   296,    33,   313,
     377,  1035,   314,   242,   242,  1200,  1177,  -343,  1178,   242,
     242,   242,   967,  -343,   315,   579,  -330,   372,   316,  1179,
     241,   241,  1180,   582,   582,   676,   241,   241,   241,   975,
     242,   646,   595,   240,    38,   317,   368,   370,  1139,   323,
     380,   364,   648,   295,  1187,   295,   295,   241,  1104,   359,
     488,   666,   380,   487,   378,   657,   296,   346,   611,   830,
     486,   826,   488,   350,   295,   487,   870,  1198,   219,  1187,
     933,   965,   486,   966,   638,   364,  -340,   977,   358,   680,
     681,   644,    38,  -379,  1206,   591,   371,   401,   260,   240,
     830,   710,   404,   489,  -380,   296,   295,  -120,  -120,   294,
     242,   494,   592,  1032,   420,   489,   293,   434,   793,   783,
     784,   785,   480,   438,   723,   359,   480,   241,  1194,  1195,
    -156,   725,  -369,   224,   890,   890,   890,   733,  -369,   721,
    -379,  1138,   481,  -370,   501,   511,   379,   557,   596,  -370,
     614,  -380,  -378,   368,   597,   598,  1136,   635,   445,   446,
     447,   448,   449,   450,   451,   618,   242,   647,   489,   619,
     621,  1063,   622,   422,   880,   424,   285,   286,   287,   296,
    1138,   296,   296,   241,  -377,   623,   489,   574,   624,   295,
     625,  -368,   582,   626,   627,   295,   649,  -368,   489,  -378,
     296,  1162,   632,   646,   513,   514,   955,   956,   957,   958,
     239,   239,   358,   380,   359,   628,   239,   239,   239,   633,
     629,   592,   630,  -367,   809,   480,   631,   480,   661,  -367,
     634,  -377,   296,   697,  -330,  -264,   699,   239,   700,   238,
     238,   708,   714,   498,   706,   238,   238,   238,   716,  1124,
     724,   792,   325,   751,   385,   737,   740,   748,   752,   753,
     505,   756,   757,   759,   764,   695,   238,   866,   760,   761,
     808,   791,   796,   798,   295,   295,   295,   800,   804,   574,
     805,   368,   370,   835,   837,   844,   517,   843,   519,   863,
     867,   864,   871,   379,   745,   528,   895,   896,   847,   901,
    1156,   899,   902,   926,   922,   908,   860,   239,  1092,   919,
     925,   384,   941,   943,   950,   296,   946,   848,   996,   983,
     480,   296,   480,   986,  1036,   988,   989,   997,   990,   647,
    1184,   991,  1186,   992,   993,  1182,   238,   574,   359,  1033,
     994,   995,   998,   240,   479,  1058,  1067,  -336,   479,  1069,
    1066,  1071,  1072,  1091,   480,   295,   125,  1199,  1099,  1106,
     574,  1109,   379,   239,   890,  1112,   528,   528,  1110,  1119,
    1123,  1143,  1125,  1126,   379,  1127,  1205,  1148,  1141,  1137,
    1161,    78,  1163,  1188,  1004,  1008,   268,   921,  1009,  1030,
     480,   480,   238,   978,  1097,   924,  1010,   431,  1011,   930,
     296,   296,   296,  1173,  1130,  1012,   528,   931,   739,   738,
     242,   710,   897,  1013,   972,   278,   279,   280,   281,   282,
     283,   284,   364,   704,   100,   883,  1016,   241,  1077,   951,
    1145,  1172,   591,   285,   286,   287,  1039,  1164,   936,   876,
     890,   826,   890,  1100,   637,   636,   797,   479,  1193,   479,
     337,   548,   729,   961,   862,   890,   352,   549,   349,   954,
     707,    33,   865,  1048,  1026,  1117,   500,  1051,   376,  1041,
     698,     0,     0,     0,     0,   822,   116,  1006,   295,     0,
     480,   296,   295,  1024,   295,  1056,  1023,  1015,     0,     0,
    1014,    93,  1020,     0,     0,   357,   328,  1181,  1093,     0,
     822,     0,  1090,     0,   821,     0,  1189,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,   540,   826,     0,
      88,     0,     0,     0,     0,   379,     0,     0,     0,   821,
       0,  1028,     0,     0,     0,   377,     0,     0,   822,   822,
     822,     0,   479,     0,   479,     0,     0,     0,    76,   826,
       0,     0,   372,  1093,   116,   374,   295,   328,   592,   294,
       0,  1079,  1132,  1093,   109,  1076,   293,   821,   821,   821,
     116,  1082,   240,     0,     0,     0,   479,  1089,   358,   116,
    1023,  1086,     0,   295,  1085,     0,  1088,     0,     0,  1094,
     377,     0,     0,     0,   375,     0,   291,     0,  1074,     0,
     377,     0,   117,     0,   296,     0,   540,   239,   296,  1093,
     296,     0,   479,   479,    88,     0,     0,   372,  1192,     0,
       0,     0,     0,   373,     0,   269,   270,   271,   272,   273,
     274,   275,     0,     0,   116,     0,   238,   111,  1131,   242,
     364,   116,  1082,   808,   116,     0,   377,   357,  1135,   358,
     591,  1023,  1086,     0,  1094,  1085,   241,  1088,   822,     0,
       0,     0,     0,   372,   240,     0,     0,     0,     0,   292,
     356,    33,   540,   366,     0,  1129,   357,     0,  1133,   364,
     117,     0,   296,   488,   337,   260,   487,   821,   373,   591,
     116,     0,     0,   486,     0,     0,   117,     0,     0,     0,
    1094,     0,   479,  1203,   359,   117,  1168,   363,     0,   296,
       0,   431,     0,   488,  1207,   488,   487,     0,   487,     0,
       0,   240,   240,   486,     0,   486,     0,     0,     0,   240,
    1159,   242,     0,     0,   260,     0,   822,     0,   380,     0,
     488,     0,     0,   487,     0,   240,     0,   367,   241,     0,
     486,   379,     0,   278,   279,   280,   281,   282,   283,   284,
     117,   357,     0,     0,     0,   821,   822,   117,   822,     0,
     117,   285,   286,   287,     0,   359,   592,     0,     0,     0,
       0,     0,   480,     0,     0,     0,     0,     0,   242,   242,
       0,     0,     0,   380,   349,   821,   242,   821,     0,    33,
       0,     0,     0,   380,     0,   241,   241,     0,   419,   489,
       0,     0,   242,   241,     0,   592,   117,     0,     0,     0,
       0,     0,   425,     0,     0,     0,     0,   357,     0,   241,
       0,     0,     0,     0,     0,   822,   239,     0,     0,   489,
       0,   489,     0,     0,   822,   822,   822,   436,   437,   380,
     822,   425,   366,     0,     0,     0,     0,   822,     0,   822,
     480,     0,     0,     0,   821,   238,   489,     0,     0,   357,
       0,     0,     0,   821,   821,   821,     0,     0,     0,   821,
       0,   292,     0,   496,     0,   497,   821,     0,   821,     0,
       0,   452,     0,     0,     0,   456,   457,     0,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,     0,     0,   363,   822,   357,   822,     0,   928,
     292,   292,   822,     0,     0,     0,   367,     0,   239,     0,
     937,   938,     0,     0,     0,     0,   356,     0,     0,   709,
       0,     0,     0,   532,   821,     0,   821,     0,     0,     0,
       0,   821,     0,   822,     0,     0,   292,   238,   292,   278,
     279,   280,   281,   282,   283,   284,     0,     0,     0,     0,
       0,     0,   765,     0,     0,     0,     0,   285,   286,   287,
       0,     0,   821,   585,     0,   239,   239,  1128,     0,   590,
       0,     0,     0,   239,   269,   270,   271,   272,   273,   274,
     275,     0,   425,     0,   479,    33,   288,   480,   289,   239,
       0,   480,     0,     0,   238,   238,   363,     0,     0,     0,
       0,     0,   238,     0,     0,     0,     0,     0,     0,     0,
       0,   357,     0,     0,     0,     0,     0,     0,   238,     0,
     357,    38,  1158,     0,     0,     0,  1160,   615,   616,   617,
     379,     0,   620,     0,     0,     0,   292,   656,   532,     0,
     660,     0,     0,     0,     0,     0,   594,     0,     0,     0,
       0,     0,  1185,     0,     0,     0,     0,     0,   675,     0,
     363,     0,   479,     0,     0,     0,   652,     0,     0,     0,
       0,   693,    76,     0,     0,     0,     0,     0,   590,   363,
       0,   900,     0,     0,     0,   379,     0,     0,     0,   903,
     705,   363,     0,   905,   906,   379,     0,   909,   910,   911,
     912,   913,   914,   915,   916,   917,   918,     0,     0,     0,
     292,     0,     0,   292,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   278,   279,   280,   281,   282,   283,
     284,   292,     0,     0,  1095,     0,  1096,   379,  1098,     0,
       0,   379,   285,   286,   287,     0,     0,     0,     0,     0,
     783,   784,   785,     0,     0,     0,     0,     0,   786,     0,
       0,     0,     0,   292,     0,     0,     0,     0,     0,     0,
      33,     0,     0,   776,   379,     0,     0,     0,     0,     0,
       0,   722,   278,   279,   280,   281,   282,   283,   284,  1134,
       0,     0,     0,     0,     0,   693,     0,     0,     0,     0,
     285,   286,   287,     0,     0,     0,    38,     0,     0,   479,
       0,     0,     0,   479,     0,     0,     0,     0,     0,     0,
       0,     0,   363,     0,     0,     0,     0,     0,    33,   970,
       0,   799,     0,     0,     0,   984,     0,     0,   987,     0,
       0,     0,     0,     0,     0,     0,   292,     0,     0,     0,
       0,     0,   292,     0,     0,     0,     0,    76,   873,   874,
     875,     0,     0,     0,    38,   278,   279,   280,   281,   282,
     283,   284,     0,  1038,   278,   279,   280,   281,   282,   283,
     284,     0,     0,   285,   286,   287,     0,     0,     0,     0,
       0,     0,   285,   286,   287,     0,     0,     0,     0,     0,
       0,     0,     0,   493,     0,    31,   352,   494,     0,     0,
       0,    33,     0,     0,     0,    76,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1080,   292,   292,   292,    17,    18,    19,     0,     0,   660,
       0,    21,    22,    23,    24,    25,    26,    27,   257,    29,
       0,   258,     0,     0,     0,     0,    38,     0,   250,   251,
     252,   253,   254,   255,   256,     0,     0,   600,     0,   652,
       0,     0,     0,     0,     0,     0,   157,   158,   159,     0,
      17,    18,    19,    20,     0,     0,   357,    21,    22,    23,
      24,    25,    26,    27,   257,    29,     0,   258,    76,   494,
       0,     0,     0,     0,    33,    34,     0,    76,     0,   601,
     602,     0,   292,     0,     0,   590,   193,   194,   195,   603,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   357,     0,  1022,
    1021,     0,  1027,     0,     0,     0,  1029,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   604,     0,   605,   606,     0,   607,   225,   608,
       0,   227,   228,   609,   230,   231,   232,   233,   234,   235,
     236,     0,     0,   278,   279,   280,   281,   282,   283,   284,
     278,   279,   280,   281,   282,   283,   284,     0,     0,     0,
       0,   285,   286,   287,     0,     0,     0,     0,   285,   286,
     287,     0,     0,   111,     0,   292,     0,  1078,     0,   292,
     291,   292,     0,     0,     0,     0,     0,     0,     0,    33,
     288,     0,     0,  1078,     0,     0,    33,     0,     0,     0,
       0,   425,  1078,     0,     7,     8,     9,    10,    11,    12,
      13,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,    16,    38,    17,    18,    19,    20,
       0,     0,    38,    21,    22,    23,    24,    25,    26,    27,
     257,    29,   999,   258,    31,   325,     0,     0,     0,     0,
      33,    34,     0,   292,   326,     0,     0,  1078,     0,     0,
       0,     0,     0,     0,  1078,   600,     0,  1078,     0,     0,
       0,     0,   425,   532,     0,     0,    76,     0,     0,     0,
     292,     0,     0,    76,     0,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,   601,   602,     0,
       0,     0,   693,  1078,   193,   194,   195,   603,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,    76,     0,     0,
       0,     0,   363,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   363,     0,   363,     0,     0,     0,     0,     0,
     604,     0,   605,   606,     0,   607,   225,   608,     0,   227,
     228,   609,   230,   231,   232,   233,   234,   235,   236,   363,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,   219,     0,   220,   221,   222,   223,     0,   561,
     225,   226,   562,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   560,   219,   566,   220,   221,
     222,   223,     0,   561,   225,   226,     0,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,     0,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,     0,     0,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   560,
     219,     0,   220,   221,   222,   223,     0,   561,   225,   226,
     572,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,     0,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   560,   219,     0,   220,   221,   222,   223,
     575,   561,   225,   226,     0,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,     0,   170,   171,
     172,   173,   174,   175,     0,   176,   177,   178,   179,     0,
       0,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   560,   219,   593,
     220,   221,   222,   223,     0,   561,   225,   226,     0,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,   219,   662,   220,   221,   222,   223,     0,   561,
     225,   226,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   560,   219,   939,   220,   221,
     222,   223,     0,   561,   225,   226,     0,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,     0,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,     0,     0,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   560,
     219,  1196,   220,   221,   222,   223,     0,   561,   225,   226,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,     0,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   560,   219,  1201,   220,   221,   222,   223,
       0,   561,   225,   226,     0,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,     0,   170,   171,
     172,   173,   174,   175,     0,   176,   177,   178,   179,     0,
       0,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   573,   219,     0,
     220,   221,   222,   223,     0,   561,   225,   226,     0,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   715,   219,     0,   220,   221,   222,   223,     0,   561,
     225,   226,     0,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,     0,   220,   221,
     222,   223,  1153,   561,   225,   226,     0,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,     0,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,     0,     0,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1197,
     219,     0,   220,   221,   222,   223,     0,   561,   225,   226,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,     0,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1208,   219,     0,   220,   221,   222,   223,
       0,   561,   225,   226,     0,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,     0,   170,   171,
     172,   173,   174,   175,     0,   176,   177,   178,   179,     0,
       0,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   219,     0,
     220,   221,   222,   223,     0,   224,   225,   226,     0,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     139,   140,   141,   142,   143,   144,   145,   415,   416,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   813,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   884,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,     0,   814,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1049,   697,  1050,   885,   816,   886,   417,     0,   888,
     225,   819,     0,   227,   228,   889,   230,   231,   232,   233,
     234,   235,   236,   820,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,     0,   220,   221,
     222,   223,     0,   561,   225,   226,     0,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,     0,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,     0,     0,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     219,     0,   220,   221,   222,   223,     0,     0,   225,   226,
       0,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   139,   140,   141,   142,   143,   144,   145,   415,
     416,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   813,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,     0,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   884,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,     0,   814,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   697,     0,   885,   816,   886,   417,
     887,   888,   225,   819,     0,   227,   228,   889,   230,   231,
     232,   233,   234,   235,   236,   820,   139,   140,   141,   142,
     143,   144,   145,   415,   416,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   813,   161,   162,
     163,   164,   165,   166,   167,   168,   169,     0,   170,   171,
     172,   173,   174,   175,     0,   176,   177,   178,   179,     0,
       0,   180,   181,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   884,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,     0,   814,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   697,     0,
     885,   816,   886,   417,   893,   888,   225,   819,     0,   227,
     228,   889,   230,   231,   232,   233,   234,   235,   236,   820,
     139,   140,   141,   142,   143,   144,   145,   415,   416,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   813,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   884,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,     0,   814,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   697,     0,   885,   816,   886,   417,   894,   888,
     225,   819,     0,   227,   228,   889,   230,   231,   232,   233,
     234,   235,   236,   820,   139,   140,   141,   142,   143,   144,
     145,   415,   416,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   813,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   884,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,     0,   814,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   697,     0,   885,   816,
     886,   417,     0,   888,   225,   819,  1103,   227,   228,   889,
     230,   231,   232,   233,   234,   235,   236,   820,   139,   140,
     141,   142,   143,   144,   145,   415,   416,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   813,
     161,   162,   163,   164,   165,   166,   167,   168,   169,     0,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,     0,     0,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   884,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     814,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     697,     0,   885,   816,   886,   417,     0,   888,   225,   819,
    1105,   227,   228,   889,   230,   231,   232,   233,   234,   235,
     236,   820,   139,   140,   141,   142,   143,   144,   145,   415,
     416,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   813,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,     0,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,   408,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,     0,   814,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   697,     0,   815,   816,   817,   417,
       0,   818,   225,   819,     0,   227,   228,   409,   230,   231,
     232,   233,   234,   235,   236,   820,  -645,  -645,  -645,  -645,
    -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,
    -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,
    -645,  -645,  -645,  -645,  -645,  -645,  -645,     0,  -645,  -645,
    -645,  -645,  -645,  -645,     0,  -645,  -645,  -645,  -645,     0,
       0,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,
    -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,
    -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,
    -645,  -645,  -645,  -645,  -645,  -645,  -645,     0,  -645,     0,
    -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,
    -645,  -645,  -645,  -645,  -645,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  -645,     0,
    -681,  -645,  -645,  -645,     0,  -645,  -645,  -645,     0,  -645,
    -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,  -645,
     139,   140,   141,   142,   143,   144,   145,   415,   416,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   813,   161,   162,   163,   164,   165,   166,   167,   168,
     169,     0,   170,   171,   172,   173,   174,   175,     0,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   884,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,     0,   814,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   697,     0,  1115,   816,     0,   417,     0,   888,
     225,   819,     0,   227,   228,   889,   230,   231,   232,   233,
     234,   235,   236,   820,   139,   140,   141,   142,   143,   144,
     145,   415,   416,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   813,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,   170,   171,   172,   173,
     174,   175,     0,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   851,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,     0,   814,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   697,     0,     0,   816,
       0,   417,     0,   852,   225,   819,     0,   227,   228,   853,
     230,   231,   232,   233,   234,   235,   236,   820,   139,   140,
     141,   142,   143,   144,   145,   415,   416,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   813,
     161,   162,   163,   164,   165,   166,   167,   168,   169,     0,
     170,   171,   172,   173,   174,   175,     0,   176,   177,   178,
     179,     0,     0,   180,   181,   182,   183,   184,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,     0,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,     0,
     814,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     697,     0,     0,   816,     0,   417,     0,   818,   225,   819,
       0,   227,   228,     0,   230,   231,   232,   233,   234,   235,
     236,   820,   139,   140,   141,   142,   143,   144,   145,   415,
     416,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   813,   161,   162,   163,   164,   165,   166,
     167,   168,   169,     0,   170,   171,   172,   173,   174,   175,
       0,   176,   177,   178,   179,     0,     0,   180,   181,   182,
     183,   184,   185,   186,   187,   188,   189,   190,   191,   192,
     193,   194,   195,     0,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   697,     0,     0,   816,     0,   417,
       0,     0,   225,   819,     0,   227,   228,     0,   230,   231,
     232,   233,   234,   235,   236,   820,     7,     8,     9,    10,
      11,    12,    13,    21,    22,    23,    24,    25,    26,    27,
     257,    29,   473,   258,    14,    15,    16,     0,    17,    18,
      19,    20,   474,     0,     0,    21,    22,    23,    24,    25,
      26,    27,   257,    29,   999,  1000,    31,    32,     0,     0,
       0,     0,    33,    34,    35,     0,  1001,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,  1002,  1003,     7,     8,
       9,    10,    11,    12,    13,     0,     0,     0,     0,    76,
       0,     0,     0,     0,     0,     0,    14,    15,    16,     0,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,    30,    31,    32,
       0,     0,     0,     0,    33,    34,    35,    36,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,     0,    75,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,    76,     0,     0,     0,     0,     0,     0,    14,    15,
      16,     0,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,   257,    29,     0,   258,
      31,   325,     0,     0,     0,     0,    33,    34,     0,     0,
       0,     0,     0,   278,   279,   280,   281,   282,   283,   284,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   285,   286,   287,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    33,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    16,     0,    17,    18,    19,
      20,     0,     0,    76,    21,    22,    23,    24,    25,    26,
      27,   257,    29,     0,   258,    31,     0,     0,     0,     0,
       0,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   278,   279,   280,   281,   282,   283,   284,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   285,   286,   287,     0,     0,    76,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   352,     0,     0,     0,     0,    33,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      16,     0,    17,    18,    19,    20,     0,     0,    76,    21,
      22,    23,    24,    25,    26,    27,   257,    29,     0,   258,
      31,     0,     0,     0,     0,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   278,
     279,   280,   281,   282,   283,   284,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   285,   286,   287,
       0,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    31,
       0,     0,     0,     0,     0,    33,   278,   279,   280,   281,
     282,   283,   284,     0,     0,     0,   278,   279,   280,   281,
     282,   283,   284,     0,   285,   286,   287,     0,     0,     0,
       0,     0,     0,    76,   285,   286,   287,   278,   279,   280,
     281,   282,   283,   284,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,   285,   286,   287,     0,     0,
       0,     0,    33,     0,     0,     0,   278,   279,   280,   281,
     282,   283,   284,     0,     0,   278,   279,   280,   281,   282,
     283,   284,     0,    33,   285,   286,   287,     0,    38,     0,
       0,     0,    76,   285,   286,   287,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,    38,
       0,    33,     0,     0,     0,     0,     0,   482,  1154,     0,
       0,  1155,     0,     0,     0,     0,     0,   482,     0,     0,
       0,   483,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,  1154,
       0,     0,  1155,    21,    22,    23,    24,    25,    26,    27,
     257,    29,   473,   258,     0,     0,     0,     0,     0,     0,
       0,     0,   474,     0,     0,     0,     0,     0,     0,     0,
       0,   483,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   389,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    21,    22,    23,    24,    25,    26,    27,
     257,    29,   473,   258,     0,     0,     0,     0,     0,     0,
       0,     0,   474,     0,     0,  -288,     0,     0,     0,     0,
       0,     0,     0,     0,   390,     0,     0,     0,   391,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   389,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,   254,   255,   256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   390,   157,   158,   159,   391,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,   257,    29,     0,   258,    31,   325,     0,
       0,     0,     0,    33,    34,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   250,   251,   252,   253,
     254,   255,   256,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   157,   158,   159,     0,    17,    18,
      19,    20,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,   257,    29,     0,   258,    31,     0,     0,     0,
       0,     0,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   250,   251,   252,   253,   254,
     255,   256,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   157,   158,   159,     0,    17,    18,    19,
      20,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,   257,    29,     0,   258,    31,     0,     0,     0,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   250,   251,   252,   253,   254,   255,
     256,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   157,   158,   159,     0,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
     257,    29,     0,   258,     0,     0,     0,     0,     0,     0,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   250,   251,   252,   253,   254,   255,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   157,   158,   159,     0,   719,     0,   720,    20,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,   257,
      29,     0,   258,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   250,   251,   252,   253,   254,   255,   256,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     157,   158,   159,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,   257,    29,
       0,   258,     0,     0,     0,     0,     0,     0,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53
};

static const short int yycheck[] =
{
       5,     5,   219,    35,   120,   293,    35,     5,   413,   226,
       5,     5,    32,   126,     5,     5,     5,   321,   293,   533,
      99,    36,   388,   113,   567,   405,   112,   102,   103,   104,
     247,   527,    37,   431,   422,    37,   532,    35,   390,   391,
     670,   530,    37,    91,     5,    35,     5,   726,   268,   660,
       4,   524,   248,   732,   951,   322,   404,   732,   496,   276,
     423,   660,   671,   112,   577,   578,   974,   293,     3,    32,
       3,   120,     3,   932,    35,   854,    10,    11,  1118,    32,
       3,    64,    46,    45,   979,     3,    48,   531,   120,    26,
     533,   120,    64,   921,   590,     3,    32,   385,   113,    10,
      11,    99,    52,    12,    99,     3,     3,   112,   113,  1149,
     115,     0,   114,    50,   116,   117,   124,   505,   138,    10,
      11,   136,   130,   340,    64,   120,     5,    85,   671,   517,
     120,    78,   124,    10,    11,    44,   440,   129,    99,     0,
      99,    10,    11,   657,    78,   589,   129,   585,    10,    11,
      84,    10,    11,   130,   559,   138,   444,   111,    37,   120,
     124,   125,   116,    29,    30,    31,   138,   121,   388,   444,
    1065,   999,    32,    33,   132,   138,   130,   131,     3,     4,
       5,     6,     7,     8,     9,   138,   133,  1046,   130,   124,
     125,   124,   125,   128,  1053,   128,   127,   693,   138,   133,
     799,   124,   138,   137,   883,   678,   124,   125,   883,   557,
     128,   259,   500,   261,   657,    53,   124,   125,   444,   130,
     128,   900,    84,   586,   587,   900,   124,    78,   125,   130,
     703,   128,    85,   112,   113,   267,   115,   675,   267,   130,
     130,   545,  1144,  1151,   249,   533,    12,   130,   596,   516,
     124,   518,  1031,   130,   125,   129,   125,   128,   133,   264,
     126,   130,   137,   265,   266,    85,  1168,   130,   898,   128,
      85,   130,   126,    85,   120,   129,    32,   267,    44,   132,
      85,    85,   133,   288,   289,   130,   137,   336,   293,   294,
     130,   129,   378,   295,   296,   130,  1193,   135,   977,   294,
     125,    85,   977,   130,   336,    32,   267,    19,   421,   263,
     423,   265,   132,    85,   510,   320,   130,   132,   320,   324,
     132,   326,   952,   543,   372,   320,   374,   132,   132,   378,
     960,   124,  1111,   124,  1113,   333,   130,   130,   333,   130,
     124,   336,   125,    55,    56,   128,   130,    26,   132,   125,
     398,   127,   124,   130,   130,   357,   358,   359,   130,  1038,
     132,   129,   582,  1038,   668,    44,   128,   135,   130,   657,
     249,    50,   333,   378,   333,   336,   130,   130,   426,   427,
     385,   134,   138,    85,  1063,   264,   406,   407,  1063,   129,
     385,  1002,   412,   413,   414,   135,   486,   130,    85,    25,
      26,   134,     3,     4,     5,     6,     7,     8,     9,   288,
     289,   138,  1156,   433,   293,   294,   431,   422,    85,   424,
     422,   267,   124,   443,  1054,   379,   431,   422,   130,   434,
     132,   130,  1041,   130,   947,   134,   949,   124,   130,   444,
    1184,   320,  1186,   130,   661,   324,    93,   326,    49,   130,
     499,   940,   130,   406,   407,  1199,    32,   124,    34,   412,
     413,   414,   130,   130,   130,   419,   134,   499,   130,    45,
     406,   407,    48,   586,   587,   523,   412,   413,   414,   877,
     433,   486,   487,   503,    85,   130,   488,   489,  1099,   125,
     336,   506,   487,   498,  1160,   500,   501,   433,  1041,   378,
     505,   506,   348,   505,   499,   500,   385,   130,   528,  1118,
     505,   671,   517,   124,   519,   517,   712,  1183,   125,  1185,
     127,   129,   517,   131,   478,   540,   124,   879,   533,    32,
      33,   485,    85,    85,  1200,   540,   132,    24,   499,   559,
    1149,   556,   125,   422,    85,   424,   551,   124,   125,   551,
     503,   128,   431,   933,    12,   434,   551,   127,   648,    29,
      30,    31,   318,   124,   569,   444,   322,   503,  1179,  1180,
     124,   569,   124,   132,   734,   735,   736,   571,   130,   569,
     132,  1095,   125,   124,   128,   130,   120,   125,   125,   130,
     129,   132,    85,   595,   124,   127,  1092,   124,     3,     4,
       5,     6,     7,     8,     9,   129,   559,   486,   487,   129,
     129,   977,   129,   260,   727,   262,    21,    22,    23,   498,
    1134,   500,   501,   559,    85,   129,   505,  1032,   129,   634,
     129,   124,   745,   129,   129,   640,   124,   130,   517,   132,
     519,  1137,   131,   648,   646,   647,    13,    14,    15,    16,
     406,   407,   657,   499,   533,   129,   412,   413,   414,   131,
     129,   540,   129,   124,   666,   421,   129,   423,   125,   130,
     129,   132,   551,   125,   134,   131,   130,   433,   131,   406,
     407,   129,   126,   330,   135,   412,   413,   414,   135,  1069,
     569,   645,    44,     3,   125,   124,   124,   124,   134,   134,
     347,   131,   135,   129,   129,   129,   433,   709,   131,   131,
     664,   128,   127,   124,   719,   720,   721,   129,   131,  1124,
      84,   723,   724,   124,   124,   134,   373,   130,   375,   128,
      84,   135,   126,   267,   129,  1023,   124,   124,   128,   135,
    1128,   126,   135,    37,   128,   131,   699,   503,  1023,   129,
     129,    84,   129,     3,   124,   634,   131,   130,   129,   131,
     516,   640,   518,   131,    84,   131,   131,   129,   131,   648,
    1158,   131,  1160,   131,   131,  1155,   503,  1182,   657,   124,
     131,   131,   131,   803,   318,   127,   124,   135,   322,   129,
     131,    13,    13,   124,   550,   800,     5,  1185,    47,    67,
    1205,   131,   336,   559,   964,   131,  1094,  1095,   135,   131,
     131,   135,   131,   131,   348,   131,  1196,   131,   127,  1094,
     124,     5,   125,   124,   921,   921,    35,   781,   921,   929,
     586,   587,   559,   881,  1028,   786,   921,   268,   921,   793,
     719,   720,   721,  1147,  1076,   921,  1134,   795,   582,   581,
     803,   866,   745,   921,   872,     3,     4,     5,     6,     7,
       8,     9,   877,   551,     5,   733,   921,   803,   999,   842,
    1107,  1145,   877,    21,    22,    23,   945,  1140,   800,   725,
    1040,  1041,  1042,  1037,   477,   476,   653,   421,  1174,   423,
      99,   397,   569,   850,   703,  1055,    44,   397,   107,   845,
     553,    49,   708,   962,   921,  1055,   337,   964,  1024,   948,
     538,    -1,    -1,    -1,    -1,   671,   921,   921,   923,    -1,
     676,   800,   927,   921,   929,   973,   921,   921,    -1,    -1,
     921,   921,   921,    -1,    -1,   112,  1015,  1154,  1024,    -1,
     696,    -1,  1017,    -1,   671,    -1,  1163,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,   388,  1118,    -1,
     921,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,   696,
      -1,   925,    -1,    -1,    -1,  1024,    -1,    -1,   734,   735,
     736,    -1,   516,    -1,   518,    -1,    -1,    -1,   136,  1149,
      -1,    -1,  1024,  1079,   999,  1024,  1001,  1076,   877,  1001,
      -1,   999,  1077,  1089,     5,   999,  1001,   734,   735,   736,
    1015,  1015,  1032,    -1,    -1,    -1,   550,  1015,  1023,  1024,
    1015,  1015,    -1,  1028,  1015,    -1,  1015,    -1,    -1,  1024,
    1079,    -1,    -1,    -1,  1024,    -1,    37,    -1,   999,    -1,
    1089,    -1,   921,    -1,   923,    -1,   477,   803,   927,  1135,
     929,    -1,   586,   587,  1015,    -1,    -1,  1089,  1171,    -1,
      -1,    -1,    -1,  1024,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,  1079,    -1,   803,     5,  1076,  1032,
    1095,  1086,  1086,  1037,  1089,    -1,  1135,   264,  1086,  1094,
    1095,  1086,  1086,    -1,  1089,  1086,  1032,  1086,   854,    -1,
      -1,    -1,    -1,  1135,  1124,    -1,    -1,    -1,    -1,    37,
     112,    49,   543,   115,    -1,  1076,   293,    -1,  1079,  1134,
     999,    -1,  1001,  1128,   333,  1086,  1128,   854,  1089,  1134,
    1135,    -1,    -1,  1128,    -1,    -1,  1015,    -1,    -1,    -1,
    1135,    -1,   676,  1191,  1023,  1024,  1144,   113,    -1,  1028,
      -1,   582,    -1,  1158,  1202,  1160,  1158,    -1,  1160,    -1,
      -1,  1181,  1182,  1158,    -1,  1160,    -1,    -1,    -1,  1189,
    1131,  1124,    -1,    -1,  1135,    -1,   932,    -1,  1024,    -1,
    1185,    -1,    -1,  1185,    -1,  1205,    -1,   115,  1124,    -1,
    1185,   725,    -1,     3,     4,     5,     6,     7,     8,     9,
    1079,   378,    -1,    -1,    -1,   932,   962,  1086,   964,    -1,
    1089,    21,    22,    23,    -1,  1094,  1095,    -1,    -1,    -1,
      -1,    -1,   978,    -1,    -1,    -1,    -1,    -1,  1181,  1182,
      -1,    -1,    -1,  1079,   443,   962,  1189,   964,    -1,    49,
      -1,    -1,    -1,  1089,    -1,  1181,  1182,    -1,   249,  1128,
      -1,    -1,  1205,  1189,    -1,  1134,  1135,    -1,    -1,    -1,
      -1,    -1,   264,    -1,    -1,    -1,    -1,   444,    -1,  1205,
      -1,    -1,    -1,    -1,    -1,  1031,  1032,    -1,    -1,  1158,
      -1,  1160,    -1,    -1,  1040,  1041,  1042,   288,   289,  1135,
    1046,   293,   294,    -1,    -1,    -1,    -1,  1053,    -1,  1055,
    1056,    -1,    -1,    -1,  1031,  1032,  1185,    -1,    -1,   486,
      -1,    -1,    -1,  1040,  1041,  1042,    -1,    -1,    -1,  1046,
      -1,   249,    -1,   324,    -1,   326,  1053,    -1,  1055,    -1,
      -1,   297,    -1,    -1,    -1,   301,   302,    -1,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,    -1,    -1,   320,  1111,   533,  1113,    -1,   790,
     288,   289,  1118,    -1,    -1,    -1,   294,    -1,  1124,    -1,
     801,   802,    -1,    -1,    -1,    -1,   378,    -1,    -1,   556,
      -1,    -1,    -1,   385,  1111,    -1,  1113,    -1,    -1,    -1,
      -1,  1118,    -1,  1149,    -1,    -1,   324,  1124,   326,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   621,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    -1,  1149,   424,    -1,  1181,  1182,  1074,    -1,   431,
      -1,    -1,    -1,  1189,     3,     4,     5,     6,     7,     8,
       9,    -1,   444,    -1,   978,    49,    50,  1203,    52,  1205,
      -1,  1207,    -1,    -1,  1181,  1182,   422,    -1,    -1,    -1,
      -1,    -1,  1189,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   648,    -1,    -1,    -1,    -1,    -1,    -1,  1205,    -1,
     657,    85,  1129,    -1,    -1,    -1,  1133,   453,   454,   455,
    1024,    -1,   458,    -1,    -1,    -1,   424,   498,   500,    -1,
     501,    -1,    -1,    -1,    -1,    -1,   434,    -1,    -1,    -1,
      -1,    -1,  1159,    -1,    -1,    -1,    -1,    -1,   519,    -1,
     486,    -1,  1056,    -1,    -1,    -1,   492,    -1,    -1,    -1,
      -1,   533,   136,    -1,    -1,    -1,    -1,    -1,   540,   505,
      -1,   750,    -1,    -1,    -1,  1079,    -1,    -1,    -1,   758,
     551,   517,    -1,   762,   763,  1089,    -1,   766,   767,   768,
     769,   770,   771,   772,   773,   774,   775,    -1,    -1,    -1,
     498,    -1,    -1,   501,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,   519,    -1,    -1,  1025,    -1,  1027,  1131,  1029,    -1,
      -1,  1135,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,
      -1,    -1,    -1,   551,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,   634,  1168,    -1,    -1,    -1,    -1,    -1,
      -1,   569,     3,     4,     5,     6,     7,     8,     9,  1080,
      -1,    -1,    -1,    -1,    -1,   657,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    -1,    -1,    85,    -1,    -1,  1203,
      -1,    -1,    -1,  1207,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   648,    -1,    -1,    -1,    -1,    -1,    49,   866,
      -1,   657,    -1,    -1,    -1,   904,    -1,    -1,   907,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   634,    -1,    -1,    -1,
      -1,    -1,   640,    -1,    -1,    -1,    -1,   136,   719,   720,
     721,    -1,    -1,    -1,    85,     3,     4,     5,     6,     7,
       8,     9,    -1,   942,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,    43,    44,   128,    -1,    -1,
      -1,    49,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     999,   719,   720,   721,    25,    26,    27,    -1,    -1,   800,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    85,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,   795,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,  1023,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,   136,   128,
      -1,    -1,    -1,    -1,    49,    50,    -1,   136,    -1,    54,
      55,    -1,   800,    -1,    -1,   877,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,  1094,    -1,   921,
     921,    -1,   923,    -1,    -1,    -1,   927,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   127,    -1,   129,   130,    -1,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,   921,    -1,   923,    -1,   999,    -1,   927,
    1001,   929,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,  1015,    -1,    -1,    49,    -1,    -1,    -1,
      -1,  1023,  1024,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    85,    25,    26,    27,    28,
      -1,    -1,    85,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      49,    50,    -1,  1001,    53,    -1,    -1,  1079,    -1,    -1,
      -1,    -1,    -1,    -1,  1086,    12,    -1,  1089,    -1,    -1,
      -1,    -1,  1094,  1095,    -1,    -1,   136,    -1,    -1,    -1,
    1028,    -1,    -1,   136,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    54,    55,    -1,
      -1,    -1,  1134,  1135,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   136,    -1,    -1,
      -1,    -1,  1128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1158,    -1,  1160,    -1,    -1,    -1,    -1,    -1,
     127,    -1,   129,   130,    -1,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,  1185,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,    -1,   127,   128,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,    -1,   127,   128,   129,   130,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,    -1,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,    -1,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,   128,
     129,   130,    -1,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,   126,   127,   128,   129,   130,
      -1,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,    -1,
     127,   128,   129,   130,    -1,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,    -1,   127,   128,   129,   130,    -1,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,   127,   128,
     129,   130,   131,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
     125,    -1,   127,   128,   129,   130,    -1,   132,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,   125,    -1,   127,   128,   129,   130,
      -1,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
     127,   128,   129,   130,    -1,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   124,   125,   126,   127,   128,   129,   130,    -1,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,   127,   128,
     129,   130,    -1,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,   127,   128,   129,   130,    -1,    -1,   133,   134,
      -1,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
     127,   128,   129,   130,   131,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,   127,   128,   129,   130,   131,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,   127,   128,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,   127,   128,   129,   130,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,   127,   128,   129,   130,
      -1,   132,   133,   134,    -1,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,
     127,   128,   129,   130,    -1,   132,   133,   134,    -1,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   125,    -1,   127,   128,    -1,   130,    -1,   132,
     133,   134,    -1,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   125,    -1,    -1,   128,
      -1,   130,    -1,   132,   133,   134,    -1,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     125,    -1,    -1,   128,    -1,   130,    -1,   132,   133,   134,
      -1,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,   146,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   125,    -1,    -1,   128,    -1,   130,
      -1,    -1,   133,   134,    -1,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,   146,     3,     4,     5,     6,
       7,     8,     9,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    21,    22,    23,    -1,    25,    26,
      27,    28,    51,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,    -1,   124,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    49,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,   136,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,   136,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    44,    -1,    -1,    -1,    -1,    49,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    -1,    -1,   136,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    43,
      -1,    -1,    -1,    -1,    -1,    49,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    21,    22,    23,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    49,    21,    22,    23,    -1,    85,    -1,
      -1,    -1,   136,    21,    22,    23,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    49,    -1,    -1,    -1,    -1,    -1,   124,   125,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,   124,    -1,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,   125,
      -1,    -1,   128,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    51,    -1,    -1,   124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,    -1,    -1,    -1,   137,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   133,    21,    22,    23,   137,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    25,    -1,    27,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   148,   149,     0,   150,   362,   363,     3,     4,     5,
       6,     7,     8,     9,    21,    22,    23,    25,    26,    27,
      28,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      42,    43,    44,    49,    50,    51,    52,    53,    85,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   124,   136,   151,   152,   153,
     154,   155,   157,   158,   159,   160,   161,   163,   166,   181,
     182,   183,   185,   186,   196,   197,   206,   208,   209,   211,
     228,   229,   230,   231,   234,   235,   238,   243,   284,   314,
     315,   316,   317,   319,   320,   321,   322,   324,   326,   327,
     330,   331,   332,   333,   334,   336,   337,   340,   341,   352,
     353,   354,   387,   374,    25,    26,    52,    12,    44,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      35,    36,    37,    38,    39,    40,    42,    43,    44,    45,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   125,
     127,   128,   129,   130,   132,   133,   134,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   353,   354,
     412,   413,   414,   444,   445,   446,   447,   448,   325,   342,
       3,     4,     5,     6,     7,     8,     9,    39,    42,   161,
     166,   183,   186,   316,   317,   322,   324,   330,   336,     3,
       4,     5,     6,     7,     8,     9,   125,   327,     3,     4,
       5,     6,     7,     8,     9,    21,    22,    23,    50,    52,
     207,   314,   316,   317,   321,   322,   324,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   328,   162,
     372,   373,   328,   125,   372,    44,    53,   152,   159,   160,
     186,   192,   209,   211,   228,   284,   330,   336,    46,   124,
     125,   257,   258,   257,   257,   257,   130,   166,   330,   336,
     124,   362,    44,   235,   262,   265,   315,   320,   322,   324,
     168,   322,   324,   326,   327,   321,   315,   316,   321,   362,
     321,   132,   161,   166,   183,   186,   197,   235,   317,   331,
     340,   362,    10,    11,    84,   222,   285,   294,   296,    78,
     133,   137,   290,   355,   356,   357,   358,   361,   338,   362,
     362,    24,   375,   327,   125,   444,   440,   440,    64,   138,
     212,   430,   440,   441,   440,    10,    11,   130,   434,   314,
      12,   328,   372,   328,   372,   315,   161,   183,   201,   202,
     205,   222,   294,   440,   127,   156,   314,   314,   124,   364,
     365,   238,   242,   243,   317,     3,     4,     5,     6,     7,
       8,     9,   326,   389,   392,   393,   326,   326,   397,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,    41,    51,   286,   289,   290,   329,   331,
     354,   125,   124,   128,   167,   168,   317,   321,   322,   324,
     374,   286,   184,   124,   128,   187,   314,   314,   372,   330,
     222,   128,   267,   440,   236,   372,   318,    45,    48,   248,
     249,   130,   321,   321,   321,   323,   328,   372,   328,   372,
     235,   262,   362,   339,   297,   239,   240,   242,   243,   244,
     260,   304,   315,   317,   287,   127,   277,   278,   280,   281,
     222,   294,   303,   355,   366,   367,   366,   366,   356,   358,
     328,    53,   376,   377,   378,   379,   380,   125,   149,   441,
     124,   132,   135,   442,   443,   444,   126,   213,   215,   216,
     218,   220,   135,   124,   443,   131,   436,   437,   435,   362,
     198,   200,   290,   167,   198,   314,   328,   328,   199,   304,
     315,   322,   324,   126,   316,   322,   125,   124,   127,   374,
      12,    54,    55,    64,   127,   129,   130,   132,   134,   138,
     411,   412,   238,   242,   129,   326,   326,   326,   129,   129,
     326,   129,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   129,   131,   131,   129,   124,   287,   285,   362,   170,
     165,     3,   124,   169,   362,   168,   322,   324,   317,   124,
     189,   190,   326,   188,   187,   362,   314,   317,   268,   269,
     314,   125,   126,   270,   271,   167,   322,   368,   369,   434,
     266,   424,   286,   167,   286,   314,   328,   334,   335,   360,
      32,    33,   245,   246,   247,   364,   245,   306,   307,   308,
     364,   239,   244,   315,   124,   129,   279,   125,   438,   130,
     131,   294,   374,   359,   207,   314,   135,   378,   129,   320,
     327,   382,   384,   149,   126,   124,   135,   129,   430,    25,
      27,   186,   316,   322,   324,   330,   347,   348,   351,   352,
      26,    50,   223,   211,   420,   420,   420,   124,   199,   205,
     124,   187,   198,   198,   124,   129,   130,   364,   124,   149,
     210,     3,   134,   134,    64,   138,   131,   135,   388,   129,
     131,   131,   394,   396,   129,   336,   400,   402,   404,   406,
     401,   403,   405,   407,   408,   409,   314,    29,    30,    31,
     126,   171,   172,    29,    30,    31,    37,   176,   177,   180,
     314,   128,   362,   168,   126,   129,   127,   337,   124,   326,
     129,   445,   447,   440,   131,    84,   272,   274,   362,   321,
     251,   374,   270,    24,    85,   127,   128,   129,   132,   134,
     146,   353,   354,   412,   413,   414,   418,   419,   426,   427,
     428,   430,   431,   434,   438,   124,   124,   124,   187,   334,
      78,   133,   250,   130,   134,   309,   310,   128,   130,   364,
     288,    64,   132,   138,   415,   416,   418,   428,   439,   282,
     414,   295,   360,   128,   135,   379,   321,    84,   381,   128,
     434,   126,   214,   314,   314,   314,   340,   222,   291,   296,
     290,   349,   291,   223,    64,   127,   129,   131,   132,   138,
     418,   421,   422,   131,   131,   124,   124,   200,   203,   126,
     336,   135,   135,   336,   390,   336,   336,   398,   131,   336,
     336,   336,   336,   336,   336,   336,   336,   336,   336,   129,
     410,   362,   128,   179,   180,   129,    37,   178,   222,   164,
     362,   190,   191,   127,   193,   445,   269,   222,   222,   126,
     237,   129,   275,     3,   252,   263,   131,   433,   429,   432,
     124,   248,   241,   311,   310,    13,    14,    15,    16,   305,
     261,   289,   417,   416,   425,   129,   131,   130,   298,   307,
     320,   383,   215,   350,   293,   304,   217,   366,   328,   219,
     291,   270,   291,   131,   336,   395,   131,   336,   131,   131,
     131,   131,   131,   131,   131,   131,   129,   129,   131,    41,
      42,    53,   123,   124,   153,   158,   160,   173,   174,   175,
     181,   182,   196,   206,   209,   211,   232,   233,   234,   262,
     284,   314,   315,   317,   330,   336,   387,   314,   362,   314,
     176,   415,   441,   124,   259,   245,    84,   273,   336,   267,
     420,   424,   420,   368,   270,   312,   313,   270,   419,   124,
     126,   422,   423,   283,   299,   385,   328,   298,   127,   224,
     225,   291,   302,   355,   224,   221,   131,   124,   391,   129,
     399,    13,    13,   158,   166,   194,   211,   233,   315,   330,
     336,   447,   160,   174,   175,   209,   211,   232,   284,   330,
     257,   124,   242,   262,   317,   222,   222,   177,   222,    47,
     274,   291,   264,   135,   430,   135,    67,   254,   255,   131,
     135,   415,   131,   415,   270,   127,   386,   421,   226,   131,
     291,   224,   204,   131,   441,   131,   131,   131,   372,   166,
     194,   330,   257,   166,   222,   330,   364,   242,   244,   447,
     276,   127,   253,   135,   256,   251,   370,   371,   131,   227,
     426,   292,   301,   131,   125,   128,   167,   195,   372,   166,
     372,   124,   364,   125,   277,    19,    55,    56,   330,   341,
     343,   344,   253,   374,   300,   426,   298,    32,    34,    45,
      48,   440,   441,   169,   167,   372,   167,   195,   124,   440,
     341,   345,   290,   301,   447,   447,   126,   124,   195,   167,
     169,   126,   346,   328,   368,   441,   195,   328,   124
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   147,   148,   149,   150,   149,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   152,   152,   152,   152,   152,   152,
     153,   153,   154,   155,   156,   155,   155,   157,   158,   158,
     159,   159,   159,   160,   160,   162,   161,   164,   163,   163,
     165,   163,   163,   166,   166,   166,   167,   167,   167,   168,
     168,   169,   169,   170,   171,   170,   170,   172,   172,   172,
     173,   173,   173,   173,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   173,   173,   173,   174,   174,   174,   174,
     174,   174,   175,   175,   175,   175,   176,   176,   177,   177,
     177,   178,   178,   179,   179,   180,   180,   180,   181,   181,
     181,   182,   182,   184,   183,   185,   185,   186,   186,   186,
     187,   188,   187,   189,   189,   190,   190,   191,   190,   192,
     193,   193,   194,   194,   194,   194,   195,   195,   196,   196,
     197,   197,   197,   197,   197,   198,   199,   199,   200,   201,
     201,   203,   204,   202,   205,   206,   207,   207,   207,   207,
     207,   207,   208,   210,   209,   211,   212,   211,   213,   214,
     213,   216,   217,   215,   218,   219,   215,   220,   221,   215,
     222,   222,   223,   223,   224,   224,   226,   225,   227,   227,
     228,   228,   228,   228,   229,   230,   230,   230,   231,   231,
     231,   232,   232,   232,   233,   233,   233,   233,   234,   234,
     234,   236,   237,   235,   238,   239,   241,   240,   242,   243,
     244,   245,   246,   246,   247,   247,   248,   248,   248,   249,
     249,   250,   250,   250,   251,   251,   252,   253,   253,   253,
     253,   254,   254,   256,   255,   257,   257,   257,   258,   259,
     259,   261,   260,   263,   264,   262,   266,   265,   267,   267,
     268,   268,   269,   269,   270,   271,   270,   272,   273,   272,
     272,   272,   275,   276,   274,   277,   277,   279,   278,   280,
     278,   281,   278,   282,   283,   282,   284,   285,   286,   286,
     287,   288,   287,   289,   290,   290,   291,   292,   291,   293,
     293,   294,   295,   294,   297,   296,   296,   298,   299,   300,
     298,   298,   301,   301,   301,   301,   301,   301,   302,   302,
     303,   303,   304,   304,   305,   305,   305,   305,   306,   306,
     308,   307,   309,   309,   311,   310,   312,   313,   312,   314,
     314,   315,   315,   315,   315,   315,   316,   316,   316,   317,
     317,   317,   317,   317,   317,   318,   317,   319,   320,   321,
     323,   322,   325,   324,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   327,   327,   327,   327,   327,   327,
     327,   328,   328,   329,   329,   329,   329,   330,   330,   331,
     331,   331,   331,   332,   332,   332,   332,   332,   333,   333,
     333,   334,   334,   335,   335,   336,   338,   337,   339,   337,
     340,   340,   340,   341,   341,   342,   341,   341,   341,   343,
     345,   344,   346,   344,   347,   349,   348,   350,   348,   351,
     351,   351,   351,   351,   351,   351,   352,   352,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   355,   355,   355,   355,   356,   357,   359,
     358,   360,   360,   361,   361,   363,   362,   365,   364,   367,
     366,   369,   368,   371,   370,   373,   372,   374,   374,   375,
     376,   376,   377,   378,   378,   378,   378,   380,   379,   381,
     381,   382,   382,   383,   382,   384,   384,   385,   385,   386,
     386,   388,   387,   389,   390,   391,   387,   392,   387,   393,
     387,   394,   395,   387,   396,   387,   397,   398,   399,   387,
     387,   400,   387,   401,   387,   402,   387,   403,   387,   404,
     387,   405,   387,   406,   387,   407,   387,   408,   387,   409,
     387,   387,   387,   387,   410,   410,   411,   411,   411,   411,
     411,   411,   411,   411,   411,   411,   411,   411,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   412,   412,   412,   412,   412,   412,   412,   412,   412,
     412,   412,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   413,   413,   413,   413,   413,   413,   413,   413,
     413,   413,   414,   414,   414,   414,   414,   414,   414,   414,
     414,   415,   415,   416,   416,   416,   417,   416,   416,   418,
     418,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   420,   420,   421,   421,   421,   421,   422,   422,   422,
     423,   423,   424,   424,   425,   425,   426,   426,   427,   427,
     427,   429,   428,   430,   430,   432,   431,   433,   431,   435,
     434,   436,   434,   437,   434,   439,   438,   440,   440,   441,
     441,   442,   442,   443,   443,   444,   444,   444,   444,   444,
     444,   444,   444,   444,   444,   444,   444,   444,   444,   444,
     444,   444,   445,   446,   446,   447,   448,   448,   448
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
       2,     2,     2,     3,     2,     3,     1,     4,     2,     4,
       4,     0,     1,     0,     1,     1,     1,     1,     5,     3,
       6,     4,     5,     0,     5,     4,     3,     1,     2,     2,
       0,     0,     3,     1,     3,     0,     1,     0,     4,     6,
       2,     1,     5,     6,     3,     4,     5,     3,     1,     2,
       5,     5,     6,     5,     6,     2,     0,     3,     2,     1,
       1,     0,     0,     8,     1,     3,     1,     2,     2,     2,
       3,     3,     4,     0,     8,     3,     0,     5,     1,     0,
       4,     0,     0,     5,     0,     0,     5,     0,     0,     6,
       0,     1,     1,     1,     0,     1,     0,     3,     1,     2,
       2,     2,     2,     2,     3,     4,     2,     3,     2,     3,
       4,     2,     4,     5,     3,     1,     1,     2,     1,     2,
       3,     0,     0,     7,     2,     2,     0,     6,     2,     1,
       2,     7,     0,     1,     1,     1,     0,     2,     1,     1,
       1,     0,     1,     1,     0,     2,     1,     0,     2,     2,
       2,     0,     1,     0,     3,     3,     1,     1,     6,     0,
       6,     0,     6,     0,     0,     8,     0,     5,     0,     2,
       1,     3,     3,     3,     0,     0,     2,     1,     0,     4,
       3,     1,     0,     0,     6,     0,     1,     0,     3,     0,
       2,     0,     4,     1,     0,     4,     4,     2,     0,     2,
       0,     0,     4,     2,     0,     1,     3,     0,     6,     0,
       1,     3,     0,     5,     0,     3,     1,     0,     0,     0,
       7,     1,     0,     2,     2,     3,     3,     2,     1,     2,
       1,     2,     2,     4,     1,     1,     1,     1,     0,     1,
       0,     2,     1,     2,     0,     5,     0,     0,     2,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     0,     5,     1,     1,     1,
       0,     5,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     1,     1,     1,     1,     2,     3,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     0,     3,     0,     4,
       1,     3,     4,     1,     1,     0,     4,     2,     2,     2,
       0,     3,     0,     4,     2,     0,     3,     0,     4,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     0,
       4,     0,     1,     1,     2,     0,     2,     0,     2,     0,
       2,     0,     2,     0,     2,     0,     2,     0,     2,     4,
       2,     1,     3,     0,     1,     2,     3,     0,     3,     0,
       1,     1,     2,     0,     4,     1,     3,     0,     2,     1,
       1,     0,     7,     0,     0,     0,     9,     0,     5,     0,
       5,     0,     0,    10,     0,     7,     0,     0,     0,     9,
       6,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     9,     0,
       9,     4,     4,     7,     0,     1,     2,     2,     3,     3,
       1,     1,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     0,     4,     1,     1,     0,     4,     0,     5,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     3,     1,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       5,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   237,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     3,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   239,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   231,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   233,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   235,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     9,    11,    13,    15,
      17,    19,    21,    23,    25,    27,    29,    31,    33,    35,
      37,    39,    41,    43,    45,    47,    49,    51,    53,    55,
      57,    59,    61,    63,    65,    67,    69,     0,    71,    73,
      75,    77,    79,    81,     0,    83,    85,    87,    89,     0,
       0,    91,    93,    95,    97,    99,   101,   103,   105,   107,
     109,   111,   113,   115,   117,   119,   121,   123,   125,   127,
     129,   131,   133,   135,   137,   139,   141,   143,   145,   147,
     149,   151,   153,   155,   157,   159,   161,     0,   163,     0,
     165,   167,   169,   171,   173,   175,   177,   179,   181,   183,
     185,   187,   189,   191,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   195,     0,
       0,   197,   199,   201,     0,   203,   205,   207,     0,   209,
     211,   213,   215,   217,   219,   221,   223,   225,   227,   229,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   411,     0,   411,     0,   411,     0,   322,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   681,     0,   681,     0,   681,     0,   681,     0,   681,
       0,   307,     0,   307,     0,   307,     0,   411,     0,   317,
       0,   411,     0
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
static inline const char*
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
static void yyfillin (yyGLRStackItem *, int, int);
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
static inline int yyfill (yyGLRStackItem *, int *, int, yybool);
static inline int
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
  yybool yynormal = (yystackp->yysplitPoint == YY_NULLPTR);
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
    *yyvalp = yyvsp[YYFILL (1-(int)yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 4:
#line 1961 "vtkParse.y" /* glr.c:816  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6050 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 34:
#line 2015 "vtkParse.y" /* glr.c:816  */
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6056 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 35:
#line 2016 "vtkParse.y" /* glr.c:816  */
    { popNamespace(); }
#line 6062 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 45:
#line 2040 "vtkParse.y" /* glr.c:816  */
    { pushType(); }
#line 6068 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 46:
#line 2041 "vtkParse.y" /* glr.c:816  */
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
#line 6084 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 47:
#line 2055 "vtkParse.y" /* glr.c:816  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer);
    }
#line 6093 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 49:
#line 2061 "vtkParse.y" /* glr.c:816  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer);
    }
#line 6102 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 50:
#line 2066 "vtkParse.y" /* glr.c:816  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer));
    }
#line 6110 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 52:
#line 2071 "vtkParse.y" /* glr.c:816  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer));
    }
#line 6118 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 53:
#line 2076 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6124 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 54:
#line 2077 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 1; }
#line 6130 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 55:
#line 2078 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 2; }
#line 6136 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 56:
#line 2082 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6142 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 57:
#line 2084 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6148 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 61:
#line 2092 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6154 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 62:
#line 2093 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0); }
#line 6160 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 64:
#line 2097 "vtkParse.y" /* glr.c:816  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6172 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 67:
#line 2109 "vtkParse.y" /* glr.c:816  */
    { access_level = VTK_ACCESS_PUBLIC; }
#line 6178 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 68:
#line 2110 "vtkParse.y" /* glr.c:816  */
    { access_level = VTK_ACCESS_PRIVATE; }
#line 6184 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 69:
#line 2111 "vtkParse.y" /* glr.c:816  */
    { access_level = VTK_ACCESS_PROTECTED; }
#line 6190 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 95:
#line 2143 "vtkParse.y" /* glr.c:816  */
    { output_friend_function(); }
#line 6196 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 98:
#line 2151 "vtkParse.y" /* glr.c:816  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 6202 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 99:
#line 2153 "vtkParse.y" /* glr.c:816  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6209 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 100:
#line 2156 "vtkParse.y" /* glr.c:816  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6216 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 101:
#line 2160 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6222 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 102:
#line 2161 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 6228 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 103:
#line 2164 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = access_level; }
#line 6234 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 105:
#line 2168 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
#line 6240 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 106:
#line 2169 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
#line 6246 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 107:
#line 2170 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
#line 6252 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 113:
#line 2192 "vtkParse.y" /* glr.c:816  */
    { pushType(); }
#line 6258 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 114:
#line 2193 "vtkParse.y" /* glr.c:816  */
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
#line 6273 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 115:
#line 2206 "vtkParse.y" /* glr.c:816  */
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
    }
#line 6283 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 116:
#line 2212 "vtkParse.y" /* glr.c:816  */
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
#line 6293 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 117:
#line 2219 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6299 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 118:
#line 2220 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 1; }
#line 6305 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 119:
#line 2221 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 1; }
#line 6311 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 120:
#line 2224 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6317 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 121:
#line 2225 "vtkParse.y" /* glr.c:816  */
    { pushType(); }
#line 6323 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 122:
#line 2226 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = getType(); popType(); }
#line 6329 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 126:
#line 2233 "vtkParse.y" /* glr.c:816  */
    { closeComment(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), NULL); }
#line 6335 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 127:
#line 2234 "vtkParse.y" /* glr.c:816  */
    { postSig("="); markSig(); closeComment(); }
#line 6341 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 128:
#line 2235 "vtkParse.y" /* glr.c:816  */
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), copySig()); }
#line 6347 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 151:
#line 2295 "vtkParse.y" /* glr.c:816  */
    { pushFunction(); postSig("("); }
#line 6353 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 152:
#line 2296 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 6359 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 153:
#line 2297 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.integer)); popFunction(); }
#line 6365 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 154:
#line 2301 "vtkParse.y" /* glr.c:816  */
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
#line 6403 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 155:
#line 2341 "vtkParse.y" /* glr.c:816  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 0); }
#line 6409 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 157:
#line 2345 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str); }
#line 6415 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 158:
#line 2347 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6421 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 159:
#line 2349 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6427 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 160:
#line 2351 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6433 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 161:
#line 2353 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6439 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 162:
#line 2356 "vtkParse.y" /* glr.c:816  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 1); }
#line 6445 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 163:
#line 2359 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 6451 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 164:
#line 2361 "vtkParse.y" /* glr.c:816  */
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
#line 6480 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 165:
#line 2392 "vtkParse.y" /* glr.c:816  */
    { postSig("template<> "); clearTypeId(); }
#line 6486 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 166:
#line 2394 "vtkParse.y" /* glr.c:816  */
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
#line 6498 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 167:
#line 2402 "vtkParse.y" /* glr.c:816  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
#line 6510 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 169:
#line 2413 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
#line 6516 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 171:
#line 2417 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 6522 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 172:
#line 2419 "vtkParse.y" /* glr.c:816  */
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6528 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 174:
#line 2421 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 6534 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 175:
#line 2423 "vtkParse.y" /* glr.c:816  */
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6540 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 177:
#line 2425 "vtkParse.y" /* glr.c:816  */
    { pushTemplate(); markSig(); }
#line 6546 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 178:
#line 2428 "vtkParse.y" /* glr.c:816  */
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
#line 6559 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 180:
#line 2439 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 6565 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 181:
#line 2440 "vtkParse.y" /* glr.c:816  */
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 6571 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 182:
#line 2443 "vtkParse.y" /* glr.c:816  */
    { postSig("class "); }
#line 6577 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 183:
#line 2444 "vtkParse.y" /* glr.c:816  */
    { postSig("typename "); }
#line 6583 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 186:
#line 2450 "vtkParse.y" /* glr.c:816  */
    { postSig("="); markSig(); }
#line 6589 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 187:
#line 2452 "vtkParse.y" /* glr.c:816  */
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
#line 6600 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 190:
#line 2469 "vtkParse.y" /* glr.c:816  */
    { output_function(); }
#line 6606 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 191:
#line 2470 "vtkParse.y" /* glr.c:816  */
    { output_function(); }
#line 6612 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 192:
#line 2471 "vtkParse.y" /* glr.c:816  */
    { reject_function(); }
#line 6618 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 193:
#line 2472 "vtkParse.y" /* glr.c:816  */
    { reject_function(); }
#line 6624 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 201:
#line 2488 "vtkParse.y" /* glr.c:816  */
    { output_function(); }
#line 6630 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 211:
#line 2506 "vtkParse.y" /* glr.c:816  */
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 6640 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 212:
#line 2511 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 6646 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 213:
#line 2513 "vtkParse.y" /* glr.c:816  */
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
#line 6659 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 214:
#line 2524 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = copySig(); }
#line 6665 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 215:
#line 2528 "vtkParse.y" /* glr.c:816  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
#line 6677 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 216:
#line 2538 "vtkParse.y" /* glr.c:816  */
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 6687 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 217:
#line 2543 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 6693 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 218:
#line 2547 "vtkParse.y" /* glr.c:816  */
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6699 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 219:
#line 2550 "vtkParse.y" /* glr.c:816  */
    { markSig(); postSig("operator "); }
#line 6705 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 220:
#line 2554 "vtkParse.y" /* glr.c:816  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 6717 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 224:
#line 2571 "vtkParse.y" /* glr.c:816  */
    { postSig(" const"); currentFunction->IsConst = 1; }
#line 6723 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 225:
#line 2572 "vtkParse.y" /* glr.c:816  */
    { postSig(" volatile"); }
#line 6729 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 227:
#line 2575 "vtkParse.y" /* glr.c:816  */
    { chopSig(); }
#line 6735 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 229:
#line 2579 "vtkParse.y" /* glr.c:816  */
    { postSig(" noexcept"); }
#line 6741 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 230:
#line 2580 "vtkParse.y" /* glr.c:816  */
    { postSig(" throw"); }
#line 6747 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 232:
#line 2583 "vtkParse.y" /* glr.c:816  */
    { postSig("&"); }
#line 6753 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 233:
#line 2584 "vtkParse.y" /* glr.c:816  */
    { postSig("&&"); }
#line 6759 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 236:
#line 2591 "vtkParse.y" /* glr.c:816  */
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
#line 6768 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 238:
#line 2597 "vtkParse.y" /* glr.c:816  */
    { currentFunction->IsDeleted = 1; }
#line 6774 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 240:
#line 2600 "vtkParse.y" /* glr.c:816  */
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
#line 6784 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 243:
#line 2610 "vtkParse.y" /* glr.c:816  */
    { postSig(" -> "); clearType(); clearTypeId(); }
#line 6790 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 244:
#line 2612 "vtkParse.y" /* glr.c:816  */
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 6799 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 251:
#line 2630 "vtkParse.y" /* glr.c:816  */
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 6808 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 252:
#line 2634 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 6814 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 253:
#line 2645 "vtkParse.y" /* glr.c:816  */
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
#line 6833 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 254:
#line 2660 "vtkParse.y" /* glr.c:816  */
    {
      openSig();
    }
#line 6841 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 255:
#line 2664 "vtkParse.y" /* glr.c:816  */
    {
      postSig(";");
      closeSig();
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 6851 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 256:
#line 2671 "vtkParse.y" /* glr.c:816  */
    { pushType(); postSig("("); }
#line 6857 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 257:
#line 2672 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); popType(); }
#line 6863 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 265:
#line 2690 "vtkParse.y" /* glr.c:816  */
    { clearType(); clearTypeId(); }
#line 6869 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 267:
#line 2693 "vtkParse.y" /* glr.c:816  */
    { clearType(); clearTypeId(); }
#line 6875 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 268:
#line 2694 "vtkParse.y" /* glr.c:816  */
    { clearType(); clearTypeId(); postSig(", "); }
#line 6881 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 270:
#line 2697 "vtkParse.y" /* glr.c:816  */
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
#line 6887 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 271:
#line 2699 "vtkParse.y" /* glr.c:816  */
    { currentFunction->IsVariadic = 1; postSig("..."); }
#line 6893 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 272:
#line 2702 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 6899 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 273:
#line 2704 "vtkParse.y" /* glr.c:816  */
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
#line 6918 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 274:
#line 2719 "vtkParse.y" /* glr.c:816  */
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
      {
        currentFunction->Parameters[i]->Value = getVarValue();
      }
    }
#line 6930 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 275:
#line 2728 "vtkParse.y" /* glr.c:816  */
    { clearVarValue(); }
#line 6936 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 277:
#line 2732 "vtkParse.y" /* glr.c:816  */
    { postSig("="); clearVarValue(); markSig(); }
#line 6942 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 278:
#line 2733 "vtkParse.y" /* glr.c:816  */
    { chopSig(); setVarValue(copySig()); }
#line 6948 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 279:
#line 2734 "vtkParse.y" /* glr.c:816  */
    { clearVarValue(); markSig(); }
#line 6954 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 280:
#line 2735 "vtkParse.y" /* glr.c:816  */
    { chopSig(); setVarValue(copySig()); }
#line 6960 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 281:
#line 2736 "vtkParse.y" /* glr.c:816  */
    { clearVarValue(); markSig(); postSig("("); }
#line 6966 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 282:
#line 2738 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(")"); setVarValue(copySig()); }
#line 6972 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 283:
#line 2741 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6978 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 284:
#line 2742 "vtkParse.y" /* glr.c:816  */
    { postSig(", "); }
#line 6984 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 287:
#line 2754 "vtkParse.y" /* glr.c:816  */
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
#line 7057 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 291:
#line 2827 "vtkParse.y" /* glr.c:816  */
    { postSig(", "); }
#line 7063 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 294:
#line 2833 "vtkParse.y" /* glr.c:816  */
    { setTypePtr(0); }
#line 7069 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 295:
#line 2834 "vtkParse.y" /* glr.c:816  */
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7075 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 296:
#line 2839 "vtkParse.y" /* glr.c:816  */
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
#line 7090 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 297:
#line 2850 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7096 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 298:
#line 2851 "vtkParse.y" /* glr.c:816  */
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
#line 7115 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 299:
#line 2867 "vtkParse.y" /* glr.c:816  */
    { clearVarName(); chopSig(); }
#line 7121 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 301:
#line 2873 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer); }
#line 7127 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 302:
#line 2874 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7133 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 303:
#line 2876 "vtkParse.y" /* glr.c:816  */
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
#line 7152 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 304:
#line 2892 "vtkParse.y" /* glr.c:816  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 7158 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 305:
#line 2893 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 7164 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 306:
#line 2894 "vtkParse.y" /* glr.c:816  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 7171 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 307:
#line 2898 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 7177 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 308:
#line 2899 "vtkParse.y" /* glr.c:816  */
    { pushFunction(); postSig("("); }
#line 7183 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 309:
#line 2900 "vtkParse.y" /* glr.c:816  */
    { postSig(")"); }
#line 7189 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 310:
#line 2901 "vtkParse.y" /* glr.c:816  */
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
#line 7198 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 311:
#line 2905 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
#line 7204 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 314:
#line 2909 "vtkParse.y" /* glr.c:816  */
    { currentFunction->IsConst = 1; }
#line 7210 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 319:
#line 2917 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7216 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 321:
#line 2922 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7222 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 322:
#line 2925 "vtkParse.y" /* glr.c:816  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7228 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 323:
#line 2927 "vtkParse.y" /* glr.c:816  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str)); }
#line 7234 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 328:
#line 2936 "vtkParse.y" /* glr.c:816  */
    { clearArray(); }
#line 7240 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 330:
#line 2940 "vtkParse.y" /* glr.c:816  */
    { clearArray(); }
#line 7246 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 334:
#line 2947 "vtkParse.y" /* glr.c:816  */
    { postSig("["); }
#line 7252 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 335:
#line 2948 "vtkParse.y" /* glr.c:816  */
    { postSig("]"); }
#line 7258 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 336:
#line 2951 "vtkParse.y" /* glr.c:816  */
    { pushArraySize(""); }
#line 7264 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 337:
#line 2952 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 7270 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 338:
#line 2952 "vtkParse.y" /* glr.c:816  */
    { chopSig(); pushArraySize(copySig()); }
#line 7276 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 344:
#line 2966 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7282 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 345:
#line 2967 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7288 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 346:
#line 2971 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7294 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 347:
#line 2973 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7300 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 348:
#line 2975 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7306 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 349:
#line 2979 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7312 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 350:
#line 2981 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7318 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 351:
#line 2983 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7324 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 352:
#line 2985 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7330 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 353:
#line 2987 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7336 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 354:
#line 2989 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7342 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 355:
#line 2990 "vtkParse.y" /* glr.c:816  */
    { postSig("template "); }
#line 7348 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 356:
#line 2992 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7354 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 357:
#line 2995 "vtkParse.y" /* glr.c:816  */
    { postSig("~"); }
#line 7360 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 358:
#line 2998 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7366 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 359:
#line 3001 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
#line 7372 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 360:
#line 3004 "vtkParse.y" /* glr.c:816  */
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); postSig("<"); }
#line 7378 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 361:
#line 3006 "vtkParse.y" /* glr.c:816  */
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
#line 7387 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 362:
#line 3012 "vtkParse.y" /* glr.c:816  */
    { markSig(); postSig("decltype"); }
#line 7393 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 363:
#line 3013 "vtkParse.y" /* glr.c:816  */
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
#line 7399 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 364:
#line 3020 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7405 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 365:
#line 3021 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7411 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 366:
#line 3022 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7417 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 367:
#line 3023 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7423 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 368:
#line 3024 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7429 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 369:
#line 3025 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7435 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 370:
#line 3026 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7441 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 371:
#line 3027 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7447 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 372:
#line 3028 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7453 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 373:
#line 3029 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7459 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 384:
#line 3054 "vtkParse.y" /* glr.c:816  */
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 7465 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 385:
#line 3055 "vtkParse.y" /* glr.c:816  */
    { setTypeMod(VTK_PARSE_TYPEDEF); }
#line 7471 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 386:
#line 3056 "vtkParse.y" /* glr.c:816  */
    { setTypeMod(VTK_PARSE_FRIEND); }
#line 7477 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 389:
#line 3063 "vtkParse.y" /* glr.c:816  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7483 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 390:
#line 3064 "vtkParse.y" /* glr.c:816  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7489 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 391:
#line 3065 "vtkParse.y" /* glr.c:816  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7495 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 392:
#line 3066 "vtkParse.y" /* glr.c:816  */
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
#line 7501 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 393:
#line 3069 "vtkParse.y" /* glr.c:816  */
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
#line 7507 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 394:
#line 3070 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 7513 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 395:
#line 3071 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 7519 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 396:
#line 3072 "vtkParse.y" /* glr.c:816  */
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
#line 7525 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 397:
#line 3074 "vtkParse.y" /* glr.c:816  */
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
#line 7531 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 398:
#line 3077 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 7537 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 399:
#line 3078 "vtkParse.y" /* glr.c:816  */
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 7543 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 400:
#line 3079 "vtkParse.y" /* glr.c:816  */
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
#line 7549 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 401:
#line 3082 "vtkParse.y" /* glr.c:816  */
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
#line 7555 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 402:
#line 3083 "vtkParse.y" /* glr.c:816  */
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
#line 7561 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 404:
#line 3088 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7567 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 406:
#line 3098 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7573 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 408:
#line 3100 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7579 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 411:
#line 3106 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7585 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 412:
#line 3108 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7591 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 414:
#line 3113 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 7597 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 415:
#line 3114 "vtkParse.y" /* glr.c:816  */
    { postSig("typename "); }
#line 7603 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 416:
#line 3116 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7609 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 417:
#line 3118 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7615 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 418:
#line 3120 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7621 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 420:
#line 3126 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7627 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 422:
#line 3128 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7633 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 425:
#line 3135 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7639 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 427:
#line 3137 "vtkParse.y" /* glr.c:816  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7645 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 430:
#line 3143 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 7651 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 431:
#line 3145 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7657 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 432:
#line 3147 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7663 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 433:
#line 3149 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7669 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 434:
#line 3151 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7675 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 435:
#line 3153 "vtkParse.y" /* glr.c:816  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7681 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 436:
#line 3156 "vtkParse.y" /* glr.c:816  */
    { setTypeId(""); }
#line 7687 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 438:
#line 3160 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
#line 7693 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 439:
#line 3161 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
#line 7699 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 440:
#line 3162 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
#line 7705 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 441:
#line 3163 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
#line 7711 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 442:
#line 3164 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
#line 7717 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 443:
#line 3165 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
#line 7723 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 444:
#line 3166 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
#line 7729 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 445:
#line 3167 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
#line 7735 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 446:
#line 3168 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
#line 7741 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 447:
#line 3169 "vtkParse.y" /* glr.c:816  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
#line 7747 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 448:
#line 3172 "vtkParse.y" /* glr.c:816  */
    { postSig("auto "); ((*yyvalp).integer) = 0; }
#line 7753 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 449:
#line 3173 "vtkParse.y" /* glr.c:816  */
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
#line 7759 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 450:
#line 3174 "vtkParse.y" /* glr.c:816  */
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
#line 7765 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 451:
#line 3175 "vtkParse.y" /* glr.c:816  */
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
#line 7771 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 452:
#line 3176 "vtkParse.y" /* glr.c:816  */
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 7777 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 453:
#line 3177 "vtkParse.y" /* glr.c:816  */
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
#line 7783 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 454:
#line 3178 "vtkParse.y" /* glr.c:816  */
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
#line 7789 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 455:
#line 3179 "vtkParse.y" /* glr.c:816  */
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
#line 7795 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 456:
#line 3180 "vtkParse.y" /* glr.c:816  */
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
#line 7801 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 457:
#line 3181 "vtkParse.y" /* glr.c:816  */
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 7807 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 458:
#line 3182 "vtkParse.y" /* glr.c:816  */
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
#line 7813 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 459:
#line 3183 "vtkParse.y" /* glr.c:816  */
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
#line 7819 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 460:
#line 3184 "vtkParse.y" /* glr.c:816  */
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
#line 7825 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 461:
#line 3185 "vtkParse.y" /* glr.c:816  */
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 7831 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 462:
#line 3186 "vtkParse.y" /* glr.c:816  */
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
#line 7837 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 466:
#line 3209 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7843 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 467:
#line 3213 "vtkParse.y" /* glr.c:816  */
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 7849 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 468:
#line 3217 "vtkParse.y" /* glr.c:816  */
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
#line 7855 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 469:
#line 3220 "vtkParse.y" /* glr.c:816  */
    { postSig("*"); }
#line 7861 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 470:
#line 3221 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 7867 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 471:
#line 3224 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
#line 7873 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 472:
#line 3226 "vtkParse.y" /* glr.c:816  */
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
#line 7888 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 474:
#line 3242 "vtkParse.y" /* glr.c:816  */
    {
      unsigned int n;
      n = (((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) << 2) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
      {
        n = VTK_PARSE_BAD_INDIRECT;
      }
      ((*yyvalp).integer) = n;
    }
#line 7902 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 475:
#line 3266 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_DECL); }
#line 7908 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 476:
#line 3267 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 7914 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 477:
#line 3270 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_ID); }
#line 7920 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 478:
#line 3271 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 7926 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 479:
#line 3274 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_REF); }
#line 7932 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 480:
#line 3275 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 7938 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 481:
#line 3278 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_FUNC); }
#line 7944 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 482:
#line 3279 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 7950 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 483:
#line 3282 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_ARRAY); }
#line 7956 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 484:
#line 3283 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 7962 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 485:
#line 3286 "vtkParse.y" /* glr.c:816  */
    { setAttributeRole(VTK_PARSE_ATTRIB_CLASS); }
#line 7968 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 486:
#line 3287 "vtkParse.y" /* glr.c:816  */
    { clearAttributeRole(); }
#line 7974 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 489:
#line 3294 "vtkParse.y" /* glr.c:816  */
    { setAttributePrefix(NULL); }
#line 7980 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 492:
#line 3302 "vtkParse.y" /* glr.c:816  */
    { setAttributePrefix(vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "::")); }
#line 7986 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 497:
#line 3310 "vtkParse.y" /* glr.c:816  */
    { markSig(); }
#line 7992 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 498:
#line 3311 "vtkParse.y" /* glr.c:816  */
    { handle_attribute(cutSig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7998 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 499:
#line 3314 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = 0; }
#line 8004 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 500:
#line 3315 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 8010 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 503:
#line 3320 "vtkParse.y" /* glr.c:816  */
    { postSig(": "); }
#line 8016 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 510:
#line 3331 "vtkParse.y" /* glr.c:816  */
    { postSig("= "); }
#line 8022 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 511:
#line 3339 "vtkParse.y" /* glr.c:816  */
    {preSig("void Set"); postSig("(");}
#line 8028 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 512:
#line 3340 "vtkParse.y" /* glr.c:816  */
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8042 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 513:
#line 3349 "vtkParse.y" /* glr.c:816  */
    {postSig("Get");}
#line 8048 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 514:
#line 3350 "vtkParse.y" /* glr.c:816  */
    {markSig();}
#line 8054 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 515:
#line 3350 "vtkParse.y" /* glr.c:816  */
    {swapSig();}
#line 8060 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 516:
#line 3351 "vtkParse.y" /* glr.c:816  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
#line 8073 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 517:
#line 3359 "vtkParse.y" /* glr.c:816  */
    {preSig("void Set");}
#line 8079 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 518:
#line 3360 "vtkParse.y" /* glr.c:816  */
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8093 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 519:
#line 3369 "vtkParse.y" /* glr.c:816  */
    {preSig("char *Get");}
#line 8099 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 520:
#line 3370 "vtkParse.y" /* glr.c:816  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
#line 8112 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 521:
#line 3378 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8118 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 522:
#line 3378 "vtkParse.y" /* glr.c:816  */
    {closeSig();}
#line 8124 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 523:
#line 3380 "vtkParse.y" /* glr.c:816  */
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
#line 8159 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 524:
#line 3411 "vtkParse.y" /* glr.c:816  */
    {preSig("void Set"); postSig("("); }
#line 8165 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 525:
#line 3412 "vtkParse.y" /* glr.c:816  */
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8179 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 526:
#line 3421 "vtkParse.y" /* glr.c:816  */
    {postSig("*Get");}
#line 8185 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 527:
#line 3422 "vtkParse.y" /* glr.c:816  */
    {markSig();}
#line 8191 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 528:
#line 3422 "vtkParse.y" /* glr.c:816  */
    {swapSig();}
#line 8197 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 529:
#line 3423 "vtkParse.y" /* glr.c:816  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
#line 8210 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 530:
#line 3432 "vtkParse.y" /* glr.c:816  */
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
#line 8232 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 531:
#line 3449 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8238 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 532:
#line 3450 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8247 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 533:
#line 3454 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8253 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 534:
#line 3455 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8262 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 535:
#line 3459 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8268 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 536:
#line 3460 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8277 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 537:
#line 3464 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8283 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 538:
#line 3465 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8292 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 539:
#line 3469 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8298 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 540:
#line 3470 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8307 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 541:
#line 3474 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8313 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 542:
#line 3475 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8322 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 543:
#line 3479 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8328 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 544:
#line 3480 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8337 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 545:
#line 3484 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8343 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 546:
#line 3485 "vtkParse.y" /* glr.c:816  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8352 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 547:
#line 3489 "vtkParse.y" /* glr.c:816  */
    {startSig(); markSig();}
#line 8358 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 548:
#line 3491 "vtkParse.y" /* glr.c:816  */
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
#line 8378 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 549:
#line 3506 "vtkParse.y" /* glr.c:816  */
    {startSig();}
#line 8384 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 550:
#line 3508 "vtkParse.y" /* glr.c:816  */
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
#line 8401 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 551:
#line 3521 "vtkParse.y" /* glr.c:816  */
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
#line 8442 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 552:
#line 3558 "vtkParse.y" /* glr.c:816  */
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
#line 8484 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 553:
#line 3596 "vtkParse.y" /* glr.c:816  */
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
#line 8524 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 556:
#line 3640 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "()"; }
#line 8530 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 557:
#line 3641 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "[]"; }
#line 8536 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 558:
#line 3642 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = " new[]"; }
#line 8542 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 559:
#line 3643 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = " delete[]"; }
#line 8548 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 560:
#line 3644 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "<"; }
#line 8554 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 561:
#line 3645 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">"; }
#line 8560 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 562:
#line 3646 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ","; }
#line 8566 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 563:
#line 3647 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "="; }
#line 8572 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 564:
#line 3648 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">>"; }
#line 8578 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 565:
#line 3649 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">>"; }
#line 8584 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 566:
#line 3650 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8590 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 568:
#line 3654 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "%"; }
#line 8596 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 569:
#line 3655 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "*"; }
#line 8602 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 570:
#line 3656 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "/"; }
#line 8608 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 571:
#line 3657 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "-"; }
#line 8614 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 572:
#line 3658 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "+"; }
#line 8620 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 573:
#line 3659 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "!"; }
#line 8626 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 574:
#line 3660 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "~"; }
#line 8632 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 575:
#line 3661 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "&"; }
#line 8638 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 576:
#line 3662 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "|"; }
#line 8644 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 577:
#line 3663 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "^"; }
#line 8650 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 578:
#line 3664 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = " new"; }
#line 8656 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 579:
#line 3665 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = " delete"; }
#line 8662 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 580:
#line 3666 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "<<="; }
#line 8668 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 581:
#line 3667 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">>="; }
#line 8674 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 582:
#line 3668 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "<<"; }
#line 8680 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 583:
#line 3669 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ".*"; }
#line 8686 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 584:
#line 3670 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "->*"; }
#line 8692 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 585:
#line 3671 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "->"; }
#line 8698 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 586:
#line 3672 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "+="; }
#line 8704 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 587:
#line 3673 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "-="; }
#line 8710 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 588:
#line 3674 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "*="; }
#line 8716 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 589:
#line 3675 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "/="; }
#line 8722 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 590:
#line 3676 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "%="; }
#line 8728 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 591:
#line 3677 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "++"; }
#line 8734 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 592:
#line 3678 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "--"; }
#line 8740 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 593:
#line 3679 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "&="; }
#line 8746 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 594:
#line 3680 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "|="; }
#line 8752 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 595:
#line 3681 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "^="; }
#line 8758 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 596:
#line 3682 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "&&"; }
#line 8764 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 597:
#line 3683 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "||"; }
#line 8770 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 598:
#line 3684 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "=="; }
#line 8776 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 599:
#line 3685 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "!="; }
#line 8782 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 600:
#line 3686 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "<="; }
#line 8788 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 601:
#line 3687 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = ">="; }
#line 8794 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 602:
#line 3690 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "typedef"; }
#line 8800 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 603:
#line 3691 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "typename"; }
#line 8806 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 604:
#line 3692 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "class"; }
#line 8812 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 605:
#line 3693 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "struct"; }
#line 8818 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 606:
#line 3694 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "union"; }
#line 8824 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 607:
#line 3695 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "template"; }
#line 8830 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 608:
#line 3696 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "public"; }
#line 8836 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 609:
#line 3697 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "protected"; }
#line 8842 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 610:
#line 3698 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "private"; }
#line 8848 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 611:
#line 3699 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "const"; }
#line 8854 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 612:
#line 3700 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "volatile"; }
#line 8860 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 613:
#line 3701 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "static"; }
#line 8866 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 614:
#line 3702 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "thread_local"; }
#line 8872 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 615:
#line 3703 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "constexpr"; }
#line 8878 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 616:
#line 3704 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "inline"; }
#line 8884 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 617:
#line 3705 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "virtual"; }
#line 8890 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 618:
#line 3706 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "explicit"; }
#line 8896 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 619:
#line 3707 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "decltype"; }
#line 8902 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 620:
#line 3708 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "default"; }
#line 8908 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 621:
#line 3709 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "extern"; }
#line 8914 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 622:
#line 3710 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "using"; }
#line 8920 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 623:
#line 3711 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "namespace"; }
#line 8926 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 624:
#line 3712 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "operator"; }
#line 8932 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 625:
#line 3713 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "enum"; }
#line 8938 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 626:
#line 3714 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "throw"; }
#line 8944 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 627:
#line 3715 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "noexcept"; }
#line 8950 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 628:
#line 3716 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "const_cast"; }
#line 8956 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 629:
#line 3717 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "dynamic_cast"; }
#line 8962 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 630:
#line 3718 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "static_cast"; }
#line 8968 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 631:
#line 3719 "vtkParse.y" /* glr.c:816  */
    { ((*yyvalp).str) = "reinterpret_cast"; }
#line 8974 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 645:
#line 3743 "vtkParse.y" /* glr.c:816  */
    { postSig("< "); }
#line 8980 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 646:
#line 3744 "vtkParse.y" /* glr.c:816  */
    { postSig("> "); }
#line 8986 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 648:
#line 3745 "vtkParse.y" /* glr.c:816  */
    { postSig(">"); }
#line 8992 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 650:
#line 3749 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig("::"); }
#line 8998 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 654:
#line 3756 "vtkParse.y" /* glr.c:816  */
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
#line 9037 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 655:
#line 3790 "vtkParse.y" /* glr.c:816  */
    { postSig(":"); postSig(" "); }
#line 9043 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 656:
#line 3790 "vtkParse.y" /* glr.c:816  */
    { postSig("."); }
#line 9049 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 657:
#line 3791 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9055 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 658:
#line 3792 "vtkParse.y" /* glr.c:816  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9061 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 660:
#line 3794 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(" "); }
#line 9067 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 664:
#line 3801 "vtkParse.y" /* glr.c:816  */
    { postSig("< "); }
#line 9073 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 665:
#line 3802 "vtkParse.y" /* glr.c:816  */
    { postSig("> "); }
#line 9079 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 666:
#line 3803 "vtkParse.y" /* glr.c:816  */
    { postSig(">"); }
#line 9085 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 668:
#line 3807 "vtkParse.y" /* glr.c:816  */
    { postSig("= "); }
#line 9091 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 669:
#line 3808 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(", "); }
#line 9097 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 671:
#line 3812 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(";"); }
#line 9103 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 679:
#line 3826 "vtkParse.y" /* glr.c:816  */
    { postSig("= "); }
#line 9109 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 680:
#line 3827 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig(", "); }
#line 9115 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 681:
#line 3831 "vtkParse.y" /* glr.c:816  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
#line 9125 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 682:
#line 3837 "vtkParse.y" /* glr.c:816  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
#line 9135 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 685:
#line 3848 "vtkParse.y" /* glr.c:816  */
    { postSigLeftBracket("["); }
#line 9141 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 686:
#line 3849 "vtkParse.y" /* glr.c:816  */
    { postSigRightBracket("] "); }
#line 9147 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 687:
#line 3850 "vtkParse.y" /* glr.c:816  */
    { postSig("[["); }
#line 9153 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 688:
#line 3851 "vtkParse.y" /* glr.c:816  */
    { chopSig(); postSig("]] "); }
#line 9159 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 689:
#line 3854 "vtkParse.y" /* glr.c:816  */
    { postSigLeftBracket("("); }
#line 9165 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 690:
#line 3855 "vtkParse.y" /* glr.c:816  */
    { postSigRightBracket(") "); }
#line 9171 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 691:
#line 3856 "vtkParse.y" /* glr.c:816  */
    { postSigLeftBracket("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 9177 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 692:
#line 3857 "vtkParse.y" /* glr.c:816  */
    { postSigRightBracket(") "); }
#line 9183 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 693:
#line 3858 "vtkParse.y" /* glr.c:816  */
    { postSigLeftBracket("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&"); }
#line 9189 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 694:
#line 3859 "vtkParse.y" /* glr.c:816  */
    { postSigRightBracket(") "); }
#line 9195 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 695:
#line 3862 "vtkParse.y" /* glr.c:816  */
    { postSig("{ "); }
#line 9201 "vtkParse.tab.c" /* glr.c:816  */
    break;

  case 696:
#line 3862 "vtkParse.y" /* glr.c:816  */
    { postSig("} "); }
#line 9207 "vtkParse.tab.c" /* glr.c:816  */
    break;


#line 9211 "vtkParse.tab.c" /* glr.c:816  */
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
static inline int
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
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1041)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
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
static inline void
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
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
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
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
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

static inline void
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
static inline void
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
static inline void
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

static inline void
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
static inline YYRESULTTAG
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
static inline YYRESULTTAG
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

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof(yyGLRState*))))
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
                              * sizeof(yybool)));
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
              /* break; */
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



#line 3909 "vtkParse.y" /* glr.c:2584  */

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
        if ((preproc_uint_t)val <= UINT_MAX)
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
        if (val >= INT_MIN && val <= INT_MAX)
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
