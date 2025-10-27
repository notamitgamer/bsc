/* Write a program to check palindrome number. */
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>
int main()
{
    int num, temp, rev;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp = num;
    rev = 0;
    while (temp > 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp /= 10;
    }
    if (num == rev)
    {
        printf("%d is a palindrome number.", num);
    }
    else
    {
        printf("%d is not a palindrome number.", num);
    }
    return 0;
}