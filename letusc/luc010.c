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

/* A five-digit number is entered through the keyboard. Write a program
to obtain the reversed number and to etermine whether the original and reversed
numbers are equal or not. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap - 3, Page - 53, Qn No.: f(a) */

#include <stdio.h>
int main()
{
    int num, rev, temp, i;
    printf("Please enter the number : ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999)
    {
        printf("\nPlease enter a five digit number.");
        return 1;
    }
    temp = num;
    for (i = 1; i <= 5; i++)
    {
        rev = (rev * 10) + num % 10;
        num = num / 10;
    }
    printf("\nReverse of the Input number : %d", rev);
    if (rev == temp)
        printf("\nOriginal and reversed numbers are equal.");
    else
        printf("\nOrigianl and reversed numbers are not equal.");
    return 0;
}