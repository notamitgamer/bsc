/* Make this pattern for input n.
    Pattern :
    5
    5   4
    5   4   3
    5   4   3   2
    5   4   3   2   1
*/
/* Author - Amit Dutta, Date - 01st NOVEMBER, 2025 */

#include <stdio.h>

int main()
{
    int i, j, n;
    printf("Enter n : ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
