---
title: assignment-s-11.c
description: "C program source code for assignment-s-11.c"
tags:
  - Beginner
---

# `assignment-s-11.c`


!!! abstract "Problem Statement"
    Write a program that takes the radius of a circle as input, passes it to a function that computes area and circumference, and displays results in main().

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 17 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-11.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-11.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

void area_circumference(double, double *, double *);

int main()
{
    double r, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &r);
    area_circumference(r, &area, &circumference);
    printf("\nArea of the circle = %g", area);
    printf("\nCircumference of the circle = %g", circumference);
    return 0;
}

void area_circumference(double r, double *area, double *circumference)
{
    *area = M_PI * r * r;
    *circumference = 2 * M_PI * r;
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
        
        CODE (assignment-s-11.c):
        
        #include <stdio.h>
        #include <math.h>
        
        void area_circumference(double, double *, double *);
        
        int main()
        {
            double r, area, circumference;
            printf("Enter the radius of the circle: ");
            scanf("%lf", &r);
            area_circumference(r, &area, &circumference);
            printf("\nArea of the circle = %g", area);
            printf("\nCircumference of the circle = %g", circumference);
            return 0;
        }
        
        void area_circumference(double r, double *area, double *circumference)
        {
            *area = M_PI * r * r;
            *circumference = 2 * M_PI * r;
        }
    ```

    </div>
