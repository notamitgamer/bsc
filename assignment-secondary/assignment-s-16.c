/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
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