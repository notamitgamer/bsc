---
title: assignment-p-02.c
description: "C program source code for assignment-p-02.c"
tags:
  - Beginner
---

# `assignment-p-02.c`


!!! abstract "Problem Statement"
    Write a C program that includes a user-defined function named isArmstrong with the signature int isArmstrong(int num);. An Armstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits. For example, 153 is an Armstrong number because 1^3 + 5^3 + 3^3 = 153

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

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-02.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-02.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <math.h>

int isArmstrong(int);
int count(int);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (isArmstrong(n))
    {
        printf("\nInput %d is a Armstrong Number.", n);
    }
    else
    {
        printf("\nInput %d is Not a Armstrong Number.", n);
    }

    return 0;
}

int count(int n)
{
    int count = 0;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

int isArmstrong(int n)
{
    if (n < 0)
        return 0; 
    if (n == 0)
        return 1;

    int power = count(n);
    int temp = n;
    int checker = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        checker = checker + (int)round(pow(digit, power));
        temp = temp / 10;
    }
    return n == checker;
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
        
        CODE (assignment-p-02.c):
        
        #include <stdio.h>
        #include <math.h>
        
        int isArmstrong(int);
        int count(int);
        
        int main()
        {
            int n;
            printf("Enter the number: ");
            scanf("%d", &n);
        
            if (isArmstrong(n))
            {
                printf("\nInput %d is a Armstrong Number.", n);
            }
            else
            {
                printf("\nInput %d is Not a Armstrong Number.", n);
            }
        
            return 0;
        }
        
        int count(int n)
        {
            int count = 0;
            while (n > 0)
            {
                count++;
                n = n / 10;
            }
            return count;
        }
        
        int isArmstrong(int n)
        {
            if (n < 0)
                return 0; 
            if (n == 0)
                return 1;
        
            int power = count(n);
            int temp = n;
            int checker = 0;
        
            while (temp > 0)
            {
                int digit = temp % 10;
                checker = checker + (int)round(pow(digit, power));
                temp = temp / 10;
            }
            return n == checker;
        }
    ```

    </div>
