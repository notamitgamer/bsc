/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 12 Dec 2025
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2025 Amit Dutta
 */

/* Paper of size AO has dimensions 1189 mm x 841 mm.
Each subsequent size A(n) is defined as A(n-1) cut in
half, parallel to its shorter sides. Thus, paper of
size A1 would have dimensions 841 mm x 594 mm. Write
a program to calculate and print paper sizes A0,�
A1,�A2,�...�A8. */
/* Author - Amit Dutta, Date - 16th SEP, 2025 */
/* Let Us C; Page - 19; Chap- 1; QNo.: F(c) */

#include<stdio.h>
#include<math.h>
int main() {
	double s_long = 1189.0, s_short = 841.0, temp;
	int i;
	printf("A0 Dimension : %g mm x %g mm", floor(s_long), floor(s_short));
	for (i = 1; i <= 8; i++) {
		temp = s_long;
		s_long = s_short;
		s_short = temp / 2;
		printf("\nA%d Dimension : %g mm x %g mm", i, floor(s_long), floor(s_short));
	}
	return 0;
}
