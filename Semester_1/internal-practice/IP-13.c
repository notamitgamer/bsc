/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 03 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/* Write a program to display the Fibonacci series
    (i) using recursion
    (ii) using iteration
*/

#include <stdio.h>

long long int fib_rec(int);
long long int fib_tail_rec(int, long long int, long long int);
void fib_rec_print(int);
void fib_ite_print(int);

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fib_rec_print(n);
    fib_ite_print(n);
    return 0;
}

long long int fib_rec(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fib_rec(n - 1) + fib_rec(n - 2);
    }
}

long long int fib_tail_rec(int n, long long int t1, long long int t2)
{
    if (n == 0)
    {
        return t1;
    }
    else if (n == 1)
    {
        return t2;
    }
    else
    {
        return fib_tail_rec(n - 1, t2, t1 + t2);
    }
}

void fib_rec_print(int n)
{
    int i;
    printf("\nFibonacci Series (Recursion):");
    for (i = 0; i < n; i++)
    {
        printf("  %lld", fib_rec(i));
    }
    printf("\nFibonacci Series (Tail-Recursion):");
    for (i = 0; i < n; i++)
    {
        printf("  %lld", fib_tail_rec(i, 0, 1));
    }
}

void fib_ite_print(int n)
{
    int i;
    long long int t1 = 0, t2 = 1, temp;
    printf("\nFibonacci Series (Iteration):");
    if (n > 0)
    {
        printf("  0");
    }
    if (n > 1)
    {
        printf("  1");
    }
    for (i = 2; i < n; i++)
    {
        printf("  %lld", t1 + t2);
        temp = t1;
        t1 = t2;
        t2 = temp + t2;
    }
}