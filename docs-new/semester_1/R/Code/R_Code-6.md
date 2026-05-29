---
title: R_Code-6.r
description: "R program source code for R_Code-6.r"
icon: lucide/file-code
---

# `R_Code-6.r`


!!! abstract "Problem Statement"
    Write a while loop with a number variable starting at 1. The loop should print the number and increment it by 1, but you must include an if statement with a break command to stop the loop's execution exactly when number == 6

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 19 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-6.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-6.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a while loop with a number variable starting at 1. 
# The loop should print the number and increment it by 1, 
# but you must include an if statement with a break command to 
# stop the loop's execution exactly when number == 6

number <- 1
while (TRUE) {
    if(number == 6) {
        break
    }
    print(number)
    number = number + 1
}
```
</div>
