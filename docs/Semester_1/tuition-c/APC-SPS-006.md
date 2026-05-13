---
label: APC-SPS-006.c
description: "C program source code for APC-SPS-006.c"
---

# `APC-SPS-006.c`

## Problem Statement
!!!
Bitwise NOT '~'
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-SPS-006.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-SPS-006.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

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
