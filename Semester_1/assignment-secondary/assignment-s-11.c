/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program that takes the radius of a circle as input, passes it to a function that
computes area and circumference, and displays results in main(). */

#include <stdio.h>
#include <math.h>

void area_circumference(double, double *, double *);

int main()
{
    double r, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    area_circumference(r, &area, &circumference);
    printf("\nArea of the circle = %g", area);
    printf("\nCircumference of the circle = %g", circumference);
    return 0;
}

void area_circumference(double r, double *area, double *circumference)
{
    *area = M_PI * r * r;
    *circumference = 2 * M_PI * r;
}