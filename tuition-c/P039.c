/* Write a program to print all the factors of a postive integer */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("\nFactors of %d : ", num);
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("  %d", i);
        }
    }
    return 0;
}