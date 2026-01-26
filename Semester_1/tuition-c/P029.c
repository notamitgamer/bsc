/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to perform addition of first n natural numbers. sum = 1 + 2 + 3 + ... */
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
int main()
{
    int num, i = 0, result = 0;
    printf("Enter the value for n : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nPlease enter a number.");
        return 1;
    }
    if (num < 1)
    {
        printf("\nPlease enter a positive number.");
        return 1;
    }
    while (i <= num)
    {
        result = result + i;
        i++;
    }
    printf("\nResult : %d", result);
    return 0;
}