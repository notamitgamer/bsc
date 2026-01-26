/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* According to a study, the approximate level of intelligence of a
person can be calculated using the following formula.
    i = 2 + (y + 0.5x)
write a program that will produce a table of values of i, y and x,
where y varies from 1 to 6, and, for each value of y, x varies from
5.5 to 12.5 in steps of 0.5 */
/* Let Us C, Chap- 6, Page - 105, Qn No.: B(b) */

#include <stdio.h>
int main()
{
    double y, x;
    printf("\n--- Approximate Intelligence ---\n");
    for (y = 1; y <= 6; y++)
    {
        printf("\tY = %d\n", y);
        for (x = 5.5; x <= 12.5; x += 0.5)
        {
            printf("Y: %g\t X: %.2g\t I: %g\n", y, x, 2 + (y + 0.5 * x));
        }
        printf("-----------------------\n");
    }
    return 0;
}