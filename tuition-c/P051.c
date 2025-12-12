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

/* Write a program to input two number and check whether they are Amicable Pair or not
    Example :  Sum of Proper Divisors of 220 (1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110) = 284
               Sum of Proper Divisors of 284 (1, 2, 4, 71, 142) = 220 */
/* Author - Amit Dutta, Date - 09th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int a, b, i, sa = 0, sb = 0;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a / 2; i++)
        if (a % i == 0)
            sa += i;
    for (i = 1; i <= b / 2; i++)
        if (b % i == 0)
            sb += i;
    if (sa == b && sb == a)
        printf("\nInput %d and %d is Amicable Pair.", a, b);
    else
        printf("\nInput %d and %d is Not Amicable Pair.", a, b);
    return 0;
}