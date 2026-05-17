---
title: Qn-3.c
description: "C program source code for Qn-3.c"
tags:
  - Intermediate
---

# `Qn-3.c`


!!! abstract "Problem Statement"
    Write a program to search an element from an array using linear search technique using malloc() and free() for memory allocation and deallocation.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 06 Mar 2026 |
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

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-3.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-3.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

int inputArray(int[], int);
int linearSearch(int[], int, int);

int main()
{
    int size, *arr = NULL;
    printf("How many element do you want to enter: ");
    scanf("%d", &size);
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed! Exiting...\n");
        return 1;
    }
    int target = inputArray(arr, size);
    int index = linearSearch(arr, size, target);
    if (index != -1)
    {
        printf("\nElement %d is found at index %d.", target, index);
    }
    else
    {
        printf("\nElement %d is not found.", target);
    }
    free(arr);
    return 0;
}

int inputArray(int arr[], int size)
{
    int i, target;
    for (i = 0; i < size; i++)
    {
        printf("Enter element for position %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the target element: ");
    scanf("%d", &target);
    return target;
}

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
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
        
        CODE (Qn-3.c):
        
        #include <stdio.h>
        #include <stdlib.h>
        
        int inputArray(int[], int);
        int linearSearch(int[], int, int);
        
        int main()
        {
            int size, *arr = NULL;
            printf("How many element do you want to enter: ");
            scanf("%d", &size);
            arr = (int *)malloc(size * sizeof(int));
            if (arr == NULL)
            {
                printf("Memory allocation failed! Exiting...\n");
                return 1;
            }
            int target = inputArray(arr, size);
            int index = linearSearch(arr, size, target);
            if (index != -1)
            {
                printf("\nElement %d is found at index %d.", target, index);
            }
            else
            {
                printf("\nElement %d is not found.", target);
            }
            free(arr);
            return 0;
        }
        
        int inputArray(int arr[], int size)
        {
            int i, target;
            for (i = 0; i < size; i++)
            {
                printf("Enter element for position %d: ", i);
                scanf("%d", &arr[i]);
            }
            printf("\nEnter the target element: ");
            scanf("%d", &target);
            return target;
        }
        
        int linearSearch(int arr[], int size, int target)
        {
            for (int i = 0; i < size; i++)
            {
                if (arr[i] == target)
                {
                    return i;
                }
            }
            return -1;
        }
    ```

    </div>
