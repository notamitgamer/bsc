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

/* Write a C program to find the smallest and largest in an array using user-defined functions.
Define two functions int findSmallest(int arr[], int n) and int findLargest(int arr[], int n) that
return the smallest and largest elements in an array, respectively. */

#include <stdio.h>
#include <stdlib.h>

void inputarr(int[], int);
int findSmallest(int[], int);
int findLargest(int[], int);

int main()
{
    int n, *arr;
    printf("How many element do you want to enter: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    inputarr(arr, n);
    printf("\nSmallest element = %d", findSmallest(arr, n));
    printf("\nLargest element  = %d", findLargest(arr, n));
    free(arr);
    return 0;
}

void inputarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

int findSmallest(int arr[], int n)
{
    int i, smallest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    return smallest;
}

int findLargest(int arr[], int n)
{
    int i, largest = arr[0];
    for (i = 1; i < n; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
    }
    return largest;
}