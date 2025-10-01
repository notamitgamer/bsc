/* A five-digit number is entered through the keyboard. Write a program
to obtain the reversed number and to etermine whether the original and reversed
numbers are equal or not. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
/* Let Us C, Chap - 3, Page - 53, Qn No.: f(a) */

#include <stdio.h>
int main()
{
    int num, rev, temp, i;
    printf("Please enter the number : ");
    scanf("%d", &num);
    if (num < 10000 || num > 99999)
    {
        printf("\nPlease enter a five digit number.");
        return 1;
    }
    temp = num;
    for (i = 1; i <= 5; i++)
    {
        rev = (rev * 10) + num % 10;
        num = num / 10;
    }
    printf("\nReverse of the Input number : %d", rev);
    if (rev == temp)
        printf("\nOriginal and reversed numbers are equal.");
    else
        printf("\nOrigianl and reversed numbers are not equal.");
    return 0;
}