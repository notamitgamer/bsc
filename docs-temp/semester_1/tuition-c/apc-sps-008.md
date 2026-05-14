---
title: apc-sps-008.c
description: "C program source code for apc-sps-008.c"
---

# `apc-sps-008.c`


!!! abstract "Problem Statement"
    WAP to calculate area of circle by accepting radius as input

## Metadata
| Property | Detail |
|---|---|
| **Author**  | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/apc-sps-008.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/apc-sps-008.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include<stdio.h>
#include<math.h>
int main() {
	double r, area;
	printf("Enter the radius of circle : ");
	scanf("%lf", &r);
	area = M_PI * r * r;
	printf("\nArea : %lf", area);
	return 0;
}
```
