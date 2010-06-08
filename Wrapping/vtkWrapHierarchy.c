/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkBuildHierarchy.c

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

/*
 The vtkBuildHierarchy program builds a text file that describes the
 class hierarchy.
 For each class, the output file will have a line in the following
 format:

 classname [ : superclass ] ; header.h
*/

#include "vtkParse.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_NUM_CLASSES 10000

/* read a header file with vtkParse.tab.c */
static int parse_header_file(FILE *fp, const char *filename, char *lines[])
{
  char line[2048];
  char *cp;
  FileInfo *data;
  ClassInfo *class_info;
  int i, j, k;

  /* the "concrete" flag doesn't matter, just set to zero */
  data = vtkParse_ParseFile(filename, 0, fp, stderr);

  if (!data)
    {
    return 0;
    }

  /* find the last line in "lines" */
  k = 0;
  while (lines[k] != NULL)
    {
    k++;
    }

  cp = line;

  /* add a line for each class that is found */
  for (i = 0; i < data->NumberOfClasses; i++)
    {
    class_info = data->Classes[i];

    sprintf(cp, "%s ", class_info->ClassName);
    cp += strlen(cp);
    if (class_info->NumberOfSuperClasses)
      {
      sprintf(cp, ": ");
      cp += strlen(cp);
      }

    for (j = 0; j < class_info->NumberOfSuperClasses; j++)
      {
      sprintf(cp, "%s ", class_info->SuperClasses[j]);
      cp += strlen(cp);
      if (j+1 < class_info->NumberOfSuperClasses)
        {
        sprintf(cp, ", ");
        cp += strlen(cp);
        }
      }

    j = strlen(data->FileName) - 1;
    while (j > 0 && data->FileName[j-1] != '/' && data->FileName[j-1] != '\\')
      {
      j--;
      }

    sprintf(cp, "; %s", &data->FileName[j]);
    cp = line;
    lines[k] = (char *)malloc(strlen(cp)+1);
    strcpy(lines[k++], cp);
    lines[k] = NULL;
    }

  vtkParse_Free(data);

  return 1;
}

/* read a hierarchy file into "lines" without duplicating lines */
static int read_text_file(FILE *fp, char *lines[])
{
  char line[2048];
  int i, n;

  while (fgets(line, 2048, fp))
    {
    n = strlen(line);
    while (n > 0 && isspace(line[n-1]))
      {
      n--;
      }
    line[n] = '\0';

    if (line[0] == '\0')
      {
      continue;
      }

    for (i = 0; lines[i] != NULL; i++)
      {
      if (strcmp(line, lines[i]) == 0)
        {
        break;
        }
      }

    if (lines[i] == NULL)
      {
      if (i+1 >= MAX_NUM_CLASSES)
        {
        fclose(fp);
        fprintf(stderr, "In vtkBuildHierarchy: "
                "Number of classes exceeds MAX_NUM_CLASSES\n");
        exit(1);
        }
      lines[i] = (char *)malloc(n+1);
      strcpy(lines[i], line);
      lines[i+1] = NULL;
      }
    }

  if (!feof(fp))
    {
    return 0;
    }

  return 1;
}

/* compare a file to "lines", return 0 if they are different */
static int compare_file(FILE *fp, char *lines[])
{
  char line[2048];
  unsigned char *matched;
  int i, n;

  for (i = 0; lines[i] != NULL; i++) { ; };
  matched = (unsigned char *)malloc(i);
  memset(matched, 0, i);

  while (fgets(line, 2048, fp))
    {
    n = strlen(line);
    while (n > 0 && isspace(line[n-1]))
      {
      n--;
      }
    line[n] = '\0';

    if (line[0] == '\0')
      {
      continue;
      }

    for (i = 0; lines[i] != NULL; i++)
      {
      if (strcmp(line, lines[i]) == 0)
        {
        break;
        }
      }

    if (lines[i] == NULL)
      {
      free(matched);
      return 0;
      }

    matched[i] = 1;
    }

  for (i = 0; lines[i] != NULL; i++)
    {
    if (matched[i] == 0)
      {
      free(matched);
      return 0;
      }
    }

  free(matched);

  if (!feof(fp))
    {
    return 0;
    }

  return 1;
}

/* write "lines" to a file */
static int write_text_file(FILE *fp, char *lines[])
{
  int i;

  for (i = 0; lines[i] != NULL; i++)
    {
    if (fprintf(fp, "%s\n", lines[i]) < 0)
      {
      return 0;
      }
    }

  return 1;
}

/* try to parse a header file, print error and exit if fail */
static int try_parse_header_file(
  char *include_dirs[], const char *file_name, char *lines[])
{
  const char *sep;
  char *full_path;
  FILE *input_file;
  int i, n;
  int maxlen = 0;

  /* find out the full path length for string allocation */
  for (i = 0; include_dirs[i] != NULL; i++)
    {
    n = strlen(include_dirs[i]);
    if (n > maxlen)
      {
      maxlen = n;
      }
    }

  maxlen += strlen(file_name) + 1;

  full_path = (char *)malloc(maxlen+1);

  /* try each path until the file loads */
  for (i = 0; include_dirs[i] != NULL; i++)
    {
    sep = "/";
    n = strlen(include_dirs[i]);
    if (n > 0 && include_dirs[i][-1] == sep[0])
      {
      sep = "";
      }
    sprintf(full_path, "%s%s%s", include_dirs[i], sep, file_name);
    input_file = fopen(full_path, "r");
    if (input_file)
      {
      break;
      }
    }

  /* free the string */
  free(full_path);

  /* special case if no include dirs */
  if (include_dirs[0] == NULL)
    {
    input_file = fopen(file_name, "r");
    }

  if (!input_file)
    {
    fprintf(stderr, "vtkBuildHierarchy: couldn't open file %s\n",
            file_name);
    exit(1);
    }

  if (!parse_header_file(input_file, file_name, lines))
    {
    fclose(input_file);
    exit(1);
    }
  fclose(input_file);

  return 0;
}

/* try to read a file, print error and exit if fail */
static int try_read_text_file(const char *file_name, char *lines[])
{
  FILE *input_file;

  input_file = fopen(file_name, "r");
  if (!input_file)
    {
    fprintf(stderr, "vtkBuildHierarchy: couldn't open file %s\n",
            file_name);
    exit(1);
    }

  if (!read_text_file(input_file, lines))
    {
    fclose(input_file);
    fprintf(stderr, "vtkBuildHierarchy: error reading file %s\n",
            file_name);
    exit(1);
    }
  fclose(input_file);

  return 0;
}

/* try to write a file, print error and exit if fail */
static int try_write_text_file(const char *file_name, char *lines[])
{
  FILE *output_file;
  int matched = 0;

  output_file = fopen(file_name, "r");
  if (output_file && compare_file(output_file, lines))
    {
    matched = 1;
    }
  if (output_file)
    {
    fclose(output_file);
    }

  if (!matched)
    {
    output_file = fopen(file_name, "w");
    if (!output_file)
      {
      fprintf(stderr, "vtkBuildHierarchy: error opening file %s\n",
              file_name);
      exit(1);
      }
    if (!write_text_file(output_file, lines))
      {
      fclose(output_file);
      fprintf(stderr, "vtkBuildHierarchy: error writing file %s\n",
              file_name);
      exit(1);
      }
    fclose(output_file);
    }

  return 0;
}

#define MAX_INCLUDE_DIRS 255

int main(int argc, char *argv[])
{
  int usage_error = 0;
  int num_dirs = 0;
  char *include_dirs[MAX_INCLUDE_DIRS+1];
  char *output_filename = 0;
  int i, argi;
  char **lines;
  char **files;

  /* parse command-line options */
  for (argi = 1; argi < argc && argv[argi][0] == '-'; argi++)
    {
    if (strcmp(argv[argi], "-o") == 0)
      {
      argi++;
      if (argi >= argc || argv[argi][0] == '-')
        {
        usage_error = 1;
        break;
        }
      output_filename = argv[argi];
      }
    else if (strcmp(argv[i], "-I") == 0)
      {
      argi++;
      if (argi >= argc || argv[argi][0] == '-')
        {
        usage_error = 1;
        break;
        }
      if (num_dirs + 1 >= MAX_INCLUDE_DIRS)
        {
        fprintf(stderr, "%s: maximum %d include dirs allowed\n",
                argv[0], MAX_INCLUDE_DIRS);
        exit(1);
        }
      include_dirs[num_dirs++] = argv[argi];
      include_dirs[num_dirs] = NULL;
      }
    }

  if (usage_error || !output_filename || argc - argi < 1)
    {
    fprintf(stderr,
            "Usage: %s -o output_file -I include_dir data_file [files_to_merge]\n",
            argv[0]);
    exit(1);
    }

  lines = (char **)malloc(sizeof(char **)*MAX_NUM_CLASSES);
  lines[0] = NULL;
  files = (char **)malloc(sizeof(char **)*MAX_NUM_CLASSES);
  files[0] = NULL;

  /* read the data file */
  try_read_text_file(argv[argi++], files);

  /* read in all the prior files */
  while (argi < argc)
    {
    try_read_text_file(argv[argi++], lines);
    }

  /* merge the files in the data file */
  for (i = 0; files[i] != NULL; i++)
    {
    include_dirs[num_dirs] = NULL;
    try_parse_header_file(include_dirs, files[i], lines);
    }

  /* write the file, if it has changed */
  try_write_text_file(output_filename, lines);

  free(files);
  free(lines);
  return 0;
}
