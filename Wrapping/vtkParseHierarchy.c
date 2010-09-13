/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseHierarchy.c

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

#include "vtkParseHierarchy.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

static size_t skip_space(const char *text)
{
  size_t i = 0;
  while (isspace(text[i]) && text[i] != '\n') { i++; }
  return i;
}

static size_t skip_name(const char *text)
{
  unsigned int depth = 0;
  size_t i = 0;

  if (isalpha(text[i]) || text[i] == '_' ||
      (text[i] == ':' && text[i+1] == ':'))
    {
    if (text[i] == ':') { i++; }
    i++;
    while (isalnum(text[i]) || text[i] == '_' ||
           (text[i] == ':' && text[i+1] == ':') ||
           text[i] == '<' || text[i] == '>')
      {
      if (text[i] == '<')
        {
        while (text[i] != '\0' && text[i] != '\n')
          {
          if (text[i] == '<') { depth++; }
          if (text[i] == '>') { if (--depth == 0) { break; } }
          i++;
          }
        }
      if (text[i] == ':') { i++; }
      i++;
      }
    }
  return i;
}

/* helper: comparison of entries */
static int compare_hierarchy_entries(const void *vp1, const void *vp2)
{
  const HierarchyEntry *entry1 = (const HierarchyEntry *)vp1;
  const HierarchyEntry *entry2 = (const HierarchyEntry *)vp2;

  return strcmp(entry1->Name, entry2->Name);
}

/* helper: sort the entries to facilitate searching */
static void sort_hierarchy_entries(HierarchyInfo *info)
{
  qsort(info->Entries, info->NumberOfEntries, sizeof(HierarchyEntry),
        &compare_hierarchy_entries);
}

/* Find an entry with a binary search */
HierarchyEntry *vtkParseHierarchy_FindEntry(
  const HierarchyInfo *info, const char *classname)
{
  HierarchyEntry key;
  key.Name = (char *)classname;

  return (HierarchyEntry *)bsearch(&key, info->Entries,
    info->NumberOfEntries, sizeof(HierarchyEntry),
    &compare_hierarchy_entries);
}


/* read a hierarchy file into a HeirarchyInfo struct, or return NULL */
HierarchyInfo *vtkParseHierarchy_ReadFile(const char *filename)
{
  HierarchyInfo *info;
  HierarchyEntry *entry;
  int maxClasses = 500;
  FILE *fp;
  char *line;
  char *cp;
  size_t maxlen = 15;
  size_t i, j, n;

  line = (char *)malloc(maxlen);

  fp = fopen(filename, "r");

  if (fp == NULL)
    {
    return NULL;
    }

  info = (HierarchyInfo *)malloc(sizeof(HierarchyInfo));
  info->NumberOfEntries = 0;
  info->Entries = (HierarchyEntry *)malloc(maxClasses*sizeof(HierarchyEntry));

  while (fgets(line, maxlen, fp))
    {
    n = strlen(line);

    /* if buffer not long enough, increase it */
    while (n == maxlen-1 && line[n-1] != '\n' && !feof(fp))
      {
      maxlen *= 2;
      line = (char *)realloc(line, maxlen);
      if (!fgets(&line[n], maxlen-n, fp)) { break; }
      n += strlen(&line[n]);
      }

    while (n > 0 && isspace(line[n-1]))
      {
      n--;
      }
    line[n] = '\0';

    if (line[0] == '\0')
      {
      continue;
      }

    if (info->NumberOfEntries == maxClasses)
      {
      maxClasses *= 2;
      info->Entries = (HierarchyEntry *)realloc(
        info->Entries, sizeof(HierarchyEntry)*maxClasses*2);
      }

    entry = &info->Entries[info->NumberOfEntries++];
    entry->Name = NULL;
    entry->HeaderFile = NULL;
    entry->NumberOfSuperClasses = 0;
    entry->SuperClasses = NULL;
    entry->SuperClassIndex = NULL;
    entry->NumberOfProperties = 0;
    entry->Properties = NULL;

    i = skip_space(line);
    n = skip_name(&line[i]);

    cp = (char *)malloc(n+1);
    strncpy(cp, &line[i], n);
    cp[n] = '\0';
    entry->Name = cp;
    i += n;

    i += skip_space(&line[i]);

    if (line[i] == ':')
      {
      i++;
      for (j = 0; ; j++)
        {
        if (j == 0)
          {
          entry->SuperClasses = (const char **)malloc(sizeof(char *));
          entry->SuperClassIndex = (int *)malloc(sizeof(int));
          }
        else
          {
          entry->SuperClasses = (const char **)realloc(
            (char **)entry->SuperClasses, (j+1)*sizeof(char *));
          entry->SuperClassIndex = (int *)realloc(
            entry->SuperClassIndex, (j+1)*sizeof(int));
          }
        entry->NumberOfSuperClasses++;

        i += skip_space(&line[i]);
        n = skip_name(&line[i]);
        cp = (char *)malloc(n+1);
        strncpy(cp, &line[i], n);
        cp[n] = '\0';
        entry->SuperClasses[j] = cp;
        entry->SuperClassIndex[j] = -1;
        i += n;

        i += skip_space(&line[i]);
        if (line[i] != ',')
          {
          break;
          }
        i++;
        }
      }

    if (line[i] == '=')
      {
      i++;
      while (line[i] != ';' && line[i] != '\n' && line[i] != '\0')
        {
        i++;
        }
      }

    if (line[i] == ';')
      {
      i++;
      i += skip_space(&line[i]);
      n = 0;
      while(line[i+n] != '\0' && line[i+n] != ';' &&
            !isspace(line[i+n])) { n++; };
      cp = (char *)malloc(n+1);
      strncpy(cp, &line[i], n);
      cp[n] = '\0';
      entry->HeaderFile = cp;

      i += n;
      i += skip_space(&line[i]);
      while (line[i] == ';')
        {
        i++;
        i += skip_space(&line[i]);
        if (entry->NumberOfProperties == 0)
          {
          entry->Properties = (const char **)malloc(sizeof(char **));
          }
        else
          {
          entry->Properties = (const char **)realloc(
            (char **)entry->Properties,
            (entry->NumberOfProperties+1)*sizeof(char **));
          }
        n = 0;
        while (line[i+n] != '\0' && line[i+n] != '\n' && line[i+n] != ';')
          { n++; }
        if (n && skip_space(&line[i]) != n)
          {
          cp = (char *)malloc((n+1)*sizeof(char *));
          strncpy(cp, &line[i], n);
          cp[n] = '\0';
          entry->Properties[entry->NumberOfProperties++] = cp;
          }
        i += n;
        }
      }
    }

  if (!feof(fp))
    {
    vtkParseHierarchy_Free(info);
    info = NULL;
    }

  free(line);

  sort_hierarchy_entries(info);

  return info;
}

/* free a HierarchyInfo struct */
void vtkParseHierarchy_Free(HierarchyInfo *info)
{
  HierarchyEntry *entry;
  int i, j;

  for (i = 0; i < info->NumberOfEntries; i++)
    {
    entry = &info->Entries[i];
    free((char *)entry->Name);
    free((char *)entry->HeaderFile);
    for (j = 0; j < entry->NumberOfSuperClasses; j++)
      {
      free((char *)entry->SuperClasses[j]);
      }
    if (entry->NumberOfSuperClasses)
      {
      free(entry->SuperClasses);
      free(entry->SuperClassIndex);
      }
    for (j = 0; j < entry->NumberOfProperties; j++)
      {
      free((char *)entry->Properties[j]);
      }
    if (entry->NumberOfProperties)
      {
      free(entry->Properties);
      }
    }

  free(info->Entries);
  free(info);
}

int vtkParseHierarchy_IsTypeOf(
  const HierarchyInfo *info, const HierarchyEntry *entry,
  const char *superclass)
{
  int iterating = 1;
  int i, j;

  while (iterating)
    {
    iterating = 0;

    if (strcmp(entry->Name, superclass) == 0)
      {
      return 1;
      }

    if (entry->NumberOfSuperClasses == 0)
      {
      return 0;
      }

    for (j = 0; j < entry->NumberOfSuperClasses; j++)
      {
      if (strcmp(entry->SuperClasses[j], superclass) == 0)
        {
        return 1;
        }

      i = entry->SuperClassIndex[j];
      if (i == -1)
        {
        HierarchyEntry *tmp =
          vtkParseHierarchy_FindEntry(info, entry->SuperClasses[j]);
        if (tmp)
          {
          i = (int)(tmp - info->Entries);
          /* cache the position of the superclass */
          ((HierarchyEntry *)entry)->SuperClassIndex[j] = i;
          }
        else
          {
          /* outside of hierarchy, can't search */
          i = -2;
          ((HierarchyEntry *)entry)->SuperClassIndex[j] = i;
          }
        }
      if (i >= 0)
        {
        if (j+1 >= entry->NumberOfSuperClasses)
          {
          iterating = 1;
          entry = &info->Entries[i];
          break;
          }

        /* recurse for multiple inheritance */
        if (vtkParseHierarchy_IsTypeOf(info, &info->Entries[i], superclass))
          {
          return 1;
          }
        }
      }
    }

  return 0;
}


/* get the specified property, or return NULL */
const char *vtkParseHierarchy_GetProperty(
  const HierarchyEntry *entry, const char *property)
{
  int i;
  size_t k;

  if (entry)
    {
    for (i = 0; i < entry->NumberOfProperties; i++)
      {
      /* skip the property name, everything after is the property */
      k = skip_name(entry->Properties[i]);
      if (k == strlen(property) &&
          strncmp(entry->Properties[i], property, k) == 0)
        {
        if (entry->Properties[i][k] == ' ' ||
            entry->Properties[i][k] == '=') { k++; }
        return &entry->Properties[i][k];
        }
      }
    }

  return NULL;
}
