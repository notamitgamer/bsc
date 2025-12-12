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

/* Write a program to recive Cartesian
co-ordinates (x, y) of a point and convert
them into Polar co-ordinates (r, phi)
    Hint : r = sqrt (x^2 + y^2) and phi = tan^-1 (y/x) */
/* Author - Amit Dutta, Date - 28th SEP, 2025 */
/* Let Us C; Page - 37; Chap- 2; QNo.: G(b) */

#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, r, phi;
    printf("Enter the Cartesian Co-Ordinates in this format 'x, y' : ");
    scanf("%lf, %lf", &x, &y);
    r = sqrt(pow(x, 2) + pow(y, 2));
    phi = atan2(y, x);
    printf("\nPolar Co-Ordinates are : (%g, %g Rad)", r, phi);
    return 0;
}