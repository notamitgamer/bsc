#include<stdio.h>
int main() {
	int x = 25, y = 19, z;
	z = x - y;
	z = z & x ;
	printf("Z = %d", z);
	return 0;
}
