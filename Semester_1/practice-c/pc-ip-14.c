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

/*
 * Question 14:
 * Write a program to calculate the factorial of a number using recursive and iterative function.
 */

#include <stdio.h>

long long int fact_rec(int);
long long int fact_ite(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printf("\nFactorial of %d (Recursion): %lld", n, fact_rec(n));
    printf("\nFactorial of %d (Iteration): %lld", n, fact_ite(n));
    return 0;
}

long long int fact_ite(int n)
{
    int i, pd = 1;
    for (i = 1; i <= n; i++)
    {
        pd *= i;
    }
    return pd;
}

long long int fact_rec(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fact_rec(n - 1);
    }
}