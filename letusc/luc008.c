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

/* If value of an angle is input through the keyboard,
write a program to print all its trigonometric ratios. */
/* Author - Amit Dutta, Date - 30th SEP, 2025 */
/* Let Us C, Chap - 2, Page - 37, Qn No.: G(e) */

#include <stdio.h>
#include <math.h>
int main()
{
    double inp, rsin, rcos, rtan, rcosec, rsec, rcot;
    printf("Enter the Angle in degree : ");
    scanf("%lf", &inp);
    inp = inp * (M_PI / 180); //changing degree to radian
    rsin = sin(inp);
    rcos = cos(inp);
    rtan = tan(inp);
    rcosec = 1 / rsin;
    rsec = 1 / rcos;
    rcot = 1 / rtan;
    printf("\nTrigonometric ratios :-"
           "\nsin   = %g "
           "\ncos   = %g"
           "\ntan   = %g"
           "\ncosec = %g"
           "\nsec   = %g"
           "\ncot   = %g",
           rsin, rcos, rtan, rcosec, rsec, rcot);
    return 0;
}