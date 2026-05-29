---
title: R_Code-14.r
description: "R program source code for R_Code-14.r"
icon: lucide/file-code
---

# `R_Code-14.r`


!!! abstract "Problem Statement"
    Write an if...else if...else block that evaluates a newly created temperature variable. * If the temperature is strictly greater than 30, print: "30+ is too hot!" * If the temperature is between 20 and 30 (inclusive), print: "Perfect weather." * Otherwise, print: "It is quite cold."

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 20 Mar 2026 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-14.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-14.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 20 Mar 2026
# Repo: https://github.com/notamitgamer/bsc
# License: MIT

# Write an if...else if...else block that evaluates a newly created temperature variable.
# * If the temperature is strictly greater than 30, print: "30+ is too hot!"
# * If the temperature is between 20 and 30 (inclusive), print: "Perfect weather."
# * Otherwise, print: "It is quite cold." 

temperature <- 29
if(temperature > 30) {
    print("30+ is too hot!")
} else if(temperature >= 20 && temperature <= 30) {
    print("Perfect weather")
} else {
    print("It is quite cold.")
}
```
</div>
