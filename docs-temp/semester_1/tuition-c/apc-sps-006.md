---
title: apc-sps-006.c
description: "C program source code for apc-sps-006.c"
---

# `apc-sps-006.c`


!!! abstract "Problem Statement"
    Bitwise NOT '~'

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-sps-006.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-sps-006.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include<stdio.h>
int main() {
	int x = 12, y = 15, z = 21;
	int res, res1, res2;
	res = x > 10;
	res1 = ~res;
	res2 = ~x;
	printf("REs = %d, Res1 = %d, Res2 = %d", res, res1, res2);
	return 0;
}
```
