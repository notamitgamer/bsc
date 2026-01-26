/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 14 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a C program to find the sum of even elements in an array using a user defined function.
Define a functions int sumEven(int arr[], int n) that returns the sum of all even elements in the array. */

#include <stdio.h>

void inputarr(int[], int);
int sumEven(int[], int);

int main()
{
    int arr[20], n;
    printf("Enter the n (Max: 20): ");
    scanf("%d", &n);
    inputarr(arr, n);
    printf("\nSum of the even number in the array: %d", sumEven(arr, n));
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

int sumEven(int arr[], int n)
{
    int i, sum_even = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum_even += arr[i];
        }
    }
    return sum_even;
}