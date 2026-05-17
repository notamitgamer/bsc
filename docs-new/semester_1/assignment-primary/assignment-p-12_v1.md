---
title: assignment-p-12_v1.c
description: "C program source code for assignment-p-12_v1.c"
tags:
  - Beginner
---

# `assignment-p-12_v1.c`


!!! abstract "Problem Statement"
    Write a C program that takes multiple integers as command-line arguments and finds the maximum and minimum value among them.

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

- Array
- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-12_v1.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-12_v1.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <stdlib.h>

// use atoi()

int main(int argc, char *argv[])
{
    int current_val, max_val, min_val, i;
    char *endptr;
    long first_arg_val;
    if (argc < 2)
    {
        printf("Usage: %s <integer1> <integer2> ...\n", argv[0]);
        return 1;
    }
    first_arg_val = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0' || argv[1] == endptr)
    {
        printf("Error: Argument '%s' is not a valid integer.\n", argv[1]);
        return 1;
    }
    max_val = (int)first_arg_val;
    min_val = (int)first_arg_val;
    for (i = 2; i < argc; i++)
    {
        long val = strtol(argv[i], &endptr, 10);
        if (*endptr != '\0' || argv[i] == endptr)
        {
            printf("Error: Argument '%s' is not a valid integer.\n", argv[i]);
            return 1;
        }
        current_val = (int)val;
        if (current_val > max_val)
        {
            max_val = current_val;
        }
        if (current_val < min_val)
        {
            min_val = current_val;
        }
    }
    printf("The maximum value is: %d\n", max_val);
    printf("The minimum value is: %d\n", min_val);
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
        
        CODE (assignment-p-12_v1.c):
        
        #include <stdio.h>
        #include <stdlib.h>
        
        // use atoi()
        
        int main(int argc, char *argv[])
        {
            int current_val, max_val, min_val, i;
            char *endptr;
            long first_arg_val;
            if (argc < 2)
            {
                printf("Usage: %s <integer1> <integer2> ...\n", argv[0]);
                return 1;
            }
            first_arg_val = strtol(argv[1], &endptr, 10);
            if (*endptr != '\0' || argv[1] == endptr)
            {
                printf("Error: Argument '%s' is not a valid integer.\n", argv[1]);
                return 1;
            }
            max_val = (int)first_arg_val;
            min_val = (int)first_arg_val;
            for (i = 2; i < argc; i++)
            {
                long val = strtol(argv[i], &endptr, 10);
                if (*endptr != '\0' || argv[i] == endptr)
                {
                    printf("Error: Argument '%s' is not a valid integer.\n", argv[i]);
                    return 1;
                }
                current_val = (int)val;
                if (current_val > max_val)
                {
                    max_val = current_val;
                }
                if (current_val < min_val)
                {
                    min_val = current_val;
                }
            }
            printf("The maximum value is: %d\n", max_val);
            printf("The minimum value is: %d\n", min_val);
            return 0;
        }
    ```

    </div>
