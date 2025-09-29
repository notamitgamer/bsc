/* Consider a currency system in which there are notes of six denominations,
namely, Rs. 1, Rs. 2, rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum
of Rs. N is entered through the keyboard, Write a program to compute
the smallest number of notes that will combine to give Rs. N. */
/* Author - Amit Dutta, Date - 29th SEP, 2025 */
/* Let Us C, Chap - 2, Page - 22, Problem 2.3 */

#include <stdio.h>
int main()
{
    int n, nonotes, temp;
    printf("Enter the amount : ");
    scanf("%d", &n);
    if (n < 1)
    {
        printf("\nAmount should be a positive integer.");
        return 1;
    }
    temp = n;
    nonotes = n / 100;
    n = n % 100;
    nonotes = nonotes + (n / 50);
    n = n % 50;
    nonotes = nonotes + (n / 10);
    n = n % 10;
    nonotes = nonotes + (n / 5);
    n = n % 5;
    nonotes = nonotes + (n / 2);
    n = n % 2;
    nonotes = nonotes + n;
    printf("\nthe smallest number of notes that will combine to give Rs. %d : %d", temp, nonotes);
    return 0;
}