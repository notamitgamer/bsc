/* Display the first 15 terms of the series. */
/* Author - Amit Dutta, Date - 11th OCT, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    int i, r;

    // 3, 6, 9, 12, ...
    {
        i = 3, r = 0;
        printf("Series 1 (3, 6, 9, 12, ...) :");
        while (i <= 15)
        {
            r = r + 3;
            printf("  %d", r);
            i++;
        }
    }

    // 1, 4, 9, 16, ...
    {
        i = 1;
        printf("\nSeries 2 (1, 4, 9, 16, ...) :");
        while (i <= 15)
        {
            printf("  %d", i * i);
            i++;
        }
    }

    // 4, 8, 16, 32, ...
    {
        i = 1, r = 2;
        printf("\nSeries 3 (4, 8, 16, 32, ...) :");
        while (i <= 15)
        {
            r = r * 2;
            printf("  %d", r);
            i++;
        }
    }

    // 0, 7, 26, ...
    {
        i = 1, r;
        printf("\nSeries 4 (0, 7, 26, ...) :");
        while (i <= 15)
        {
            r = (int)pow(i, 3) - 1;
            printf("  %d", r);
            i++;
        }
    }

    return 0;
}
