/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* WAP to display the series using user defined method.
    0, 7, 26, 63, ... upto n terms using void series(int n)
*/
/* Author - Amit Dutta, Date - 22th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>

void series(int n)
{
    int i;
    printf("\nSeries:  ");
    for (i = 1; i <= n; i++)
        printf("%d  ", (i * i * i) - 1);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    series(n);
    return 0;
}