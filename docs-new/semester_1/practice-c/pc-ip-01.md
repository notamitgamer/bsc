---
title: pc-ip-01.c
description: "C program source code for pc-ip-01.c"
tags:
  - Beginner
---

# `pc-ip-01.c`


!!! abstract "Problem Statement"
    Question 1: Write a program to compute the sum and product of digits of an integer using user-defined functions.

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
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-01.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-01.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int sum(int);
int product(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("\nSum of digit: %d", sum(num));
    printf("\nProduct of digit: %d", product(num));
    return 0;
}

int sum(int num)
{
    int result = 0;
    while (num > 0)
    {
        result += num % 10;
        num /= 10;
    }
    return result;
}

int product(int num)
{
    int result = 1;
    if (num == 0)
    {
        return 0;
    }
    while (num > 0)
    {
        result *= num % 10;
        num /= 10;
    }
    return result;
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
        
        CODE (pc-ip-01.c):
        
        #include <stdio.h>
        
        int sum(int);
        int product(int);
        
        int main()
        {
            int num;
            printf("Enter the number: ");
            scanf("%d", &num);
            printf("\nSum of digit: %d", sum(num));
            printf("\nProduct of digit: %d", product(num));
            return 0;
        }
        
        int sum(int num)
        {
            int result = 0;
            while (num > 0)
            {
                result += num % 10;
                num /= 10;
            }
            return result;
        }
        
        int product(int num)
        {
            int result = 1;
            if (num == 0)
            {
                return 0;
            }
            while (num > 0)
            {
                result *= num % 10;
                num /= 10;
            }
            return result;
        }
    ```

    </div>
