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

/* Write a program to produce the following output :
            1
        2       3
    4       5       6
7       8       9       10
*/

/* Author - Amit Dutta, Date - 23rd OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(i) */

#include <stdio.h>
int main()
{
    int starter = 1;
    int tab = 3;
    printf("The pattern : \n");
    for (int i = 1; i <= 4; i++)
    {
        int count = 0;
        for (int k = 1; k <= tab; k++)
        {
            printf("    ");
        }
        tab = tab - 1;
        for (int j = starter; j <= 10; j++)
        {
            if (count >= i)
            {
                break;
            }
            printf("%d       ", j);
            count++;
            starter++;
        }
        printf("\n");
    }
    return 0;
}