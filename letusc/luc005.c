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

/* Write a program to recive Cartesian
co-ordinates (x, y) of a point and convert
them into Polar co-ordinates (r, phi)
    Hint : r = sqrt (x^2 + y^2) and phi = tan^-1 (y/x) */
/* Author - Amit Dutta, Date - 28th SEP, 2025 */
/* Let Us C; Page - 37; Chap- 2; QNo.: G(b) */

#include <stdio.h>
#include <math.h>
int main()
{
    double x, y, r, phi;
    printf("Enter the Cartesian Co-Ordinates in this format 'x, y' : ");
    scanf("%lf, %lf", &x, &y);
    r = sqrt(pow(x, 2) + pow(y, 2));
    phi = atan2(y, x);
    printf("\nPolar Co-Ordinates are : (%g, %g Rad)", r, phi);
    return 0;
}