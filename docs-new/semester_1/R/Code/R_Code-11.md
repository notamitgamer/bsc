---
title: R_Code-11.r
description: "R program source code for R_Code-11.r"
icon: lucide/file-code
---

# `R_Code-11.r`


!!! abstract "Problem Statement"
    Write a while loop that starts with a multiplier of 1. The loop should multiply the current multiplier by 4, assign it to a result variable, and print the result. The loop should exit if the result exceeds 100; otherwise, increment the multiplier by 1.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 20 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-11.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-11.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a while loop that starts with a multiplier of 1. 
# The loop should multiply the current multiplier by 4, 
# assign it to a result variable, and print the result. 
# The loop should exit if the result exceeds 100; otherwise, 
# increment the multiplier by 1. 

num = 1 
while(TRUE) {
    result <- num * 4
    print(result)
    
    if (result > 100) {
        break
    }
    num = num + 1
}
```
</div>
