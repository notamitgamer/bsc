/* If a five digit number is input through the keyboard,
write a program to calculate the sum of it's digit.
(Hint : Use the modulus operator %) */
/* Author - Amit Dutta, Date - 28th SEP, 2025 */
/* Let Us C; Page - 37; Chap- 2; QNo.: G(a) */

#include <stdio.h>
int main()
{
    int inp, result = 0, i, temp;
    printf("Enter a five digit number : ");
    scanf("%d", &inp);
    if (inp < 10000 || inp > 99999)
    {
        printf("\nPlease enter a valid five digit number.");
        return 1;
    }
    temp = inp;
    for (i = 1; i <= 5; i++)
    {
        result = result + (inp % 10);
        inp = inp / 10;
    }
    printf("\nSum of the digit '%d' is : %d", temp, result);
    return 0;
}