---
title: APC-PRAC-031.c
description: "C program source code for APC-PRAC-031.c"
icon: lucide/file-code
---

# `APC-PRAC-031.c`


!!! abstract "Problem Statement"
    Pattern: 1       2       3       4       5 6       7       8       9 10      11      12 13      14 15

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-031.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-031.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include<stdio.h> 
int main() {
	int n, i, j, temp = 1;
	printf("Enter the n : ");
	scanf("%d", &n);
	for(i = n; i >= 1; i--) {
		for(j = 1; j <= i; j++) {
			printf("%d\t", temp);
			temp++;
		}
		printf("\n");
	}
	return 0;
}
```
</div>
