/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Find maximum between three number. */

#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter the value for a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    printf("Maximum : %d", max);
    return 0;
}