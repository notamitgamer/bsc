---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-s-21.c'
description: 'Write a program to copy the contents of a text file to another file, after removing all white spaces (spaces, tabs, newlines).'
---

# assignment-s-21.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 21 Jan 2026 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program to copy the contents of a text file to another file, after removing all white spaces (spaces, tabs, newlines).
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-21.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-21.c)

```c [assignment-s-21.c]
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NEW_FILE_PREFIX "cleaned_"

int cleaning(FILE *);

int main()
{
    char filename[50];
    char *newFilename = NULL;
    FILE *givenFile = NULL;
    FILE *cleanedFile = NULL;
    int len, temp;

    printf("Enter the filename (Max: 50 character): ");
    fgets(filename, sizeof(filename), stdin);
    len = strlen(filename);
    if (filename[len - 1] == '\n')
    {
        filename[len - 1] = '\0';
    }

    givenFile = fopen(filename, "r");
    if (givenFile == NULL)
    {
        printf("\nCouldn't opened the file \"%s\""
               "\nPlease ensure that \"%s\" is in the same folder.",
               filename, filename);
        return 1;
    }

    len += strlen(NEW_FILE_PREFIX);
    newFilename = (char *)malloc((len + 1) * sizeof(char));
    if (newFilename == NULL)
    {
        printf("\nMemory allocation failed.");
        fclose(givenFile);
        return 1;
    }
    newFilename[0] = '\0';
    strcat(newFilename, NEW_FILE_PREFIX);
    strcat(newFilename, filename);

    cleanedFile = fopen(newFilename, "w");
    if (cleanedFile == NULL)
    {
        printf("\nCUnable to create the file \"%s\"", newFilename);
        free(newFilename);
        return 1;
    }

    while ((temp = fgetc(givenFile)) != EOF)
    {
        if (temp != ' ' && temp != '\n' && temp != '\t')
        {
            fputc(temp, cleanedFile);
        }
    }

    printf("\nSuccessfully cleaned: \"%s\"", filename);
    printf("\nGenerated file: \"%s\"", newFilename);

    fclose(givenFile);
    fclose(cleanedFile);
    free(newFilename);

    return 0;
}
```
