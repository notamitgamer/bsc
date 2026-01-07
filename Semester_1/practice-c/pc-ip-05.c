/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/*
 * Question 5:
 * Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.
 */

#include <stdio.h>

int isPalindrome(char[]);

int main()
{
    char str[51];
    printf("Please enter the string (Max: 50 character): ");
    gets(str);
    if (isPalindrome(str))
    {
        printf("\nInput string is a palindrome string.");
    }
    else
    {
        printf("\ninput string is not a palindrome string.");
    }
    return 0;
}

int isPalindrome(char str[])
{
    int low = 0;
    int high = 0;
    while (str[high] != '\0')
    {
        high++;
    }
    high--;
    if (low == high)
    {
        return 1;
    }
    while (low < high)
    {
        if (str[low] != str[high])
        {
            return 0;
        }
        low++;
        high--;
    }
    return 1;
}