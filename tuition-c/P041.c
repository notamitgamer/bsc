/* Write a program to enter two numbers and check they are co-prime or not.
    co-prime when HCF = 1
*/
/* Author - Amit Dutta, Date - 27th OCT, 2025 */

#include <stdio.h>
int main()
{
    int a, b, temp, temp_a, temp_b;
    printf("Enter two number : ");
    scanf("%d %d", &a, &b);
    temp_a = a;
    temp_b = b;
    while (b > 0)
    {
        temp = a;
        a = b;
        b = temp % b;
    }
    if (a == 1)
    {
        printf("\n(%d, %d) is co-prime.", temp_a, temp_b);
    }
    else
    {
        printf("\n(%d, %d) is not co-prime.", temp_a, temp_b);
    }
    return 0;
}