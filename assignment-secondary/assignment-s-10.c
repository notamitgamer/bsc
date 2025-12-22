/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/assignment-secondary
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
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