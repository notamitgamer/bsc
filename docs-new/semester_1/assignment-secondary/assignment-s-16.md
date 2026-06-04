---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-s-16.c'
description: 'Write a program that reads 10 integers into an array (using pointers), and prints the array in ascending and descending order.'
---

# assignment-s-16.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 21 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a program that reads 10 integers into an array (using pointers), and prints the array in ascending and descending order.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-16.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-16.c)

```c [assignment-s-16.c]
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
