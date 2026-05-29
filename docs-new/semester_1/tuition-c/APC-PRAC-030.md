---
title: APC-PRAC-030.c
description: "C program source code for APC-PRAC-030.c"
icon: lucide/file-code
---

# `APC-PRAC-030.c`


!!! abstract "Problem Statement"
    Pattern: # @   @ #   #   # @   @   @   @ #   #   #   #   #

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-PRAC-030.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-PRAC-030.c){.md-button}

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
		for(j = 1; j <= i; j++) {
			if(i % 2 == 0) printf("@   ");
			else printf("#   ");
		}
		printf("\n");
	}
	return 0;
}
```
</div>
