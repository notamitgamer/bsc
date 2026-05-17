---
title: APC-PRAC-034.c
description: "C program source code for APC-PRAC-034.c"
tags:
  - Beginner
---

# `APC-PRAC-034.c`


!!! abstract "Problem Statement"
    Take a Range as input from user and print the prime number between it.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-034.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-034.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

int isPrime(int);

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int temp = (int)sqrt(n), i;
    for (i = 3; i <= temp; i += 2)
        if (n % i == 0)
            return 0;
    return 1;
}

int main()
{
    int lb, ub, i;
    printf("Enter the lower bound and the upper bound: ");
    scanf("%d %d", &lb, &ub);
    printf("\nPrime numbers between %d and %d:  ", lb, ub);
    for (i = lb; i <= ub; i++)
        if (isPrime(i))
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
        
        CODE (APC-PRAC-034.c):
        
        #include <stdio.h>
        #include <math.h>
        
        int isPrime(int);
        
        int isPrime(int n)
        {
            if (n <= 1)
                return 0;
            if (n == 2)
                return 1;
            if (n % 2 == 0)
                return 0;
            int temp = (int)sqrt(n), i;
            for (i = 3; i <= temp; i += 2)
                if (n % i == 0)
                    return 0;
            return 1;
        }
        
        int main()
        {
            int lb, ub, i;
            printf("Enter the lower bound and the upper bound: ");
            scanf("%d %d", &lb, &ub);
            printf("\nPrime numbers between %d and %d:  ", lb, ub);
            for (i = lb; i <= ub; i++)
                if (isPrime(i))
                    printf("%d  ", i);
            return 0;
        }
    ```

    </div>
