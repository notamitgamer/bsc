/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 14 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
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