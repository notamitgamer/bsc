/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to input sum(p), rate of interest(r), time(t) and type of interest
('s' for simple interes, 'c' for compound interest), then calculate and display the earned interest */
/* Author - Amit Dutta, Date - 31st October, 2025 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main()
{
    double p, t, r, si, ci;
    char mode;
    printf("Enter the Principle, Time (Year) and the Rate of Interest : ");
    scanf("%lf %lf %lf", &p, &t, &r);
    printf("Enter the mode of calculation ('s' for simple interest, 'c' for compound interest) : ");
    scanf(" %c", &mode);
    mode = tolower(mode);
    switch (mode)
    {
    case 's':
        si = (p * t * r) / 100;
        printf("\nSimple Interest : %g", si);
        return 0;
    case 'c':
        ci = (p * pow(1 + (r / 100), t)) - p;
        printf("\nCompound Interest : %g", ci);
        return 0;
    default:
        printf("\nYou entered a wrong choice.");
        return 1;
    }
}