---
title: APC-S-008.c
description: "C program source code for APC-S-008.c"
tags:
  - Beginner
---

# `APC-S-008.c`


!!! abstract "Problem Statement"
    Write a program to print the sum of two matrix as input given by the user.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 1 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Sorting (likely)
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-008.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-008.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], b[rows][cols], c[rows][cols];

    printf("Enter the elements of matrix A (%d x %d): \n", rows, cols);
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("Position %d%d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    printf("\nMatrix A: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d  ", a[i][j]);
        printf("\n");
    }

    printf("\nEnter the elements of matrix B(%d x %d): \n", rows, cols);
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
        {
            printf("Position %d%d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    printf("\nMatrix B: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d  ", b[i][j]);
        printf("\n");
    }

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("\nResult Matrix: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
            printf("%d  ", c[i][j]);
        printf("\n");
    }

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
        
        CODE (APC-S-008.c):
        
        #include <stdio.h>
        
        int main()
        {
            int rows, cols, i, j;
            printf("Enter the number of rows and columns: ");
            scanf("%d %d", &rows, &cols);
        
            int a[rows][cols], b[rows][cols], c[rows][cols];
        
            printf("Enter the elements of matrix A (%d x %d): \n", rows, cols);
            for (i = 0; i < rows; i++)
                for (j = 0; j < cols; j++)
                {
                    printf("Position %d%d: ", i, j);
                    scanf("%d", &a[i][j]);
                }
            printf("\nMatrix A: \n");
            for (i = 0; i < rows; i++)
            {
                for (j = 0; j < cols; j++)
                    printf("%d  ", a[i][j]);
                printf("\n");
            }
        
            printf("\nEnter the elements of matrix B(%d x %d): \n", rows, cols);
            for (i = 0; i < rows; i++)
                for (j = 0; j < cols; j++)
                {
                    printf("Position %d%d: ", i, j);
                    scanf("%d", &b[i][j]);
                }
            printf("\nMatrix B: \n");
            for (i = 0; i < rows; i++)
            {
                for (j = 0; j < cols; j++)
                    printf("%d  ", b[i][j]);
                printf("\n");
            }
        
            for (i = 0; i < rows; i++)
                for (j = 0; j < cols; j++)
                    c[i][j] = a[i][j] + b[i][j];
        
            printf("\nResult Matrix: \n");
            for (i = 0; i < rows; i++)
            {
                for (j = 0; j < cols; j++)
                    printf("%d  ", c[i][j]);
                printf("\n");
            }
        
            return 0;
        }
    ```

    </div>
