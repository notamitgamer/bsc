---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> external_7.c'
description: 'C program — external_7.c'
---

# external_7.c

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/external_7.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/external_7.c)

```c [external_7.c]
#include<stdio.h>

#define SWAP(a, b)              	   \
        do {                           \
            __typeof__(a) temp = a;    \
            a = b;              	   \
            b = temp;           	   \
        } while (0)             	   \

int main() {
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("\nA = \'%d\', B = \'%d\'", a, b);
    SWAP(a, b);
    printf("\nA = \'%d\', B = \'%d\'", a, b);
    return 0;
}
```
