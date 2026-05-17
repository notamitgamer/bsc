---
title: pc-ip-16.c
description: "C program source code for pc-ip-16.c"
tags:
  - Beginner
---

# `pc-ip-16.c`


!!! abstract "Problem Statement"
    Question 16: Write a C program that includes a user-defined function named isArmstrong with the signature int isArmstrong(int num);.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 05 Jan 2026 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/pc-ip-16.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/pc-ip-16.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

int isArmstrong(int);

int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (isArmstrong(num))
    {
        printf("\nInput %d is a Armstrong number.", num);
    }
    else
    {
        printf("\nInput %d is not a Armstrong number.", num);
    }
    return 0;
}

int isArmstrong(int num)
{
    int temp = num;
    int power = 0;
    int result = 0;
    while (temp > 0)
    {
        power++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0)
    {
        result += (int)pow((temp % 10), power);
        temp /= 10;
    }
    return result == num;
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
        
        CODE (pc-ip-16.c):
        
        #include <stdio.h>
        #include <math.h>
        
        int isArmstrong(int);
        
        int main()
        {
            int num;
            printf("Enter the number: ");
            scanf("%d", &num);
            if (isArmstrong(num))
            {
                printf("\nInput %d is a Armstrong number.", num);
            }
            else
            {
                printf("\nInput %d is not a Armstrong number.", num);
            }
            return 0;
        }
        
        int isArmstrong(int num)
        {
            int temp = num;
            int power = 0;
            int result = 0;
            while (temp > 0)
            {
                power++;
                temp /= 10;
            }
            temp = num;
            while (temp > 0)
            {
                result += (int)pow((temp % 10), power);
                temp /= 10;
            }
            return result == num;
        }
    ```

    </div>
