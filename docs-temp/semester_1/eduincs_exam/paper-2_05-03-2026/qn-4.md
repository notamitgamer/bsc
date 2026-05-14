---
title: qn-4.c
description: "C program source code for qn-4.c"
---

# `qn-4.c`


!!! abstract "Problem Statement"
    Write a program to check a string is palindrome or not using user-defined function.

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**    | 06 Mar 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/eduincs_exam/paper-2_05-03-2026/qn-4.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/eduincs_exam/paper-2_05-03-2026/qn-4.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool isPalindrome(char str[]);

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    if (isPalindrome(str)) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }
    return 0;
}

bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (right > left) {
        if (tolower(str[left]) != tolower(str[right])) {
            return false; 
        }
        left++;
        right--;
    }
    return true; 
}
```
