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

/* Write a C program to find all Niven in an array. Define a user-defined function int isNiven(int num)
that returns 1 if the numbers is a Niven number, otherwise returns 0. A Niven number (also known as a
Harshad Number) is an integer that is divisible by the sum of its digits. */

#include <stdio.h>
#include <stdlib.h>

void inputarr(int[], int);
int isNiven(int);

int main()
{
    int n, *arr, i;
    printf("How many element do you want to enter: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    inputarr(arr, n);
    for (i = 0; i < n; i++)
    {
        if (isNiven(arr[i]))
        {
            printf("\n%d is a Niven number.", arr[i]);
        }
        else
        {
            printf("\n%d is a NOT Niven number.", arr[i]);
        }
    }
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

int isNiven(int num)
{
    int i, sum = 0, temp = num;
    while (temp > 0)
    {
        sum += temp % 10;
        temp /= 10;
    }
    return num % sum == 0;
}