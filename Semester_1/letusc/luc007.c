/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Wind-chill factor is the felt air temperature on exposed skin due to wind.
The wind-chill temperature is always lower than the air temperature, and is
calculated as per the following formula.
    wcf = 35.74 + 0.6215t + (0.4275t - 35.75) * v^0.16
Where t is temperature and v is wind velocity. Write a program to receive
values of t and v and calcualate wind-chill factor (wcf). */
/* Let Us C, Chap - 2, Page - 37, Qn No.: G(d) */

#include <stdio.h>
#include <math.h>
int main()
{
    double t, v, wcf;
    printf("Enter the temperature and velociy of the wind : ");
    scanf("%lf %lf", &t, &v);
    wcf = 35.74 + (0.6215 * t) + (((0.4275 * t) - 35.75) * pow(v, 0.16));
    printf("\nWind-chill factor (wcf) : %g", wcf);
    return 0;
}