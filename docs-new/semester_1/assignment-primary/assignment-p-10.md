---
title: assignment-p-10.c
description: "C program source code for assignment-p-10.c"
icon: lucide/file-code
---

# `assignment-p-10.c`


!!! abstract "Problem Statement"
    Write a C program that defines a structure Rectangle with attributes length and width. Include a user-defined function named calculateArea with the signature float calculateArea(struct Rectangle r);. The function should calculate and return the area of the rectangle.

## Metadata
| Property | Detail |
|---|---|
| **Author** | Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025 |
| **License** | MIT |

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/assignment-primary/assignment-p-10.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/assignment-primary/assignment-p-10.c){.md-button}

> You can print or save this file by opening Raw and using your browser.

## Source Code
<div data-search-exclude="true">
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
</div>
