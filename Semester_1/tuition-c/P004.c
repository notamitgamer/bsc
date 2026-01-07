/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* WAP to find and display the value of given expression :
((x+3)/4) - ((2x+4)/3) taking the value of x = 5 */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	double x =5, result;
	result = ((x + 3) / 4) - ((2 * x + 4) / 3);
	printf("Result = %lf",result);
	return 0;
}
