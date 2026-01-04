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

#include <stdio.h>
int main() {
    int a = 5, b = 5, c = 10, result;

    result = (a == b) && (c > b);
    printf("Result is %d\n", result);

    result = (a == b) && (c < b);
    printf("Result is %d\n", result);

    result = (a != b) || (c < b);
    printf("Result is %d\n", result);

    result = (a != b) || (c < b);
    printf("Result is %d\n", result);

    result = !(a != b);
    printf("Result is %d\n", result);

    result = !(a == b);
    printf("Result is %d\n", result);

    return 0;
}
