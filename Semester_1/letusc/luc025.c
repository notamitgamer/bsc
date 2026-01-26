/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to find the greates of the three numbers entered
through the keyboard. Use conditional operators. */
/* Let Us C, Chap- 4, Page - 72, Qn No.: E(c) */

#include <stdio.h>
int main()
{
    double num1, num2, num3, max;
    printf("Enter three number : ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);
    printf("\nGreatest of the three number '%g', '%g' and '%g' is : '%g'", num1, num2, num3, 
        (num1 > num2 && num1 > num3) ? num1 : ((num2 > num1 && num2 > num3) ? num2 : num3));
    return 0;
}