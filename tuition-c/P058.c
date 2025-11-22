/* WAP to display ASCII code of Alphabets (A - Z) using void displayASCII() */
/* Author - Amit Dutta, Date - 22th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

void displayASCII()
{
    int i;
    printf("ASCII Code\t\tCharacter");
    for (i = 'A'; i <= 'Z'; i++)
        printf("\n%c\t\t%d", i, i);
}

int main()
{
    displayASCII();
    return 0;
}