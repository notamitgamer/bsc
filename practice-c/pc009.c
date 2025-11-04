/* Sum of digit */
/* Author - Amit Dutta, Date - 04th November, 2025 */

#include <stdio.h>
int main()
{
    int num, sumOfDigit = 0, temp;
    printf("Enter the number : ");
    if (scanf("%d", &num) != 1)
    {
        printf("\nOnly a number is allowed.");
        return 1;
    }
    temp = num;
    while (temp > 0)
    {
        sumOfDigit += temp % 10;
        temp /= 10;
    }
    printf("\nSum of the digit %d : %d", num, sumOfDigit);
    return 0;
}