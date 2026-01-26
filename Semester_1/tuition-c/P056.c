/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to swap the value of a and b using user defined method. */
/* Author - Amit Dutta, Date - 22th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a, b;
    printf("Enter A and B: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore swap A: %d, B: %d", a, b);
    swap(&a, &b);
    printf("\nAfter swap A: %d, B: %d", a, b);
    return 0;
}