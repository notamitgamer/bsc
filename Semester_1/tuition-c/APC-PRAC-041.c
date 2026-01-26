/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/*
Write a C program to find and print all twin prime pairs between 1 and n using nested loops.
(Twin primes are prime numbers having a difference of 2, like 11 and 13)
*/
/* Author: Amit Dutta, Date: 21-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int i, temp = (int)sqrt(n);
    for (i = 3; i <= temp; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, i, count = 0;
    printf("enter the n: ");
    scanf("%d", &n);
    printf("\nAll the twin numbers:  ");
    for (i = 1; i <= n - 2; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(i + 2))
            {
                printf("(%d, %d)  ", i, i + 2);
                count++;
            }
        }
    }
    printf("\nCount; %d", count);
    return 0;
}