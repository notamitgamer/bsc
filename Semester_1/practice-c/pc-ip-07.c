/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
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