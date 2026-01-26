/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to find the absolute value
of a number entered through the keyboard. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(d) */

#include <stdio.h>
#include <math.h>
int main()
{
    double num;
    printf("Enter the number : ");
    scanf("%lf", &num);
    num = abs(num);
    printf("\nAbsolute value of the input is : %g", num);
    return 0;
}