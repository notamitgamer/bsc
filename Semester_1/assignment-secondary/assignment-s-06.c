/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program using a function to compute and display all factors of a given number. */

#include <stdio.h>
#include <stdlib.h>

void display_factors(int);

int main()
{
    int num, i;
    printf("Please enter the number to get the factors from it : ");
    scanf("%d", &num);
    display_factors(num);
    return 0;
}

void display_factors(int num) {
    int temp = abs(num);
    int i;

    if (temp == 0)
    {
        printf("\n0 has infinitely many factors (all integers).");
        exit(1);
    }

    printf("\nThe factors of ' %d ' is :- ", num);
    printf("\nPositive : ");
    for (i = 1; i <= temp; i++)
        if (temp % i == 0)
            printf("  %d", i);
    printf("\nNegative : ");
    for (i = 1; i <= temp; i++)
        if (temp % i == 0)
            printf("  %d", -i);
}