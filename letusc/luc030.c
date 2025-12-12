/*
 * ======================================================================================
 * COPYRIGHT (C) 2025 AMIT DUTTA. ALL RIGHTS RESERVED.
 * ======================================================================================
 * Repository: https://github.com/notamitgamer
 * Author    : Amit Dutta
 * License   : EDUCATIONAL SOURCE-AVAILABLE LICENSE (ESAL-1.0)
 * ======================================================================================
 *
 * [ IMPORTANT LEGAL NOTICE ]
 *
 * 1. PROPRIETARY STATUS:
 * This software ("The Software") is the intellectual property of Amit Dutta.
 * It is NOT "Open Source" in the traditional sense. It is "Source-Available"
 * for educational observation only.
 *
 * 2. ACADEMIC INTEGRITY & RESTRICTION:
 * The use of this code, in whole or in part, for the purpose of submitting
 * academic assignments, projects, lab reports, or examinations at
 * WEST BENGAL STATE UNIVERSITY (WBSU) or any other educational institution
 * is STRICTLY PROHIBITED.
 *
 * >>> VIOLATION OF THIS CLAUSE WILL BE REPORTED AS ACADEMIC MISCONDUCT. <<<
 *
 * 3. PERMISSIONS:
 * You are granted a revocable license to:
 * - Read and study the code to understand algorithms.
 * - Compile and run the code locally for personal testing.
 *
 * 4. NO WARRANTY:
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND.
 *
 * ======================================================================================
 */

/* Write a program for a matchstick game being played between the
computer and a user. Your program should ensure that the computer
always wins. Rules for the game are as follows :
    - There are 21 matchsticks.
    - The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
    - After the person picks, the computer does its picking.
    - Whoever is forced to pick up the last matchstick loses the game.
*/
/* Author - Amit Dutta, Date - 8th OCT, 2025 */
/* Let Us C, Chap- 5, Page - 87, Qn No.: B(c) */

/* My Plan: The total number of matchsticks is 21. To guarantee a win,
the computer ensures that after its turn, the number of remaining
matchsticks is always a multiple of 5 plus 1 (i.e., 16, 11, 6, 1).
This is achieved by making the sum of the player's pick and the
computer's pick equal to 5 in each round. This forces the player
to pick the final matchstick. */

#include <stdio.h>
int main()
{
    int remaining_matchsticks = 21, player_pick, computer_pick;
    printf("                 --- Matchstick Game ---\n");
    printf("Rules: There are 21 matchsticks. You can pick 1, 2, 3, or 4.\n");
    printf("Whoever is forced to pick the last matchstick loses the game.\n");
    while (remaining_matchsticks > 1)
    {
        // game start
        printf("\n--------------------------");
        printf("\nRemaining Matchsticks : %d", remaining_matchsticks);

        // player pick and checking input is valid or not
        printf("\nYour turn: Pick 1, 2, 3, or 4 matchsticks: ");
        if (scanf("%d", &player_pick) != 1)
        {
            printf("\n\tPlease enter a number.");
            while (getchar() != '\n')
                ;
            continue;
        }

        // checking player pick is valid or not
        if (player_pick < 1 || player_pick > 4)
        {
            printf("\n\tPlease enter a number among 1, 2, 3 and 4.");
            while (getchar() != '\n')
                ;
            continue;
        }

        if (player_pick > remaining_matchsticks)
        {
            printf("\nInvalid choice! There are not enough matchsticks left.");
            while (getchar() != '\n')
                ;
            continue;
        }

        // computer_picks
        computer_pick = 5 - player_pick;
        printf("\ncomputer_picks : %d", computer_pick);

        // remaining matchsticks
        remaining_matchsticks = remaining_matchsticks - (player_pick + computer_pick);
    }

    // game over
    printf("\n----------------------------------\n");
    printf("Only 1 matchstick is left.\n");
    printf("You are forced to pick the last matchstick. You lose!\n");
    printf("The computer wins.\n");

    return 0;
}