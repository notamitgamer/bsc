---
title: R_Code-8.r
description: "R program source code for R_Code-8.r"
icon: lucide/file-code
---

# `R_Code-8.r`


!!! abstract "Problem Statement"
    Create a list named list1 containing the number 24, the string "Sabby", the float 5.4, and the string "Nepal". Then, write the code using the append() function to add the number 3.14 to the very end of this list.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 19 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-8.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-8.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Create a list named list1 containing the number 24, 
# the string "Sabby", the float 5.4, and the string "Nepal". 
# Then, write the code using the append() function to add the number 3.14 to the very end of this list. 

list1 <- list(24L, "Sabby", 5.4, "Nepal")
print("Before update")
print(list1)
print("After Update")
list1 <- append(list1, 3.14)
print(list1)
```
</div>
