/* WAP to multiply and divide a number by 4 without
using multiplication and division operator. */
/* Author - Amit Dutta, Date - 19th SEP, 2025 */

#include <stdio.h>
int main()
{
    int num, multi, div;
    printf("Enter the number : ");
    scanf("%d", &num);
    multi = num << 2;
    div = num >> 2;
    printf("Multiplication : %d"
           "\nDivision : %d",
           multi, div);
    return 0;
}