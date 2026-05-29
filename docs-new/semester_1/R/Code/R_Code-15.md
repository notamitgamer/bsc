---
title: R_Code-15.r
description: "R program source code for R_Code-15.r"
icon: lucide/file-code
---

# `R_Code-15.r`

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/code/R_Code-15.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/code/R_Code-15.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
# Asking for a name
name <- readline(prompt = "Enter your name: ")

# Asking for a number (requires conversion)
age <- readline(prompt = "Enter your age: ")
age <- as.numeric(age) 

print(paste("Hello", name, "you are", age, "years old."))
```
</div>
