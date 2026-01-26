/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 1:
 * Write a program to compute the sum and product of digits of an integer using user-defined functions.
 */

#include <stdio.h>

int sum(int);
int product(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nSum of digit: %d", sum(num));
    printf("\nProduct of digit: %d", product(num));
    return 0;
}

int sum(int num)
{
    int result = 0;
    while (num > 0)
    {
        result += num % 10;
        num /= 10;
    }
    return result;
}

int product(int num)
{
    int result = 1;
    if (num == 0)
    {
        return 0;
    }
    while (num > 0)
    {
        result *= num % 10;
        num /= 10;
    }
    return result;
}