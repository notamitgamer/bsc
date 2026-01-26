/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 15:
 * Write a program to calculate the GCD of two numbers using recursive and iterative function.
 */

#include <stdio.h>

int gcd_rec(int, int);
int gcd_ite(int, int);

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("\nGCD(%d, %d) (Recursion) = %d", a, b, gcd_rec(a, b));
    printf("\nGCD(%d, %d) (Iteration) = %d", a, b, gcd_ite(a, b));
    return 0;
}

int gcd_ite(int a, int b)
{
    int temp;
    while (a != 0)
    {
        temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int gcd_rec(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else
    {
        return gcd_rec(b % a, a);
    }
}