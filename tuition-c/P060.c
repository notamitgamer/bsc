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

/* write a C program to count the occurrences of a given element in an array using a user-defined
function. Create a function int count_occurrences(int arr[], int n, int target) that countts how
many times target appears in the array. */

#include <stdio.h>

int count_occurrences(int[], int, int);
void inputarr(int[], int);

int main()
{
    int n, arr[20], target, found;
    printf("Enter the n (Max: 20): ");
    scanf("%d", &n);
    inputarr(arr, n);
    printf("Enter the target: ");
    scanf("%d", &target);
    found = count_occurrences(arr, n, target);
    if (found)
    {
        printf("\n%d found %d times.", target, found);
    }
    else
    {
        printf("\n%d is not found.", target);
    }
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

int count_occurrences(int arr[], int n, int target)
{
    int count = 0;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    return count;
}