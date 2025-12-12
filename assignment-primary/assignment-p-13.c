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

/* Write a C program that accepts a string as a command line argument and includes a user-
defined function named isPalindrome with the signature int isPalindrome(char str[]);.
The function should check if the given string is a palindrome and return 1 if it is, and 0
otherwise. */

#include <stdio.h>
#include <stdlib.h>

int isPalindrome(char[]);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("\nUsage: %s <string>\n", argv[0]);
        return 1;
    }
    if (isPalindrome(argv[1]))
    {
        printf("\nThe entered string \"%s\" is a Palindrome.\n", argv[1]);
    }
    else
    {
        printf("\nThe entered string \"%s\" is not Palindrome.\n", argv[1]);
    }
    return 0;
}

int isPalindrome(char str[])
{
    char *start = str;
    char *end = str;
    if (*end != '\0')
    {
        while (*(end + 1) != '\0')
        {
            end++;
        }
    }
    else
    {
        return 1;
    }
    /*
    Or we can use string.h instead of from line 33 to line 43 like this ...
    
    char *end;
    int len = strlen(str);
    if (len == 0)
    {
        return 1;
    }
    end = str + (len - 1);
    
    */
    while (start < end)
    {
        if (*start != *end)
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}