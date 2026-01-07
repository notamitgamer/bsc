/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
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

/* Write a program to calculate the GCD of two numbers
    (i) using recursion
    (ii) without recursion
*/

#include <stdio.h>

int gcd_tail_rec(int, int);
int gcd_rec(int, int);
int gcd_ite(int, int);

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;
    printf("\nGCD (Tail-Recursion) of %d and %d is = %d", a, b, gcd_tail_rec(a, b));
    printf("\nGCD (Recursion) of %d and %d is      = %d", a, b, gcd_rec(a, b));
    printf("\nGCD (Iteration) of %d and %d is      = %d", a, b, gcd_ite(a, b));
    return 0;
}

int gcd_tail_rec(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd_tail_rec(b, a % b);
    }
}

int gcd_rec(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd_rec(b, a % b);
    }
}

int gcd_ite(int a, int b)
{
    int temp;
    while (b > 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}