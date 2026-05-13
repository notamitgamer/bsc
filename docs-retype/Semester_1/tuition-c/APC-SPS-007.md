---
label: APC-SPS-007.c
description: "C program source code for APC-SPS-007.c"
---

# `APC-SPS-007.c`

## Problem Statement
!!!
WAP to check a number is even or odd using bitwise operator
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-SPS-007.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-SPS-007.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include<stdio.h>
int main() {
	int x, res = 1;
	printf("Enter a number : ");
	scanf("%d", &x);
	res = res & x;
	if (res == 0) {
		printf("\nInput %d is a even number.", x);
	}
	else {
		printf("\nInput %d is a odd number.", x);
	}
	return 0;
}
```
