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

/* sum = a + (a^2)/2 + (a^3)/3 + ... + (a^n)/n */
/* Author - Amit Dutta, Date - 18th OCT, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, sum = 0;
    int n, i;
    printf("Enter value for a and n : ");
    scanf("%lf %d", &a, &n);
    for (i = 1; i <= n; i++)
        sum += pow(a, i) / i;
    printf("\nSum = %g", sum);
    return 0;
}