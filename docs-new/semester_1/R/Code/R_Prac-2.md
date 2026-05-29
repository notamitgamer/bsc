---
title: R_Prac-2.r
description: "R program source code for R_Prac-2.r"
icon: lucide/file-code
---

# `R_Prac-2.r`


!!! abstract "Problem Statement"
    Check whether a number is even or odd.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 25 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Prac-2.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Prac-2.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Check whether a number is even or odd.

num <- readline(prompt="Enter the number: ")
num <- as.integer(num)
print(paste(num, "is", ifelse(num %% 2 == 0, "EVEN", "ODD"), "number."))
```
</div>
