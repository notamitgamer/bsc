/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a C program that includes a user-defined function named countSetBits with the
signature int countSetBits(int num);. The function should count and return the number of
set bits (1s) in the binary representation of the given number. */

#include <stdio.h>

int countSetBits(int);

int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (result = countSetBits(num))
    {
        printf("\nNumber of set bits in %d: %d", num, result);
    }
    else
    {
        printf("\nThere is no set bits in %d", num);
    }
    return 0;
}

int countSetBits(int num)
{
    int count = 0;
    int mask= 1;
	int i = 1;
    while (i <= 16)
    {
        if (num & mask)
        {
            count++;
        }
        mask <<= 1;
        i++;
    }
    return count;
}
