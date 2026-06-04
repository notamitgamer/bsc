---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-20.c'
description: 'Question 20: Write a C program that defines an array of integers, and includes a user-defined function named reverseArray with the signature void reverseArray(int arr[], int size);.'
---

# pc-ip-20.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 20: Write a C program that defines an array of integers, and includes a user-defined function named reverseArray with the signature void reverseArray(int arr[], int size);.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-20.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-20.c)

```c [pc-ip-20.c]
#include<stdio.h>
#include<stdlib.h>

void inputArray(int [], int);
void reverseArray(int [], int);
void printArray(int [], int);

int main() {
    int n, *arr = NULL;
    printf("How many element do you want enter: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("\nMemory allocation failed.");
        return 1;
    }
    inputArray(arr, n);
    printf("\nBefore Reverse: ");
    printArray(arr, n);
    reverseArray(arr, n);
    printf("\nAfter reverse: ");
    printArray(arr, n);
    free(arr);
    return 0;
}

void inputArray(int arr[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int n) {
    int i;
    printf("[");
    for(i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n - 1) {
            printf(", ");
        }
    }
    printf("]");
}

void reverseArray(int arr[], int size) {
    int i = 0;
    int j = size - 1;
    int temp;
    while(i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
```
