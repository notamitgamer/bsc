/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Write a C program that defines a structure Rectangle with attributes length and width.
Include a user-defined function named calculateArea with the signature float
calculateArea(struct Rectangle r);. The function should calculate and return the area of
the rectangle. */

#include <stdio.h>

struct Rectangle
{
    float length;
    float width;
};

float calculateArea(struct Rectangle);

int main()
{
    struct Rectangle rectangle;
    printf("Enter the length of the Rectangle: ");
    scanf("%f", &rectangle.length);
    printf("Enter the width of the Rectangle: ");
    scanf("%f", &rectangle.width);
    printf("\nArea of the Rectangle = %g", calculateArea(rectangle));
}

float calculateArea(struct Rectangle r)
{
    return r.length * r.width;
}