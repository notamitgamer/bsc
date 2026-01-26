/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
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