/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* sum = 1 + 1+2/1*2 + 1+2+3/1*2*3 + ... + 1+2+3+...+n/1*2*3*...*n */

#include <stdio.h>

int main()
{
    double sum = 0, temp1 = 0, temp2 = 1;
    int n, i;
    printf("Enter value for n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        temp1 += i;
        temp2 *= i;
        sum += temp1 / temp2;
    }
    printf("\nSum = %g", sum);
    return 0;
}