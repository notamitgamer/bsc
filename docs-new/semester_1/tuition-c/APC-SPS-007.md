---
title: APC-SPS-007.c
description: "C program source code for APC-SPS-007.c"
icon: lucide/file-code
---

# `APC-SPS-007.c`


!!! abstract "Problem Statement"
    WAP to check a number is even or odd using bitwise operator

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-SPS-007.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-SPS-007.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
