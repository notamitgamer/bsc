---
title: R_Prac-5.r
description: "R program source code for R_Prac-5.r"
icon: lucide/file-code
---

# `R_Prac-5.r`


!!! abstract "Problem Statement"
    Program to count the number of even numbers stored inside a vector of numbers.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 25 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Prac-5.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Prac-5.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Program to count the number of even numbers stored inside a vector of numbers.

print("Enter your numbers: ")
nums <- as.integer(scan())
count = 0
for(i in nums)  {
    if(i %% 2 == 0) {
        count = count + 1
    }
}
print(paste("Even Count=", count))
```
</div>
