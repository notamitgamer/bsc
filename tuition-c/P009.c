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

/* WAP to calculate gross and net salary
by accepting basic salary as input.
IMP :	DA = 30% of Basic Pay
		HRA = 20% of Basic Pay
		PF = 12.5% of Basic Pay
 Gross Salary = Basic Pay + DA + HRA
 Net Salary = Gross Salary - PF
*/
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	double bs, da, hra, pf, gs, ns;
	printf("Enter the Basic Salary : ");
	scanf("%lf", &bs);
	da = bs * 0.3;
	hra = bs * 0.2;
	pf = bs * 0.125;
	gs = bs + da + hra;
	ns = gs - pf;
	printf("\nGross Salary : %lf"
		   "\nNet Salary   : %lf", gs, ns);
	return 0;
}
