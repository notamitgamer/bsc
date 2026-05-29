---
title: temp.r
description: "R program source code for temp.r"
icon: lucide/file-code
---

# `temp.r`

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/temp.r){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/temp.r){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```r
s1 = rep(c(1,2,3,4,5), times=2)
s2 = c(5,4,3,2,1)
count = 0
for(i in s1) {
    for (j in s2) {
        if((i+j) %% 2 == 0) {
            count = count + 1
            print(sprintf("%d, %d, %d", i, j, count))
            print(length(s1))
        }
    }
}
2^3
```
</div>
