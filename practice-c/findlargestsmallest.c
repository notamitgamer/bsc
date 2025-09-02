#include<stdio.h>

int main() {
	int input_count, inp, max, min, i;
	printf("\nHow many input do you want to add to the array : ");
	scanf("%d",&input_count);
	
	if (input_count <= 0) {
		printf("\nArray should have atleast 1 value.");
		return 0;
	}
	
	printf("\n");
	int values[input_count];
	
	for (i = 0; i < input_count; i++) {
		printf("Please enter value for position %d : ", i+1);
		scanf("%d",&inp);
		
		if (inp < 0) {
			printf("\nPlease enter a non negetive integer.");
			return 0;
		}
		
		values[i] = inp;
	}
	
	max = values[0];
	min = values[0];
	
	for (i = 0; i < input_count; i++) {
		if (max < values[i]) max = values[i];
		if (min > values[i]) min = values[i];
	}
	
	printf("\nMaximum : %d",max);
	printf("\nMinimum : %d",min);
	return 0;
}

