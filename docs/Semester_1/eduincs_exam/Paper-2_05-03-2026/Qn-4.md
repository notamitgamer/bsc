# `Qn-4.c`

## Problem Statement
!!!
Write a program to check a string is palindrome or not using user-defined function.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta <amitdutta4255@gmail.com> |
| **Date** | 06 Mar 2026 |
| **License** | MIT License (See the LICENSE file for details) |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-4.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-4.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

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
