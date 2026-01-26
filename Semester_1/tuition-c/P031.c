/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Find the sum of the series */

#include <stdio.h>
#include <math.h>

int main()
{
    double a, res, n;
    int i;

    // s = (a ^ 2) + (a ^ 2 / 2) + (a ^ 2 / 3) + ... + (a ^ 2 / 10)
    {
        res = 0, i = 1;
        printf("--- s = (a ^ 2) + (a ^ 2 / 2) + (a ^ 2 / 3) + ... + (a ^ 2 / 10) ---");
        printf("\nEnter the number : ");
        scanf("%lf", &a);
        while (i <= 10)
        {
            res = res + ((a * a) / i);
            i++;
        }
        printf("S = %g", res);
    }

    // s = 1 + (2 ^ 2 / a) + (3 ^ 3 / a ^ 2) + ... + n
    {
        res = 0, i = 0;
        printf("\n--- // s = 1 + (2 ^ 2 / a) + (3 ^ 3 / a ^ 2) + ... + n ---");
        printf("\nEnter the value for a and n : ");
        scanf(" %lf %lf", &a, &n);
        while (i <= n - 1)
        {
            res = res + (pow(i + 1, i + 1) / pow(a, i));
            i++;
        }
        printf("S = %g", res);
    }

    return 0;
}