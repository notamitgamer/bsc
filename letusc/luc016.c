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

/* Given the coordiantes (x, y) of center of a circle and its radius,
write a program that will determine whether a point lies inside the circle,
on the circle or outside the circle. (Hint : Use sqrt() and pow() functions.) */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(g) */

#include <stdio.h>
#include <math.h>
// Define a small tolerance value (EPSILON) for reliable floating-point comparison
#define EPSILON 0.0001

int main()
{
    double h, k;
    double R;
    double x, y;
    double distance_sq;
    printf("Enter the center coordinates (h, k) : ");
    scanf("%lf %lf", &h, &k);
    printf("Enter the radius (R) : ");
    scanf("%lf", &R);
    printf("Enter the point P coordinates (x, y) : ");
    scanf("%lf %lf", &x, &y);
    distance_sq = pow(x - h, 2) + pow(y - k, 2);
    double radius_sq = R * R;
    // Case 1: On the circle (D^2 = R^2) - Use EPSILON for safety!
    if (fabs(distance_sq - radius_sq) < EPSILON)
    {
        printf("The point P(%g, %g) lies ON THE CIRCLE.\n", x, y);
    }
    // Case 2: Inside the circle (D^2 < R^2)
    else if (distance_sq < radius_sq)
    {
        printf("The point P(%g, %g) lies INSIDE THE CIRCLE.\n", x, y);
    }
    // Case 3: Outside the circle (D^2 > R^2)
    else
    {
        printf("The point P(%g, %g) lies OUTSIDE THE CIRCLE.\n", x, y);
    }
    return 0;
}