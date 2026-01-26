/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Given three variables x, y, z, write a function to circularly shift their
values to right. In other words, if x = 5, y = 8, z = 10, after circular
shift y = 5, z = 8, x = 10. cal the function with variables a, b, c to
circularly shift values.
*/
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