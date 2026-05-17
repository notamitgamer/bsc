---
title: pc-ip-12.c
description: "C program source code for pc-ip-12.c"
tags:
  - Beginner
---

# `pc-ip-12.c`


!!! abstract "Problem Statement"
    Question 12: Write a program that reads 10 integers into an array (using pointers), and prints the array in ascending and descending order.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 05 Jan 2026 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Array
- Pointers
- Iteration
- Sorting (possible)
- Recursion

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-12.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-12.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

void input(int *);
void bubble_sort(int[], int);

int main()
{
    int arr[10], i, n = 10;
    input(arr);
    printf("\nGiven Array: ");
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
    bubble_sort(arr, n);
    printf("\nAscending Order: ");
    printf("[");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("]");
    printf("\nDescending Order: ");
    printf("[");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
        if (i > 0)
        {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}

void input(int *arr)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void bubble_sort(int arr[], int n)
{
    int isSwaped = 1;
    int i, j, temp;
    for (i = 0; (i < n) && isSwaped; i++)
    {
        isSwaped = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwaped = 1;
            }
        }
    }
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
        
        CODE (pc-ip-12.c):
        
        #include <stdio.h>
        
        void input(int *);
        void bubble_sort(int[], int);
        
        int main()
        {
            int arr[10], i, n = 10;
            input(arr);
            printf("\nGiven Array: ");
            printf("[");
            for (i = 0; i < n; i++)
            {
                printf("%d", arr[i]);
                if (i < n - 1)
                {
                    printf(", ");
                }
            }
            printf("]");
            bubble_sort(arr, n);
            printf("\nAscending Order: ");
            printf("[");
            for (i = 0; i < n; i++)
            {
                printf("%d", arr[i]);
                if (i < n - 1)
                {
                    printf(", ");
                }
            }
            printf("]");
            printf("\nDescending Order: ");
            printf("[");
            for (i = n - 1; i >= 0; i--)
            {
                printf("%d", arr[i]);
                if (i > 0)
                {
                    printf(", ");
                }
            }
            printf("]");
            return 0;
        }
        
        void input(int *arr)
        {
            int i;
            for (i = 0; i < 10; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", arr + i);
            }
        }
        
        void bubble_sort(int arr[], int n)
        {
            int isSwaped = 1;
            int i, j, temp;
            for (i = 0; (i < n) && isSwaped; i++)
            {
                isSwaped = 0;
                for (j = 0; j < n - 1 - i; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                        isSwaped = 1;
                    }
                }
            }
        }
    ```

    </div>
