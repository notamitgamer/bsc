# `assignment-p-10.c`

## Problem Statement
!!!
Write a C program that defines a structure Rectangle with attributes length and width. Include a user-defined function named calculateArea with the signature float calculateArea(struct Rectangle r);. The function should calculate and return the area of the rectangle.
!!!

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions
[!button variant="primary" icon="code" target="blank" text="Raw"](https://raw.usercontent.amit.is-a.dev/Semester_1/assignment-primary/assignment-p-10.c) [!button variant="secondary" target="blank" text="View on GitHub"](https://github.com/notamitgamer/bsc/blob/main/Semester_1/assignment-primary/assignment-p-10.c)

💡 *Note: You can print or download this file by going to the **Raw** file.*

## Source Code
```c
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
```
