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

/* The natural logarithm can be approximated by the following series.
    (x-1)/x + 1/2 ((x-1)/x)^2 + 1/2 ((x-1)/x)^3 + 1/2 ((x-1)/x)^4 + ...
If x is input through the keyboard, write a program to calculate the
sum of the first seven terms of this series. */
/* Author - Amit Dutta, Date - 21st OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(d) */

#include <stdio.h>
#include <math.h>

double series(double x) // made this fn only for fun, making a fn was not necessary
{
    double result = (x - 1) / x;
    int i;
    for (i = 2; i <= 7; i++)
    {
        result += 0.5 * pow(((x - 1) / x), i);
    }
    return result;
}

int main()
{
    double x;
    printf("Enter the value for x : ");
    scanf("%lf", &x);
    printf("\nResult : %g", series(x));
    return 0;
}