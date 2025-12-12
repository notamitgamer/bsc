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

/* Pattern :
    (a) 1, -3, 5, -7, 9, -11, ... upto n times
    (b) 0, 3, 8, 15, ... upto n times
*/
/* Author - Amit Dutta, Date - 07th November, 2025 */
// File Name - amit0711202505.c (LAB), APC-PRAC-023.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, temp = 1;
    bool isNegative = true;
    printf("Enter the n : ");
    scanf("%d", &n);
    printf("\nPattern A :");
    for (i = 1; i <= n; i++)
    {
        if (!isNegative)
        {
            printf("  %d", temp * -1);
            isNegative = true;
        }
        else
        {
            printf("  %d", temp);
            isNegative = false;
        }
        temp += 2;
    }
    printf("\nPattern B :");
    for (i = 1; i <= n; i++)
    {
        temp = (i * i) - 1;
        printf("  %d", temp);
    }
    return 0;
}