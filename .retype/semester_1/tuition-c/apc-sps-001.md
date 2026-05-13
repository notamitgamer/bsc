# `APC-SPS-001.c`

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/tuition-c/APC-SPS-001.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/tuition-c/APC-SPS-001.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

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
