/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* If the length of three sides of a triangle are entered through the
keyboard, write a program to check whether the triangle is an isosceles,
an equilateral, a scalene or a right-angled triangle. */
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