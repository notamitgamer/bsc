/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* Bitwise OR '|' */

#include<stdio.h>
int main() {
	int x = 12, y = 14, z = 10, res;
	x++;
	z++;
	x = x + y + z;
	res = x | y;
	z = res | z;
	printf("x = %d y = %d z = %d res = %d", x, y, z, res);
	return 0;
}
