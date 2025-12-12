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

/* According to a study, the approximate level of intelligence of a
person can be calculated using the following formula.
    i = 2 + (y + 0.5x)
write a program that will produce a table of values of i, y and x,
where y varies from 1 to 6, and, for each value of y, x varies from
5.5 to 12.5 in steps of 0.5 */
/* Author - Amit Dutta, Date - 20th OCT, 2025 */
/* Let Us C, Chap- 6, Page - 105, Qn No.: B(b) */

#include <stdio.h>
int main()
{
    double y, x;
    printf("\n--- Approximate Intelligence ---\n");
    for (y = 1; y <= 6; y++)
    {
        printf("\tY = %d\n", y);
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            printf("Y: %g\t X: %.2g\t I: %g\n", y, x, 2 + (y + 0.5 * x));
        }
        printf("-----------------------\n");
    }
    return 0;
}