/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
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
