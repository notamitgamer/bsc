/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a program to accept a number and check whether the number
is twisted prime or not. */

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