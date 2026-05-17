---
title: APC-PRAC-037.c
description: "C program source code for APC-PRAC-037.c"
tags:
  - Beginner
---

# `APC-PRAC-037.c`


!!! abstract "Problem Statement"
    Show all the armstrong number between a range.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 1 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-037.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-037.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

#define lowerBound 100
#define upperBound 999

int isArmstrongNumber(int);

int isArmstrongNumber(int n)
{
    int temp = n, sum = 0, count = 0;
    while (temp > 0)
    {
        count++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0)
    {
        sum += (int)pow(temp % 10, count);
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int n, i, count = 0;
    printf("Armstrong number between %d and %d are:  ", lowerBound, upperBound);
    for (i = lowerBound; i <= upperBound; i++)
        if (isArmstrongNumber(i))
        {
            printf("%d  ", i);
            count++;
        }
    printf("\n\nCount: %d\n", count);
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
        
        CODE (APC-PRAC-037.c):
        
        #include <stdio.h>
        #include <math.h>
        
        #define lowerBound 100
        #define upperBound 999
        
        int isArmstrongNumber(int);
        
        int isArmstrongNumber(int n)
        {
            int temp = n, sum = 0, count = 0;
            while (temp > 0)
            {
                count++;
                temp /= 10;
            }
            temp = n;
            while (temp > 0)
            {
                sum += (int)pow(temp % 10, count);
                temp /= 10;
            }
            return sum == n;
        }
        
        int main()
        {
            int n, i, count = 0;
            printf("Armstrong number between %d and %d are:  ", lowerBound, upperBound);
            for (i = lowerBound; i <= upperBound; i++)
                if (isArmstrongNumber(i))
                {
                    printf("%d  ", i);
                    count++;
                }
            printf("\n\nCount: %d\n", count);
            return 0;
        }
    ```

    </div>
