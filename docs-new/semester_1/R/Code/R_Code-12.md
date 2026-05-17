---
title: R_Code-12.r
description: "R program source code for R_Code-12.r"
tags:
---

# `R_Code-12.r`


!!! abstract "Problem Statement"
    Write a custom function named calculate_area that takes two parameters: length and width. The width parameter should have a default value of 5. The function should print the product of the two parameters. Finally, call your function passing only the value 12 for the length.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) |
| **Date**       | 20 Mar 2026 |
| **License**    | MIT |

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Pointers

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/R/Code/R_Code-12.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/R/Code/R_Code-12.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a custom function named calculate_area that takes 
# two parameters: length and width. The width parameter should have 
# a default value of 5. The function should print the product of the 
# two parameters. Finally, call your function passing only the value 12 for the length. 

calculate_area <- function(length, width = 5) {
    print(length * width) 
}

calculate_area(12)
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
        
        CODE (R_Code-12.r):
        
        # Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
        # Repo: https://github.com/notamitgamer/bsc
        # License: MIT
        
        # Write a custom function named calculate_area that takes 
        # two parameters: length and width. The width parameter should have 
        # a default value of 5. The function should print the product of the 
        # two parameters. Finally, call your function passing only the value 12 for the length. 
        
        calculate_area <- function(length, width = 5) {
            print(length * width) 
        }
        
        calculate_area(12)
    ```

    </div>
