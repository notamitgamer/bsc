---
title: lucproblem004.c
description: "C program source code for lucproblem004.c"
tags:
  - Beginner
---

# `lucproblem004.c`


!!! abstract "Problem Statement"
    If the lengths of three sides of a triangle are entered through the keyboard, write a program to check whether the triangle is valid or not. The triangle is valid if the sum of two sides is greater that the largest of the three sides.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 1 / 10) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem004.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem004.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
int main()
{
    double side1, side2, side3;
    printf("Enter the length of side1, side2 and side3 of the triangle : ");
    scanf("%lf %lf %lf", &side1, &side2, &side3);
    if (side1 <= 0 || side2 <= 0 || side3 <= 0)
    {
        printf("\nTriangle sides must be positive.\n");
        return 1;
    }
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    // Triangle Inequality Theorem
        printf("\nThis triangle is valid.");
    else
        printf("\nThis triangle is not valid.");
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
        
        CODE (lucproblem004.c):
        
        #include <stdio.h>
        int main()
        {
            double side1, side2, side3;
            printf("Enter the length of side1, side2 and side3 of the triangle : ");
            scanf("%lf %lf %lf", &side1, &side2, &side3);
            if (side1 <= 0 || side2 <= 0 || side3 <= 0)
            {
                printf("\nTriangle sides must be positive.\n");
                return 1;
            }
            if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
            // Triangle Inequality Theorem
                printf("\nThis triangle is valid.");
            else
                printf("\nThis triangle is not valid.");
            return 0;
        }
    ```

    </div>
