/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://esal.amit.is-a.dev/ )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/*
 * A smart home security controller monitors the state of several sensors to decide what action to take.
 * Each second, the system reads data from sensors that are either an active or inactive. Based on the current
 * state of all sensors, the controller must perform exactly one action, such as activating a warning, checking
 * a specific zone, or declaring an intrusion. Write a C program that reads the sensor status as input and
 * prints the corresponding system action.
 * Hints:
 * 1. The most determinative action wins for every possible combination of sensor states.
 * 2. You are not allowed to use any conditional statements (if, else if, else, or the ternary operator?).
 * 3. You are not allowed to use logical operators.
 * 4. You must use a single switch statement to control the program's behavior.
 * 5. The program should handle all possible combinations of the sensors' active/inactive states and print the appropriate response each time.
 * 6. All sensors are inactive, the system should remain idle.
 * 7. If some sensors are active, the system should issue warnings or alerts based on the situation.
 * 8. If all sensors are active, the system should declare a confirmed intrusion.
 * Solution:
 * We can solve this problem simply by assigning each case its own distinct integer.
 * There are 2 possibilities for a sensor and therefore there are 2^4 = 16 cases.
 * Using arrays we can assign each case its own index value and print it as per the encoded binary integer.
 */
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