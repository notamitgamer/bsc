/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 10:
 * Write a function that reverses each elements of an array in place, using only a single pointer argument, and return void.
 */

#include <stdio.h>
#include <stdlib.h>

void inputArray(int[], int);
void printArray(int[], int);
void reverse(int *);

int main()
{
    int n, i, *arr = NULL;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("\nMemory allocation failed.");
        return 1;
    }
    inputArray(arr, n);
    printf("\nGiven Array: ");
    printArray(arr, n);
    for (i = 0; i < n; i++)
    {
        reverse(&arr[i]);
    }
    printf("\nUpdated Array: ");
    printArray(arr, n);
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

void reverse(int *n)
{
    int temp = *n;
    int rev = 0;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    *n = rev;
}