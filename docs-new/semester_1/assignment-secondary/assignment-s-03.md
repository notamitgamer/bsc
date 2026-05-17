---
title: assignment-s-03.c
description: "C program source code for assignment-s-03.c"
tags:
  - Beginner
---

# `assignment-s-03.c`


!!! abstract "Problem Statement"
    Write a program to compute the sum of the first n terms of the series using a function: S=1−2+3−4+5−6+…

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-03.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-03.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int sum_of_series(int);

int main()
{
    int n;
    printf("Enter the n: ");
    scanf("%d", &n);
    printf("\nSum of the first %d terms of the series = %d", n, sum_of_series(n));
    return 0;
}

int sum_of_series(int n)
{
    int sum = 0;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    return sum;
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
        
        CODE (assignment-s-03.c):
        
        #include <stdio.h>
        
        int sum_of_series(int);
        
        int main()
        {
            int n;
            printf("Enter the n: ");
            scanf("%d", &n);
            printf("\nSum of the first %d terms of the series = %d", n, sum_of_series(n));
            return 0;
        }
        
        int sum_of_series(int n)
        {
            int sum = 0;
            int i;
            for (i = 1; i <= n; i++)
            {
                if (i % 2 == 0)
                {
                    sum -= i;
                }
                else
                {
                    sum += i;
                }
            }
            return sum;
        }
    ```

    </div>
