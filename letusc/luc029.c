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

/* Write a program to print out all Armstrong numbers between 100
and 500. If sum of cubes of each digit of the number is equal to the
number itself, then the number is called an Armstrong number. For
example, 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3) */
/* Author - Amit Dutta, Date - 7th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(b) */

#include <stdio.h>
#include <math.h>
int main()
{
    int num = 100, temp1, temp2, res;
    printf("Armstrong numbers between 100 and 500 :");
    while (num <= 500)
    {
        temp1 = num;
        res = 0;
        while (temp1 != 0)
        {
            temp2 = temp1 % 10;
            res = res + pow(temp2, 3);
            temp1 = temp1 / 10;
        }
        if (num == res)
            printf("  %d", num);
        num++;
    }
    return 0;
}