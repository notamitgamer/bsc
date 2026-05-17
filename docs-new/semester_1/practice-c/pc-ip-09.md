---
title: pc-ip-09.c
description: "C program source code for pc-ip-09.c"
tags:
  - Intermediate
---

# `pc-ip-09.c`


!!! abstract "Problem Statement"
    Question 9: Write a program to find the sum of n elements entered by the user. Use dynamic memory allocation (malloc() or calloc()).

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 05 Jan 2026 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Intermediate (index: 4 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Array
- Pointers
- Iteration
- Sorting (possible)
- Recursion

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-09.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-09.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

void inputArray(double[], int);
void printArray(double[], int);
double sum(double[], int);

int main()
{
    int n;
    double *arr = NULL;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    arr = (double *)malloc(n * sizeof(double));
    if (arr == NULL)
    {
        printf("\nMemory allocation failed.");
        return 1;
    }
    inputArray(arr, n);
    printf("\nGiven Array: ");
    printArray(arr, n);
    printf("\nSum of the elements of the array: %g", sum(arr, n));
    free(arr);
    return 0;
}

void inputArray(double arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%lf", &arr[i]);
    }
}

void printArray(double arr[], int n)
{
    int i;
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%g", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
}

double sum(double arr[], int n)
{
    int i;
    double sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
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
        
        CODE (pc-ip-09.c):
        
        #include <stdio.h>
        #include <stdlib.h>
        
        void inputArray(double[], int);
        void printArray(double[], int);
        double sum(double[], int);
        
        int main()
        {
            int n;
            double *arr = NULL;
            printf("Enter the number of element: ");
            scanf("%d", &n);
            arr = (double *)malloc(n * sizeof(double));
            if (arr == NULL)
            {
                printf("\nMemory allocation failed.");
                return 1;
            }
            inputArray(arr, n);
            printf("\nGiven Array: ");
            printArray(arr, n);
            printf("\nSum of the elements of the array: %g", sum(arr, n));
            free(arr);
            return 0;
        }
        
        void inputArray(double arr[], int n)
        {
            int i;
            for (i = 0; i < n; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%lf", &arr[i]);
            }
        }
        
        void printArray(double arr[], int n)
        {
            int i;
            printf("[");
            for (i = 0; i < n; i++)
            {
                printf("%g", arr[i]);
                if (i < n - 1)
                {
                    printf(", ");
                }
            }
            printf("]");
        }
        
        double sum(double arr[], int n)
        {
            int i;
            double sum = 0;
            for (i = 0; i < n; i++)
            {
                sum += arr[i];
            }
            return sum;
        }
    ```

    </div>
