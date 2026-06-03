// 7. Write a program to swap two numbers using a macro.

#include<stdio.h>

#define SWAP(a, b)              	   \
        do {                           \
            __typeof__(a) temp = a;    \
            a = b;              	   \
            b = temp;           	   \
        } while (0)             	   \

int main() {
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    printf("\nA = \'%d\', B = \'%d\'", a, b);
    SWAP(a, b);
    printf("\nA = \'%d\', B = \'%d\'", a, b);
    return 0;
}