/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to find out smallest of three numbers without using if_else block. */
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
// This code has not been compiled. 
// If you find any issues, please create a new issue on GitHub regarding them.

#include <stdio.h>
int main()
{
    int a, b, c, min;
    printf("Enter three number : ");
    scanf("%d %d %d", &a, &b, &c);
    min = (a < b && a < c) ? a : (b < a && b < c) ? b
                                                  : c;
    printf("Minimum = %d", min);
    return 0;
}