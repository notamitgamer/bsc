/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to print all the factors of a postive integer */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("\nFactors of %d : ", num);
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("  %d", i);
        }
    }
    return 0;
}