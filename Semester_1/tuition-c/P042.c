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

/* Write a program to accept a number and check whether the number
is twisted prime or not. */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    int n, t, i, r, rev, prime = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime number.", n);
        t = n;
        rev = 0;
        prime = 1;
        while (t > 0)
        {
            r = t % 10;
            rev = rev * 10 + r;
            t = t / 10;
        }
        for (i = 2; i <= (int)sqrt(rev); i++)
        {
            if (rev % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("\n%d and %d are prime numbers.. TWISTED PRIME", n, rev);
        }
        else
        {
            printf("\n%d is non prime", rev);
        }
    }
    else
    {
        printf("\n%d is non prime.", n);
    }
    return 0;
}