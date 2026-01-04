/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * Repository : https://github.com/notamitgamer/bsc
 * License    : ESAL-1.0 ( https://amit.is-a.dev/license )
 * ======================================================================================
 * [ ACADEMIC INTEGRITY WARNING ]
 * The use of this code for academic assignments at ANY educational institution,
 * college, or university is STRICTLY PROHIBITED.
 * Any other use requires prior written permission from the author.
 * Violations will be reported as academic misconduct.
 * ======================================================================================
 */

/* A smart home security controller monitors the state of several sensors to decide what action to take.
 * Each second, the system reads data from sensors that can either be active or inactive. Based on the current
 * state of all sensors, the controller must perform exactly one action, such as activating a warning, checking
 * a specific zone, or declaring an intrusion. Write a C program that reads the sensor states as input and
 * prints the corresponding system action.
 -- Conditions:
    * 1. You must determine exactly one action for every possible combination of sensor states.
    * 2. You are not allowed to use any conditional statements (if, else if, else, or the ternary operator?).
    * 3. You are not allowed to use logical operators.
    * 4. You must use a single switch statement to control the program's behaviour.
    * 5. Loops may only be used for reading input, not for making decisions.
    * 6. The program should handle all possible combinations of the sensors' active/inactive states and print the appropriate response each time.
 -- Example (for understanding):
 * If all sensors are inactive, the system should remain idle.
 * If some sensors are active, the system should issue warnings or alerts based on the situation.
 * If all sensors are active, the system should declare a confirmed intrusion.
 */

/*
 * This program monitors the state of four sensors (Door, Window, Motion, Glass Break)
 * and determines the appropriate action without using any conditional (if, else)
 * or logical (&&, ||) operators.
 *
 * It works by combining the state of all sensors into a single integer value
 * using bitmasking. Each bit in the integer represents the state of one sensor
 * (1 for active, 0 for inactive). This combined state is then used in a single
 * switch statement to select the correct action for every possible combination.
 *
 * Then, enter the state of the four sensors separated by spaces,
 * for example: 1 0 1 0
 */

/* Author - Amit Dutta, Date - 12th October, 2025 */

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