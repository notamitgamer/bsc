---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> external_4.c'
description: 'C program — external_4.c'
---

# external_4.c

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/practice-c/external_4.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/practice-c/external_4.c)

```c [external_4.c]
#include<stdio.h>

int isPrime(int);

int main() {
	int num, i;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(isPrime(num)) printf("\n%d is a prime number.", num);
    else printf("\n%d is not a prime number.", num);
    
    // generate prime numbers upto 100
    printf("\n\nPrime number upto 100: ");
    for(i = 1; i <= 100; i++) {
        if(isPrime(i)) printf("\n%d  ", i);
    }
    return 0;
}

int isPrime(int n) {
    int i;
    if(n == 2) return 1;
    if(n <= 1 || n % 2 == 0) return 0;
    for(i = 3; i * i <= n; i = i+2) if(n % i == 0) return 0;
    return 1;
}
```
