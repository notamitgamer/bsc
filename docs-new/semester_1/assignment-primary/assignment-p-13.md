---
title: assignment-p-13.c
description: "C program source code for assignment-p-13.c"
icon: lucide/file-code
---

# `assignment-p-13.c`


!!! abstract "Problem Statement"
    Write a C program that accepts a string as a command line argument and includes a user- defined function named isPalindrome with the signature int isPalindrome(char str[]);. The function should check if the given string is a palindrome and return 1 if it is, and 0 otherwise.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-13.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-13.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
