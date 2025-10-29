/* Write a program to print first 10 multiple of 5 */
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
    int a = 5, i = 1, res;
    while (i <= 10)
    {
        res = a * i;
        printf("%d * %d = %d\n", a, i, res);
        i++;
    }
    getch();
}