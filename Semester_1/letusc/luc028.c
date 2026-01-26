/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to print all the ASCII values and their equivalent
characters using a while loop. The ASCII may vary from 0 to 255. */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(a) */

#include <stdio.h>
int main()
{
    int i = 0;
    printf("ASCII Value\tCharacter");
    printf("\n-----------\t---------\n");
    while (i <= 255)
    {
        printf("%d.\t%c\n\n", i, i);
        i++;
    }
    return 0;
}