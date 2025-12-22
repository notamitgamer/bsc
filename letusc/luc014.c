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

/* Given the length and breadth of a rectangle, write a program to find
whether the area of the rectangle is greater than it's perimeter.
For example, the area of the rectangle with length = 5 and breadth = 4
is greater than its perimeter. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(e) */

#include <stdio.h>
int main()
{
    double len, bre, area, peri;
    printf("Enter the length and breadth of the rectangle : ");
    scanf("%lf %lf", &len, &bre);
    area = len * bre;
    peri = 2 * (len + bre);
    if (area > peri)
        printf("\nThe area of the rectangle is greater than it's perimeter.");
    else if (area < peri)
        printf("\nThe area of the rectangle is lower than it's perimeter.");
    else
        printf("\nThe area of the rectangle is same as it's perimeter.");
    return 0;
}