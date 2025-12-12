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

/* Write a program to recieve value of an angle in degreesand check
whether sum of squares of sine and cosine of this angle is equal to 1. */
/* Author - Amit Dutta, Date - 6th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 73, Qn No.: E(d) */

#include <stdio.h>
#include <math.h>
#define EPSILON 0.0000001

int main()
{
    double angle, result;
    printf("Enter the angle value in degree : ");
    // checking if the input is other than number.
    if(scanf("%lf", &angle) != 1) {
        printf("\nPlease enter a number.");
        return 1;
    }
    angle = angle * (M_PI / 180); // converting degree to radian
    result = pow(sin(angle), 2) + pow(cos(angle), 2);
    (fabs(result - 1.0) < EPSILON) ?
    printf("\nsum of squares of sine and cosine of this angle is equal to 1.") :
    printf("\nsum of squares of sine and cosine of this angle is NOT equal to 1.");
    return 0;
}