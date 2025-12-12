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

/* Write a program to calculate and display the maturity amount taking
the sum and number of days as input.
    No. of Days     Rate of Interest
    ===========     ================
    <= 180          5.57 %
    181 - 364       7.75 %
    365 - 500       9.25 %
    > 500           9.15 %
*/
/* Author - Amit Dutta, Date - 31st October, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    double p, t, r, si;
    int days;
    printf("Enter the Principle, Time (Days) : ");
    scanf("%lf %d", &p, &days);
    if (days > 0 && days <= 180)
        r = 5.57;
    else if (days > 180 && days <= 364)
        r = 7.75;
    else if (days > 364 && days <= 500)
        r = 9.25;
    else if (days > 500)
        r = 9.15;
    si = (p * t * r) / 100;
    printf("\nMaturity Amount : %d", si + p);
    return 0;
}