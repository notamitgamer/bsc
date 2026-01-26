/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to display all numbers between lb (lower bound) and up (upper bound)
which ends with digit 7 or divisible by 7. */
// File Name - amit0611202501.c (LAB), APC-PRAC-015.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int lb, ub, i;
    printf("Enter the lb, ub : ");
    scanf("%d %d", &lb, &ub);
    printf("\nEnds with 7 :");
    for (i = lb; i <= ub; i++)
    {
        if (i % 10 == 7)
        {
            printf("  %d", i);
        }
    }
    printf("\nDivisible by 7 :");
    for (i = lb; i <= ub; i++)
    {
        if (i % 7 == 0)
        {
            printf("  %d", i);
        }
    }
    return 0;
}