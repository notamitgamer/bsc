/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 12 Dec 2025
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2025 Amit Dutta
 */

/* Write a C function that receives a string (character array) and uses
pointers to count and return the total number of vowels and consonants in that string. */
/* Author: Amit Dutta, Date: 02-12-2025 */

#include <stdio.h>
#include <ctype.h>

void charCounter(char[], int *, int *);

int main()
{
    char str[101];
    int vowelCount, consonantCount;
    printf("Enter the string (Max: 100 character): ");
    if (fgets(str, sizeof(str), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 1;
    }
    charCounter(str, &vowelCount, &consonantCount);
    printf("\nVowel Count: %d", vowelCount);
    printf("\nConsonant Count: %d", consonantCount);
    printf("\nTotal Character: %d", vowelCount + consonantCount);
    return 0;
}

void charCounter(char str[], int *vowelCount, int *consonantCount)
{
    int tempVowelCount = 0, tempConsonantCount = 0;
    while (*str != '\0')
    {
        char ch = tolower(*str);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                tempVowelCount++;
            }
            else
            {
                tempConsonantCount++;
            }
        }
        str++;
    }

    *vowelCount = tempVowelCount;
    *consonantCount = tempConsonantCount;
}