/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 16:
 * Write a C program that includes a user-defined function named isArmstrong with the signature int isArmstrong(int num);.
 */

#include <stdio.h>
#include <math.h>

int isArmstrong(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    {
        printf("\nInput %d is a Armstrong number.", num);
    }
    else
    {
        printf("\nInput %d is not a Armstrong number.", num);
    }
    return 0;
}

int isArmstrong(int num)
{
    int temp = num;
    int power = 0;
    int result = 0;
    while (temp > 0)
    {
        power++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0)
    {
        result += (int)pow((temp % 10), power);
        temp /= 10;
    }
    return result == num;
}