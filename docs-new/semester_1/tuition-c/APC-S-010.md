---
title: APC-S-010.c
description: "C program source code for APC-S-010.c"
tags:
  - Beginner
---

# `APC-S-010.c`


!!! abstract "Problem Statement"
    Write a program to input a new element at a specific position of an array. a[] = {4, 5, 2, 10, 6, 9, 8}, newItem = 7, position = 3

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 0 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Array
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-010.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-010.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    int a[8] = {4, 5, 2, 10, 6, 9, 8};
    int i;

    printf("Elemnts of the array:  ");
    for (i = 0; i <= 6; i++)
        printf("%d  ", a[i]);

    printf("\nMethod 1:  ");
    for (i = 7; i >= 4; i--)
        a[i] = a[i - 1];
    a[3] = 7;
    for (i = 0; i <= 7; i++)
        printf("%d  ", a[i]);

    // another method
    printf("\nMethod 2:  ");
    int b[8] = {4, 5, 2, 10, 6, 9, 8};
    int temp1 = 7;
    for (i = 3; i <= 7; i++)
    {
        int temp2 = b[i];
        b[i] = temp1;
        temp1 = temp2;
    }
    for (i = 0; i <= 7; i++)
        printf("%d  ", b[i]);

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
        
        CODE (APC-S-010.c):
        
        #include <stdio.h>
        
        int main()
        {
            int a[8] = {4, 5, 2, 10, 6, 9, 8};
            int i;
        
            printf("Elemnts of the array:  ");
            for (i = 0; i <= 6; i++)
                printf("%d  ", a[i]);
        
            printf("\nMethod 1:  ");
            for (i = 7; i >= 4; i--)
                a[i] = a[i - 1];
            a[3] = 7;
            for (i = 0; i <= 7; i++)
                printf("%d  ", a[i]);
        
            // another method
            printf("\nMethod 2:  ");
            int b[8] = {4, 5, 2, 10, 6, 9, 8};
            int temp1 = 7;
            for (i = 3; i <= 7; i++)
            {
                int temp2 = b[i];
                b[i] = temp1;
                temp1 = temp2;
            }
            for (i = 0; i <= 7; i++)
                printf("%d  ", b[i]);
        
            return 0;
        }
    ```

    </div>
