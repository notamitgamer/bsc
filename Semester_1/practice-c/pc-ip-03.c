/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 3:
 * Write a program to compute the sum of the first n terms of the series using a function: S=1-2+3-4+5-6+...
 */

#include <stdio.h>

int series(int);

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("\nSum of the series: %d", series(n));
    return 0;
}

int series(int n)
{
    int i, result = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
    }
    return result;
}