---
title: apc-sps-005.c
description: "C program source code for apc-sps-005.c"
---

# `apc-sps-005.c`


!!! abstract "Problem Statement"
    Bitwise OR '|'

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-sps-005.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-sps-005.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include<stdio.h>
int main() {
	int x = 12, y = 14, z = 10, res;
	x++;
	z++;
	x = x + y + z;
	res = x | y;
	z = res | z;
	printf("x = %d y = %d z = %d res = %d", x, y, z, res);
	return 0;
}
```
