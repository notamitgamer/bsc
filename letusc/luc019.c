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

/* If the length of three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is an isosceles,
an equilateral, a scalene or a right-angled triangle. */
/* Author - Amit Dutta, Date - 3rd OCT, 2025 */
/* Let Us C, Chap- 4, Page - 71, Qn No.: D(a) */

#include <stdio.h>
#include <math.h>

#define EPSILON 0.000001
/* EPSILON is used to compare double values for approximate equality,
mitigating floating-point precision errors. */

int main()
{
    double side1, side2, side3;
    printf("Please enter the length of three side of the triangle : ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);
    if (side1 < 1 || side2 < 1 || side3 < 1)
    {
        printf("\nLength of a side of triangle should be a positive integer.");
        return 1;
    }
    if (side1 + side2 < side3 || side1 + side3 < side2 || side2 + side3 < side1)
    {
        printf("\nEntered triangle is not VALID.");
        return 1;
    }
    // isosceles check
    if (side1 == side2 || side2 == side3 || side3 == side1)
        printf("\nEntered triangle is a ISOSCELES triangle.");
    else
        printf("\nEntered triangle is NOT a ISOSCELES triangle.");
    // equilateral check
    if (side1 == side2 && side2 == side3)
        printf("\nEntered triangle is a EQUILATERAL triangle.");
    else
        printf("\nEntered triangle is NOT a EQUILATERAL triangle.");
    // scalene check
    if (side1 != side2 && side2 != side3)
        printf("\nEntered triangle is a SCALENE triangle.");
    else
        printf("\nEntered triangle is NOT a SCALENE triangle.");
    // right-angle check
    if (fabs(((side1 * side1) + (side2 * side2)) - (side3 * side3)) < EPSILON ||
        fabs(((side2 * side2) + (side3 * side3)) - (side1 * side1)) < EPSILON ||
        fabs(((side3 * side3) + (side1 * side1)) - (side2 * side2)) < EPSILON)
        printf("\nEntered triangle is a RIGHT-ANGLED triangle.");
    else
        printf("\nEntered triangle is NOT a RIGHT-ANGLED triangle.");
    return 0;
}