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

/* WAP to calculate and display radius of a circle by taking the area as input. */
/* Author - Amit Dutta, Date - 18th SEP, 2025 */

#include <stdio.h>
#include <math.h>
int main()
{
    double r, area;
    printf("Enter the area of the circle : ");
    scanf("%lf", &area);
    r = sqrt(area / M_PI);
    printf("\nRadius of the circle : %g", r);
    return 0;
}