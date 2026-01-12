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