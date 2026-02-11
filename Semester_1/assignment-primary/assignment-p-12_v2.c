/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 06 Feb 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/* Write a C program that takes multiple integers as command-line arguments and finds the
maximum and minimum value among them. */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int current_val, max_val, min_val, i;
    if (argc < 2)
    {
        printf("Usage: %s <integer1> <integer2> ...\n", argv[0]);
        return 1;
    }
    max_val = atoi(argv[1]);
    min_val = atoi(argv[1]);
    for (i = 2; i < argc; i++)
    {
        current_val = atoi(argv[i]);

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