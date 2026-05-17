---
title: APC-S-011.c
description: "C program source code for APC-S-011.c"
tags:
  - Beginner
---

# `APC-S-011.c`


!!! abstract "Problem Statement"
    Linear search

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License**    | MIT |
| **Difficulty** | Beginner (index: 1 / 10) |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Searching
- Recursion
- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-S-011.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-S-011.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include <stdio.h>

int main()
{
    int elementCount, i, keyElement;

    printf("Enter the number of element you want to add: ");
    scanf("%d", &elementCount);

    int elements[elementCount];

    for (i = 0; i < elementCount; i++)
    {
        printf("Enter Element %d: ", i + 1);
        scanf("%d", &elements[i]);
    }

    printf("\nEnter the Key Element you want to search: ");
    scanf("%d", &keyElement);
    for (i = 0; i < elementCount; i++)
        if (elements[i] == keyElement)
        {
            printf("\nKey Element %d is found in %d position.", keyElement, i);
            return 0;
        }
    printf("\nKey Element %d is not found.", keyElement);
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
        
        CODE (APC-S-011.c):
        
        #include <stdio.h>
        
        int main()
        {
            int elementCount, i, keyElement;
        
            printf("Enter the number of element you want to add: ");
            scanf("%d", &elementCount);
        
            int elements[elementCount];
        
            for (i = 0; i < elementCount; i++)
            {
                printf("Enter Element %d: ", i + 1);
                scanf("%d", &elements[i]);
            }
        
            printf("\nEnter the Key Element you want to search: ");
            scanf("%d", &keyElement);
            for (i = 0; i < elementCount; i++)
                if (elements[i] == keyElement)
                {
                    printf("\nKey Element %d is found in %d position.", keyElement, i);
                    return 0;
                }
            printf("\nKey Element %d is not found.", keyElement);
            return 0;
        }
    ```

    </div>
