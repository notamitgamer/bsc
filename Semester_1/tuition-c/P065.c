/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/* Write a program to reverse a string */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void str_rev(char[]);

int main()
{
    char str[101];
    printf("Enter the string (Max: 100 Character): ");
    gets(str);
    printf("\nBefore Reverse: %s", str);
    str_rev(str);
    printf("\nAfter Reverse: %s", str);
    return 0;
}

void str_rev(char str[])
{
    int i, j;
    char temp;
    i = 0;
    j = strlen(str) - 1; // not taking the null
    while (i < j)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}