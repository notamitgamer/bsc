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

/* Write a function that reverses the elements of an array in place, using only a single
pointer argument, and return void. */

#include <stdio.h>
#include <stdlib.h>

void inputarr(int[], int);
void display(int[], int);
void reverse(int *);

int main()
{
    int size, *arr;
    printf("How many element do you want to add: ");
    scanf("%d", &size);
    arr = (int *)malloc((size + 1) * sizeof(int));
    inputarr(arr, size);
    printf("\n=== Before Reverse ===\n");
    display(arr, size);
    reverse(arr);
    printf("\n\n=== After Reverse ===\n");
    display(arr, size);
    free(arr);
    return 0;
}

void inputarr(int arr[], int n)
{
    int i;
    arr[0] = n;
    for (i = 1; i <= n; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }
}

void display(int arr[], int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("\nIndex: %-2d | Value: %-5d | Address: %p", i, arr[i], (void *)&arr[i]);
    }
}

void reverse(int *arr)
{
    int *start = arr + 1;
    int size = *arr;
    int *end = arr + size;
    while (start < end)
    {
        *start = *start ^ *end;
        *end = *start ^ *end;
        *start = *start ^ *end;
        start++;
        end--;
    }
}