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

/* Write a c program that perform the operation of strcmp() */

#include <stdio.h>
#include <stdlib.h>

int string_compare1(char s1[], char s2[])
{
    int i, c, cmp = 0, p = 0;
    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            cmp = s1[i] - s2[i];
            p = 1;
            break;
        }
        i++;
    }
    c = s1[i] != '\0' ? s1[i] : (-1) * s2[i];
    return p == 1 ? cmp : c;
}
int string_compare2(char *s1, char *s2)
{
    while (*s1 != '\0' && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return *s1 - *s2;
}

int main()
{
    char str1[] = "AMIT";
    char str2[] = "Amit";
    printf("Result 1 = %d", string_compare1(str1, str2));
    printf("\nResult 2 = %d", string_compare2(str1, str2));
    return 0;
}