/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to calculate HCF of two positive number */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    while (b > 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    printf("HCF = %d", a);
    return 0;
}