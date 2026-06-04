---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> APC-SPS-001.c'
description: 'C program — APC-SPS-001.c'
---

# APC-SPS-001.c

| Property | Details |
| :--- | :--- |
| **Author** | Amit Dutta (amitdutta4255@gmail.com) |
| **Date** | 12 Dec 2025 |
| **License** | [MIT](https://github.com/notamitgamer/bsc/blob/main/LICENSE) |

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/tuition-c/APC-SPS-001.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/tuition-c/APC-SPS-001.c)

```c [APC-SPS-001.c]
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
