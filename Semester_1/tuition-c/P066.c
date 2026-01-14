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