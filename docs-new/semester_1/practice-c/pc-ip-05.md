---
title: pc-ip-05.c
description: "C program source code for pc-ip-05.c"
tags:
  - Beginner
---

# `pc-ip-05.c`


!!! abstract "Problem Statement"
    Question 5: Write a function to check whether a given string is a palindrome. Use this function to determine whether an entered string is Palindrome.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 05 Jan 2026 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Array
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-05.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-05.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
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
        
        CODE (pc-ip-05.c):
        
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

    </div>
