/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
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