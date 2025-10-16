// khurapati idea no. : 1
// Idea : we can use the side effect of printf function to get length of any string or number
// Author - Amit Dutta, Date - 16-10-2025

#include <stdio.h>
int main()
{
    // testing number
    int num, len = -13 /* here minus 13 because we will remove the massage characters in line 10 */;
    printf("Enter a number to get the length : ");
    scanf("%d", &num);
    len += printf("Your input : %d", num); // here the "Your input : ", this 13 characters are extra
    printf("\nLength : %d", len);

    // testing char
    char a[20];
    len = -13;
    while (getchar() != '\n')
        ;
    printf("\nEnter a word to get the length : ");
    scanf("%19s", &a);
    len += printf("Your input : %s", a);
    printf("\nLength : %d", len);
    return 0;
}