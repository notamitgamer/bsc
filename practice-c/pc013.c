#include <stdio.h>

int main() {
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Read from standard input (keyboard)
    printf("Hello, %s", name); // Prints the name with the newline if entered
    return 0;
}