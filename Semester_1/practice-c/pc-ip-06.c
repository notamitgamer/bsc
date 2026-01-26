/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 6:
 * Write a program using a function to compute and display all factors of a given number.
 */

#include <stdio.h>

void printFactors(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    printFactors(n);
    return 0;
}

void printFactors(int n)
{
    int i;
    printf("\nFactors of %d:", n);
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("  %d", i);
        }
    }
}