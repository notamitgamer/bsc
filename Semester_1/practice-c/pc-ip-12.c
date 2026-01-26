/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 12:
 * Write a program that reads 10 integers into an array (using pointers), and prints the array in ascending and descending order.
 */

#include <stdio.h>

void input(int *);
void bubble_sort(int[], int);

int main()
{
    int arr[10], i, n = 10;
    input(arr);
    printf("\nGiven Array: ");
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
    bubble_sort(arr, n);
    printf("\nAscending Order: ");
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
    printf("\nDescending Order: ");
    printf("[");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
        if (i > 0)
        {
            printf(", ");
        }
    }
    printf("]");
    return 0;
}

void input(int *arr)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void bubble_sort(int arr[], int n)
{
    int isSwaped = 1;
    int i, j, temp;
    for (i = 0; (i < n) && isSwaped; i++)
    {
        isSwaped = 0;
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwaped = 1;
            }
        }
    }
}