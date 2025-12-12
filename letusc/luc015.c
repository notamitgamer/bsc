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

/* Given three points (x1, y1), (x2, y2), and (x3, y3),
write a program to check if the three poins fall on one straight line. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(f) */

#include <stdio.h>
#include <math.h>
#define EPSILON 0.0001
// Define a small tolerance value (EPSILON) for safe floating-point comparison
// This is critical because of minor rounding errors in computer arithmetic.
int main()
{
    double x1, x2, x3, y1, y2, y3, area;
    printf("Enter the point A(x1, y1) : ");
    scanf("%lf %lf", &x1, &y1);
    printf("Enter the point B(x2, y2) : ");
    scanf("%lf %lf", &x2, &y2);
    printf("Enter the point C(x3, y3) : ");
    scanf("%lf %lf", &x3, &y3);
    area = 0.5 * ((x1 * (y2 - y3)) + (x2 * (y3 - y1)) + (x3 * (y1 - y2)));
    if (fabs(area) < EPSILON) // abs() for integer, fabs() for float, double
        printf("\nA(%g, %g), B(%g, %g) and C(%g, %g) points fall on one straight line.", x1, y1, x2, y2, x3, y3);
    else
        printf("\nA(%g, %g), B(%g, %g) and C(%g, %g) points doesn't fall on one straight line.", x1, y1, x2, y2, x3, y3);
    return 0;
}