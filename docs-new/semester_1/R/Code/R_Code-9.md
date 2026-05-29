---
title: R_Code-9.r
description: "R program source code for R_Code-9.r"
icon: lucide/file-code
---

# `R_Code-9.r`


!!! abstract "Problem Statement"
    Define a function called power that takes two parameters, a and b. Give a a default value of 2. The function should print the result of a raised to the power of b (a^b).

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 19 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-9.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-9.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Define a function called power that takes two parameters, 
# a and b. Give a a default value of 2. The function should print the result 
# of a raised to the power of b (a^b). 

power <- function (a = 2, b) {
    return (a^b)
}
a <- 2
b <- 3
print(power(a, b))
print(power("b" = b))
```
</div>
