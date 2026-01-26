/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 18:
 * Write a C program that includes a user-defined function named findLargest with the signature int findLargest(int arr[], int size);.
 */

#include <stdio.h>
#include <stdlib.h>

int findLargest(int[], int);
void inputArray(int[], int);
void printArray(int[], int);

int main()
{
    int n, *arr = NULL;
    printf("Enter the number of element: ");
    scanf("%d", &n);
    if (n < 2)
    {
        printf("\nTo get highest element, there must be atleast 2 element.");
        return 1;
    }
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("\nMemory allocation failed.");
        return 1;
    }
    inputArray(arr, n);
    printf("\nGiven Array: ");
    printArray(arr, n);
    printf("\nLargest element of the array: %d", findLargest(arr, n));
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

int findLargest(int arr[], int size)
{
    int i, largest = arr[0];
    for (i = 1; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}