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