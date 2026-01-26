/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to check if two number is co-prime or not */
// File Name - amit0711202502.c (LAB), APC-PRAC-020.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int a, b, temp, temp_a, temp_b;
    printf("Enter the a and b : ");
    scanf("%d %d", &a, &b);
    temp_a = a, temp_b = b;
    while (b > 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    if (a == 1)
        printf("\n%d and %d is co-prime\n", temp_a, temp_b);
    else
        printf("\n%d and %d is NOT co-prime\n", temp_a, temp_b);
    return 0;
}