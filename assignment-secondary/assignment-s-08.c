/* Write a program that counts the number of occurrences of each alphabet (A-Z, a-z) in
the text entered using Command-Line Arguments. */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int target[2], i, j, count[2], len;
    for (target[0] = 'A', target[1] = 'a'; target[0] <= 'Z', target[1] <= 'z'; target[0]++, target[1]++)
    {
        count[0] = 0;
        count[1] = 0;
        for (i = 1; i < argc; i++)
        {
            len = strlen(argv[i]);
            for (j = 0; j < len; j++)
            {
                if (argv[i][j] == target[0])
                {
                    count[0]++;
                }
                if (argv[i][j] == target[1])
                {
                    count[1]++;
                }
            }
        }
        if (count[0])
        {
            printf("\n\"%c\" found %d times.", target[0], count[0]);
        }
        if (count[1])
        {
            printf("\n\"%c\" found %d times.", target[1], count[1]);
        }
    }
    return 0;
}