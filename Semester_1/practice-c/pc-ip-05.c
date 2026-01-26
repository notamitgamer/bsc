/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 05 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 5:
 * Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.
 */

#include <stdio.h>

int isPalindrome(char[]);

int main()
{
    char str[51];
    printf("Please enter the string (Max: 50 character): ");
    gets(str);
    if (isPalindrome(str))
    {
        printf("\nInput string is a palindrome string.");
    }
    else
    {
        printf("\ninput string is not a palindrome string.");
    }
    return 0;
}

int isPalindrome(char str[])
{
    int low = 0;
    int high = 0;
    while (str[high] != '\0')
    {
        high++;
    }
    high--;
    if (low == high)
    {
        return 1;
    }
    while (low < high)
    {
        if (str[low] != str[high])
        {
            return 0;
        }
        low++;
        high--;
    }
    return 1;
}