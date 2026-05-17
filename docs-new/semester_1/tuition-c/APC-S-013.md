---
title: APC-S-013.c
description: "C program source code for APC-S-013.c"
tags:
  - Beginner
---

# `APC-S-013.c`


!!! abstract "Problem Statement"
    Write a fuction to calculate the average of an array

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
- Array
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-013.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-013.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

double average(int []);

int main()
{
    int marks[10], i;
    printf("\nEnter 10 numbers: \n");
    for (i = 0; i <= 9; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\nAverage = %g", average(marks));
    return 0;
}

double average(int marks[10])
{
    int sum = 0;
    for (int i = 0; i <= 9; i++)
        sum += marks[i];
    return sum / 10.0;
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
        
        CODE (APC-S-013.c):
        
        #include <stdio.h>
        
        double average(int []);
        
        int main()
        {
            int marks[10], i;
            printf("\nEnter 10 numbers: \n");
            for (i = 0; i <= 9; i++)
            {
                printf("Enter number %d: ", i + 1);
                scanf("%d", &marks[i]);
            }
            printf("\nAverage = %g", average(marks));
            return 0;
        }
        
        double average(int marks[10])
        {
            int sum = 0;
            for (int i = 0; i <= 9; i++)
                sum += marks[i];
            return sum / 10.0;
        }
    ```

    </div>
