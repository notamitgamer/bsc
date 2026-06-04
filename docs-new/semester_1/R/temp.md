---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> temp.r'
description: 'R program — temp.r'
---

# temp.r

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/r/temp.r) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/r/temp.r)

```r [temp.r]
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
