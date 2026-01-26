/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 14 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/* Write a program using user defined method to implement the following
    JAVA PROG Mastery -> JPM
    java prog mastery -> JPM
    Acharya Prafulla Chandra -> JPM
*/

#include <stdio.h>
#include <ctype.h>

void _short_1(char str[])
{
    int i = 0, j = 0;
    char s[10];
    if (str[0] != '\0' && str[0] != ' ')
    {
        s[j] = toupper(str[j]);
        i++;
        j++;
    }
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            s[j] = toupper(str[i + 1]);
            i++;
            j++;
        }
        i++;
    }
    s[j] = '\0';
    printf("\nResult 1: %s", s);
}

void _short_2(char str[])
{
    int i, j;
    char strnew[10];
    strnew[0] = toupper(str[0]);
    i = j = 1;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            strnew[j++] = toupper(str[i + 1]);
        }
        i++;
    }
    strnew[j] = '\0';
    printf("\nResult 2: %s", strnew);
}

int main()
{
    char str[30];
    printf("Enter the string: ");
    gets(str);
    _short_1(str);
    _short_2(str);
    return 0;
}