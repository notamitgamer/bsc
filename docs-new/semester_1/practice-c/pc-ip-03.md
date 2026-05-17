---
title: pc-ip-03.c
description: "C program source code for pc-ip-03.c"
tags:
  - Beginner
---

# `pc-ip-03.c`


!!! abstract "Problem Statement"
    Question 3: Write a program to compute the sum of the first n terms of the series using a function: S=1-2+3-4+5-6+...

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-03.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-03.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int series(int);

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("\nSum of the series: %d", series(n));
    return 0;
}

int series(int n)
{
    int i, result = 0;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            result -= i;
        }
        else
        {
            result += i;
        }
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
        
        CODE (pc-ip-03.c):
        
        #include <stdio.h>
        
        int series(int);
        
        int main()
        {
            int n;
            printf("Enter the n: ");
            scanf("%d", &n);
            printf("\nSum of the series: %d", series(n));
            return 0;
        }
        
        int series(int n)
        {
            int i, result = 0;
            for (i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    result -= i;
                }
                else
                {
                    result += i;
                }
            }
            return result;
        }
    ```

    </div>
