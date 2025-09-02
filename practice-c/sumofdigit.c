#include<stdio.h>
#include<conio.h>

int main() {
	int input_count, inp, result = 0, i;
	printf("Please enter how many number you want to add : ");
	scanf("%d",&input_count);
	printf("\n");
	
	for (i = 1; i <= input_count; i++) {
		printf("Please enter the number %d : ",i);
		scanf("%d",&inp);
		result = result + inp;
	}
	
	printf("\nResult : %d",result);
	return 0;
}
