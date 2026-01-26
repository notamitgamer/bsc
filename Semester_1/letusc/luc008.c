/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* If value of an angle is input through the keyboard,
write a program to print all its trigonometric ratios. */
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