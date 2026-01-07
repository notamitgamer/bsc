/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
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

/*
 * Question 8:
 * Write a program that takes the radius of a circle as input, passes it to a function that computes area and circumference, and displays results in main().
 */

#include <stdio.h>
#include <math.h>

void area_circumference(double, double *, double *);

int main()
{
    double r, area, cir;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    area_circumference(r, &area, &cir);
    printf("\nArea of the circle: %g", area);
    printf("\nCircumference of the circle: %g", cir);
    return 0;
}

void area_circumference(double r, double *area, double *cir)
{
    *area = M_PI * r * r;
    *cir = 2 * M_PI * r;
}