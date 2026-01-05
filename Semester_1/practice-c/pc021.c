/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* ps4 */

#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (isPrime(n))
    {
        printf("\nInput %d is a prime number.", n);
    }
    else
    {
        printf("\nInput %d is not a prime number.", n);
    }
    printf("\nPrime numbers from 1 to 100:");
    for (i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            printf("  %d", i);
        }
    }
    return 0;
}

int isPrime(int n)
{
    int i;
    int end = (int)sqrt(n);
    if (n == 0 || n == 1)
    {
        return 0;
    }
    for (i = 2; i <= end; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}