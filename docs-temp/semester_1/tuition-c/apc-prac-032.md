---
title: apc-prac-032.c
description: "C program source code for apc-prac-032.c"
---

# `apc-prac-032.c`


!!! abstract "Problem Statement"
    Pattern: A B       B C       C       C D       D       D       D E       E       E       E       E

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-prac-032.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-prac-032.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include<stdio.h> 
int main() {
	int n, i, j; char temp = 'A';
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("%c\t", temp);
		}
		temp++;
		printf("\n");
	}
	return 0;
}
```
