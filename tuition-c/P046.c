/* Make this pattern for input n.
    Pattern :
    1
    2   1
    3   2   1
    4   3   2   1
    5   4   3   2   1
*/
/* Author - Amit Dutta, Date - 01st NOVEMBER, 2025 */

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = i; j >= 1; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}