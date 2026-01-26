/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Given three points (x1, y1), (x2, y2), and (x3, y3),
write a program to check if the three poins fall on one straight line. */
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