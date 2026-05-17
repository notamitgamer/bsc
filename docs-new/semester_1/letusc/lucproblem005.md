---
title: lucproblem005.c
description: "C program source code for lucproblem005.c"
tags:
  - Beginner
---

# `lucproblem005.c`


!!! abstract "Problem Statement"
    Write a program to calculate overtime pay of 10 employees. Overtime is paid at the rate of Rs. 120.00 per hour for every hour worked above 40 hours. Assume that employees do not work for fractional part of an hour.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/letusc/lucproblem005.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/letusc/lucproblem005.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <conio.h>
int main()
{
    int working_hour, i = 1;
    double pay;
    while (i <= 10)
    {
        printf("Enter the working hour for the employee no. %d : ", i);
        if (scanf("%d", &working_hour) != 1)
        {
            printf("\n\tPlease enter a number as woking hour.\n\n");
            while (getchar() != '\n')
                ;
            // above line discard the input characters untill getchar() reaches the new line character.
            /* if I do not discard the input, after 'continue;' statement that input will be again taken 
            by scanf (In the line 17). It will be a infinite loop of error. */
            continue;
        }
        // checking overtime
        if (working_hour > 40)
        {
            pay = (working_hour - 40) * 120.00;
            printf("\n\tOvertime working hours of Employee %d : %d", i, (working_hour - 40));
            printf("\n\tPay of the overtime for Employee %d   : Rs. %.2f\n\n", i, pay);
        }
        else
            printf("\n\tEmployee %d did not work any overtime.\n\n", i);
        i++; // changing to next employee
    }
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
        
        CODE (lucproblem005.c):
        
        #include <stdio.h>
        #include <conio.h>
        int main()
        {
            int working_hour, i = 1;
            double pay;
            while (i <= 10)
            {
                printf("Enter the working hour for the employee no. %d : ", i);
                if (scanf("%d", &working_hour) != 1)
                {
                    printf("\n\tPlease enter a number as woking hour.\n\n");
                    while (getchar() != '\n')
                        ;
                    // above line discard the input characters untill getchar() reaches the new line character.
                    /* if I do not discard the input, after 'continue;' statement that input will be again taken 
                    by scanf (In the line 17). It will be a infinite loop of error. */
                    continue;
                }
                // checking overtime
                if (working_hour > 40)
                {
                    pay = (working_hour - 40) * 120.00;
                    printf("\n\tOvertime working hours of Employee %d : %d", i, (working_hour - 40));
                    printf("\n\tPay of the overtime for Employee %d   : Rs. %.2f\n\n", i, pay);
                }
                else
                    printf("\n\tEmployee %d did not work any overtime.\n\n", i);
                i++; // changing to next employee
            }
        }
    ```

    </div>
