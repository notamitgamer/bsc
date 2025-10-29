/* Write to reverse a number. */
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
    int n, reverse = 0, rem;
    printf("Enter the numner : ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n /= 10;
    }
    printf("Reversed Number : %d", reverse);
    getch();
}