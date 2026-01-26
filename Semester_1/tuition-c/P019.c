/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to input the distance covered and calculate
the amount to be paid by the passanger.
    Distance        Rate
    =<5KM           RS 90
    next 10KM       RS 20/KM
    next 10KM       RS 10/KM
    more than 25KM  RS 9/KM
*/

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