/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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