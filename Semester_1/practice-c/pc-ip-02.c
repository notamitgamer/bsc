/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 2:
 * Write a program to reverse a non-negative integer using a function.
 */

#include <stdio.h>

int reverse(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nOnly poitive integers are allowed.");
        return 1;
    }
    printf("\nReverse of input %d is : %d", num, reverse(num));
    return 0;
}

int reverse(int num)
{
    int result = 0;
    while (num > 0)
    {
        result = (result * 10) + (num % 10);
        num /= 10;
    }
    return result;
}