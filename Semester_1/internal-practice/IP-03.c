/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 03 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/* Write a program to compute the sum of the first n terms of the series using a function:
S=1−2+3−4+5−6+…  */

#include <stdio.h>

int sum_of_series(int);

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("\nSum of the first %d terms of the series = %d", n, sum_of_series(n));
    return 0;
}

int sum_of_series(int n)
{
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    return sum;
}