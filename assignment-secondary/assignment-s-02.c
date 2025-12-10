/* Write a program to reverse a non-negative integer using a function. */

#include <stdio.h>

int reverse(int);

int main()
{
    int num;
    printf("Enter a non-negetive integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("\nOnly non-negetive integers are allowed.");
        return 1;
    }
    printf("\nReverse of the integer %d = %d", num, reverse(num));
    return 0;
}

int reverse(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    }
    return rev;
}