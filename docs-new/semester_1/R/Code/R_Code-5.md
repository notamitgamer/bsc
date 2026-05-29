---
title: R_Code-5.r
description: "R program source code for R_Code-5.r"
icon: lucide/file-code
---

# `R_Code-5.r`


!!! abstract "Problem Statement"
    You have a vector of numbers: x <- c(12, 9, 23, 14). Use R's shorthand ifelse() function to output "EVEN" if a number in the vector is divisible by 2 (x %% 2 == 0), and "ODD" if it is not.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 19 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-5.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-5.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# You have a vector of numbers: x <- c(12, 9, 23, 14). 
# Use R's shorthand ifelse() function to output "EVEN" if a number 
# in the vector is divisible by 2 (x %% 2 == 0), and "ODD" if it is not. 

x <- c(12, 9, 23, 14)
ifelse(x %% 2 == 0, "EVEN", "ODD")
```
</div>
