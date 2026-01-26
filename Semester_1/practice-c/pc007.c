/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Armstrong number check only for three digit */

#include <stdio.h>

int main()
{
    int num, temp1, armstrongCheck = 0;
    printf("Enter a three digit number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly positive number allowed.");
        return 1;
    }
    if (num < 100 || num > 999)
    {
        printf("\nOnly Three digit postive number allowed.");
        return 1;
    }
    temp1 = num;
    while (temp1 > 0)
    {
        armstrongCheck += (temp1 % 10) * (temp1 % 10) * (temp1 % 10);
        temp1 /= 10;
    }
    if (armstrongCheck == num)
        printf("\nInput %d is a armstrong number.", num);
    else
        printf("\nInput %d is not a armstrong number.", num);
    return 0;
}