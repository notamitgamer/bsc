/* Bitwise AND '&' */

#include<stdio.h>
int main() {
	unsigned int a = 4, b = 5, c = 6;
	unsigned int x, y;
	x = a & b;
	y = b & c;
	printf("x = %u y = %u", x, y);
	return 0;
}
