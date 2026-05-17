---
title: assignment-s-08.c
description: "C program source code for assignment-s-08.c"
tags:
  - Beginner
---

# `assignment-s-08.c`


!!! abstract "Problem Statement"
    Write a program that counts the number of occurrences of each alphabet (A-Z, a-z) in the text entered using Command-Line Arguments.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 1 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Array
- Pointers
- Iteration
- Sorting (possible)
- Recursion

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-secondary/assignment-s-08.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-secondary/assignment-s-08.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int target[2], i, j, count[2], len;
    for (target[0] = 'A', target[1] = 'a'; target[0] <= 'Z', target[1] <= 'z'; target[0]++, target[1]++)
    {
        count[0] = 0;
        count[1] = 0;
        for (i = 1; i < argc; i++)
        {
            len = strlen(argv[i]);
            for (j = 0; j < len; j++)
            {
                if (argv[i][j] == target[0])
                {
                    count[0]++;
                }
                if (argv[i][j] == target[1])
                {
                    count[1]++;
                }
            }
        }
        if (count[0])
        {
            printf("\n\"%c\" found %d times.", target[0], count[0]);
        }
        if (count[1])
        {
            printf("\n\"%c\" found %d times.", target[1], count[1]);
        }
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
        
        CODE (assignment-s-08.c):
        
        #include <stdio.h>
        #include <string.h>
        
        int main(int argc, char *argv[])
        {
            int target[2], i, j, count[2], len;
            for (target[0] = 'A', target[1] = 'a'; target[0] <= 'Z', target[1] <= 'z'; target[0]++, target[1]++)
            {
                count[0] = 0;
                count[1] = 0;
                for (i = 1; i < argc; i++)
                {
                    len = strlen(argv[i]);
                    for (j = 0; j < len; j++)
                    {
                        if (argv[i][j] == target[0])
                        {
                            count[0]++;
                        }
                        if (argv[i][j] == target[1])
                        {
                            count[1]++;
                        }
                    }
                }
                if (count[0])
                {
                    printf("\n\"%c\" found %d times.", target[0], count[0]);
                }
                if (count[1])
                {
                    printf("\n\"%c\" found %d times.", target[1], count[1]);
                }
            }
            return 0;
        }
    ```

    </div>
