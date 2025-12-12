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

/* Define a function to convert any given year into its Roman equivalent.
Use these roman equivalent for decimal numbers : 1 - I, 5 - V, 10 - X,
50 - L, 100 - C, 500 - D, 1000 - M */
/* Author - Amit Dutta, Date - 17th November, 2025 */
/* Let Us C, Chap - 8, Page - 141, Problem 8.3 */

#include <stdio.h>

void romanise(int);

void romanise(int year)
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *romanChar[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    // including the two-character subtractive pairs.
    int i = 0;

    printf("Year %d = ", year);
    while (year > 0)
    {
        if (year >= values[i])
        {
            printf("%s", romanChar[i]);
            year -= values[i];
        }
        else
            i++;
    }
}

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    romanise(year);
    return 0;
}