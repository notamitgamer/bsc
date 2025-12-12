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

/* Write a program using a function to compute and display all factors of a given number. */

#include <stdio.h>
#include <stdlib.h>

void display_factors(int);

int main()
{
    int num, i;
    printf("Please enter the number to get the factors from it : ");
    scanf("%d", &num);
    display_factors(num);
    return 0;
}

void display_factors(int num) {
    int temp = abs(num);
    int i;

    if (temp == 0)
    {
        printf("\n0 has infinitely many factors (all integers).");
        exit(1);
    }

    printf("\nThe factors of ' %d ' is :- ", num);
    printf("\nPositive : ");
    for (i = 1; i <= temp; i++)
        if (temp % i == 0)
            printf("  %d", i);
    printf("\nNegative : ");
    for (i = 1; i <= temp; i++)
        if (temp % i == 0)
            printf("  %d", -i);
}