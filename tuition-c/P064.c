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

/* Write a program to merge two sorted integer arrays to form a single sorted array. */

#include <stdio.h>
#include <stdlib.h>

void merge(int[], int, int[], int);

int main()
{
    int a[] = {10, 30, 50, 70, 90};
    int b[] = {20, 40, 60, 80, 100};
    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);
    merge(a, n1, b, n2);
    return 0;
}

void merge(int a[], int n1, int b[], int n2)
{
    int n = n1 + n2;
    int *c = (int *)malloc(n * sizeof(int));
    int i, j, k;
    i = j = k = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < n1)
    {
        c[k++] = a[i++];
    }
    while (j < n2)
    {
        c[k++] = b[j++];
    }
    printf("Merged Array:");
    for (i = 0; i < n; i++)
    {
        printf("  %d", c[i]);
    }
    free(c);
}