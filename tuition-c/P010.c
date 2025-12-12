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

/* WAP to find and display the difference
between compound Interest and Simple Interest.
Take principle amount as input.
Hint :	si = (p * r * t) / 100
		a = p * ((1 + (r / 100)) ^ t)
		ci = a - p
*/
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
#include<math.h>
int main() {
	double p, r, t, si, a, ci, dif;
	printf("Enter the principle amount, rate of interest, time in year : ");
	scanf("%lf %lf %lf", &p, &r, &t);
	si = (p * r * t) / 100;
	a = p * pow((1 + (r / 100)), t);
	ci = a - p;
	dif = ci - si;
	printf("\nSimple Interest     : %lf"
		   "\nCompound Interest   : %lf"
		   "\nInterest Difference : %lf", si, ci, dif);
	return 0;
}
