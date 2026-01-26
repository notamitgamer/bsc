/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a C program that includes a user-defined function named setBit with the signature
int setBit(int num, int position);. The function should set the bit at the specified position
(0-indexed) to 1 and return the modified number. */

#include <stdio.h>

int setBit(int, int);

int main()
{
    int num, position;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the postion where you want to set the bit (0-indexed): ");
    scanf("%d", &position);
    printf("\nModified number= %d", setBit(num, position));
    return 0;
}

int setBit(int num, int position)
{
    int mask = 1 << position;
    return num | mask;
}