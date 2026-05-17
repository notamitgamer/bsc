---
title: APC-PRAC-040.c
description: "C program source code for APC-PRAC-040.c"
tags:
  - Beginner
---

# `APC-PRAC-040.c`


!!! abstract "Problem Statement"
    Write a C program to count how many numbers between 100 and 999 have all distinct digits (e.g., 123, 709, 981).

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

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-040.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-040.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    int i, count = 0, n1, n2, n3;
    printf("Distinct numbers between 100 and 999: ");
    for (i = 100; i <= 999; i++)
    {
        n1 = i / 100;
        n2 = (i % 100) / 10;
        n3 = i % 10;
        if (n1 != n2 && n2 != n3 && n1 != n3)
        {
            printf("%d  ", i);
            count++;
        }
    }
    printf("\nCount: %d\n", count);
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
        
        CODE (APC-PRAC-040.c):
        
        #include <stdio.h>
        
        int main()
        {
            int i, count = 0, n1, n2, n3;
            printf("Distinct numbers between 100 and 999: ");
            for (i = 100; i <= 999; i++)
            {
                n1 = i / 100;
                n2 = (i % 100) / 10;
                n3 = i % 10;
                if (n1 != n2 && n2 != n3 && n1 != n3)
                {
                    printf("%d  ", i);
                    count++;
                }
            }
            printf("\nCount: %d\n", count);
            return 0;
        }
    ```

    </div>
