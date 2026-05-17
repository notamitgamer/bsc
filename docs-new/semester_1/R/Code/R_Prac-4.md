---
title: R_Prac-4.r
description: "R program source code for R_Prac-4.r"
tags:
---

# `R_Prac-4.r`


!!! abstract "Problem Statement"
    Program to add two numbers in R program.

## Metadata
| Property | Detail |
|---|---|
| **Author**     | Amit Dutta (amitdutta4255@gmail.com) |
| **Date**       | 25 Mar 2026 |
| **License**    | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/R/Code/R_Prac-4.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/R/Code/R_Prac-4.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Program to add two numbers in R program.

num1 <- as.double(readline(prompt="Enter 1st number: "))
num2 <- as.double(readline(prompt="Enter 2nd number: "))
if(is.na(num1) || is.na(num2)) {
    stop("You did not enter a valid number.")
}
print(paste("Result", num1 + num2))
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
        
        CODE (R_Prac-4.r):
        
        # Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
        # Repo: https://github.com/notamitgamer/bsc
        # License: MIT
        
        # Program to add two numbers in R program.
        
        num1 <- as.double(readline(prompt="Enter 1st number: "))
        num2 <- as.double(readline(prompt="Enter 2nd number: "))
        if(is.na(num1) || is.na(num2)) {
            stop("You did not enter a valid number.")
        }
        print(paste("Result", num1 + num2))
    ```

    </div>
