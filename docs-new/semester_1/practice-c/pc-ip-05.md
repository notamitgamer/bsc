---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> pc-ip-05.c'
description: 'Question 5: Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.'
---

# pc-ip-05.c

| Property | Details |
| :--- | :--- |
| **Author** | [Amit Dutta](mailto:amitdutta4255@gmail.com) |
| **Date** | 05 Jan 2026 |
| **License** | [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Question 5: Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-05.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-05.c)

```c [pc-ip-05.c]
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
```
