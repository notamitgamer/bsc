---
title: APC-PRAC-036.c
description: "C program source code for APC-PRAC-036.c"
tags:
  - Beginner
---

# `APC-PRAC-036.c`


!!! abstract "Problem Statement"
    Check krishnamurty number.

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

- Recursion
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-036.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-036.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int factorial(int);
int checkKrishnamurty(int);

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int checkKrishnamurty(int n)
{
    int temp1 = n, temp2 = 0;
    while (temp1 > 0)
    {
        temp2 += factorial(temp1 % 10);
        temp1 /= 10;
    }
    if (temp2 == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (checkKrishnamurty(n))
        printf("\nInput %d is a Krishnamurty number.", n);
    else
        printf("\ninput %d is not a Krishnamurty number.", n);
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
        
        CODE (APC-PRAC-036.c):
        
        #include <stdio.h>
        
        int factorial(int);
        int checkKrishnamurty(int);
        
        int factorial(int n)
        {
            int i, fact = 1;
            for (i = 1; i <= n; i++)
                fact *= i;
            return fact;
        }
        
        int checkKrishnamurty(int n)
        {
            int temp1 = n, temp2 = 0;
            while (temp1 > 0)
            {
                temp2 += factorial(temp1 % 10);
                temp1 /= 10;
            }
            if (temp2 == n)
                return 1;
            else
                return 0;
        }
        
        int main()
        {
            int n;
            printf("Enter the number: ");
            scanf("%d", &n);
            if (checkKrishnamurty(n))
                printf("\nInput %d is a Krishnamurty number.", n);
            else
                printf("\ninput %d is not a Krishnamurty number.", n);
            return 0;
        }
    ```

    </div>
