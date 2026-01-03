/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/assignment-secondary
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program that reads 10 integers into an array (using pointers), and prints the
array in ascending and descending order. */

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

void input_arr(int *, int);
void print(int *, int);

int main()
{
    int arr[10];
    input_arr(arr, 10);
    print(arr, 10);
    return 0;
}

void input_arr(int *arr, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", arr + i);
    }
}

void print(int *arr, int n)
{
    int i, j, isSwaped = true, backup;
    int *temp = (int *)malloc(n * sizeof(int));
    if (temp == NULL)
    {
        printf("\nMemory Allocation Failed.");
        return;
    }
    for (i = 0; i < n; i++)
    {
        *(temp + i) = *(arr + i);
    }
    for (i = 0; i < n - 1 && isSwaped == true; i++)
    {
        isSwaped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (*(temp + j) > *(temp + j + 1))
            {
                backup = *(temp + j);
                *(temp + j) = *(temp + j + 1);
                *(temp + j + 1) = backup;
                isSwaped = true;
            }
        }
    }
    printf("\nAscending Order:");
    for (i = 0; i < n; i++)
    {
        printf(" %d", *(temp + i));
    }
    printf("\nDescending Order:");
    for (i = n - 1; i >= 0; i--)
    {
        printf(" %d", *(temp + i));
    }
    free(temp);
}