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

/* WAP to input sum (p), rate of interest (r), time (t) and type of interest
('s' for simple interest amd 'c' for compound interest). Calculate and display
the interest earned
    si = (p * r * t) / 100
    compoundInterest = p * ((1 + r / 100)^t - 1)
*/
/* Author - Amit Dutta, Date - 8th OCT, 2025 */

#include <stdio.h>
#include <math.h>
#include <ctype.h>
int main()
{
    double principalAmount, rateOfInterest, timePeriod, simpleInterest, compoundInterest;
    char mode;
    printf("Enter the principle amount, Rate of interest, Time : ");
    scanf("%lf %lf %lf", &principalAmount, &rateOfInterest, &timePeriod);
    printf("\nEnter the mode ('s' : simple interest, 'c' : compound interest) : ");
    scanf(" %c", &mode);
    mode = tolower(mode);
    switch (mode)
    {
    case 's':
        simpleInterest = (principalAmount * rateOfInterest * timePeriod) / 100;
        printf("\nSimple Interest : %g", simpleInterest);
        break;
    case 'c':
        compoundInterest = principalAmount * (pow((1 + rateOfInterest / 100), timePeriod) - 1);
        printf("\nCompound Interest : %g", compoundInterest);
        break;
    default:
        printf("\nInvalid Input");
        return 1;
    }
    return 0;
}