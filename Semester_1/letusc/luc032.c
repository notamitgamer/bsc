/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to recieve an integer and find its octal equivalent.
(Hint : To obtain octal equivalent of an integer, Divide it continuously
by 8 till dividend does not become zero, then write the remainders
obtained in reverse derection.) */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(e) */

// using array

#include <stdio.h>
int main()
{
    int octal[20], decimal, index = 0, temp, rem;
    printf("Enter the decimal number : ");
    scanf("%d", &decimal);
    temp = decimal;
    while (temp != 0)
    {
        rem = temp % 8;
        temp = temp / 8;
        octal[index] = rem;
        index++;
    }
    printf("\nDeciaml %d to octal : ", decimal);
    while ((index - 1) >= 0)
    {
        printf("%d", octal[index - 1]);
        index--;
    }
    return 0;
}