/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to input positive number and check whether the number is
perfect square or not. If the number is negetive then display appropriate message */
/* Author - Amit Dutta, Date - 31st October, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nYou entered a negetive number.");
        return 1;
    }
    temp = (int)sqrt(num);
    if (temp * temp == num)
    {
        printf("\nInput %d is a perfect square number.", num);
        return 0;
    }
    else
        printf("\nInput %d is not a perfect square number.", num);
    return 0;
}