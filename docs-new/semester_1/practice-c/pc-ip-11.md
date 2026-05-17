---
title: pc-ip-11.c
description: "C program source code for pc-ip-11.c"
tags:
  - Intermediate
---

# `pc-ip-11.c`


!!! abstract "Problem Statement"
    Question 11: Write a program to merge two sorted integer arrays to form a single sorted array.

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

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-11.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-11.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

void merge(int[], int, int[], int);
void inputArray(int[], int);
void printArray(int[], int);

int main()
{
    int a, b, *arra = NULL, *arrb = NULL;
    printf("Enter the number of element for array A and B: ");
    scanf("%d %d", &a, &b);
    arra = (int *)malloc(a * sizeof(int));
    if (arra == NULL)
    {
        printf("\nMemory Allocation failed.");
        return 1;
    }
    arrb = (int *)malloc(b * sizeof(int));
    if (arrb == NULL)
    {
        printf("\nMemory Allocation failed.");
        return 1;
    }
    printf("\nEnter element for array A:\n");
    inputArray(arra, a);
    printf("\nEnter element for array B:\n");
    inputArray(arrb, b);
    printf("\nGiven array A: ");
    printArray(arra, a);
    printf("\nGiven array b: ");
    printArray(arrb, b);
    merge(arra, a, arrb, b);
    free(arra);
    free(arrb);
    return 0;
}

void inputArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n)
{
    int i;
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
}

void merge(int arra[], int a, int arrb[], int b)
{
    int i, j, k, *arr = NULL, n = a + b;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("\nMemory Allocation failed.");
        return;
    }
    i = j = k = 0;
    while (i < a && j < b)
    {
        if (arra[i] < arrb[j])
        {
            arr[k++] = arra[i++];
        }
        else
        {
            arr[k++] = arrb[j++];
        }
    }
    while (i < a)
    {
        arr[k++] = arra[i++];
    }
    while (j < b)
    {
        arr[k++] = arrb[j++];
    }
    printf("\nMerged Array: ");
    printArray(arr, n);
    free(arr);
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
        
        CODE (pc-ip-11.c):
        
        #include <stdio.h>
        #include <stdlib.h>
        
        void merge(int[], int, int[], int);
        void inputArray(int[], int);
        void printArray(int[], int);
        
        int main()
        {
            int a, b, *arra = NULL, *arrb = NULL;
            printf("Enter the number of element for array A and B: ");
            scanf("%d %d", &a, &b);
            arra = (int *)malloc(a * sizeof(int));
            if (arra == NULL)
            {
                printf("\nMemory Allocation failed.");
                return 1;
            }
            arrb = (int *)malloc(b * sizeof(int));
            if (arrb == NULL)
            {
                printf("\nMemory Allocation failed.");
                return 1;
            }
            printf("\nEnter element for array A:\n");
            inputArray(arra, a);
            printf("\nEnter element for array B:\n");
            inputArray(arrb, b);
            printf("\nGiven array A: ");
            printArray(arra, a);
            printf("\nGiven array b: ");
            printArray(arrb, b);
            merge(arra, a, arrb, b);
            free(arra);
            free(arrb);
            return 0;
        }
        
        void inputArray(int arr[], int n)
        {
            int i;
            for (i = 0; i < n; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
        }
        
        void printArray(int arr[], int n)
        {
            int i;
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
        }
        
        void merge(int arra[], int a, int arrb[], int b)
        {
            int i, j, k, *arr = NULL, n = a + b;
            arr = (int *)malloc(n * sizeof(int));
            if (arr == NULL)
            {
                printf("\nMemory Allocation failed.");
                return;
            }
            i = j = k = 0;
            while (i < a && j < b)
            {
                if (arra[i] < arrb[j])
                {
                    arr[k++] = arra[i++];
                }
                else
                {
                    arr[k++] = arrb[j++];
                }
            }
            while (i < a)
            {
                arr[k++] = arra[i++];
            }
            while (
        ... (truncated for brevity)
    ```

    </div>
