/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to input an int number and display the product of the successors
of even digits of the number entered by user. */

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n, res = 1, temp;
    bool status = false;
    printf("Enter the number : ");
    scanf("%d", &n);
    temp = n;
    while (temp > 0)
    {
        if ((temp % 10) % 2 == 0)
        {
            res *= (temp % 10) + 1;
            status = true;
        }
        temp /= 10;
    }
    if (!status)
        printf("\nThere is no even digits.");
    else
        printf("\nThe product of the successors of even digits of the number %d is : %d", n, res);
    return 0;
}