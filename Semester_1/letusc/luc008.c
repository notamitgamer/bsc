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

/* If value of an angle is input through the keyboard,
write a program to print all its trigonometric ratios. */
/* Author - Amit Dutta, Date - 30th SEP, 2025 */
/* Let Us C, Chap - 2, Page - 37, Qn No.: G(e) */

#include <stdio.h>
#include <math.h>
int main()
{
    double inp, rsin, rcos, rtan, rcosec, rsec, rcot;
    printf("Enter the Angle in degree : ");
    scanf("%lf", &inp);
    inp = inp * (M_PI / 180); //changing degree to radian
    rsin = sin(inp);
    rcos = cos(inp);
    rtan = tan(inp);
    rcosec = 1 / rsin;
    rsec = 1 / rcos;
    rcot = 1 / rtan;
    printf("\nTrigonometric ratios :-"
           "\nsin   = %g "
           "\ncos   = %g"
           "\ntan   = %g"
           "\ncosec = %g"
           "\nsec   = %g"
           "\ncot   = %g",
           rsin, rcos, rtan, rcosec, rsec, rcot);
    return 0;
}