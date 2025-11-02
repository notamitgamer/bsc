/* Make this pattern for input n no of row.
    Pattern :
    #
    @   @
    #   #   #
    @   @   @   @
    #   #   #   #   #
    */
/* Author - Amit Dutta, Date - 01st NOVEMBER, 2025 */

#include <stdio.h>

int main()
{
    int i, j, n;
    char a = '#', b = '@';
    printf("Enter row number : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
                printf("%c\t", b);
            else
                printf("%c\t", a);
        }
        printf("\n");
    }
    return 0;
}
