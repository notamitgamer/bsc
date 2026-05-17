---
title: pc-ip-04.c
description: "C program source code for pc-ip-04.c"
tags:
  - Beginner
---

# `pc-ip-04.c`


!!! abstract "Problem Statement"
    Question 4: Write a function to check whether a number is prime or not. Use the same function to generate all prime numbers less than 100.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 05 Jan 2026 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-04.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-04.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

int isPrime(int);

int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (isPrime(n))
    {
        printf("\nInput %d is a prime number.", n);
    }
    else
    {
        printf("\nInput %d is not a prime number.", n);
    }
    printf("\nPrime numbers from 1 to 100:");
    for (i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            printf("  %d", i);
        }
    }
    return 0;
}

int isPrime(int n)
{
    int i;
    int end = (int)sqrt(n);
    if (n == 0 || n == 1)
    {
        return 0;
    }
    for (i = 2; i <= end; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
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
        
        CODE (pc-ip-04.c):
        
        #include <stdio.h>
        #include <math.h>
        
        int isPrime(int);
        
        int main()
        {
            int n, i;
            printf("Enter the number: ");
            scanf("%d", &n);
            if (isPrime(n))
            {
                printf("\nInput %d is a prime number.", n);
            }
            else
            {
                printf("\nInput %d is not a prime number.", n);
            }
            printf("\nPrime numbers from 1 to 100:");
            for (i = 1; i <= 100; i++)
            {
                if (isPrime(i))
                {
                    printf("  %d", i);
                }
            }
            return 0;
        }
        
        int isPrime(int n)
        {
            int i;
            int end = (int)sqrt(n);
            if (n == 0 || n == 1)
            {
                return 0;
            }
            for (i = 2; i <= end; i++)
            {
                if (n % i == 0)
                {
                    return 0;
                }
            }
            return 1;
        }
    ```

    </div>
