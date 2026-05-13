---
label: APC-SPS-008.c
description: "C program source code for APC-SPS-008.c"
---

# `APC-SPS-008.c`

## Problem Statement
!!!
WAP to calculate area of circle by accepting radius as input
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-SPS-008.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-SPS-008.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

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
