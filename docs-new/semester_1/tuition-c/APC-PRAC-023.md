---
title: APC-PRAC-023.c
description: "C program source code for APC-PRAC-023.c"
tags:
  - Beginner
---

# `APC-PRAC-023.c`


!!! abstract "Problem Statement"
    Pattern : (a) 1, -3, 5, -7, 9, -11, ... upto n times (b) 0, 3, 8, 15, ... upto n times

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-023.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-023.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, temp = 1;
    bool isNegative = true;
    printf("Enter the n : ");
    scanf("%d", &n);
    printf("\nPattern A :");
    for (i = 1; i <= n; i++)
    {
        if (!isNegative)
        {
            printf("  %d", temp * -1);
            isNegative = true;
        }
        else
        {
            printf("  %d", temp);
            isNegative = false;
        }
        temp += 2;
    }
    printf("\nPattern B :");
    for (i = 1; i <= n; i++)
    {
        temp = (i * i) - 1;
        printf("  %d", temp);
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
        
        CODE (APC-PRAC-023.c):
        
        #include <stdio.h>
        #include <stdbool.h>
        
        int main()
        {
            int n, i, temp = 1;
            bool isNegative = true;
            printf("Enter the n : ");
            scanf("%d", &n);
            printf("\nPattern A :");
            for (i = 1; i <= n; i++)
            {
                if (!isNegative)
                {
                    printf("  %d", temp * -1);
                    isNegative = true;
                }
                else
                {
                    printf("  %d", temp);
                    isNegative = false;
                }
                temp += 2;
            }
            printf("\nPattern B :");
            for (i = 1; i <= n; i++)
            {
                temp = (i * i) - 1;
                printf("  %d", temp);
            }
            return 0;
        }
    ```

    </div>
