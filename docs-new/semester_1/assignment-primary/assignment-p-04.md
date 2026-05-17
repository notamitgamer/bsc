---
title: assignment-p-04.c
description: "C program source code for assignment-p-04.c"
tags:
  - Beginner
---

# `assignment-p-04.c`


!!! abstract "Problem Statement"
    Write a C program that takes an integer input representing a month (1 to 12) and a year. Use a switch statement to display the number of days in that month, considering leap years.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta <amitdutta4255@gmail.com> |
| **Date**       | 12 Dec 2025 |
| **License**    | MIT License (See the LICENSE file for details) |
| **Difficulty** | Beginner (index: 2 / 10) |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-04.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-04.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    int month, year, days;
    printf("Enter the month (1 to 12) and year: ");
    scanf("%d %d", &month, &year);

    switch (month)
    {
    case 1:  // jan
    case 3:  // mar
    case 5:  // may
    case 7:  // july
    case 8:  // aug
    case 10: // oct
    case 12: // dec
        days = 31;
        break;
    case 4:  // apr
    case 6:  // jun
    case 9:  // sep
    case 11: // nov
        days = 30;
        break;
    case 2: // feb
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
        {
            days = 29;
        }
        else
        {
            days = 28;
        }
        break;
    default:
        printf("\nYou entered something wrong.");
        return 0;
    }

    printf("\nNumber of days: %d", days);
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
        
        CODE (assignment-p-04.c):
        
        #include <stdio.h>
        
        int main()
        {
            int month, year, days;
            printf("Enter the month (1 to 12) and year: ");
            scanf("%d %d", &month, &year);
        
            switch (month)
            {
            case 1:  // jan
            case 3:  // mar
            case 5:  // may
            case 7:  // july
            case 8:  // aug
            case 10: // oct
            case 12: // dec
                days = 31;
                break;
            case 4:  // apr
            case 6:  // jun
            case 9:  // sep
            case 11: // nov
                days = 30;
                break;
            case 2: // feb
                if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
                {
                    days = 29;
                }
                else
                {
                    days = 28;
                }
                break;
            default:
                printf("\nYou entered something wrong.");
                return 0;
            }
        
            printf("\nNumber of days: %d", days);
            return 0;
        }
    ```

    </div>
