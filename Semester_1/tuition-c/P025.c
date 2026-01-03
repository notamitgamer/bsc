/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/tuition-c
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* WAP to input the electricity unit consumed and calculate the total
bill amount according to the given condition :
    for 1st 50 unit            Rs. 0.50 per unit
    next 100 unit              Rs. 0.75 per unit
    next 100 unit              Rs. 1.20 per unit
    above 250 unit             Rs. 1.50 per unit
And additional charge of 20 percent is added to the bill.
*/
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled. 
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
int main()
{
    double unit, amt;
    printf("Enter the electricity consp(unit) : ");
    scanf("%lf", &amt);
    if (unit <= 50)
        amt = unit * 0.50;
    else if (unit > 50 && unit <= 50)
        amt = 25 + ((unit - 50) * 0.75);
    else if (unit > 150 && unit <= 250)
        amt = 25 + 75 + ((unit - 150) * 1.20);
    else if (unit > 250)
        amt = 25 + 75 + 120 + ((unit - 250) * 1.50);
    amt = amt * 1.20;
    printf("\nAmount to be paid : %g", amt);
    return 0;
}