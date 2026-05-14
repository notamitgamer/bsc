---
title: apc-prac-025.c
description: "C program source code for apc-prac-025.c"
---

# `apc-prac-025.c`


!!! abstract "Problem Statement"
    Pattern: 5    4    3    2    1 5    4    3    2 5    4    3 5    4 5

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-025.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-025.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include<stdio.h> 
int main() {
	int n, i, j;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = n; j >= i; j--) {
			printf("%d    ", j);
		}
		printf("\n");
	}
	return 0;
}
```
