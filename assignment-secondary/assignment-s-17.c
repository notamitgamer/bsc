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