---
title: lucproblem006.c
description: "C program source code for lucproblem006.c"
tags:
  - Beginner
---

# `lucproblem006.c`


!!! abstract "Problem Statement"
    Write a program to find the factorial value of any number entered through the keyboard.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 1 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem006.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem006.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
int main()
{
    int num, i = 1;
    long long fact = 1;
    printf("Enter the number : ");
    // checking if the input is valid or not
    if (scanf("%d", &num) != 1)
    {
        printf("\nPlease enter a number.");
        return 1;
    }
    // result for the negetive input
    if (num < 0)
    {
        printf("\nFactorial of %d : Undefined", num);
        return 1;
    }
    //  Hard codded result for input '0' (zero)
    if (num == 0)
    {
        printf("\nFactorial of 0 : 1");
        return 0;
    }
    // calculating result
    while (i <= num) {
        fact = fact * i;
        i++;
    }
    printf("\nFactorial of %d : %d", num, fact);
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
        
        CODE (lucproblem006.c):
        
        #include <stdio.h>
        int main()
        {
            int num, i = 1;
            long long fact = 1;
            printf("Enter the number : ");
            // checking if the input is valid or not
            if (scanf("%d", &num) != 1)
            {
                printf("\nPlease enter a number.");
                return 1;
            }
            // result for the negetive input
            if (num < 0)
            {
                printf("\nFactorial of %d : Undefined", num);
                return 1;
            }
            //  Hard codded result for input '0' (zero)
            if (num == 0)
            {
                printf("\nFactorial of 0 : 1");
                return 0;
            }
            // calculating result
            while (i <= num) {
                fact = fact * i;
                i++;
            }
            printf("\nFactorial of %d : %d", num, fact);
            return 0;
        }
    ```

    </div>
