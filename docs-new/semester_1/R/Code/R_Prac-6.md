---
title: R_Prac-6.r
description: "R program source code for R_Prac-6.r"
icon: lucide/file-code
---

# `R_Prac-6.r`


!!! abstract "Problem Statement"
    Program to access List elements, modify a List Element, add items to List, Remove items from a List, length of List.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 25 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Prac-6.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Prac-6.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 25 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Program to access List elements, modify a List Element, add items to List, 
# Remove items from a List, length of List.

l <- list("Amit", 19, "Madhyamgram", 94.5)
print("Initial list:")
print(l)

l[[4]] = 95.46
print("after modifing last element: ")
print(l)

l[length(l) + 1] <- "hello"
print("after adding new element:")
print(l)

l[3] <- NULL
print("after deleting a element: ")
print(l)

print(paste("length of the list after modifing:", length(l)))
```
</div>
