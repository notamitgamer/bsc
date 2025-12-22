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

/* Given three variables x, y, z, write a function to circularly shift their
values to right. In other words, if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x = 10. cal the function with variables a, b, c to
circularly shift values.
*/
/* Author - Amit Dutta, Date - 24th November, 2025 */
/* Let Us C, Chap- 9, Page - 163, Qn No.: C(a) */

#include <stdio.h>

void circularShift(int *, int *, int *);

int main()
{
    int x = 5, y = 8, z = 10;

    printf("--- Before Shift ---\n");
    printf("x: %d, y: %d, z: %d", x, y, z);

    circularShift(&x, &y, &z);

    printf("\n--- After Shift ---\n");
    printf("x: %d, y: %d, z: %d", x, y, z);

    return 0;
}

void circularShift(int *x, int *y, int *z)
{
    int temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}