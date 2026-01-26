/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Sum of digit */

#include <stdio.h>
int main()
{
    int num, sumOfDigit = 0, temp;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly a number is allowed.");
        return 1;
    }
    temp = num;
    while (temp > 0)
    {
        sumOfDigit += temp % 10;
        temp /= 10;
    }
    printf("\nSum of the digit %d : %d", num, sumOfDigit);
    return 0;
}