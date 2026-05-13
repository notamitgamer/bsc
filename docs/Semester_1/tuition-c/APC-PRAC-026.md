---
label: APC-PRAC-026.c
description: "C program source code for APC-PRAC-026.c"
---

# `APC-PRAC-026.c`

## Problem Statement
!!!
Pattern: 5 5    4 5    4    3 5    4    3    2 5    4    3    2    1
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-026.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-026.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include<stdio.h> 
int main() {
	int n, i, j;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = n; i >= 1; i--) {
		for(j = n; j >= i; j--) {
			printf("%d    ", j);
		}
		printf("\n");
	}
	return 0;
}
```
