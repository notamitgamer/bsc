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

/*
Write a C program to print all unique combinations of three numbers (a, b, c) such that:
1 ≤ a, b, c ≤ 30 and a² + b² = c² (Pythagorean triplets)
*/
/* Author: Amit Dutta, Date: 21-11-2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    printf("a² + b² = c² :  ");
    int i, j, k, sq1, sq2, count = 0;
    for (i = 1; i <= 30; i++)
    {
        sq1 = i * i;
        for (j = i + 1; j <= 30; j++)
        {
            sq2 = j * j;
            for (k = j + 1; k <= 30; k++)
            {
                if (sq1 + sq2 == k * k)
                {
                    printf("(%d, %d, %d)  ", i, j, k);
                    count++;
                }
            }
        }
    }
    printf("\n\nCount: %d\n", count);
    return 0;
}