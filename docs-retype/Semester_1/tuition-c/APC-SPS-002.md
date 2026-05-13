---
label: APC-SPS-002.c
description: "C program source code for APC-SPS-002.c"
---

# `APC-SPS-002.c`

## Problem Statement
!!!
WAP to swap two integers. Display both numbers before and after swap
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-SPS-002.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-SPS-002.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include<stdio.h>
int main() {
	int a = 10, b = 20, temp;
	printf("Before swap A : %d, B : %d", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swap A : %d, B : %d", a, b);
	return 0;
}
```
