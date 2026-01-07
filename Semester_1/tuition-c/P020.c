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

/* WAP to calculate and display the maturity amount
taking the sum and number of days as input.
    No. of Days         Rate of Interest
    Upto 180 days       5.5 %
    181 to 364 days     7.5 %
    exact 365 days      9.0 %
    more than 365 days  8.5 %
*/
// Author - Amit Dutta, Date - Unknown

#include <stdio.h>
int main()
{
    double nod, amt, s, i;
    printf("Enter the amount and the time in days : ");
    scanf("%lf %lf", &s, &nod);
    if (nod <= 180)
        i = (s * 5.5 * (nod / 365)) / 100;
    else if (nod > 180.0 && nod <= 364.0)
        i = (s * 7.5 * (nod / 365)) / 100;
    else if (nod == 365.0)
        i = (s * 9.0 * 1) / 100;
    else if (nod > 365.0)
        i = (s * 8.5 * (nod / 365)) / 100;
    amt = s + i;
    printf("Amount to be paid : %g", amt);
    return 0;
}