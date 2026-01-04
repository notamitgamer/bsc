/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
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