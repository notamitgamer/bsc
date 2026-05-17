---
title: assignment-p-08.c
description: "C program source code for assignment-p-08.c"
tags:
  - Beginner
---

# `assignment-p-08.c`


!!! abstract "Problem Statement"
    Write a C program that includes a user-defined function named countSetBits with the signature int countSetBits(int num);. The function should count and return the number of set bits (1s) in the binary representation of the given number.

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
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-08.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-08.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int countSetBits(int);

int main()
{
    int num, result;
    printf("Enter the number: ");
    scanf("%d", &num);
    if (result = countSetBits(num))
    {
        printf("\nNumber of set bits in %d: %d", num, result);
    }
    else
    {
        printf("\nThere is no set bits in %d", num);
    }
    return 0;
}

int countSetBits(int num)
{
    int count = 0;
    int mask= 1;
	int i = 1;
    while (i <= 16)
    {
        if (num & mask)
        {
            count++;
        }
        mask <<= 1;
        i++;
    }
    return count;
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
        
        CODE (assignment-p-08.c):
        
        #include <stdio.h>
        
        int countSetBits(int);
        
        int main()
        {
            int num, result;
            printf("Enter the number: ");
            scanf("%d", &num);
            if (result = countSetBits(num))
            {
                printf("\nNumber of set bits in %d: %d", num, result);
            }
            else
            {
                printf("\nThere is no set bits in %d", num);
            }
            return 0;
        }
        
        int countSetBits(int num)
        {
            int count = 0;
            int mask= 1;
        	int i = 1;
            while (i <= 16)
            {
                if (num & mask)
                {
                    count++;
                }
                mask <<= 1;
                i++;
            }
            return count;
        }
    ```

    </div>
