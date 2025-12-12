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

/* Ramanujan number (1729) is the smallest number that can be
expressed as sum of cubes in two different ways - 1729 can be
expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to print all such
numbers up to a reasonable limit. */
/* Author - Amit Dutta, Date - 22nd - 23rd OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(g) */

#include <stdio.h>

#define limit 100000
#define max_base 47

int main()
{

    long long sum1, sum2;
    int count = 0;

    printf("Ramanujan numbers : \n");

    int found_match;

    for (int a = 1; a <= max_base; a++)
    {
        for (int b = a + 1; b <= max_base; b++)
        {
            sum1 = (long long)a * a * a + (long long)b * b * b;
            if (sum1 > limit)
            {
                break;
            }

            found_match = 0;

            for (int c = a + 1; c <= max_base; c++)
            {
                if (found_match)
                {
                    break;
                }
                for (int d = c + 1; d <= max_base; d++)
                {
                    sum2 = (long long)c * c * c + (long long)d * d * d;
                    if (sum2 > sum1)
                    {
                        break;
                    }
                    if (sum1 == sum2)
                    {
                        count++;
                        printf("(%d.) %lld = %d^3 + %d^3 = %d^3 + %d^3\n", count, sum1, a, b, c, d);

                        found_match = 1;
                        break;
                    }
                }
            }
        }
    }

    printf("-------------------------------\n");
    printf("Search complete.");

    return 0;
}