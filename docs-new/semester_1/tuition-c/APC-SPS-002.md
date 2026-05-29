---
title: APC-SPS-002.c
description: "C program source code for APC-SPS-002.c"
icon: lucide/file-code
---

# `APC-SPS-002.c`


!!! abstract "Problem Statement"
    WAP to swap two integers. Display both numbers before and after swap

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-SPS-002.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-SPS-002.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
```c
#include<stdio.h>
int main() {
	int a = 10, b = 20, temp;
	printf("Before swap A : %d, B : %d", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter swap A : %d, B : %d", a, b);
	return 0;
}
```
</div>
