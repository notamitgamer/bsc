/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 05 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/*
 * Question 7:
 * Write a program to swap two numbers using pointers using user-defined function.
 */

#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("\nBefore Swap: ");
    printf("\nA = %d, Loc: %p", a, &a);
    printf("\nB = %d, Loc: %p", b, &b);
    swap(&a, &b);
    printf("\nAfter Swap: ");
    printf("\nA = %d, Loc: %p", a, &a);
    printf("\nB = %d, Loc: %p", b, &b);
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}