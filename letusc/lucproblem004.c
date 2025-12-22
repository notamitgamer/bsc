/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/letusc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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