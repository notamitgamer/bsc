/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a C program that takes two positive integers, L (Lower Bound)
and U (Upper Bound), as input from the user. The program must find and print
the count of all numbers between L and U (inclusive) that
are also a Palindrome Number. */
/* Author - Amit Dutta, Date - 11th November, 2025 */

#include <stdio.h>
#define true 1
#define false 0

int isPalindrome(int num)
{
    int temp = num, numRev = 0;
    while (temp > 0)
    {
        numRev = (numRev * 10) + (temp % 10);
        temp /= 10;
    }
    if (num == numRev)
        return true;
    else
        return false;
}

int main()
{
    int uBound, lBound, num, palindromeCount = 0;
    printf("Enter the Lower Bound and Upper Bound : ");
    if (scanf("%d %d", &lBound, &uBound) != 2)
    {
        printf("\nOnly Integer values are allowed.");
        return 1;
    }
    if (lBound < 0 || uBound < 0 || lBound > uBound)
    {
        printf("\nPlease enter appropriate inforamtion.");
        return 1;
    }
    printf("Palindrome Numbers from %d to %d :", lBound, uBound);
    for (num = lBound; num <= uBound; num++)
    {
        if (isPalindrome(num))
        {
            printf("  %d", num);
            palindromeCount++;
        }
    }
    printf("\nTotal Palindrome number found inside the range (%d to %d) : %d", lBound, uBound, palindromeCount);
    return 0;
}