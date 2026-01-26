/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a function to check whether a number is prime or not. Use the same function to
generate all prime numbers less than 100. */

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
        printf("\nInput %d is a Prime Number.", n);
    }
    else
    {
        printf("\nInput %d is not a Prime Number.", n);
    }
    printf("\nPrime Numbers less than 100:");
    for (i = 1; i < 100; i++)
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
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    int temp = (int)sqrt(n);
    int i;
    for (i = 3; i <= temp; i += 2)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}