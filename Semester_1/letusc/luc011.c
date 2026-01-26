/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* If ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three. */
/* Let Us C, Chap- 3, Page - 53, Qn No.: f(b) */

#include <stdio.h>
int main()
{
    int ram, shyam, ajay;
    printf("Please enter the age of Ram, Shyam and Ajay : ");
    scanf("%d %d %d", &ram, &shyam, &ajay);
    if (ram == shyam || ram == ajay || shyam == ajay)
        printf("\nThree must have different age.");
    if (ram < shyam && ram < ajay)
        printf("\nRam is the youngest. Age : %d", ram);
    if (shyam < ram && shyam < ajay)
        printf("\nShyam is the youngest. Age : %d", shyam);
    if (ajay < ram && ajay < shyam)
        printf("\nAjay is the youngest. Age : %d", ajay);
    return 0;
}