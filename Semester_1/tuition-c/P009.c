/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc/tree/main/tuition-c
 * License    : ESAL-1.0 ( https://aranag.site/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
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
