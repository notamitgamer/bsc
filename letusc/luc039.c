/* Population of a town today is 100000. The population has increased
steadily at the rate of 10% per year for last 10 years. Write a
program to determine the population at the end of each year in the
last decade. */
/* Author - Amit Dutta, Date - 21th OCT, 2025 */
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