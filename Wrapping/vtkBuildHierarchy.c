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

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_NUM_CLASSES 10000

/* read a file into "lines" without duplicating lines */
static int read_file(FILE *fp, char *lines[])
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
static int write_file(FILE *fp, char *lines[])
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

/* try to read a file, print error and exit if fail */
static int try_read_file(const char *file_name, char *lines[])
{
  FILE *input_file;

  input_file = fopen(file_name, "r");
  if (!input_file)
    {
    fprintf(stderr, "vtkBuildHierarchy: couldn't open file %s\n",
            file_name);
    exit(1);
    }

  if (!read_file(input_file, lines))
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
static int try_write_file(const char *file_name, char *lines[])
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
    if (!write_file(output_file, lines))
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

int main(int argc, char *argv[])
{
  int i;
  char **lines;
  char **files;

  if (argc < 4 || strcmp(argv[1], "-o") != 0)
    {
    fprintf(stderr,
            "Usage: %s -o output_file data_file [merge_files]\n",
            argv[0]);
    exit(1);
    }

  lines = (char **)malloc(sizeof(char **)*MAX_NUM_CLASSES);
  lines[0] = NULL;
  files = (char **)malloc(sizeof(char **)*MAX_NUM_CLASSES);
  files[0] = NULL;

  /* read the data file */
  try_read_file(argv[3], files);

  /* read in all the prior files */
  for (i = 4; i < argc; i++)
    {
    try_read_file(argv[i], lines);
    }

  /* merge the files in the data file */
  for (i = 0; files[i] != NULL; i++)
    {
    try_read_file(files[i], lines);
    }

  /* write the file, if it has changed */
  try_write_file(argv[2], lines);

  free(files);
  free(lines);
  return 0;
}
