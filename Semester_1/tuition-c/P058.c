/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/tuition-c
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

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