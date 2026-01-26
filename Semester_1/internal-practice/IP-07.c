/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 03 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/* Write a program to swap two numbers using pointers (user-defined function). */

#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter value for a and b: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swap: ");
    printf("\na = %d,\tAddress: %u", a, &a);
    printf("\nb = %d,\tAddress: %u", b, &b);
    swap(&a, &b);
    printf("\nAfter Swap: ");
    printf("\na = %d,\tAddress: %u", a, &a);
    printf("\nb = %d,\tAddress: %u", b, &b);
    return 0;
}

void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}