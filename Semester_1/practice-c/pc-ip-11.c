/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 11:
 * Write a program to merge two sorted integer arrays to form a single sorted array.
 */

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