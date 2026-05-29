---
title: R_Code-4.r
description: "R program source code for R_Code-4.r"
icon: lucide/file-code
---

# `R_Code-4.r`


!!! abstract "Problem Statement"
    Write a standard if...else block that checks if a variable named age is greater than 18. If the condition is true, print "You are eligible to vote.", otherwise print "You cannot vote.".

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 19 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-4.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-4.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a standard if...else block that checks if a variable named 
# age is greater than 18. If the condition is true, print "You are eligible to vote.", 
# otherwise print "You cannot vote.". 

age <- -1
if (age < 0) {
    print("Not a valid age.")
} else if (age < 18) {
    print("Not eligible to vote.")
} else {
    print("Eligible to vote.")
}
```
</div>
