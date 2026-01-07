/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/*
 * Question 20:
 * Write a C program that defines an array of integers, and includes a user-defined function named reverseArray with the signature void reverseArray(int arr[], int size);.
 */

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