/* Write a program to generate all combination of 1, 2 and 3 using for loop. */
/* Author - Amit Dutta, Date - 24th OCT, 2025 */
/* Let Us C, Chap - 6, Page - 103, Problem 6.3 */

#include<stdio.h>

int main() {
    printf("Combination of 1, 2, 3 upto thousands :");
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            for (int k = 0; k <= 3; k++)
            {
                for (int l = 0; l <= 3; l++)
                {
                    int num = (i * 1000) + (j * 100) + (k * 10) + l;
                    printf("  %d", num);
                }
            }
        }
    }
}