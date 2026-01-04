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

/* WAP to input the total cost and compute the amount to be paid
by the customer.  */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled. 
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
int main()
{
    double cost, amt;
    printf("Enter the total cost : ");
    scanf("%lf", &cost);
    if (cost <= 2000)
        amt = cost * 0.94;
    else if (cost > 2000 && cost <= 5000)
        amt = cost * 0.9;
    else if (cost > 5000 && cost <= 10000)
        amt = cost * 0.85;
    else if (cost > 10000)
        amt = cost * 0.8;
    printf("\nAmount to be paid : %g", amt);
    return 0;
}