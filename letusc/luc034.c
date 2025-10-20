/* Write a program to print the multiplication table of the number
entered by the user. The table should get displayed in the following
form :
    29 * 1 = 29
    29 * 2 = 58
*/
/* Author - Amit Dutta, Date - 20th OCT, 2025 */
/* Let Us C, Chap- 6, Page - 105, Qn No.: B(a) */

#include <stdio.h>
int main()
{
    int i, num, res;
    printf("Enter the number : ");
    scanf("%d", &num);
    printf("\n--- Multiplication Table ---\n");
    for (i = 1; i <= 10; i++)
        printf("%d * %d = %d\n", num, i, num * i);
    return 0;
}