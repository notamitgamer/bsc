/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to accept  diagonal of a square and calculate area, parimeter */
/* Author - Amit Dutta, Date - 18th SEP, 2025 */

#include <stdio.h>
#include <math.h>
int main()
{
    double dia, side, area, peri;
    printf("Enter the diagonal of the square : ");
    scanf("%lf", &dia);
    side = dia / sqrt(2);
    area = pow(side, 2);
    peri = 4 * side;
    printf("\nArea of the square      : %g"
           "\nPerimeter of the square : %g",
           area, peri);
    return 0;
}