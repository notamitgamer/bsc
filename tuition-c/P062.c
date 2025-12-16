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