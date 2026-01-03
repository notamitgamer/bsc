/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/tuition-c
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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