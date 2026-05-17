---
title: assignment-p-10.c
description: "C program source code for assignment-p-10.c"
tags:
  - Beginner
---

# `assignment-p-10.c`


!!! abstract "Problem Statement"
    Write a C program that defines a structure Rectangle with attributes length and width. Include a user-defined function named calculateArea with the signature float calculateArea(struct Rectangle r);. The function should calculate and return the area of the rectangle.

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
- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-10.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-10.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

float calculateArea(struct Rectangle);

int main()
{
    struct Rectangle rec;
    printf("Enter the length of the Rectangle: ");
    scanf("%f", &rec.length);
    printf("Enter the width of the Rectangle: ");
    scanf("%f", &rec.width);
    printf("\nArea of the Rectangle = %g", calculateArea(rec));
}

float calculateArea(struct Rectangle r)
{
    return r.length * r.width;
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
        
        CODE (assignment-p-10.c):
        
        #include <stdio.h>
        
        struct Rectangle
        {
            float length;
            float width;
        };
        
        float calculateArea(struct Rectangle);
        
        int main()
        {
            struct Rectangle rec;
            printf("Enter the length of the Rectangle: ");
            scanf("%f", &rec.length);
            printf("Enter the width of the Rectangle: ");
            scanf("%f", &rec.width);
            printf("\nArea of the Rectangle = %g", calculateArea(rec));
        }
        
        float calculateArea(struct Rectangle r)
        {
            return r.length * r.width;
        }
    ```

    </div>
