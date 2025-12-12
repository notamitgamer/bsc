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

/* Display the first 15 terms of the series. */
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    int i, r;

    // 3, 6, 9, 12, ...
    {
        i = 3, r = 0;
        printf("Series 1 (3, 6, 9, 12, ...) :");
        while (i <= 15)
        {
            r = r + 3;
            printf("  %d", r);
            i++;
        }
    }

    // 1, 4, 9, 16, ...
    {
        i = 1;
        printf("\nSeries 2 (1, 4, 9, 16, ...) :");
        while (i <= 15)
        {
            printf("  %d", i * i);
            i++;
        }
    }

    // 4, 8, 16, 32, ...
    {
        i = 1, r = 2;
        printf("\nSeries 3 (4, 8, 16, 32, ...) :");
        while (i <= 15)
        {
            r = r * 2;
            printf("  %d", r);
            i++;
        }
    }

    // 0, 7, 26, ...
    {
        i = 1, r;
        printf("\nSeries 4 (0, 7, 26, ...) :");
        while (i <= 15)
        {
            r = (int)pow(i, 3) - 1;
            printf("  %d", r);
            i++;
        }
    }

    return 0;
}
