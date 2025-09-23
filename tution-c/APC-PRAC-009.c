/* WAP to swap two integer variable without using Third variable. */
/* Author - Amit Dutta, Date - 19th SEP, 2025 */

#include <stdio.h>
int main()
{
    int a = 4, b = 6;
    printf("Before swap : A = %d and B = %d", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swap  : A = %d and B = %d", a, b);
    return 0;
}