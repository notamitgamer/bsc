/* Pattern :
    1
    2   4
    3   6   9
    4   8   12  16
    5   10  15  20  25
for n = 5
*/

#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}