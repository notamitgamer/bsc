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

/* Write a program that defines a function that calculates power of one
number reaised to another and factorial value of a number in one cell. */
/* Author - Amit Dutta, Date - 24th November, 2025 */
/* Let Us C, Chap - 9, Page 159, Problem 9.2 */

#include <stdio.h>

void bothPowerFactorial(double, int, int, double *, long long *);

int main()
{
    double a, resultPower;
    int b, factN;
    long long resultFactorial;
    printf("Enter a and b for calculating a raised to b: ");
    scanf("%lf %d", &a, &b);
    printf("Enter number to calculate the factorial: ");
    scanf("%d", &factN);
    if (b < 0 || factN < 0)
    {
        printf("\nOnly non-negative integer is allowed as input of b and factorial.");
        return 1;
    }
    bothPowerFactorial(a, b, factN, &resultPower, &resultFactorial);
    printf("\n%g Raised to %d: %g"
           "\nFactorial of %d: %lld",
           a, b, resultPower, factN, resultFactorial);
    return 0;
}

void bothPowerFactorial(double a, int b, int n, double *resultPower, long long *resultFactorial)
{
    double tempResultPower = 1;
    long long tempResultFactorial = 1;
    int i;

    for (i = 1; i <= b; i++)
        tempResultPower *= a;

    for (i = 1; i <= n; i++)
        tempResultFactorial *= i;

    *resultPower = tempResultPower;
    *resultFactorial = tempResultFactorial;
}