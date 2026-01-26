/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 22 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/*  Write a program to calculate the factorial of a number
    (i) using recursion
    (ii) using iteration
*/

#include <stdio.h>

long long int fact_tail_rec(int, long long int);
long long int fact_rec(int);
long long int fact_ite(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("\nFactorial of negetive number is not possible.");
        return 1;
    }
    printf("\nFactorial of %d (Tail-Recursion) =  %lld", n, fact_tail_rec(n, 1));
    printf("\nFactorial of %d (Recursion)      =  %lld", n, fact_rec(n));
    printf("\nFactorial of %d (Iteration)      =  %lld", n, fact_ite(n));
    return 0;
}

long long int fact_tail_rec(int n, long long int result)
{
    if (n == 0 || n == 1)
    {
        return result;
    }
    else
    {
        return fact_tail_rec(n - 1, n * result);
    }
}

long long int fact_rec(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact_rec(n - 1);
    }
}

long long int fact_ite(int n)
{
    int i;
    long long int result = 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    for (i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}