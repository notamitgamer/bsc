---
title: lucproblem015.c
description: "C program source code for lucproblem015.c"
tags:
  - Beginner
---

# `lucproblem015.c`


!!! abstract "Problem Statement"
    Write a program that defines a function that calculates power of one number reaised to another and factorial value of a number in one cell.

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

- Pointers
- Recursion
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem015.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem015.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

void bothPowerFactorial(double, int, int, double *, long long *);

int main()
{
    double a, resultPower;
    int b, factN;
    long long resultFactorial;
    printf("Enter a and b for calculating a raised to b: ");
    scanf("%lf %d", &a, &b);
    printf("Enter number to calculate the factorial: ");
    scanf("%d", &factN);
    if (b < 0 || factN < 0)
    {
        printf("\nOnly non-negative integer is allowed as input of b and factorial.");
        return 1;
    }
    bothPowerFactorial(a, b, factN, &resultPower, &resultFactorial);
    printf("\n%g Raised to %d: %g"
           "\nFactorial of %d: %lld",
           a, b, resultPower, factN, resultFactorial);
    return 0;
}

void bothPowerFactorial(double a, int b, int n, double *resultPower, long long *resultFactorial)
{
    double tempResultPower = 1;
    long long tempResultFactorial = 1;
    int i;

    for (i = 1; i <= b; i++)
        tempResultPower *= a;

    for (i = 1; i <= n; i++)
        tempResultFactorial *= i;

    *resultPower = tempResultPower;
    *resultFactorial = tempResultFactorial;
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
        
        CODE (lucproblem015.c):
        
        #include <stdio.h>
        
        void bothPowerFactorial(double, int, int, double *, long long *);
        
        int main()
        {
            double a, resultPower;
            int b, factN;
            long long resultFactorial;
            printf("Enter a and b for calculating a raised to b: ");
            scanf("%lf %d", &a, &b);
            printf("Enter number to calculate the factorial: ");
            scanf("%d", &factN);
            if (b < 0 || factN < 0)
            {
                printf("\nOnly non-negative integer is allowed as input of b and factorial.");
                return 1;
            }
            bothPowerFactorial(a, b, factN, &resultPower, &resultFactorial);
            printf("\n%g Raised to %d: %g"
                   "\nFactorial of %d: %lld",
                   a, b, resultPower, factN, resultFactorial);
            return 0;
        }
        
        void bothPowerFactorial(double a, int b, int n, double *resultPower, long long *resultFactorial)
        {
            double tempResultPower = 1;
            long long tempResultFactorial = 1;
            int i;
        
            for (i = 1; i <= b; i++)
                tempResultPower *= a;
        
            for (i = 1; i <= n; i++)
                tempResultFactorial *= i;
        
            *resultPower = tempResultPower;
            *resultFactorial = tempResultFactorial;
        }
    ```

    </div>
