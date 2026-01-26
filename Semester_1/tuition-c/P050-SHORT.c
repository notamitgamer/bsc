/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Write a program to input a number and check whether it is Disarium Number or not.
    Note : A number is said to Disarium if sum of its digit powered by with their
    respective position is equal to the original number. */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int position = printf("%d", num);
    int temp = num;
    int res = 0;
    while (temp > 0)
    {
        res += (int)pow(temp % 10, position);
        position--;
        temp /= 10;
    }
    if (res == num)
        printf(" is a Disarium Number.");
    else
        printf(" is Not a Disarium Number.");
    return 0;
}