---
title: assignment-p-06.c
description: "C program source code for assignment-p-06.c"
tags:
  - Beginner
---

# `assignment-p-06.c`


!!! abstract "Problem Statement"
    Write a C program that includes a user-defined function named findLargest with the signature int findLargest(int arr[], int size);. The function should take an array of integers and its size, and return the largest element in the array.

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

- Recursion
- Array
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-06.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-06.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

void inputArray(int[], int);
int findLargest(int[], int);

int main()
{
    int size;
    printf("How many element do you want to enter: ");
    scanf("%d", &size);
    int arr[size];
    inputArray(arr, size);
    printf("\nLargest Element is: %d", findLargest(arr, size));
    return 0;
}

void inputArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int findLargest(int arr[], int size)
{
    int largest = arr[0], i;
    for (i = 1; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
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
        
        CODE (assignment-p-06.c):
        
        #include <stdio.h>
        
        void inputArray(int[], int);
        int findLargest(int[], int);
        
        int main()
        {
            int size;
            printf("How many element do you want to enter: ");
            scanf("%d", &size);
            int arr[size];
            inputArray(arr, size);
            printf("\nLargest Element is: %d", findLargest(arr, size));
            return 0;
        }
        
        void inputArray(int arr[], int size)
        {
            int i;
            for (i = 0; i < size; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
        }
        
        int findLargest(int arr[], int size)
        {
            int largest = arr[0], i;
            for (i = 1; i < size; i++)
            {
                if (largest < arr[i])
                {
                    largest = arr[i];
                }
            }
            return largest;
        }
    ```

    </div>
