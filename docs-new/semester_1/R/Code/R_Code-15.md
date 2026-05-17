---
title: R_Code-15.r
description: "R program source code for R_Code-15.r"
tags:
---

# `R_Code-15.r`

## Metadata
| Property | Detail |
|---|---|

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/R/Code/R_Code-15.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/R/Code/R_Code-15.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Asking for a name
name <- readline(prompt = "Enter your name: ")

# Asking for a number (requires conversion)
age <- readline(prompt = "Enter your age: ")
age <- as.numeric(age) 

print(paste("Hello", name, "you are", age, "years old."))
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
        
        CODE (R_Code-15.r):
        
        # Asking for a name
        name <- readline(prompt = "Enter your name: ")
        
        # Asking for a number (requires conversion)
        age <- readline(prompt = "Enter your age: ")
        age <- as.numeric(age) 
        
        print(paste("Hello", name, "you are", age, "years old."))
    ```

    </div>
