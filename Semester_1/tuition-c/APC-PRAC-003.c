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

/* WAP to accept  diagonal of a square and calculate area, parimeter */
/* Author - Amit Dutta, Date - 18th SEP, 2025 */

#include <stdio.h>
#include <math.h>
int main()
{
    double dia, side, area, peri;
    printf("Enter the diagonal of the square : ");
    scanf("%lf", &dia);
    side = dia / sqrt(2);
    area = pow(side, 2);
    peri = 4 * side;
    printf("\nArea of the square      : %g"
           "\nPerimeter of the square : %g",
           area, peri);
    return 0;
}