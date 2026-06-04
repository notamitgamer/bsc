---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> external_3.c'
description: 'C program — external_3.c'
---

# external_3.c

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/external_3.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/external_3.c)

```c [external_3.c]
#include<stdio.h>

int sum(int);

int main() {
	int n;
	printf("Enter the value for n: ");
	scanf("%d", &n);
	printf("\nSum of the first n terms= %d", sum(n));
	return 0;
}

int sum(int n) {
	int i, res = 0;
	for(i = 1; i <= n; i++) {
		if(i % 2 == 0) {
			res -= i;
			continue;
		}
		res += i;
	}
	return res;
}
```
