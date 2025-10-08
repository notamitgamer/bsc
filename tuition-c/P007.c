/* A shopkeeper offers 10% discount on printed
price of a digital camera. However a customer has
to pay 6% GST on the remaining amount. WAP to
calculate and display the amount to paid by the
customer, taking the printed price as input. */
// Author - Amit Dutta, Date - Unknown

#include<stdio.h>
int main() {
	double mrp, final_price, temp;
	printf("Enter the printed price : ");
	scanf("%lf", &mrp);
	temp = mrp * 0.90;
	final_price = temp * 1.06;
	printf("\nCustomer have to pay : %lf", final_price);
	return 0;
}
