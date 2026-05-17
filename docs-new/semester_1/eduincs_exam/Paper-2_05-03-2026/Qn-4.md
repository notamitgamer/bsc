---
title: Qn-4.c
description: "C program source code for Qn-4.c"
tags:
  - Beginner
---

# `Qn-4.c`


!!! abstract "Problem Statement"
    Write a program to check a string is palindrome or not using user-defined function.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 06 Mar 2026 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Array

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-4.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/eduincs_exam/Paper-2_05-03-2026/Qn-4.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>

## Explanation

??? info "Explain with AI"

    Copy the prompt below and paste it into any AI assistant.

    <div data-search-exclude="true">

    ```text
        You are explaining a C programming code to a beginner.
        
        STRICT RULES:
        
        - Only use the given code. Do NOT assume anything not present.
        
        - Do NOT add extra examples.
        
        - Keep explanation clear and short.
        
        - If something is unclear, say "Not clear from code".
        
        - Follow the exact format below. Do NOT change headings.
        
        FORMAT:
        
        [START]
        
        ## What it does
        
        (Explain the overall purpose in 1-2 sentences)
        
        ## Step-by-step
        
        (Explain how the code works in steps, simple language)
        
        ## Key Concepts
        
        (List concepts like loop, condition, function, etc.)
        
        ## Notes
        
        (Mention any limitations, errors, or assumptions)
        
        [END]
        
        CODE (Qn-4.c):
        
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

    </div>
