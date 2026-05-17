---
title: lucproblem008.c
description: "C program source code for lucproblem008.c"
tags:
  - Beginner
---

# `lucproblem008.c`


!!! abstract "Problem Statement"
    Write a problem to print all the prime numbers from 1 to 300.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 1 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem008.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem008.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define LIMIT 300

int main()
{
    printf("Prime numbers from 1 to 300 :  2"); // as 2 is the only even prime number
    for (int i = 3; i <= LIMIT; i += 2)  // skipping all other even number
    {
        int n = (int)sqrt(i);
        bool prime = true;

        for (int j = 3; j <= n; j += 2)
        // an odd number is only devisable by another odd number.
        // so, skipping even number.
        {
            if (i % j == 0)
            {
                prime = false;
                break;
            }
        }
        if (prime)
        {
            printf("  %d", i);
        }
    }
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
        
        CODE (lucproblem008.c):
        
        #include <stdio.h>
        #include <math.h>
        #include <stdbool.h>
        
        #define LIMIT 300
        
        int main()
        {
            printf("Prime numbers from 1 to 300 :  2"); // as 2 is the only even prime number
            for (int i = 3; i <= LIMIT; i += 2)  // skipping all other even number
            {
                int n = (int)sqrt(i);
                bool prime = true;
        
                for (int j = 3; j <= n; j += 2)
                // an odd number is only devisable by another odd number.
                // so, skipping even number.
                {
                    if (i % j == 0)
                    {
                        prime = false;
                        break;
                    }
                }
                if (prime)
                {
                    printf("  %d", i);
                }
            }
            return 0;
        }
    ```

    </div>
