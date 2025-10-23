/* Write a program to generate all Pythagorean Triplets with slide
length less than or equal to 30. */
/* Author - Amit Dutta, Date - 21st OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(e) */

#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c;
    printf("Pythagorean Triplets with slide length less than or equal to 30 : \n");
    for (a = 1; a <= 30; a++)
    {
        for (b = a; b <= 30; b++)
        {
            int c_square = a * a + b * b;
            for (c = b + 1; c <= 30; c++)
            {
                if (c * c == c_square)
                    printf("(%d, %d, %d)\n", a, b, c);
            }
        }
    }
    return 0;
}