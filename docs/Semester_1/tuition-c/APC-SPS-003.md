---
label: APC-SPS-003.c
description: "C program source code for APC-SPS-003.c"
---

# `APC-SPS-003.c`

## Problem Statement
!!!
Bitwise AND '&'
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-SPS-003.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-SPS-003.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include<stdio.h>
int main() {
	unsigned int a = 4, b = 5, c = 6;
	unsigned int x, y;
	x = a & b;
	y = b & c;
	printf("x = %u y = %u", x, y);
	return 0;
}
```
