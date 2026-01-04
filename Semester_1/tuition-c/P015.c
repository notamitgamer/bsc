/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/*WAP to accept number of days and
display it after converting into
number of years, months and days */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	int day, month, year, temp;
	printf("Enter the number of days : ");
	scanf("%d", &day);
	temp = day;
	year = day / 365;
	day = day % 365;
	month = day / 30;
	day = day % 30;
	printf("\n%d Days = %d Years %d Months %d Days", temp, year, month, day);
	return 0;
}
