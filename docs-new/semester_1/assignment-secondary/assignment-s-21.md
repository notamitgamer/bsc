---
title: assignment-s-21.c
description: "C program source code for assignment-s-21.c"
tags:
  - Beginner
---

# `assignment-s-21.c`


!!! abstract "Problem Statement"
    Write a program to copy the contents of a text file to another file, after removing all white spaces (spaces, tabs, newlines).

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 21 Jan 2026 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Array
- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-21.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-21.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
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
</div>

## Explanation

??? info "Explain with AI"

    Copy the prompt below and paste it into any AI assistant.

    <div data-search-exclude="true">

    ```text
        You are explaining a C programming code to a beginner.
        
        STRICT RULES:
        
        - Only use the given code. Do NOT assume anything not present.
        
        - Do NOT add extra examples.
        
        - Keep explanation clear and short.
        
        - If something is unclear, say "Not clear from code".
        
        - Follow the exact format below. Do NOT change headings.
        
        FORMAT:
        
        [START]
        
        ## What it does
        
        (Explain the overall purpose in 1-2 sentences)
        
        ## Step-by-step
        
        (Explain how the code works in steps, simple language)
        
        ## Key Concepts
        
        (List concepts like loop, condition, function, etc.)
        
        ## Notes
        
        (Mention any limitations, errors, or assumptions)
        
        [END]
        
        CODE (assignment-s-21.c):
        
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

    </div>
