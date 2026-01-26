/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 03 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/* Write a program to find the sum of n elements entered by the user. Use dynamic
memory allocation (malloc() or calloc()). */

#include <stdio.h>
#include <stdlib.h>

void inputarr(int[], int);
int sum_elem(int[], int);

int main()
{
    int n, *arr;
    printf("How many element do you want to enter: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    inputarr(arr, n);
    printf("\nSum of the %d element(s) = %d", n, sum_elem(arr, n));
    free(arr);
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

int sum_elem(int arr[], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}