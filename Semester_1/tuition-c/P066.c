/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 14 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/* WAP to find the length of a string using
    i) Library Method
    ii) User defined method
*/

#include <stdio.h>
#include <string.h>

int sLength(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()
{
    char str[30];
    int len;
    printf("Enter the string: ");
    gets(str);
    len = strlen(str);
    printf("Length of the string: %d", len);
    printf("\nLength of the string (U-D): %d", len);
    return 0;
}