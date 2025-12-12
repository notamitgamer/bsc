/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
 * ======================================================================================
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
