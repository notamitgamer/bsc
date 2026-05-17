---
title: APC-PRAC-035.c
description: "C program source code for APC-PRAC-035.c"
tags:
  - Beginner
---

# `APC-PRAC-035.c`


!!! abstract "Problem Statement"
    Print all the 3 and 4 digit palindrome number.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 1 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Pointers
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-035.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-035.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int palindromeCheck(int);

int palindromeCheck(int n)
{
    int temp = n, rev = 0;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (rev == n)
        return 1;
    else
        return 0;
}

int main()
{
    int i;
    printf("Palindrome number of 3 and 4 digits:  ");
    for (i = 100; i <= 9999; i++)
        if (palindromeCheck(i))
            printf("%d  ", i);
    return 0;
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
        
        CODE (APC-PRAC-035.c):
        
        #include <stdio.h>
        
        int palindromeCheck(int);
        
        int palindromeCheck(int n)
        {
            int temp = n, rev = 0;
            while (temp > 0)
            {
                rev = (rev * 10) + (temp % 10);
                temp /= 10;
            }
            if (rev == n)
                return 1;
            else
                return 0;
        }
        
        int main()
        {
            int i;
            printf("Palindrome number of 3 and 4 digits:  ");
            for (i = 100; i <= 9999; i++)
                if (palindromeCheck(i))
                    printf("%d  ", i);
            return 0;
        }
    ```

    </div>
