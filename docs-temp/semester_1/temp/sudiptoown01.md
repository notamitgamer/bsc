---
title: sudiptoown01.c
description: "C program source code for sudiptoown01.c"
---

# `sudiptoown01.c`

## Actions

[Raw](https://raw.usercontent.amit.is-a.dev/semester_1/temp/sudiptoown01.c){.md-button}  [View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/sudiptoown01.c){.md-button}

> 💡 You can print or save this file by opening **Raw** and using your browser.

## Source Code
```c
#include <stdio.h>

int casekey(int door, int window, int motion, int glass) {
    int key = (door << 3) | (window << 2) | (motion << 1) | glass;
    return key;
}

int main() {
    int door, window, motion, glass, key;
    char choice;

    static const char *action[16] = {
        "IDLE", "CHECK WINDOW", "WARN MOTION", "WARN MOTION WINDOW",
        "CHECK DOOR", "WARN DOOR WINDOW", "INTRUSION SUSPECTED", "INTRUSION CONFIRMED",
        "GLASS ONLY", "DOOR GLASS", "MOTION GLASS", "MOTION WINDOW GLASS",
        "DOOR WINDOW", "DOOR WINDOW GLASS", "DOOR MOTION GLASS", "ALL SENSORS"
    };

    do {
        printf("Sensors: Door, Window, Motion, Glass\n");
        printf("Enter the state of each sensor in binary (0 or 1): ");
        scanf("%d %d %d %d", &door, &window, &motion, &glass);

        key = casekey(door, window, motion, glass);
        printf("Action: %s\n", action[key]);

        printf("Want to continue? (y/n): ");
        scanf(" %c", &choice);
        printf("\n");
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
```
