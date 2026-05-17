---
title: APC-PRAC-022.c
description: "C program source code for APC-PRAC-022.c"
tags:
  - Beginner
---

# `APC-PRAC-022.c`


!!! abstract "Problem Statement"
    Write a program to accept a number and check whether the number is twisted prime or not

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

- Recursion
- Pointers
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-022.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-022.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool checkPrime(int num)
{
    if (num < 2)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    int limit = (int)sqrt(num);
    for (int i = 3; i <= limit; i += 2)
        if (num % i == 0)
            return false;
    return true;
}

int reverseNumber(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num /= 10;
    }
    return reverse;
}

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    if (!checkPrime(num))
    {
        printf("\nInput %d is not a prime number.", num);
        return 0;
    }
    if (checkPrime(reverseNumber(num)))
        printf("\nInput %d is a twisted prime number.", num);
    else
        printf("\nInput %d is not a twisted prime number.", num);
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
        
        CODE (APC-PRAC-022.c):
        
        #include <stdio.h>
        #include <math.h>
        #include <stdbool.h>
        
        bool checkPrime(int num)
        {
            if (num < 2)
                return false;
            if (num == 2)
                return true;
            if (num % 2 == 0)
                return false;
            int limit = (int)sqrt(num);
            for (int i = 3; i <= limit; i += 2)
                if (num % i == 0)
                    return false;
            return true;
        }
        
        int reverseNumber(int num)
        {
            int reverse = 0;
            while (num > 0)
            {
                reverse = (reverse * 10) + (num % 10);
                num /= 10;
            }
            return reverse;
        }
        
        int main()
        {
            int num;
            printf("Enter the number : ");
            scanf("%d", &num);
            if (!checkPrime(num))
            {
                printf("\nInput %d is not a prime number.", num);
                return 0;
            }
            if (checkPrime(reverseNumber(num)))
                printf("\nInput %d is a twisted prime number.", num);
            else
                printf("\nInput %d is not a twisted prime number.", num);
            return 0;
        }
    ```

    </div>
