/* Ramanujan number (1729) is the smallest number that can be
expressed as sum of cubes in two different ways - 1729 can be
expressed as 1^3 + 12^3 and 9^3 + 10^3. Write a program to print all such
numbers up to a reasonable limit. */
/* Author - Amit Dutta, Date - 22nd - 23rd OCT, 2025 */
/* Let Us C, Chap- 6, Page - 106, Qn No.: B(g) */

#include <stdio.h>

#define limit 100000
#define max_base 47

int main()
{

    long long sum1, sum2;
    int count = 0;

    printf("Ramanujan numbers : \n");

    int found_match;

    for (int a = 1; a <= max_base; a++)
    {
        for (int b = a + 1; b <= max_base; b++)
        {
            sum1 = (long long)a * a * a + (long long)b * b * b;
            if (sum1 > limit)
            {
                break;
            }

            found_match = 0;

            for (int c = a + 1; c <= max_base; c++)
            {
                if (found_match)
                {
                    break;
                }
                for (int d = c + 1; d <= max_base; d++)
                {
                    sum2 = (long long)c * c * c + (long long)d * d * d;
                    if (sum2 > sum1)
                    {
                        break;
                    }
                    if (sum1 == sum2)
                    {
                        count++;
                        printf("(%d.) %lld = %d^3 + %d^3 = %d^3 + %d^3\n", count, sum1, a, b, c, d);

                        found_match = 1;
                        break;
                    }
                }
            }
        }
    }

    printf("-------------------------------\n");
    printf("Search complete.");

    return 0;
}