/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
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

/*
 * Question 3:
 * Write a program to compute the sum of the first n terms of the series using a function: S=1-2+3-4+5-6+...
 */

#include <stdio.h>

int series(int);

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("\nSum of the series: %d", series(n));
    return 0;
}

int series(int n)
{
    int i, result = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
    }
    return result;
}