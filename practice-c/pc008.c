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

/* Factorial upto N */
/* Author - Amit Dutta, Date - 03rd November, 2025 */

#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;
    printf("Enter n : ");
    if (scanf("%d", &n) != 1)
    {
        printf("\nOnly non-negative number allowed.");
        return 1;
    }
    if (n < 0)
    {
        printf("\nOnly non-negative number allowed.");
        return 1;
    }
    if (n == 0)
    {
        printf("\nFactorial of 0 : 1");
        return 0;
    }
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("\nFactorial of %d : %lld", n, fact);
    return 0;
}