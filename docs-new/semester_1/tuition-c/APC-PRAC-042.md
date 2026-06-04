---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-PRAC-042.c'
description: 'Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.'
---

# APC-PRAC-042.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-042.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-042.c)

```c [APC-PRAC-042.c]
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
