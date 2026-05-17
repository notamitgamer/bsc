---
title: assignment-p-07.c
description: "C program source code for assignment-p-07.c"
tags:
  - Intermediate
---

# `assignment-p-07.c`


!!! abstract "Problem Statement"
    Write a C program that includes a user-defined function named binarySearch with the signature int binarySearch(int arr[], int size, int target);. The function should perform a binary search on a sorted array of integers and return the index of the target element if found, and -1 otherwise.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Intermediate (index: 4 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Binary Search
- Array
- Iteration
- Sorting (possible)
- Recursion

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-07.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-07.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int inputArray(int[], int);
// void sortArray(int[], int);
int binarySearch(int[], int, int);

int main()
{
    int size;
    printf("How many element do you want to enter: ");
    scanf("%d", &size);
    int arr[size];
    int target = inputArray(arr, size);
    // sortArray(arr, size);
    int index = binarySearch(arr, size, target);
    if (index != -1)
    {
        printf("\nElement %d is found at index %d.", target, index);
    }
    else
    {
        printf("\nElement %d is not found.", target);
    }
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

/* void sortArray(int arr[], int size)
{    
    // using Bubble Sort...

    int tempArr[size], i, j, temp;
    printf("\nBefore Sorting:\n[");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nAfter Sorting:\n[");
    for (i = 0; i < size; i++)
    {
        printf("%d", arr[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
    }
    printf("]\n");
}
*/

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = low + ((high - low) / 2);
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
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
        
        CODE (assignment-p-07.c):
        
        #include <stdio.h>
        
        int inputArray(int[], int);
        // void sortArray(int[], int);
        int binarySearch(int[], int, int);
        
        int main()
        {
            int size;
            printf("How many element do you want to enter: ");
            scanf("%d", &size);
            int arr[size];
            int target = inputArray(arr, size);
            // sortArray(arr, size);
            int index = binarySearch(arr, size, target);
            if (index != -1)
            {
                printf("\nElement %d is found at index %d.", target, index);
            }
            else
            {
                printf("\nElement %d is not found.", target);
            }
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
        
        /* void sortArray(int arr[], int size)
        {    
            // using Bubble Sort...
        
            int tempArr[size], i, j, temp;
            printf("\nBefore Sorting:\n[");
            for (i = 0; i < size; i++)
            {
                printf("%d", arr[i]);
                if (i != size - 1)
                {
                    printf(", ");
                }
            }
            printf("]\n");
            for (i = 0; i < size - 1; i++)
            {
                for (j = 0; j < size - i - 1; j++)
                {
                    if (arr[j] > arr[j + 1])
                    {
                        temp = arr[j];
                        arr[j] = arr[j + 1];
                        arr[j + 1] = temp;
                    }
                }
            }
            printf("\nAfter Sorting:\n[");
            for (i = 0; i < size; i++)
            {
                printf("%d", arr[i]);
                if (i != size - 1)
                {
                    printf(", ");
                }
            }
            printf("]\n");
        }
        */
        
        int binarySearch(int arr[], int size, int target)
        {
            int low = 0;
            int high = size - 1;
            int mid;
            while (low <= high)
            {
                mid = low + ((high - low) / 2);
         
        ... (truncated for brevity)
    ```

    </div>
