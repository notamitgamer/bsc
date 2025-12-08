/* Write a C program that takes multiple integers as command-line arguments and finds the
maximum and minimum value among them. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int current_val, max_val, min_val, i;
    char *endptr;
    long first_arg_val;
    if (argc < 2)
    {
        printf("Usage: %s <integer1> <integer2> ...\n", argv[0]);
        return 1;
    }
    first_arg_val = strtol(argv[1], &endptr, 10);
    if (*endptr != '\0' || argv[1] == endptr)
    {
        printf("Error: Argument '%s' is not a valid integer.\n", argv[1]);
        return 1;
    }
    max_val = (int)first_arg_val;
    min_val = (int)first_arg_val;
    for (i = 2; i < argc; i++)
    {
        long val = strtol(argv[i], &endptr, 10);
        if (*endptr != '\0' || argv[i] == endptr)
        {
            printf("Error: Argument '%s' is not a valid integer.\n", argv[i]);
            return 1;
        }
        current_val = (int)val;
        if (current_val > max_val)
        {
            max_val = current_val;
        }
        if (current_val < min_val)
        {
            min_val = current_val;
        }
    }
    printf("The maximum value is: %d\n", max_val);
    printf("The minimum value is: %d\n", min_val);
    return 0;
}