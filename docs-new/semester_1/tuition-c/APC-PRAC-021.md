---
title: APC-PRAC-021.c
description: "C program source code for APC-PRAC-021.c"
tags:
  - Beginner
---

# `APC-PRAC-021.c`


!!! abstract "Problem Statement"
    Write a program to check special number (sum of digit + product of digit = original number)

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
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-021.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-021.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    int num, temp, sumOfDigit = 0, productOfDigit = 1;
    printf("Enter the number to check if it is a special number : ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        sumOfDigit += temp % 10;
        productOfDigit *= temp % 10;
        temp /= 10;
    }
    temp = sumOfDigit + productOfDigit;
    if (num == temp)
        printf("\nInput %d is a special number.", num);
    else
        printf("\nInput %d is not a special number.", num);
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
        
        CODE (APC-PRAC-021.c):
        
        #include <stdio.h>
        
        int main()
        {
            int num, temp, sumOfDigit = 0, productOfDigit = 1;
            printf("Enter the number to check if it is a special number : ");
            scanf("%d", &num);
            temp = num;
            while (temp > 0)
            {
                sumOfDigit += temp % 10;
                productOfDigit *= temp % 10;
                temp /= 10;
            }
            temp = sumOfDigit + productOfDigit;
            if (num == temp)
                printf("\nInput %d is a special number.", num);
            else
                printf("\nInput %d is not a special number.", num);
            return 0;
        }
    ```

    </div>
