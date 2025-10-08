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
