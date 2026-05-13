---
label: APC-PRAC-030.c
description: "C program source code for APC-PRAC-030.c"
---

# `APC-PRAC-030.c`

## Problem Statement
!!!
Pattern: # @   @ #   #   # @   @   @   @ #   #   #   #   #
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-PRAC-030.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-PRAC-030.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
#include<stdio.h> 
int main() {
	int n, i, j;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			if(i % 2 == 0) printf("@   ");
			else printf("#   ");
		}
		printf("\n");
	}
	return 0;
}
```
