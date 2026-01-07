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

/* WAP to input the distance covered and calculate
the amount to be paid by the passanger.
    Distance        Rate
    =<5KM           RS 90
    next 10KM       RS 20/KM
    next 10KM       RS 10/KM
    more than 25KM  RS 9/KM
*/
// Author - Amit Dutta, Date - Unknown

#include <stdio.h>
int main()
{
    double dis, amt;
    printf("Enter the distance : ");
    scanf("%lf", &dis);
    if (dis <= 5.0)
        amt = 90.0;
    else if (dis > 5.0 && dis <= 15.0)
        amt = 90.0 + (dis - 5.0) * 20;
    else if (dis > 15.0 && dis <= 25.0)
        amt = 90.0 + 200.0 + (dis - 15.0) * 10;
    else if (dis > 25.0)
        amt = 90.0 + 200.0 + 100.0 + (dis - 25.0) * 9;
    printf("\nAmount to be paid : %g", amt);
    return 0;
}