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

/* sum = 1 + 1+2/1*2 + 1+2+3/1*2*3 + ... + 1+2+3+...+n/1*2*3*...*n */
/* Author - Amit Dutta, Date - 18th OCT, 2025 */

#include <stdio.h>

int main()
{
    double sum = 0, temp1 = 0, temp2 = 1;
    int n, i;
    printf("Enter value for n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp1 += i;
        temp2 *= i;
        sum += temp1 / temp2;
    }
    printf("\nSum = %g", sum);
    return 0;
}