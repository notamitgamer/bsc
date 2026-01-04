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

/* Write a program to add first seven terms of the following series using a
for loop.
    1 / 1! + 2 / 2! + 3 / 3! + ...
*/
/* Author - Amit Dutta, Date - 24th OCT, 2025 */
/* Let Us C, Chap - 6, Page - 102, Problem 6.2 */

#include <stdio.h>
#define N 7 // update N here

int main()
{
    double sum = 0; int fact = 1;
    for (int i = 1; i <= N; i++)
    {
        fact *= i;
        sum += (double)i / fact;
    }
    printf("Sum of the series : %g", sum);
    return 0;
}