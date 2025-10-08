/* Find maximum between three number. */
// Author - Amit Dutta, Date - Unknown

#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("Enter the value for a, b, c : ");
    scanf("%d %d %d", &a, &b, &c);
    max = a;
    if (max < b)
        max = b;
    if (max < c)
        max = c;
    printf("Maximum : %d", max);
    return 0;
}