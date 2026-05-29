---
title: APC-PRAC-024.c
description: "C program source code for APC-PRAC-024.c"
icon: lucide/file-code
---

# `APC-PRAC-024.c`


!!! abstract "Problem Statement"
    Pattern: 1 2	1 3	2	1 4	3	2	1 5	4	3	2	1

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-024.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-024.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include<stdio.h> 
int main() {
	int n, i, j;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = i; j >= 1; j--) {
			printf("%d    ", j);
		}
		printf("\n");
	}
	return 0;
}
```
</div>
