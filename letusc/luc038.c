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

/* Write a program to generate all Pythagorean Triplets with slide
length less than or equal to 30. */
/* Author - Amit Dutta, Date - 21st OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(e) */

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Pythagorean Triplets with slide length less than or equal to 30 : \n");
    for (a = 1; a <= 30; a++)
    {
        for (b = a; b <= 30; b++)
        {
            int c_square = a * a + b * b;
            for (c = b + 1; c <= 30; c++)
            {
                if (c * c == c_square)
                    printf("(%d, %d, %d)\n", a, b, c);
            }
        }
    }
    return 0;
}