/* Write a program to print all the ASCII values and their equivalent
characters using a while loop. The ASCII may vary from 0 to 255. */
/* Author - Amit Dutta, Date - 7th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(a) */

#include <stdio.h>
int main()
{
    int i = 0;
    printf("ASCII Value\tCharacter");
    printf("\n-----------\t---------\n");
    while (i <= 255)
    {
        printf("%d.\t%c\n\n", i, i);
        i++;
    }
    return 0;
}