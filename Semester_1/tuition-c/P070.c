/*
 * Author  : Amit Dutta <amitdutta4255@gmail.com>
 * Date    : 24 Jan 2026
 * Repo    : https://github.com/notamitgamer/bsc
 * License : MIT License (See the LICENSE file for details)
 * Copyright (c) 2026 Amit Dutta
 */

/* Write a program to perform addition of two complex number having fields 'real' and 'img'
of type integer. */

#include <stdio.h>

struct complex
{
    int real;
    int img;
};

void getData(struct complex *c)
{
    printf("Enter real: ");
    scanf("%d", &c->real);
    printf("Enter imaginary: ");
    scanf("%d", &c->img);
}

struct complex add(struct complex c1, struct complex c2)
{
    struct complex r;
    r.real = c1.real + c2.real;
    r.img = c1.img + c2.img;
    return r;
}

void display(struct complex c)
{
    printf("%d+%di", c.real, c.img);
}

int main()
{
    struct complex c1, c2, c3;
    getData(&c1);
    getData(&c2);
    printf("\nComplex Number 1:\n");
    display(c1);
    printf("\nComplex Number 2:\n");
    display(c2);
    c3 = add(c1, c2);
    printf("\nResult: \n");
    display(c3);
    return 0;
}