---
title: R_Prac-6.r
description: "R program source code for R_Prac-6.r"
tags:
---

# `R_Prac-6.r`


!!! abstract "Problem Statement"
    Program to access List elements, modify a List Element, add items to List, Remove items from a List, length of List.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) |
| **Date**       | 25 Mar 2026 |
| **License**    | MIT |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Array

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/R/Code/R_Prac-6.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/R/Code/R_Prac-6.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Program to access List elements, modify a List Element, add items to List, 
# Remove items from a List, length of List.

l <- list("Amit", 19, "Madhyamgram", 94.5)
print("Initial list:")
print(l)

l[[4]] = 95.46
print("after modifing last element: ")
print(l)

l[length(l) + 1] <- "hello"
print("after adding new element:")
print(l)

l[3] <- NULL
print("after deleting a element: ")
print(l)

print(paste("length of the list after modifing:", length(l)))
```
</div>

## Explanation

??? info "Explain with AI"

    Copy the prompt below and paste it into any AI assistant.

    <div data-search-exclude="true">

    ```text
        You are explaining a R programming code to a beginner.
        
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
        
        CODE (R_Prac-6.r):
        
        # Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
        # Repo: https://github.com/notamitgamer/bsc
        # License: MIT
        
        # Program to access List elements, modify a List Element, add items to List, 
        # Remove items from a List, length of List.
        
        l <- list("Amit", 19, "Madhyamgram", 94.5)
        print("Initial list:")
        print(l)
        
        l[[4]] = 95.46
        print("after modifing last element: ")
        print(l)
        
        l[length(l) + 1] <- "hello"
        print("after adding new element:")
        print(l)
        
        l[3] <- NULL
        print("after deleting a element: ")
        print(l)
        
        print(paste("length of the list after modifing:", length(l)))
    ```

    </div>
