---
title: assignment-p-13.c
description: "C program source code for assignment-p-13.c"
tags:
  - Beginner
---

# `assignment-p-13.c`


!!! abstract "Problem Statement"
    Write a C program that accepts a string as a command line argument and includes a user- defined function named isPalindrome with the signature int isPalindrome(char str[]);. The function should check if the given string is a palindrome and return 1 if it is, and 0 otherwise.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers
- Recursion
- Array
- Iteration

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
        
        CODE (assignment-p-13.c):
        
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
