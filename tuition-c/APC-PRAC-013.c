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

/* Write a program to input sum(p), rate of interest(r), time(t) and type of interest
('s' for simple interes, 'c' for compound interest), then calculate and display the earned interest */
/* Author - Amit Dutta, Date - 31st October, 2025 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double p, t, r, si, ci;
    char mode;
    printf("Enter the Principle, Time (Year) and the Rate of Interest : ");
    scanf("%lf %lf %lf", &p, &t, &r);
    printf("Enter the mode of calculation ('s' for simple interest, 'c' for compound interest) : ");
    scanf(" %c", &mode);
    mode = tolower(mode);
    switch (mode)
    {
    case 's':
        si = (p * t * r) / 100;
        printf("\nSimple Interest : %g", si);
        return 0;
    case 'c':
        ci = (p * pow(1 + (r / 100), t)) - p;
        printf("\nCompound Interest : %g", ci);
        return 0;
    default:
        printf("\nYou entered a wrong choice.");
        return 1;
    }
}