/* Prime number check */
/* Author - Amit Dutta, Date - 03rd NOVEMBER, 2025 */

#include <stdio.h>
#include <math.h>

int main()
{
    int num, i, temp;
    printf("Enter the number : ");
    if(scanf("%d", &num) != 1) {
        printf("Only postive number allowed.");
        return 1;
    }
    if(num <= 0) {
        printf("\nOnly potive number are allowed.");
        return 1;
    }
    if(num == 1) {
        printf("\nInput 1 is not a prime number.");
        return 0;
    }
    if(num == 2) {
        printf("\nInput 2 is a prime number.");
        return 0;
    }
    if(num % 2 == 0) {
        printf("\nInput %d is not a prime number.", num);
        return 0;
    }
    temp = (int)sqrt(num);
    for (i = 3; i <= temp; i += 2)
    {
        if (num % i == 0)
        {
            printf("\nInput %d is not a prime number.", num);
            return 0;
        }
    }
    printf("\nInput %d is a prime number.", num);
    return 0;
}