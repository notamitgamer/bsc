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

/* WAP to check Krishnamurty number using user defined methods/functions. */
/* Author - Amit Dutta, Date - 15th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int fact(int);
int isKrishnamurty(int);

int fact(int n)
{
    int fact = 1, i;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int isKrishnamurty(int n)
{
    int temp = n, sum = 0;
    while (temp > 0)
    {
        sum += fact(temp % 10);
        temp /= 10;
    }
    return n == sum;
}

int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (isKrishnamurty(n))
        printf("\nInput %d is a Krishnamurty Number.", n);
    else
        printf("\nInput %d is not a Krishnamurty number.", n);
    return 0;
}