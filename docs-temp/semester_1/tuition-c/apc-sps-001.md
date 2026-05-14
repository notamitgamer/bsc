---
title: apc-sps-001.c
description: "C program source code for apc-sps-001.c"
---

# `apc-sps-001.c`

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-sps-001.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-sps-001.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include<stdio.h>
int main() {
	int a, b, sum, sub, multi, div, mod;
	printf("Enter 1st number : ");
	scanf("%d", &a);
	printf("Enter 2nd number : ");
	scanf("%d", &b);
	sum = a + b;
	sub = a - b;
	multi = a * b;
	div = a / b;
	mod = a % b;
	printf("\nSum = %d", sum);
	printf("\nSubtraction = %d", sub);
	printf("\nMultiplication = %d", multi);
	printf("\nDivision = %d", div);
	printf("\nModulas = %d", div);
	return 0;
}
```
