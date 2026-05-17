---
title: temp.r
description: "R program source code for temp.r"
tags:
---

# `temp.r`

## Metadata
| Property | Detail |
|---|---|

## Concepts

!!! warning "Beta Feature"
    This concept detection system is still in beta and may occasionally show incorrect or incomplete results.

- Sorting (possible)
- Iteration

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/R/temp.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/R/temp.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
s1 = rep(c(1,2,3,4,5), times=2)
s2 = c(5,4,3,2,1)
count = 0
for(i in s1) {
    for (j in s2) {
        if((i+j) %% 2 == 0) {
            count = count + 1
            print(sprintf("%d, %d, %d", i, j, count))
            print(length(s1))
        }
    }
}
2^3
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
        
        CODE (temp.r):
        
        s1 = rep(c(1,2,3,4,5), times=2)
        s2 = c(5,4,3,2,1)
        count = 0
        for(i in s1) {
            for (j in s2) {
                if((i+j) %% 2 == 0) {
                    count = count + 1
                    print(sprintf("%d, %d, %d", i, j, count))
                    print(length(s1))
                }
            }
        }
        2^3
    ```

    </div>
