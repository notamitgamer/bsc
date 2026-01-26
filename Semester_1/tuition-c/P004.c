/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* WAP to find and display the value of given expression :
((x+3)/4) - ((2x+4)/3) taking the value of x = 5 */

#include<stdio.h>
int main() {
	double x =5, result;
	result = ((x + 3) / 4) - ((2 * x + 4) / 3);
	printf("Result = %lf",result);
	return 0;
}
