/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
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