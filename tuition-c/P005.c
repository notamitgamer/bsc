/* A person is paid Rs. 455 for each day he works and fined
Rs. 150 for each day he remains absent. WAP to calculate his
monthly income taking the number of days present as input. */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	int daily_wage = 455, fine = 150, present, absent, income;
	printf("No of days present : ");
	scanf("%d", &present);
	absent = 30 - present;
	income = (present * 455) - (absent * 150);
	printf("\nIncome : %d",income);
	return 0;
}
