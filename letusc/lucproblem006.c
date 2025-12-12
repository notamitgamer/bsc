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

/* Write a program to find the factorial value of any number entered
through the keyboard. */
/* Author - Amit Dutta, Date - 07th OCT, 2025 */
/* Let Us C, Chap - 5, Page - 84, Problem 5.2 */

#include <stdio.h>
int main()
{
    int num, i = 1;
    long long fact = 1;
    printf("Enter the number : ");
    // checking if the input is valid or not
    if (scanf("%d", &num) != 1)
    {
        printf("\nPlease enter a number.");
        return 1;
    }
    // result for the negetive input
    if (num < 0)
    {
        printf("\nFactorial of %d : Undefined", num);
        return 1;
    }
    //  Hard codded result for input '0' (zero)
    if (num == 0)
    {
        printf("\nFactorial of 0 : 1");
        return 0;
    }
    // calculating result
    while (i <= num) {
        fact = fact * i;
        i++;
    }
    printf("\nFactorial of %d : %d", num, fact);
    return 0;
}