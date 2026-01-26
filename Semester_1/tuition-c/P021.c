/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to input a positive number and check if it is a perfect
square number or not. */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled. 
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp;
    double sr;
    printf("Enter the number : ");
    scanf("%d", &n);
    sr = sqrt(n);
    temp = (int)sr;
    if (temp * temp == n)
        printf("\nThis is a perfect square.");
    else
        printf("\nThis is not a perfect square.");
    return 0;
}