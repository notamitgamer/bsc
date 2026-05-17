---
title: lucproblem013.c
description: "C program source code for lucproblem013.c"
tags:
  - Beginner
---

# `lucproblem013.c`


!!! abstract "Problem Statement"
    Define a function to convert any given year into its Roman equivalent. Use these roman equivalent for decimal numbers : 1 - I, 5 - V, 10 - X, 50 - L, 100 - C, 500 - D, 1000 - M

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 3 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers
- Recursion
- Array

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem013.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem013.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

void romanise(int);

void romanise(int year)
{
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    const char *romanChar[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    // including the two-character subtractive pairs.
    int i = 0;

    printf("Year %d = ", year);
    while (year > 0)
    {
        if (year >= values[i])
        {
            printf("%s", romanChar[i]);
            year -= values[i];
        }
        else
            i++;
    }
}

int main()
{
    int year;
    printf("Enter the year : ");
    scanf("%d", &year);
    romanise(year);
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
        
        CODE (lucproblem013.c):
        
        #include <stdio.h>
        
        void romanise(int);
        
        void romanise(int year)
        {
            int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
            const char *romanChar[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
            // including the two-character subtractive pairs.
            int i = 0;
        
            printf("Year %d = ", year);
            while (year > 0)
            {
                if (year >= values[i])
                {
                    printf("%s", romanChar[i]);
                    year -= values[i];
                }
                else
                    i++;
            }
        }
        
        int main()
        {
            int year;
            printf("Enter the year : ");
            scanf("%d", &year);
            romanise(year);
            return 0;
        }
    ```

    </div>
