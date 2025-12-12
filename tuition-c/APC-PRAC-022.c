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

/* Write a program to accept a number and check whether the number is twisted prime or not */
/* Author - Amit Dutta, Date - 07th November, 2025 */
// File Name - amit0711202504.c (LAB), APC-PRAC-022.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool checkPrime(int num)
{
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2)
        if (num % i == 0)
            return false;
    return true;
}

int reverseNumber(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    return reverse;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (!checkPrime(num))
    {
        printf("\nInput %d is not a prime number.", num);
        return 0;
    }
    if (checkPrime(reverseNumber(num)))
        printf("\nInput %d is a twisted prime number.", num);
    else
        printf("\nInput %d is not a twisted prime number.", num);
    return 0;
}