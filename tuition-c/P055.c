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

/* WAP to print n terms of Fibbonacci Series (Starting from term 0) */
/* Author - Amit Dutta, Date - 15th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

void printFibonacci(int);

void printFibonacci(int n)
{
    int val1 = 0, val2 = 1, val3, i;
    printf("\nFibonacci series upto %d terms :", n);
    if (n < 0)
        printf("  N/A");
    if (n == 0)
        printf("  %d", val1);
    if (n > 0)
        printf("  %d  %d", val1, val2);
    for (i = 2; i <= n; i++)
    {
        val3 = val1 + val2;
        printf("  %d", val3);
        val1 = val2;
        val2 = val3;
    }
}

int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}