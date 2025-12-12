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

/* Find the sum of the series */
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, res, n;
    int i;

    // s = (a ^ 2) + (a ^ 2 / 2) + (a ^ 2 / 3) + ... + (a ^ 2 / 10)
    {
        res = 0, i = 1;
        printf("--- s = (a ^ 2) + (a ^ 2 / 2) + (a ^ 2 / 3) + ... + (a ^ 2 / 10) ---");
        printf("\nEnter the number : ");
        scanf("%lf", &a);
        while (i <= 10)
        {
            res = res + ((a * a) / i);
            i++;
        }
        printf("S = %g", res);
    }

    // s = 1 + (2 ^ 2 / a) + (3 ^ 3 / a ^ 2) + ... + n
    {
        res = 0, i = 0;
        printf("\n--- // s = 1 + (2 ^ 2 / a) + (3 ^ 3 / a ^ 2) + ... + n ---");
        printf("\nEnter the value for a and n : ");
        scanf(" %lf %lf", &a, &n);
        while (i <= n - 1)
        {
            res = res + (pow(i + 1, i + 1) / pow(a, i));
            i++;
        }
        printf("S = %g", res);
    }

    return 0;
}