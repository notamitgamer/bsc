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