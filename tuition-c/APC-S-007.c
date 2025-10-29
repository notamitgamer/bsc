/* Write a program the sum of first 10 natural numbers. */
/* Author - Amit Dutta, Date - 29th October, 2025 */

/*
 * Compiler Note: This source code is specifically designed for compilation
 * and execution within the ** Turbo C ** environment.
 *
 * Testing Disclaimer: Due to a lack of access to the required Turbo C
 * compiler software, this code has not been formally compiled or tested.
 */

#include <stdio.h>
#include <conio.h>

void main()
{
    clrscr();
    int i, sum = 0;
    for (i = 1; i <= 10; i++)
    {
        sum += i;
    }
    printf("\nSum of the first natural number : %d", sum);
    getch();
}