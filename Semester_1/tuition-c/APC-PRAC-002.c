/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to calculate area of a circle using math library
method. Take radius of the circle as input. */
/* Author - Amit Dutta, Date - 18th SEP, 2025 */

#include <stdio.h>
#include <math.h>
int main()
{
    double r, area;
    printf("Enter the radius of the circle : ");
    scanf("%lf", &r);
    area = M_PI * pow(r, 2);
    printf("\nArea of the circle : %g", area);
    return 0;
}