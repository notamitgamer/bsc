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

/* If the lengths of three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is valid or not.
The triangle is valid if the sum of two sides is greater that the largest
of the three sides. */
/* Author - Amit Dutta, Date - 02th OCT, 2025 */
/* Let Us C, Chap - 4, Page - 66, Problem 4.3 */

#include <stdio.h>
int main()
{
    double side1, side2, side3;
    printf("Enter the length of side1, side2 and side3 of the triangle : ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("\nTriangle sides must be positive.\n");
        return 1;
    }
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    // Triangle Inequality Theorem
        printf("\nThis triangle is valid.");
    else
        printf("\nThis triangle is not valid.");
    return 0;
}