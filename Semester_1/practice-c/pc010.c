/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Reverse a number */
/* Author - Amit Dutta, Date - 04th November, 2025 */

#include <stdio.h>
int main()
{
    int num, temp, rev = 0;
    printf("\nEnter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly a number is allowed.");
        return 1;
    }
    temp = num;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    printf("\nReverse of the number %d : %d", num, rev);
    return 0;
}