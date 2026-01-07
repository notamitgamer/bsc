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

/* Factorial upto N */
/* Author - Amit Dutta, Date - 03rd November, 2025 */

#include <stdio.h>

int main()
{
    int n, i;
    long long fact = 1;
    printf("Enter n : ");
    if (scanf("%d", &n) != 1)
    {
        printf("\nOnly non-negative number allowed.");
        return 1;
    }
    if (n < 0)
    {
        printf("\nOnly non-negative number allowed.");
        return 1;
    }
    if (n == 0)
    {
        printf("\nFactorial of 0 : 1");
        return 0;
    }
    for (i = 1; i <= n; i++)
        fact *= i;
    printf("\nFactorial of %d : %lld", n, fact);
    return 0;
}