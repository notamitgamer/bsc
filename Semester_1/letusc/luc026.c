/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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