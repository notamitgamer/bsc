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

/* Write a program using function which concatenates two string s1 and s2 in to a third string */

#include <stdio.h>

void string_concat(char *s3, char s1[], char s2[])
{
    int l1, l2, i, j, k;
    i = j = k = 0;
    l1 = strlen(s1);
    l2 = strlen(s2);
    s3 = (char *)malloc((l1 + l2 + 1) * sizeof(char));
    while (s1[i] != '\0')
    {
        s3[k++] = s1[i++];
    }
    while (s2[j] != '\0')
    {
        s3[k++] = s2[j++];
    }
    s3[k] = '\0';
    puts(s3);
}

int main()
{
    char s1[] = "JAVA";
    char s2[] = "PYTHON";
    char *s3 = NULL;
    string_concat(s3, s1, s2);
    return 0;
}