/* Write a program to input a number and check whether it is Disarium Number or not.
    Note : A number is said to Disarium if sum of its digit powered by with their
    respective position is equal to the original number. */
/* Author - Amit Dutta, Date - 08th November, 2025 */

// This code has not been compiled.
// If you find any issues, please create a new issue on GitHub regarding them.
// Go to this link to create a new issue: https://github.com/notamitgamer/bsc/issues

#include <stdio.h>
#include <math.h>

int main()
{
    int num, res = 0, temp, position = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp = num;
    while (temp > 0)
    {
        position++;
        temp /= 10;
    }
    temp = num;
    while (temp > 0)
    {
        res += (int)pow(temp % 10, position);
        position--;
        temp /= 10;
    }
    if (res == num)
        printf("\nInput %d is a Disarium Number.", num);
    else
        printf("\nInput %d is Not a Disarium Number.", num);
    return 0;
}