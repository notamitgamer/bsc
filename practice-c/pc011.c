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

/* Write a C program that takes two positive integers, L (Lower Bound)
and U (Upper Bound), as input from the user. The program must find and print
the count of all numbers between L and U (inclusive) that
are also a Palindrome Number. */
/* Author - Amit Dutta, Date - 11th November, 2025 */

#include <stdio.h>
#define true 1
#define false 0

int isPalindrome(int num)
{
    int temp = num, numRev = 0;
    while (temp > 0)
    {
        numRev = (numRev * 10) + (temp % 10);
        temp /= 10;
    }
    if (num == numRev)
        return true;
    else
        return false;
}

int main()
{
    int uBound, lBound, num, palindromeCount = 0;
    printf("Enter the Lower Bound and Upper Bound : ");
    if (scanf("%d %d", &lBound, &uBound) != 2)
    {
        printf("\nOnly Integer values are allowed.");
        return 1;
    }
    if (lBound < 0 || uBound < 0 || lBound > uBound)
    {
        printf("\nPlease enter appropriate inforamtion.");
        return 1;
    }
    printf("Palindrome Numbers from %d to %d :", lBound, uBound);
    for (num = lBound; num <= uBound; num++)
    {
        if (isPalindrome(num))
        {
            printf("  %d", num);
            palindromeCount++;
        }
    }
    printf("\nTotal Palindrome number found inside the range (%d to %d) : %d", lBound, uBound, palindromeCount);
    return 0;
}