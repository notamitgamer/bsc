---
title: assignment-s-16.c
description: "C program source code for assignment-s-16.c"
tags:
  - Beginner
---

# `assignment-s-16.c`


!!! abstract "Problem Statement"
    Write a program that reads 10 integers into an array (using pointers), and prints the array in ascending and descending order.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 21 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Array
- Pointers
- Iteration
- Sorting (possible)
- Recursion

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-16.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-16.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

void input_arr(int *, int);
void print(int *, int);

int main()
{
    int arr[10];
    input_arr(arr, 10);
    print(arr, 10);
    return 0;
}

void input_arr(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void print(int *arr, int n)
{
    int i, j, isSwaped = true, backup;
    int *temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL)
    {
        printf("\nMemory Allocation Failed.");
        return;
    }
    for (i = 0; i < n; i++)
    {
        *(temp + i) = *(arr + i);
    }
    for (i = 0; i < n - 1 && isSwaped == true; i++)
    {
        isSwaped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(temp + j) > *(temp + j + 1))
            {
                backup = *(temp + j);
                *(temp + j) = *(temp + j + 1);
                *(temp + j + 1) = backup;
                isSwaped = true;
            }
        }
    }
    printf("\nAscending Order:");
    for (i = 0; i < n; i++)
    {
        printf(" %d", *(temp + i));
    }
    printf("\nDescending Order:");
    for (i = n - 1; i >= 0; i--)
    {
        printf(" %d", *(temp + i));
    }
    free(temp);
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
        
        CODE (assignment-s-16.c):
        
        #include <stdio.h>
        #include <stdlib.h>
        
        #define true 1
        #define false 0
        
        void input_arr(int *, int);
        void print(int *, int);
        
        int main()
        {
            int arr[10];
            input_arr(arr, 10);
            print(arr, 10);
            return 0;
        }
        
        void input_arr(int *arr, int n)
        {
            int i;
            for (i = 0; i < n; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", arr + i);
            }
        }
        
        void print(int *arr, int n)
        {
            int i, j, isSwaped = true, backup;
            int *temp = (int *)malloc(n * sizeof(int));
            if (temp == NULL)
            {
                printf("\nMemory Allocation Failed.");
                return;
            }
            for (i = 0; i < n; i++)
            {
                *(temp + i) = *(arr + i);
            }
            for (i = 0; i < n - 1 && isSwaped == true; i++)
            {
                isSwaped = false;
                for (j = 0; j < n - i - 1; j++)
                {
                    if (*(temp + j) > *(temp + j + 1))
                    {
                        backup = *(temp + j);
                        *(temp + j) = *(temp + j + 1);
                        *(temp + j + 1) = backup;
                        isSwaped = true;
                    }
                }
            }
            printf("\nAscending Order:");
            for (i = 0; i < n; i++)
            {
                printf(" %d", *(temp + i));
            }
            printf("\nDescending Order:");
            for (i = n - 1; i >= 0; i--)
            {
                printf(" %d", *(temp + i));
            }
            free(temp);
        }
    ```

    </div>
