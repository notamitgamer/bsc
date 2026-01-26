/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to input a number and check whether it is a Niven number
or not. (When a number is divisible by its sum of digit) e.g. : n = 126*/
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
int main()
{
    int n, temp, sod = 0;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        sod = sod + (temp % 10);
        temp = temp / 10;
    }
    if (n % sod == 0)
        printf("\nIt is Niven number.");
    else
        printf("\nIt is not a Niven number.");
    return 0;
}