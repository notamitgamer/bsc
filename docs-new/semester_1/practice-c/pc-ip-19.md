---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-19.c'
description: 'Question 19: Write a C program that includes a user-defined function named binarySearch with the signature int binarySearch(int arr[], int size, int target);.'
---

# pc-ip-19.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 19: Write a C program that includes a user-defined function named binarySearch with the signature int binarySearch(int arr[], int size, int target);.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-19.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-19.c)

```c [pc-ip-19.c]
#include <stdio.h>
#include <stdlib.h>

int binarySearch(int[], int, int);
void inputArray(int[], int);
void printArray(int[], int);

int main()
{
    int n, *arr = NULL, target, foundIndex;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("\nMemory allocation failed.");
        return 1;
    }
    printf("\nPlease enter the sorted array element(s): \n");
    inputArray(arr, n);
    printf("\nGiven array: ");
    printArray(arr, n);
    printf("\nPlease enter the target element: ");
    scanf("%d", &target);
    foundIndex = binarySearch(arr, n, target);
    if (foundIndex != -1)
    {
        printf("\nTarget '%d' found at Index %d.", target, foundIndex);
    }
    else
    {
        printf("\nUnable to find target '%d'.", target);
    }
    free(arr);
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

int binarySearch(int arr[], int size, int target)
{
    int low = 0;
    int high = size - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
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
