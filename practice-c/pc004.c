/* Pattern :
                    5   4   3   2   1
                4   3   2   1
            3   2   1
        2   1
    1
for n = 5
*/

#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i - 1; j++)
        {
            printf("\t");
        }
        for (k = i; k >= 1; k--)
        {
            printf("%d\t", k);
        }
        printf("\n");
    }
    return 0;
}