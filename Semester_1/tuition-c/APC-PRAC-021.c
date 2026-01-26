/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to check special number (sum of digit + product of digit = original number) */
// File Name - amit0711202503.c (LAB), APC-PRAC-021.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

int main()
{
    int num, temp, sumOfDigit = 0, productOfDigit = 1;
    printf("Enter the number to check if it is a special number : ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        sumOfDigit += temp % 10;
        productOfDigit *= temp % 10;
        temp /= 10;
    }
    temp = sumOfDigit + productOfDigit;
    if (num == temp)
        printf("\nInput %d is a special number.", num);
    else
        printf("\nInput %d is not a special number.", num);
    return 0;
}