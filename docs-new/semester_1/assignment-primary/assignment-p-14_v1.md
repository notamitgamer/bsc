---
title: assignment-p-14_v1.c
description: "C program source code for assignment-p-14_v1.c"
tags:
  - Beginner
---

# `assignment-p-14_v1.c`


!!! abstract "Problem Statement"
    Write a C program that opens its own source code file, reads its contents, and then prints the contents to the console.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Array
- Pointers
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-14_v1.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-14_v1.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *code;
    int character, len_upto_dot;
    char *FILENAME;
    char *dot;

    FILENAME = strdup(argv[0]);

    if (FILENAME == NULL)
    {
        printf("\nMemory allocation failed.\n");
        return 1;
    }

    dot = strrchr(FILENAME, '.');

    if (dot != NULL)
    {
        len_upto_dot = dot - FILENAME;
        FILENAME[len_upto_dot] = '\0';
    }

    strcat(FILENAME, ".c");

    code = fopen(FILENAME, "r");

    if (code == NULL)
    {
        printf("\nCould not open the source file: %s", FILENAME);
        printf("\nPlease ensure the source file is in the same directory as the executable.\n");
        free(FILENAME);
        return 1;
    }

    printf("\nReading file: %s", FILENAME);
    printf("\n========== %s ==========\n\n", FILENAME);

    while ((character = fgetc(code)) != EOF)
    {
        putchar(character);
    }

    printf("\n\n========== End of %s ==========\n", FILENAME);

    fclose(code);
    free(FILENAME);

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
        
        CODE (assignment-p-14_v1.c):
        
        #include <stdio.h>
        #include <string.h>
        #include <stdlib.h>
        
        int main(int argc, char *argv[])
        {
            FILE *code;
            int character, len_upto_dot;
            char *FILENAME;
            char *dot;
        
            FILENAME = strdup(argv[0]);
        
            if (FILENAME == NULL)
            {
                printf("\nMemory allocation failed.\n");
                return 1;
            }
        
            dot = strrchr(FILENAME, '.');
        
            if (dot != NULL)
            {
                len_upto_dot = dot - FILENAME;
                FILENAME[len_upto_dot] = '\0';
            }
        
            strcat(FILENAME, ".c");
        
            code = fopen(FILENAME, "r");
        
            if (code == NULL)
            {
                printf("\nCould not open the source file: %s", FILENAME);
                printf("\nPlease ensure the source file is in the same directory as the executable.\n");
                free(FILENAME);
                return 1;
            }
        
            printf("\nReading file: %s", FILENAME);
            printf("\n========== %s ==========\n\n", FILENAME);
        
            while ((character = fgetc(code)) != EOF)
            {
                putchar(character);
            }
        
            printf("\n\n========== End of %s ==========\n", FILENAME);
        
            fclose(code);
            free(FILENAME);
        
            return 0;
        }
    ```

    </div>
