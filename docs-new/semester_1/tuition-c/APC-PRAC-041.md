---
title: APC-PRAC-041.c
description: "C program source code for APC-PRAC-041.c"
tags:
  - Beginner
---

# `APC-PRAC-041.c`


!!! abstract "Problem Statement"
    Write a C program to find and print all twin prime pairs between 1 and n using nested loops. (Twin primes are prime numbers having a difference of 2, like 11 and 13)

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-041.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-041.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
    if (n < 2)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int i, temp = (int)sqrt(n);
    for (i = 3; i <= temp; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int n, i, count = 0;
    printf("enter the n: ");
    scanf("%d", &n);
    printf("\nAll the twin numbers:  ");
    for (i = 1; i <= n - 2; i++)
    {
        if (isPrime(i))
        {
            if (isPrime(i + 2))
            {
                printf("(%d, %d)  ", i, i + 2);
                count++;
            }
        }
    }
    printf("\nCount; %d", count);
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
        
        CODE (APC-PRAC-041.c):
        
        #include <stdio.h>
        #include <math.h>
        
        int isPrime(int n)
        {
            if (n < 2)
                return 0;
            if (n == 2)
                return 1;
            if (n % 2 == 0)
                return 0;
            int i, temp = (int)sqrt(n);
            for (i = 3; i <= temp; i += 2)
                if (n % i == 0)
                    return 0;
            return 1;
        }
        
        int main()
        {
            int n, i, count = 0;
            printf("enter the n: ");
            scanf("%d", &n);
            printf("\nAll the twin numbers:  ");
            for (i = 1; i <= n - 2; i++)
            {
                if (isPrime(i))
                {
                    if (isPrime(i + 2))
                    {
                        printf("(%d, %d)  ", i, i + 2);
                        count++;
                    }
                }
            }
            printf("\nCount; %d", count);
            return 0;
        }
    ```

    </div>
