/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
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