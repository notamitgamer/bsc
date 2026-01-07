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

/* Bitwise NOT '~' */

#include<stdio.h>
int main() {
	int x = 12, y = 15, z = 21;
	int res, res1, res2;
	res = x > 10;
	res1 = ~res;
	res2 = ~x;
	printf("REs = %d, Res1 = %d, Res2 = %d", res, res1, res2);
	return 0;
}
