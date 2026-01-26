/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Factorial upto N */

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