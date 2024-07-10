// You will need to include the following libraries for this code.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// The list of possibilities
char *choices[] = {"Rock", "Paper", "Scissors", "Lizard", "Spock"};

int main(void) {

   int playerChoice, cpuChoice;

   // Seed RNG
   srand(time(0));

   printf("Enter your choice (0=Rock, 1=Paper, 2=Scissors, 3=Lizard, 4=Spock): ");
   scanf("%d", &playerChoice);

   cpuChoice = rand() % 5; // CPU picks a random choice

   printf("Player chose %s\n", choices[playerChoice]);
   printf("CPU chose %s\n", choices[cpuChoice]);

   if (playerChoice == cpuChoice) {
      printf("It's a tie!\n");
   } else {
      // Winning conditions for the player
      if ((playerChoice == 0 && (cpuChoice == 2 || cpuChoice == 3)) ||
          (playerChoice == 1 && (cpuChoice == 0 || cpuChoice == 4)) ||
          (playerChoice == 2 && (cpuChoice == 1 || cpuChoice == 3)) ||
          (playerChoice == 3 && (cpuChoice == 1 || cpuChoice == 4)) ||
          (playerChoice == 4 && (cpuChoice == 0 || cpuChoice == 2))) {
        printf("Congratulations, you win!\n");
      } else {
        printf("CPU wins, better luck next time.\n");
      }
   }

   return 0;
}