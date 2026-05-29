---
title: R_Code-10.r
description: "R program source code for R_Code-10.r"
icon: lucide/file-code
---

# `R_Code-10.r`


!!! abstract "Problem Statement"
    Create a numeric vector of student exam scores. Write a single line of code that evaluates these scores and outputs "Pass" for any score 50 or above, and "Fail" for any score below 50.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 20 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-10.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-10.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Create a numeric vector of student exam scores. 
# Write a single line of code that evaluates these scores and 
# outputs "Pass" for any score 50 or above, and "Fail" for any score below 50.

score <- c(45, 26, 89, 21, 75, 99, 13, 68, 85)

ifelse(score < 50, "Fail", "Pass")
```
</div>
