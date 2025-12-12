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

/* Write a program to print 24 hours of day with suitable suffixes like
AM, PM, Noon and Midnight. */
/* Author - Amit Dutta, Date - 23rd OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(h) */

#include <stdio.h>
int main()
{
    int hour, temp;
    printf("Time \tSuffix\n");
    for (int hour = 0; hour <= 23; hour++)
    {
        if (hour == 0)
            printf("12:00\tAM (Midnight)\n");
        else if (hour == 12)
            printf("12:00\tPM (Noon)\n");
        else if (hour >= 1 && hour <= 11)
            printf("%02d:00\tAM\n", hour);
        else if (hour >= 13 && hour <= 23)
            printf("%02d:00\tPM\n", hour - 12);
    }
    return 0;
}