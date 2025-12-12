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

/* Given a point (x, y), write a program to find out if it lies on X-axis, Y-axis or origin. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(h) */

#include <stdio.h>
#include <math.h>
#define EPSILON 0.00001

int main()
{
    double x, y;
    printf("Enter the point P(x, y) : ");
    scanf("%lf %lf", &x, &y);
    if (fabs(x) < EPSILON && fabs(y) < EPSILON)
        printf("\nPoint P(%g, %g) lies on the origin.", x, y);
    else if (fabs(x) < EPSILON)
        printf("\nPoint P(%g, %g) lies on the Y-Axis.", x, y);
    else if (fabs(y) < EPSILON)
        printf("\nPoint P(%G, %g) lies on the X-Axis.", x, y);
    else
        printf("\nThe point P(%g, %g) lies in a QUADRANT (not on an axis or the origin).", x, y);
    return 0;
}