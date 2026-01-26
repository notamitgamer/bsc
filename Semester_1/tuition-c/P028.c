/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to calculate factorial of a number */

#include <stdio.h>
int main()
{
    int i = 1, num, fact = 1;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nPlease enter a number.");
        return 1;
    }
    if (num == 0)
    {
        printf("\nFactorial of 0 : 1");
        return 0;
    }
    if (num < 0)
    {
        printf("\nFactorial of %d : UNDEFINED", num);
        return 0;
    }
    while (i <= num)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d : %d", num, fact);
    return 0;
}