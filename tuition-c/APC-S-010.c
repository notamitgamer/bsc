/* Write a program to input a new element at a specific position of an array.
    a[] = {4, 5, 2, 10, 6, 9, 8}, newItem = 7, position = 3
*/
/* Author: Amit Dutta, Date: 18-11-2025 */

#include <stdio.h>

int main()
{
    int a[8] = {4, 5, 2, 10, 6, 9, 8};
    int i;

    printf("Elemnts of the array:  ");
    for (i = 0; i <= 6; i++)
        printf("%d  ", a[i]);

    printf("\nMethod 1:  ");
    for (i = 7; i >= 4; i--)
        a[i] = a[i - 1];
    a[3] = 7;
    for (i = 0; i <= 7; i++)
        printf("%d  ", a[i]);

    // another method
    printf("\nMethod 2:  ");
    int b[8] = {4, 5, 2, 10, 6, 9, 8};
    int temp1 = 7;
    for (i = 3; i <= 7; i++)
    {
        int temp2 = b[i];
        b[i] = temp1;
        temp1 = temp2;
    }
    for (i = 0; i <= 7; i++)
        printf("%d  ", b[i]);

    return 0;
}