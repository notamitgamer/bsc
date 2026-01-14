/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
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