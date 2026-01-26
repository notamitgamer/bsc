/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
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
    struct Rectangle rec;
    printf("Enter the length of the Rectangle: ");
    scanf("%f", &rec.length);
    printf("Enter the width of the Rectangle: ");
    scanf("%f", &rec.width);
    printf("\nArea of the Rectangle = %g", calculateArea(rec));
}

float calculateArea(struct Rectangle r)
{
    return r.length * r.width;
}
