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