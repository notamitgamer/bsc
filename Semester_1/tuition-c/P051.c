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

/* Write a program to input two number and check whether they are Amicable Pair or not
    Example :  Sum of Proper Divisors of 220 (1, 2, 4, 5, 10, 11, 20, 22, 44, 55, 110) = 284
               Sum of Proper Divisors of 284 (1, 2, 4, 71, 142) = 220 */
/* Author - Amit Dutta, Date - 09th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int a, b, i, sa = 0, sb = 0;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a / 2; i++)
        if (a % i == 0)
            sa += i;
    for (i = 1; i <= b / 2; i++)
        if (b % i == 0)
            sb += i;
    if (sa == b && sb == a)
        printf("\nInput %d and %d is Amicable Pair.", a, b);
    else
        printf("\nInput %d and %d is Not Amicable Pair.", a, b);
    return 0;
}