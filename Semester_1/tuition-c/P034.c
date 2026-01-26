/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Get sum of even position digit and odd position digit */
/* Counting starts from the rightmost digit as position 1 (Odd). */

#include <stdio.h>
int main()
{
    int inp, temp, index = 1, even = 0, odd = 0;
    printf("Enter the numebr : ");
    scanf("%d", &inp);
    temp = inp;
    while (temp > 0)
    {
        if (index % 2 == 0)
            even += temp % 10;
        else
            odd += temp % 10;
        temp /= 10;
        index++;
    }
    printf("\nSum of even position digits : %d"
           "\nSum of odd position digits : %d",
           even, odd);
    return 0;
}