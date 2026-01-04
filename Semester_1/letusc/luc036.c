/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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