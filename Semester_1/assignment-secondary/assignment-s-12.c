/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
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