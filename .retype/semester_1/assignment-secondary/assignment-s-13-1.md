# `assignment-s-13-1.c`

## Problem Statement
!!!
Write a function that reverses the elements of an array in place, using only a single pointer argument, and return void.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 19 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-secondary/assignment-s-13-1.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-secondary/assignment-s-13-1.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
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
