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

/* Get sum of even position digit and odd position digit */
/* Counting starts from the rightmost digit as position 1 (Odd). */
/* Author - Amit Dutta, Date - 18th OCT, 2025 */

#include <stdio.h>
int main()
{
    int inp, temp, index = 1, even = 0, odd = 0;
    printf("Enter the numebr : ");
    scanf("%d", &inp);
    temp = inp;
    while (temp > 0)
    {
        if (index % 2 == 0)
            even += temp % 10;
        else
            odd += temp % 10;
        temp /= 10;
        index++;
    }
    printf("\nSum of even position digits : %d"
           "\nSum of odd position digits : %d",
           even, odd);
    return 0;
}