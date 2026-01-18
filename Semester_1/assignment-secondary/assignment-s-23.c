/*
 * ======================================================================================
 * COPYRIGHT (C) 2026 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a program to add two complex numbers using structures. */

#include <stdio.h>
#include <stdlib.h>

struct complex_number
{
    double real;
    double imaginary;
};

int main()
{
    struct complex_number a, b;
    printf("Enter the 1st complex number in this format (a+bi): ");
    scanf("%lf+%lfi", &a.real, &a.imaginary);
    printf("Enter the 2nd complex number in this format (a+bi): ");
    scanf("%lf+%lfi", &b.real, &b.imaginary);

    printf("Result = %-2g + %-2.2g", a.real + b.real, a.imaginary + b.imaginary);
    return 0;
}