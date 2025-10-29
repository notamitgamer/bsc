/* Program to print first 10 natural numbers using while loop. */
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
    int x;
    x = 1;
    while (x <= 10)
    {
        printf("%d  ", x);
        x++;
    }
    getch();
}