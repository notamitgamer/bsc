/* WAP a program that accept number of days
as input and represent it as years, months and days. */
/* Author - Amit Dutta, Date - 19th SEP, 2025 */

#include <stdio.h>
int main()
{
    int days, months, years, temp;
    printf("Enter the No. of days : ");
    scanf("%d", &days);
    temp = days;
    years = days / 365;
    days = days % 365;
    months = days / 30;
    days = days % 30;
    printf("%d Days = %d Years, %d Months, %d Days", temp, years, months, days);
    return 0;
}