---
title: assignment-s-13-1.c
description: "C program source code for assignment-s-13-1.c"
tags:
  - Beginner
---

# `assignment-s-13-1.c`


!!! abstract "Problem Statement"
    Write a function that reverses the elements of an array in place, using only a single pointer argument, and return void.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 19 Dec 2025 |
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

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-13-1.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-13-1.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

void inputarr(int[], int);
void display(int[], int);
void reverse(int *);

int main()
{
    int size, *arr;
    printf("How many element do you want to add: ");
    scanf("%d", &size);
    arr = (int *)malloc((size + 1) * sizeof(int));
    inputarr(arr, size);
    printf("\n=== Before Reverse ===\n");
    display(arr, size);
    reverse(arr);
    printf("\n\n=== After Reverse ===\n");
    display(arr, size);
    free(arr);
    return 0;
}

void inputarr(int arr[], int n)
{
    int i;
    arr[0] = n;
    for (i = 1; i <= n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("\nIndex: %-2d | Value: %-5d | Address: %p", i, arr[i], (void *)&arr[i]);
    }
}

void reverse(int *arr)
{
    int *start = arr + 1;
    int size = *arr;
    int *end = arr + size;
    while (start < end)
    {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;
        start++;
        end--;
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
        
        CODE (assignment-s-13-1.c):
        
        #include <stdio.h>
        #include <stdlib.h>
        
        void inputarr(int[], int);
        void display(int[], int);
        void reverse(int *);
        
        int main()
        {
            int size, *arr;
            printf("How many element do you want to add: ");
            scanf("%d", &size);
            arr = (int *)malloc((size + 1) * sizeof(int));
            inputarr(arr, size);
            printf("\n=== Before Reverse ===\n");
            display(arr, size);
            reverse(arr);
            printf("\n\n=== After Reverse ===\n");
            display(arr, size);
            free(arr);
            return 0;
        }
        
        void inputarr(int arr[], int n)
        {
            int i;
            arr[0] = n;
            for (i = 1; i <= n; i++)
            {
                printf("Enter element %d: ", i);
                scanf("%d", &arr[i]);
            }
        }
        
        void display(int arr[], int n)
        {
            int i;
            for (i = 1; i <= n; i++)
            {
                printf("\nIndex: %-2d | Value: %-5d | Address: %p", i, arr[i], (void *)&arr[i]);
            }
        }
        
        void reverse(int *arr)
        {
            int *start = arr + 1;
            int size = *arr;
            int *end = arr + size;
            while (start < end)
            {
                *start = *start ^ *end;
                *end = *start ^ *end;
                *start = *start ^ *end;
                start++;
                end--;
            }
        }
    ```

    </div>
