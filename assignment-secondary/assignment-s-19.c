/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
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