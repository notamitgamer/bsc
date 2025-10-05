/* If ages of Ram, Shyam and Ajay are input through the keyboard,
write a program to determine the youngest of the three. */
/* Author - Amit Dutta, Date - 1st OCT, 2025 */
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