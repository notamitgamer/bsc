---
title: lucproblem012.c
description: "C program source code for lucproblem012.c"
tags:
  - Beginner
---

# `lucproblem012.c`


!!! abstract "Problem Statement"
    Write a Function power(a, b), to calculate the value of a raised to b

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
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem012.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem012.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

double power(double, int);

double power(double a, int b)
{
    if (b == 0)
        return 1;
    double res = 1;
    int i;
    if (b > 0)
        for (i = 1; i <= b; i++)
            res *= a;
    return res;
}

int main()
{
    double a, result;
    int b;
    printf("Enter the value and the power (Format A^B) : ");
    scanf("%lf^%d", &a, &b);
    result = power(a, b);
    printf("Result of %g^%d = %g", a, b, result);
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
        
        CODE (lucproblem012.c):
        
        #include <stdio.h>
        
        double power(double, int);
        
        double power(double a, int b)
        {
            if (b == 0)
                return 1;
            double res = 1;
            int i;
            if (b > 0)
                for (i = 1; i <= b; i++)
                    res *= a;
            return res;
        }
        
        int main()
        {
            double a, result;
            int b;
            printf("Enter the value and the power (Format A^B) : ");
            scanf("%lf^%d", &a, &b);
            result = power(a, b);
            printf("Result of %g^%d = %g", a, b, result);
            return 0;
        }
    ```

    </div>
