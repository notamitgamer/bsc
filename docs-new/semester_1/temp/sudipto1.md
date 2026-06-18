---
title: '<svg xmlns="http://www.w3.org/2000/svg" width="16" height="16" viewBox="0 0 24 24" fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round" stroke-linejoin="round" style="display:inline; margin-bottom:-2px; margin-right:6px;"><path d="M6 22a2 2 0 0 1-2-2V4a2 2 0 0 1 2-2h8a2.4 2.4 0 0 1 1.704.706l3.588 3.588A2.4 2.4 0 0 1 20 8v12a2 2 0 0 1-2 2z"/><path d="M14 2v5a1 1 0 0 0 1 1h5"/><path d="M10 12a1 1 0 0 0-1 1v1a1 1 0 0 1-1 1 1 1 0 0 1 1 1v1a1 1 0 0 0 1 1"/><path d="M14 18a1 1 0 0 0 1-1v-1a1 1 0 0 1 1-1 1 1 0 0 1-1-1v-1a1 1 0 0 0-1-1"/></svg> sudipto1.c'
description: 'A smart home security controller monitors the state of several sensors to decide what action to take. Each second, the system reads data from sensors that can either be active or inactive. Based on the current state of all sensors, the controller must perform exactly one action, such as activating a warning, checking a specific zone, or declaring an intrusion. Write a C program that reads the sensor states as input and prints the corresponding system action. -- Conditions: 1. You must determine exactly one action for every possible combination of sensor states. 2. You are not allowed to use any conditional statements (if, else if, else, or the ternary operator?). 3. You are not allowed to use logical operators. 4. You must use a single switch statement to control the program''s behaviour. 5. Loops may only be used for reading input, not for making decisions. 6. The program should handle all possible combinations of the sensors'' active/inactive states and print the appropriate response each time. -- Example (for understanding): If all sensors are inactive, the system should remain idle. If some sensors are active, the system should issue warnings or alerts based on the situation. If all sensors are active, the system should declare a confirmed intrusion.'
---

# sudipto1.c

### Metadata

- **Author** — [Amit Dutta](mailto:amitdutta4255@gmail.com)
- **Last updated** — 12 Dec 2025
- **License** — [MIT License (See the LICENSE file for details)](https://github.com/notamitgamer/bsc/blob/main/LICENSE)


### Problem Statement

::: tip Problem Statement
A smart home security controller monitors the state of several sensors to decide what action to take. Each second, the system reads data from sensors that can either be active or inactive. Based on the current state of all sensors, the controller must perform exactly one action, such as activating a warning, checking a specific zone, or declaring an intrusion. Write a C program that reads the sensor states as input and prints the corresponding system action. -- Conditions: 1. You must determine exactly one action for every possible combination of sensor states. 2. You are not allowed to use any conditional statements (if, else if, else, or the ternary operator?). 3. You are not allowed to use logical operators. 4. You must use a single switch statement to control the program's behaviour. 5. Loops may only be used for reading input, not for making decisions. 6. The program should handle all possible combinations of the sensors' active/inactive states and print the appropriate response each time. -- Example (for understanding): If all sensors are inactive, the system should remain idle. If some sensors are active, the system should issue warnings or alerts based on the situation. If all sensors are active, the system should declare a confirmed intrusion.
:::

## Source Code

<div style="display:flex;gap:12px;margin-bottom:12px;">
  <a href="https://github.com/notamitgamer/bsc/blob/main/semester_1/temp/sudipto1.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-brand);">
    <svg xmlns="http://www.w3.org/2000/svg" width="15" height="15" viewBox="0 0 24 24"         fill="currentColor" style="vertical-align:middle;">
      <path d="M12 0C5.37 0 0 5.373 0 12c0 5.303 3.438 9.8 8.205 11.387.6.113.82-.258             .82-.577v-2.234c-3.338.726-4.033-1.416-4.033-1.416-.546-1.387-1.333-1.757             -1.333-1.757-1.089-.745.083-.729.083-.729 1.205.084 1.84 1.236 1.84 1.236             1.07 1.835 2.809 1.305 3.495.998.108-.776.417-1.305.76-1.605-2.665-.3             -5.466-1.332-5.466-5.93 0-1.31.465-2.38 1.235-3.22-.135-.303-.54-1.523             .105-3.176 0 0 1.005-.322 3.3 1.23.96-.267 1.98-.399 3-.405 1.02.006             2.04.138 3 .405 2.28-1.552 3.285-1.23 3.285-1.23.645 1.653.24 2.873             .12 3.176.765.84 1.23 1.91 1.23 3.22 0 4.61-2.805 5.625-5.475 5.92             .42.36.81 1.096.81 2.22v3.293c0 .319.21.694.825.576C20.565 21.795             24 17.298 24 12c0-6.627-5.373-12-12-12z"/>
    </svg>
    View on GitHub
  </a>
  <a href="https://raw.usercontent.amit.is-a.dev/semester_1/temp/sudipto1.c" target="_blank" rel="noopener noreferrer"   style="display:inline-flex;align-items:center;gap:6px;font-size:0.85rem;          text-decoration:none;color:var(--vp-c-text-2);">
    <svg xmlns="http://www.w3.org/2000/svg" width="14" height="14" viewBox="0 0 24 24"         fill="none" stroke="currentColor" stroke-width="2" stroke-linecap="round"         stroke-linejoin="round" style="vertical-align:middle;">
      <path d="M21 15v4a2 2 0 0 1-2 2H5a2 2 0 0 1-2-2v-4"/>
      <polyline points="7 10 12 15 17 10"/>
      <line x1="12" y1="15" x2="12" y2="3"/>
    </svg>
    Download Raw
  </a>
</div>

::: info Printing the code
To print this file, open it on GitHub and click **Raw** before printing, or use the **Download Raw** button above and print directly from that page.
:::
```c [sudipto1.c]
#include <stdio.h>
int main()
{

   // variables to hold the state of a sensor (0 or 1)
   int doorSensorState, windowSensorState, motionSensorState, glassbreakSensorState;

   // variable to check the combined state of all four sensor
   int combinedState = 0;

   // a invalid flag to check the input are valid or not
   unsigned int invalidFlag;

   // printing the way to usage the program
   printf("------ Home Security Controller ------\n");
   printf("Enter sensor states (1 for active, 0 for inactive).\n");
   printf("Format: [Door] [Window] [Motion] [Glass Break]\n");
   printf("Example: 0 1 1 0\n");
   printf("Enter states (or press Ctrl+D for MacOS or Linux / Ctrl+Z for Windows to exit): ");

   // doing the main calculation
   // chacking the combined state and taking a decision
   while (scanf("%d %d %d %d", &doorSensorState, &windowSensorState, &motionSensorState, &glassbreakSensorState) == 4)
   {
      // validating input
      // The expression (variable & ~1) results in 0 only if 'variable' is 0 or 1.
      // For any other positive number, it's non-zero.
      // We combine all checks with a bitwise OR. If any sensor state is invalid,
      // the flag will become non-zero.
      invalidFlag = (doorSensorState & ~1) | (windowSensorState & ~1) | (motionSensorState & ~1) | (glassbreakSensorState & ~1);

      // Combine the four sensor states into a single integer using bitwise operations.
      // This creates a unique number from 0 to 15 for each possible combination.
      // Bit 0: Door Sensor
      // Bit 1: Window Sensor
      // Bit 2: Motion Sensor
      // Bit 3: Glass Break Sensor
      combinedState = (glassbreakSensorState << 3) | (motionSensorState << 2) | (windowSensorState << 1) | doorSensorState;

      // If the invalid_input_flag is non-zero, we add 16 to the state.
      // This pushes it outside the 0-15 range and forces the 'default' case in the switch.
      // We achieve this by multiplying the flag (which is > 0) by 16.
      combinedState += invalidFlag * 16;

      // printing the given state
      printf("\n\nState : [Door : %d, Window : %d, Motion : %d, Glass Break : %d]\nState Id : %d",
             doorSensorState, windowSensorState, motionSensorState, glassbreakSensorState, combinedState);
      printf("\nSystem Action : ");

      // taking decision based on combined state
      // A single switch statement controls the program's behavior.
      // It handles all 2^4 = 16 possible combinations of sensor states,
      // ensuring exactly one action is taken for every scenario.
      switch (combinedState)
      {
      case 0: // Binary: 0000
         printf("System Idle. All sensors inactive.\n");
         break;
      case 1: // Binary: 0001
         printf("Check front door camera.\n");
         break;
      case 2: // Binary: 0010
         printf("Check window sensors.\n");
         break;
      case 3: // Binary: 0011
         printf("Warning: Perimeter breach suspected. Check doors and windows.\n");
         break;
      case 4: // Binary: 0100
         printf("Check interior cameras for movement.\n");
         break;
      case 5: // Binary: 0101
         printf("Warning: Potential entry and movement detected. Check front door and interior. Ask for patrol.\n");
         break;
      case 6: // Binary: 0110
         printf("Warning: Potential entry and movement detected. Check windows and interior. Ask for patrol.\n");
         break;
      case 7: // Binary: 0111
         printf("Alert: High probability of unauthorized entry. Ask for patrol.\n");
         break;
      case 8: // Binary: 1000
         printf("Alert: Glass break detected. High-priority event. Ask for patrol.\n");
         break;
      case 9: // Binary: 1001
         printf("Severe Alert: Forced entry likely (door + glass). Activate Alarm and Contact authorities.\n");
         break;
      case 10: // Binary: 1010
         printf("Severe Alert: Forced entry likely (window + glass). Activate Alarm and Contact authorities.\n");
         break;
      case 11: // Binary: 1011
         printf("Intrusion Alert: Multiple perimeter breaches. Activate Alarm and Contact authorities.\n");
         break;
      case 12: // Binary: 1100
         printf("Intrusion Alert: Confirmed interior presence after breach. Activate Alarm and Contact authorities.\n");
         break;
      case 13: // Binary: 1101
         printf("INTRUSION CONFIRMED! Activate maximum response protocol. Activate Alarm and Contact authorities.\n");
         break;
      case 14: // Binary: 1110
         printf("INTRUSION CONFIRMED! Activate maximum response protocol. Activate Alarm and Contact authorities.\n");
         break;
      case 15: // Binary: 1111
         printf("CATASTROPHIC EVENT! ALL SENSORS TRIGGERED. ACTIVATE ALARM AND CONTACT COPS.\n");
         break;
      default:
         // This case should not be reached with valid 0/1 input but is included for completeness.
         printf("Error: Invalid sensor state detected.\n");
         break;
      }

      // discarding extra characters (if any) left
      while (getchar() != '\n')
         ;

      // asking for next set of input
      printf("\nEnter next set of states: ");
   }
   printf("\nSecurity system shutting down.\n");
}
```
