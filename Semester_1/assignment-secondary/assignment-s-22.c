/*
 * Author: Amit Dutta (amitdutta4255@gmail.com) | Date: 18 Jan 2026
 * Repo: https://github.com/notamitgamer/bsc
 * License: MIT | Copyright (c) 2026 Amit Dutta
 */

/*  Write a program using structures to add two distances in meter-kilometer format. */

#include <stdio.h>
#include <stdlib.h>

struct distance
{
    int km;
    int m;
};

void total_distance(struct distance[]);

int main()
{
    struct distance dis[2] = {0};
    printf("Enter the 1st distance (KM M): ");
    scanf("%d %d", &dis[0].km, &dis[0].m);
    printf("Enter the 2nd distance: ");
    scanf("%d %d", &dis[1].km, &dis[1].m);
    total_distance(dis);
    return 0;
}

void total_distance(struct distance dis[])
{
    int result_km = dis[0].km + dis[1].km;
    int result_m = dis[0].m + dis[1].m;
    result_km += result_m / 1000;
    result_m = result_m % 1000;
    printf("Total distance: %d KM, %d M", result_km, result_m);
}