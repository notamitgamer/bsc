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