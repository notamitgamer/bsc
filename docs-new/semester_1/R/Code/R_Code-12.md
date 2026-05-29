---
title: R_Code-12.r
description: "R program source code for R_Code-12.r"
icon: lucide/file-code
---

# `R_Code-12.r`


!!! abstract "Problem Statement"
    Write a custom function named calculate_area that takes two parameters: length and width. The width parameter should have a default value of 5. The function should print the product of the two parameters. Finally, call your function passing only the value 12 for the length.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 20 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-12.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-12.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write a custom function named calculate_area that takes 
# two parameters: length and width. The width parameter should have 
# a default value of 5. The function should print the product of the 
# two parameters. Finally, call your function passing only the value 12 for the length. 

calculate_area <- function(length, width = 5) {
    print(length * width) 
}

calculate_area(12)
```
</div>
