---
title: lucproblem016.c
description: "C program source code for lucproblem016.c"
tags:
  - Beginner
---

# `lucproblem016.c`


!!! abstract "Problem Statement"
    Figure 9.4 shows three memory locations and values stored in them. Write a program to declare  variables that implement the relationship shown. How will you print the values and addresses shown in the figure? On which machine the program should be executed to get such addresses? Figure 9.4: value: 3.14, memory_address: 7fff9489c79c value: 7fff9489c7a0, memory_address: 7fff4fd134b8 value: 7fff9489c79c,  memory_address: 7fff9489c7a0

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem016.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem016.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    float a = 3.14;
    float *c = &a;
    float **b = &c;

    printf("Location 1 (Variable a):\n");
    printf("Value: %g\n", a);
    printf("Address: %p\n", (void *)&a);
    printf("------------------------------\n");

    printf("Location 3 (Variable c: float *):\n");
    printf("Value (Address stored): %p\n", (void *)c);
    printf("Address of c itself: %p\n", (void *)&c);
    printf("Value pointed to (*c): %g\n", *c);
    printf("------------------------------\n");

    printf("Location 2 (Variable b: float **):\n");
    printf("Value (Address stored): %p\n", (void *)b);
    printf("Address of b itself: %p\n", (void *)&b);
    printf("Value pointed to (*b): %p\n", (void *)*b);
    printf("Value pointed to (**b): %g\n", **b);
    printf("------------------------------\n");

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
        
        CODE (lucproblem016.c):
        
        #include <stdio.h>
        
        int main()
        {
            float a = 3.14;
            float *c = &a;
            float **b = &c;
        
            printf("Location 1 (Variable a):\n");
            printf("Value: %g\n", a);
            printf("Address: %p\n", (void *)&a);
            printf("------------------------------\n");
        
            printf("Location 3 (Variable c: float *):\n");
            printf("Value (Address stored): %p\n", (void *)c);
            printf("Address of c itself: %p\n", (void *)&c);
            printf("Value pointed to (*c): %g\n", *c);
            printf("------------------------------\n");
        
            printf("Location 2 (Variable b: float **):\n");
            printf("Value (Address stored): %p\n", (void *)b);
            printf("Address of b itself: %p\n", (void *)&b);
            printf("Value pointed to (*b): %p\n", (void *)*b);
            printf("Value pointed to (**b): %g\n", **b);
            printf("------------------------------\n");
        
            return 0;
        }
    ```

    </div>
