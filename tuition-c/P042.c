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

/* Write a program to accept a number and check whether the number
is twisted prime or not. */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    int n, t, i, r, rev, prime = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    for (i = 2; i <= (int)sqrt(n); i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }
    if (prime)
    {
        printf("%d is a prime number.", n);
        t = n;
        rev = 0;
        prime = 1;
        while (t > 0)
        {
            r = t % 10;
            rev = rev * 10 + r;
            t = t / 10;
        }
        for (i = 2; i <= (int)sqrt(rev); i++)
        {
            if (rev % i == 0)
            {
                prime = 0;
                break;
            }
        }
        if (prime)
        {
            printf("\n%d and %d are prime numbers.. TWISTED PRIME", n, rev);
        }
        else
        {
            printf("\n%d is non prime", rev);
        }
    }
    else
    {
        printf("\n%d is non prime.", n);
    }
    return 0;
}