---
title: APC-S-014.c
description: "C program source code for APC-S-014.c"
tags:
  - Beginner
---

# `APC-S-014.c`


!!! abstract "Problem Statement"
    Write a program to store roll no, name and marks of 5 students then print it. use structure

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 14 Jan 2026 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 2 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Recursion
- Array
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-014.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-014.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <string.h>

struct student
{
    int roll_no;
    char name[30];
    float marks;
};

int main()
{
    int i, stu_count = 3;
    struct student s[stu_count];
    for (i = 0; i < stu_count; i++)
    {
        printf("\nEnter the Roll Number: ");
        scanf("%d", &s[i].roll_no);
        getchar();
        printf("Enter the name: ");
        gets(s[i].name);
        printf("Enter the Marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("\n%-10s %-20s %-10s\n", "ROLL", "NAME", "MARKS");
    printf("%-10s %-20s %-10s\n", "====", "====", "=====");
    for (i = 0; i < stu_count; i++)
    {
        printf("%-10d %-20s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
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
        
        CODE (APC-S-014.c):
        
        #include <stdio.h>
        #include <string.h>
        
        struct student
        {
            int roll_no;
            char name[30];
            float marks;
        };
        
        int main()
        {
            int i, stu_count = 3;
            struct student s[stu_count];
            for (i = 0; i < stu_count; i++)
            {
                printf("\nEnter the Roll Number: ");
                scanf("%d", &s[i].roll_no);
                getchar();
                printf("Enter the name: ");
                gets(s[i].name);
                printf("Enter the Marks: ");
                scanf("%f", &s[i].marks);
            }
            printf("\n%-10s %-20s %-10s\n", "ROLL", "NAME", "MARKS");
            printf("%-10s %-20s %-10s\n", "====", "====", "=====");
            for (i = 0; i < stu_count; i++)
            {
                printf("%-10d %-20s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
            }
            return 0;
        }
    ```

    </div>
