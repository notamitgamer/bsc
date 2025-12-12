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

/* Write a program to check prime number */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int num, i, endCheckDigit;
    bool isPrime = true;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly a number is allowed, not a character.");
        return 1;
    }
    if (num <= 0)
    {
        printf("\nOnly postive number is allowed.");
        return 1;
    }
    if (num == 1)
    {
        printf("\nInput 1 is not a prime number."
               "\nHas only one positive divisor (itself), not exactly two."
               "\nRule: Prime number should have exactly two distinct positive divisors: 1 and itself");
        return 0;
    }
    if (num == 2)
    {
        printf("\nInput 2 is a prime number."
               "\n(Note: 2 is only Even Prime Number)");
        return 0;
    }
    if (num % 2 == 0)
    {
        printf("\nInput %d is not a prime number.", num);
        return 0;
    }
    endCheckDigit = sqrt(num);
    for (i = 3; i <= endCheckDigit; i += 2)
    {
        if (num % i == 0)
        {
            isPrime = false;
            printf("\nInput %d is not prime number.", num);
            return 0;
        }
    }
    if (isPrime)
    {
        printf("\nInput %d is a prime number.", num);
    }
    return 0;
}