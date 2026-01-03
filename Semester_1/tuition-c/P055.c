/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/tuition-c
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* WAP to print n terms of Fibbonacci Series (Starting from term 0) */
/* Author - Amit Dutta, Date - 15th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

void printFibonacci(int);

void printFibonacci(int n)
{
    int val1 = 0, val2 = 1, val3, i;
    printf("\nFibonacci series upto %d terms :", n);
    if (n < 0)
        printf("  N/A");
    if (n == 0)
        printf("  %d", val1);
    if (n > 0)
        printf("  %d  %d", val1, val2);
    for (i = 2; i <= n; i++)
    {
        val3 = val1 + val2;
        printf("  %d", val3);
        val1 = val2;
        val2 = val3;
    }
}

int main()
{
    int n;
    printf("Enter the n : ");
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}