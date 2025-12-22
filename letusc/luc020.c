/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/letusc
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* In digital world colors are specified in Red-Green-Blue (RGB) format,
with values of R, G, B varying on an integer scale from 0 to 255. In print
publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK) format,
with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0.
Write a program that converts RGB color to CMYK color as per the following formulae:
    White   = Max(Red/255, Green/255, Blue/255)
    Cyan    = (White-Red/255) / White
    Magenta = (White-Green/255) / White
    Yellow  = (White-Blue/255) / White
    Black   = 1 - White
Note that if the RGB values are all 0, then the CMY values are all 0 and the K value is 1. */
/* Author - Amit Dutta, Date - 4th OCT, 2025 */
/* Let Us C, Chap- 4, Page - 71, Qn No.: D(b) */

#include <stdio.h>

// declaring function
double get_white(double red, double green, double blue)
{
    double max;
    max = red / 255;
    if (max < (green / 255))
        max = green / 255;
    if (max < (blue / 255))
        max = blue / 255;
    return max;
}

int main()
{
    double r, g, b, w, c = 0, m = 0, y = 0, k = 0;
    printf("Enter the RGB color code in 'R G B' format : ");
    scanf("%lf %lf %lf", &r, &g, &b);

    // checking for invalid input (negetive input)
    if (r < 0 || g < 0 || b < 0)
    {
        printf("\nRGB color code can not be a negetive number.");
        return 1;
    }

    // checking for invalid input (out of range color code)
    if (r > 255 || g > 255 || b > 255)
    {
        printf("\nRGB color code can be maximum (255, 255, 255).");
        return 1;
    }

    // converting RGB color code to CMYK color code
    if (r == 0 && g == 0 && b == 0)
        k = 1;
    else
    {
        w = get_white(r, g, b);
        c = (w - (r / 255)) / w;
        m = (w - (g / 255)) / w;
        y = (w - (b / 255)) / w;
        k = 1 - w;
    }

    printf("\nRGB color (%g, %g, %g) equivalent to CMYK color (%g, %g, %g, %g).", r, g, b, c, m, y, k);
    return 0;
}