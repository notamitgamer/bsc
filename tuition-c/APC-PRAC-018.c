/* Write a program to check Automorphic Number. */
/* Author - Amit Dutta, Date - 06th November, 2025 */
// File Name - amit0611202504.c (LAB), APC-PRAC-018.c (Local)

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>

int main()
{
    int num, square, count = 0, temp, modNum;
    printf("Enter the number : ");
    scanf("%d", &num);
    square = (int)pow(num, 2);
    temp = num;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    modNum = (int)pow(10, count);
    temp = square % modNum;
    if (num == temp)
        printf("\nInput %d is a Automorphic Number.", num);
    else
        printf("\nInput %d is a Automorphic Number.", num);
    return 0;
}