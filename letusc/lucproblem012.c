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

/* Write a Function power(a, b), to calculate the value of a raised to b */
/* Author - Amit Dutta, Date - 17th November, 2025 */
/* Let Us C, Chap - 8, Page - 141, Problem 8.2 */

#include <stdio.h>

double power(double, int);

double power(double a, int b)
{
    if (b == 0)
        return 1;
    double res = 1;
    int i;
    if (b > 0)
        for (i = 1; i <= b; i++)
            res *= a;
    return res;
}

int main()
{
    double a, result;
    int b;
    printf("Enter the value and the power (Format A^B) : ");
    scanf("%lf^%d", &a, &b);
    result = power(a, b);
    printf("Result of %g^%d = %g", a, b, result);
    return 0;
}