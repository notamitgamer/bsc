/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 19:
 * Write a C program that includes a user-defined function named binarySearch with the signature int binarySearch(int arr[], int size, int target);.
 */

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