---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> assignment-s-13-2.c'
description: 'Write a function that reverses the elements of an array in place, using only a single pointer argument, and return void.'
---

# assignment-s-13-2.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 19 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a function that reverses the elements of an array in place, using only a single pointer argument, and return void.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-13-2.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-13-2.c)

```c [assignment-s-13-2.c]
#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int size;
    int *arr;
};

void inputarr(int[], int);
void display(int[], int);
void reverse(struct Array *);

int main()
{
    struct Array array;
    printf("How many element do you want to add: ");
    scanf("%d", &array.size);
    array.arr = (int *)malloc((array.size) * sizeof(int));
    inputarr(array.arr, array.size);
    printf("\n=== Before Reverse ===\n");
    display(array.arr, array.size);
    reverse(&array);
    printf("\n\n=== After Reverse ===\n");
    display(array.arr, array.size);
    free(array.arr);
    return 0;
}

void inputarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("\nIndex: %-2d | Value: %-5d | Address: %p", i, arr[i], (void *)&arr[i]);
    }
}

void reverse(struct Array *array)
{
    int *start = array->arr;
    int *end = array->arr + (array->size - 1);
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
