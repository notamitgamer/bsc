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

/* Write a C program that includes a user-defined function named countSetBits with the
signature int countSetBits(int num);. The function should count and return the number of
set bits (1s) in the binary representation of the given number. */

#include <stdio.h>

int countSetBits(int);

int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (result = countSetBits(num))
    {
        printf("\nNumber of set bits in %d: %d", num, result);
    }
    else
    {
        printf("\nThere is no set bits in %d", num);
    }
    return 0;
}

int countSetBits(int num)
{
    int count = 0;
    if (num < 0)
    {
        printf("\nOnly positive numbers are allowed to maintain consistency. \nUsing absolute value %d", -num);
        num = -num;
    }
    while (num > 0)
    {
        if (num & 1)
        {
            count++;
        }
        num >>= 1;
        /*
        Another method to do the above bitwise calculation...
        if(num % 2 == 1) {
            count++;
        }
        num /= 2;
        */
    }
    return count;
}