---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> R_Code-5.r'
description: 'You have a vector of numbers: x <- c(12, 9, 23, 14). Use R''s shorthand ifelse() function to output "EVEN" if a number in the vector is divisible by 2 (x %% 2 == 0), and "ODD" if it is not.'
---

# R_Code-5.r

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 19 Mar 2026 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
You have a vector of numbers: x &lt;- c(12, 9, 23, 14). Use R's shorthand ifelse() function to output "EVEN" if a number in the vector is divisible by 2 (x %% 2 == 0), and "ODD" if it is not.
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-5.r) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-5.r)

```r [R_Code-5.r]
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 19 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# You have a vector of numbers: x <- c(12, 9, 23, 14). 
# Use R's shorthand ifelse() function to output "EVEN" if a number 
# in the vector is divisible by 2 (x %% 2 == 0), and "ODD" if it is not. 

x <- c(12, 9, 23, 14)
ifelse(x %% 2 == 0, "EVEN", "ODD")
```
