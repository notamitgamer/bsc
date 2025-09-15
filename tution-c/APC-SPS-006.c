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
