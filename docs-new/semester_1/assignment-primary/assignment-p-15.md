---
title: assignment-p-15.c
description: "C program source code for assignment-p-15.c"
tags:
  - Beginner
---

# `assignment-p-15.c`


!!! abstract "Problem Statement"
    Write a C program that reads a sequence of integers from a file named 'input.txt'. This program should segregate the odd numbers from the even numbers and store the odd numbers in a new file named 'ODDFile.txt' while storing the even numbers in another file named 'EVENFile.txt'

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-15.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-15.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

#define FILENAME "input.txt"
#define ODDFILE "ODDFile.txt"
#define EVENFILE "EVENFile.txt"

int main()
{
    FILE *input = NULL;
    FILE *oddfile = NULL;
    FILE *evenfile = NULL;
    int num;

    input = fopen(FILENAME, "r");
    if (input == NULL)
    {
        printf("\nCould not open the file: %s", FILENAME);
        return 1;
    }

    oddfile = fopen(ODDFILE, "w");
    if (oddfile == NULL)
    {
        printf("\nCould not open the file: %s", ODDFILE);
        return 1;
    }

    evenfile = fopen(EVENFILE, "w");
    if (evenfile == NULL)
    {
        printf("\nCould not open the file: %s", EVENFILE);
        return 1;
    }

    while (fscanf(input, "%d", &num) == 1)
    {
        if (num % 2 == 0)
        {
            fprintf(evenfile, "%d ", num);
        }
        else
        {
            fprintf(oddfile, "%d ", num);
        }
    }
    
    printf("Successfully processed numbers from %s.\n", FILENAME);
    printf("Odd numbers written to %s.\n", ODDFILE);
    printf("Even numbers written to %s.\n", EVENFILE);

    fclose(input);
    fclose(oddfile);
    fclose(evenfile);
    
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
        
        CODE (assignment-p-15.c):
        
        #include <stdio.h>
        
        #define FILENAME "input.txt"
        #define ODDFILE "ODDFile.txt"
        #define EVENFILE "EVENFile.txt"
        
        int main()
        {
            FILE *input = NULL;
            FILE *oddfile = NULL;
            FILE *evenfile = NULL;
            int num;
        
            input = fopen(FILENAME, "r");
            if (input == NULL)
            {
                printf("\nCould not open the file: %s", FILENAME);
                return 1;
            }
        
            oddfile = fopen(ODDFILE, "w");
            if (oddfile == NULL)
            {
                printf("\nCould not open the file: %s", ODDFILE);
                return 1;
            }
        
            evenfile = fopen(EVENFILE, "w");
            if (evenfile == NULL)
            {
                printf("\nCould not open the file: %s", EVENFILE);
                return 1;
            }
        
            while (fscanf(input, "%d", &num) == 1)
            {
                if (num % 2 == 0)
                {
                    fprintf(evenfile, "%d ", num);
                }
                else
                {
                    fprintf(oddfile, "%d ", num);
                }
            }
            
            printf("Successfully processed numbers from %s.\n", FILENAME);
            printf("Odd numbers written to %s.\n", ODDFILE);
            printf("Even numbers written to %s.\n", EVENFILE);
        
            fclose(input);
            fclose(oddfile);
            fclose(evenfile);
            
            return 0;
        }
    ```

    </div>
