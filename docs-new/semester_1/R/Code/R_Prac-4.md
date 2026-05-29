---
title: R_Prac-4.r
description: "R program source code for R_Prac-4.r"
icon: lucide/file-code
---

# `R_Prac-4.r`


!!! abstract "Problem Statement"
    Program to add two numbers in R program.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 25 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Prac-4.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Prac-4.r){.md-button}

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
