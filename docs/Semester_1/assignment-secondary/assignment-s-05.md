---
label: assignment-s-05.c
description: "C program source code for assignment-s-05.c"
---

# `assignment-s-05.c`

## Problem Statement
!!!
Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-secondary/assignment-s-05.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-secondary/assignment-s-05.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include <stdio.h>
#include <string.h>

int isPalindrome(char[]);

int main()
{
    char input[100];
    int len;

    printf("Enter the string (Max: 100 Character): ");
    fgets(input, sizeof(input), stdin);
    len = strlen(input);

    if (len > 0 && input[len - 1] == '\n')
    {
        input[len - 1] = '\0';
    }

    if (isPalindrome(input))
    {
        printf("\nInput string \"%s\" is Palindrome.", input);
    }
    else
    {
        printf("\nInput string \"%s\" is not Palindrome", input);
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
