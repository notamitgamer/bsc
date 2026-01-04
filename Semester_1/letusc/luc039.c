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

/* Population of a town today is 100000. The population has increased
steadily at the rate of 10% per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade. */
/* Author - Amit Dutta, Date - 21st OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(f) */

#include <stdio.h>
int main()
{
    int i, population = 100000;
    printf("Present year : %d\n", population);
    for (i = 1; i <= 10; i++)
    {
        population /= 1.10;
        printf("%d year ago : %d\n", i, population);
    }
    return 0;
}