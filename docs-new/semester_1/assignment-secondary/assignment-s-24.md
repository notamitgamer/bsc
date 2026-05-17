---
title: assignment-s-24.c
description: "C program source code for assignment-s-24.c"
tags:
  - Beginner
---

# `assignment-s-24.c`


!!! abstract "Problem Statement"
    Write a program to calculate the difference between two time periods using structures.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jan 2026 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-24.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-24.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

struct time_dif
{
    int hour;
    int min;
    int sec;
};

int main()
{
    struct time_dif tpA, tpB;
    long int tfA, tfB, tdif;
    printf("Enter the start time in this 24 hours clock format (HH MM SS): ");
    scanf("%d %d %d", &tpA.hour, &tpA.min, &tpA.sec);
    printf("Enter the end time in this 24 hours clock format (HH MM SS): ");
    scanf("%d %d %d", &tpB.hour, &tpB.min, &tpB.sec);

    tfA = tpA.hour * 3600 + tpA.min * 60 + tpA.sec;
    tfB = tpB.hour * 3600 + tpB.min * 60 + tpB.sec;
    tdif = tfB - tfA;
    if (tdif < 0)
    {
        printf("\nWrong information, End time should be later than Start time.");
        return 1;
    }
    printf("\nTime difference: %ld Hour(s) %ld Minutes(s) %ld Second(s).", tdif / 3600, (tdif % 3600) / 60, (tdif % 3600) % 60);

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
        
        CODE (assignment-s-24.c):
        
        #include <stdio.h>
        #include <stdlib.h>
        
        struct time_dif
        {
            int hour;
            int min;
            int sec;
        };
        
        int main()
        {
            struct time_dif tpA, tpB;
            long int tfA, tfB, tdif;
            printf("Enter the start time in this 24 hours clock format (HH MM SS): ");
            scanf("%d %d %d", &tpA.hour, &tpA.min, &tpA.sec);
            printf("Enter the end time in this 24 hours clock format (HH MM SS): ");
            scanf("%d %d %d", &tpB.hour, &tpB.min, &tpB.sec);
        
            tfA = tpA.hour * 3600 + tpA.min * 60 + tpA.sec;
            tfB = tpB.hour * 3600 + tpB.min * 60 + tpB.sec;
            tdif = tfB - tfA;
            if (tdif < 0)
            {
                printf("\nWrong information, End time should be later than Start time.");
                return 1;
            }
            printf("\nTime difference: %ld Hour(s) %ld Minutes(s) %ld Second(s).", tdif / 3600, (tdif % 3600) / 60, (tdif % 3600) % 60);
        
            return 0;
        }
    ```

    </div>
