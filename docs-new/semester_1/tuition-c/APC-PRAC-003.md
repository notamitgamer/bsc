---
title: APC-PRAC-003.c
description: "C program source code for APC-PRAC-003.c"
tags:
  - Beginner
---

# `APC-PRAC-003.c`


!!! abstract "Problem Statement"
    WAP to accept  diagonal of a square and calculate area, parimeter

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

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-003.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-003.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>
int main()
{
    double dia, side, area, peri;
    printf("Enter the diagonal of the square : ");
    scanf("%lf", &dia);
    side = dia / sqrt(2);
    area = pow(side, 2);
    peri = 4 * side;
    printf("\nArea of the square      : %g"
           "\nPerimeter of the square : %g",
           area, peri);
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
        
        CODE (APC-PRAC-003.c):
        
        #include <stdio.h>
        #include <math.h>
        int main()
        {
            double dia, side, area, peri;
            printf("Enter the diagonal of the square : ");
            scanf("%lf", &dia);
            side = dia / sqrt(2);
            area = pow(side, 2);
            peri = 4 * side;
            printf("\nArea of the square      : %g"
                   "\nPerimeter of the square : %g",
                   area, peri);
            return 0;
        }
    ```

    </div>
