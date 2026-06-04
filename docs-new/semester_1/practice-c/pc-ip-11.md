---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-11.c'
description: 'Question 11: Write a program to merge two sorted integer arrays to form a single sorted array.'
---

# pc-ip-11.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 11: Write a program to merge two sorted integer arrays to form a single sorted array.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-11.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-11.c)

```c [pc-ip-11.c]
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
