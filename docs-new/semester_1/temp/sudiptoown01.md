---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> sudiptoown01.c'
description: 'C program — sudiptoown01.c'
---

# sudiptoown01.c

## Source Code

[View on GitHub](https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/sudiptoown01.c) &nbsp; | &nbsp; [Download Raw](https://raw.usercontent.amit.is-a.dev/semester_1/temp/sudiptoown01.c)

```c [sudiptoown01.c]
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
