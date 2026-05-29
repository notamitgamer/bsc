---
title: R_Code-13.r
description: "R program source code for R_Code-13.r"
icon: lucide/file-code
---

# `R_Code-13.r`


!!! abstract "Problem Statement"
    Create a list named student_record containing a string, an integer, and a numeric vector of two grades. Then, add the logical value TRUE to the end of the list, ensuring the original student_record variable is updated. Print the final list.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 20 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-13.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-13.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Create a list named student_record containing a string, 
# an integer, and a numeric vector of two grades. Then, add the 
# logical value TRUE to the end of the list, ensuring the original 
# student_record variable is updated. Print the final list. 

student_record <- list("Amit Dutta", 95, c(95, 96))
print(student_record)
student_record <- append(student_record, TRUE)
print(student_record)
```
</div>
