---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> R_Code-9.r'
description: 'Define a function called power that takes two parameters, a and b. Give a a default value of 2. The function should print the result of a raised to the power of b (a^b).'
---

# R_Code-9.r

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 19 Mar 2026 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Problem Statement

::: info Problem Statement
<b><i>
Define a function called power that takes two parameters, a and b. Give a a default value of 2. The function should print the result of a raised to the power of b (a^b).
</i></b>
:::

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-9.r) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-9.r)

```r [R_Code-9.r]
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
