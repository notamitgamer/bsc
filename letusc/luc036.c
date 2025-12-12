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

/* When interest compounds q times per year at an annual rate of
r % for n years, the principle p compounds to an amount a as per
the following formula
    a = p (1 + r / q) ^ nq
Write a program to read 10 sets of p, r, n & q and calculate the
corresponding as' */
/* Author - Amit Dutta, Date - 20th OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(c) */

// DEVELOPMENT STATUS: This implementation is currently untested. 
// Please report any functional defects or errors by submitting a GitHub issue "https://github.com/notamitgamer/bsc/issues" with the updated code.

#include <stdio.h>
#include <math.h>
int main()
{
    double interest, principalAmount, interestRate, timeInYears, compoundFactor, totalAmount;
    int index;
    for (index = 1; index <= 10; index++)
    {
        printf("Enter Principle amount : ");
        scanf("%lf", &principalAmount);
        printf("Enter Rate of Interest : ");
        scanf("%lf", &interestRate);
        interestRate *= 0.01;
        printf("Enter the Time (Years) : ");
        scanf("%lf", &timeInYears);
        printf("Compound count in one year : ");
        scanf("%lf", &compoundFactor);
        totalAmount = (principalAmount * pow((1 + interestRate / compoundFactor), (timeInYears * compoundFactor)));
        interest = totalAmount - principalAmount;
        printf("\nInterest : %.2f\nTotal Amount : %.2f\n\n", interest, totalAmount);
    }
    return 0;
}