---
title: pc-ip-15.c
description: "C program source code for pc-ip-15.c"
tags:
  - Beginner
---

# `pc-ip-15.c`


!!! abstract "Problem Statement"
    Question 15: Write a program to calculate the GCD of two numbers using recursive and iterative function.

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

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-15.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-15.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int gcd_rec(int, int);
int gcd_ite(int, int);

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("\nGCD(%d, %d) (Recursion) = %d", a, b, gcd_rec(a, b));
    printf("\nGCD(%d, %d) (Iteration) = %d", a, b, gcd_ite(a, b));
    return 0;
}

int gcd_ite(int a, int b)
{
    int temp;
    while (a != 0)
    {
        temp = a;
        a = b % a;
        b = temp;
    }
    return b;
}

int gcd_rec(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    else
    {
        return gcd_rec(b % a, a);
    }
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
        
        CODE (pc-ip-15.c):
        
        #include <stdio.h>
        
        int gcd_rec(int, int);
        int gcd_ite(int, int);
        
        int main()
        {
            int a, b;
            printf("Enter two number: ");
            scanf("%d %d", &a, &b);
            printf("\nGCD(%d, %d) (Recursion) = %d", a, b, gcd_rec(a, b));
            printf("\nGCD(%d, %d) (Iteration) = %d", a, b, gcd_ite(a, b));
            return 0;
        }
        
        int gcd_ite(int a, int b)
        {
            int temp;
            while (a != 0)
            {
                temp = a;
                a = b % a;
                b = temp;
            }
            return b;
        }
        
        int gcd_rec(int a, int b)
        {
            if (a == 0)
            {
                return b;
            }
            else
            {
                return gcd_rec(b % a, a);
            }
        }
    ```

    </div>
