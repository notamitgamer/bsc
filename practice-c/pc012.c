/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
 * ======================================================================================
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