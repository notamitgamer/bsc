# `pc-ip-20.c`

## Problem Statement
!!!
Question 20: Write a C program that defines an array of integers, and includes a user-defined function named reverseArray with the signature void reverseArray(int arr[], int size);.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 05 Jan 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/practice-c/pc-ip-20.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/practice-c/pc-ip-20.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
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
