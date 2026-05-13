# `assignment-p-13.c`

## Problem Statement
!!!
Write a C program that accepts a string as a command line argument and includes a user- defined function named isPalindrome with the signature int isPalindrome(char str[]);. The function should check if the given string is a palindrome and return 1 if it is, and 0 otherwise.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-primary/assignment-p-13.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-primary/assignment-p-13.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
        printf("\nThe entered string \"%s\" is Palindrome.\n", argv[1]);
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
    char *end;
    int len = strlen(str);
    if (len == 0)
    {
        return 1;
    }
    end = str + (len - 1);
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
```
