/* Pattern :
    1
    1   2
    1   2   3
    1   2   3   4
    1   2   3   4   5
for n = 5
*/
/* Author - Amit Dutta, Date - 02nd October, 2025 */

#include <stdio.h>
int main()
{
    int i, j, num;
    printf("Enter n : ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}