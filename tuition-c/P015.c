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
