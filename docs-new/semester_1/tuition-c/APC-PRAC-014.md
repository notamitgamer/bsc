---
title: APC-PRAC-014.c
description: "C program source code for APC-PRAC-014.c"
tags:
  - Beginner
---

# `APC-PRAC-014.c`


!!! abstract "Problem Statement"
    Write a program to calculate and display the maturity amount taking the sum and number of days as input. No. of Days     Rate of Interest ===========     ================ <= 180          5.57 % 181 - 364       7.75 % 365 - 500       9.25 % > 500           9.15 %

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 1 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-014.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-014.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    double p, t, r, si;
    int days;
    printf("Enter the Principle, Time (Days) : ");
    scanf("%lf %d", &p, &days);
    if (days > 0 && days <= 180)
        r = 5.57;
    else if (days > 180 && days <= 364)
        r = 7.75;
    else if (days > 364 && days <= 500)
        r = 9.25;
    else if (days > 500)
        r = 9.15;
    si = (p * t * r) / 100;
    printf("\nMaturity Amount : %d", si + p);
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
        
        CODE (APC-PRAC-014.c):
        
        #include <stdio.h>
        
        int main()
        {
            double p, t, r, si;
            int days;
            printf("Enter the Principle, Time (Days) : ");
            scanf("%lf %d", &p, &days);
            if (days > 0 && days <= 180)
                r = 5.57;
            else if (days > 180 && days <= 364)
                r = 7.75;
            else if (days > 364 && days <= 500)
                r = 9.25;
            else if (days > 500)
                r = 9.15;
            si = (p * t * r) / 100;
            printf("\nMaturity Amount : %d", si + p);
            return 0;
        }
    ```

    </div>
