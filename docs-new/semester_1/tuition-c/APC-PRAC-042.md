---
title: APC-PRAC-042.c
description: "C program source code for APC-PRAC-042.c"
icon: lucide/file-code
---

# `APC-PRAC-042.c`


!!! abstract "Problem Statement"
    Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 12 Dec 2025 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-042.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-042.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
