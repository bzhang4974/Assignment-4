#include "inputCheck.h"

void inputCheck(int guesses[], int count, int input, int tmp) {
	while (count != 6)
	{
		for (int i = 0; i < count; i++) {
			if (i == 0) {
				printf("Previous guesses:");
				if (guesses[i] < 0) {
					printf("X| ");
				}
				else {
					printf("%d| ", guesses[i]);
				}
			}
			else {
				if (guesses[i] < 0) {
					printf("X| ");
				}
				else {
					printf("%d| ", guesses[i]);
				}
			}
		} //Display previous guesses
		printf("\nPlease enter the number (incorrect guesses: %d):", count);
		scanf_s("%d", &input);
		CLEAR_BUF
			if (input != 0 && input >= 1 && input <= 1000) {

				if (input == tmp)
				{
					printf("Congratulations! You win!\n");
					printf("The game will exit in 3 seconds.");
					Sleep(3000);
					system("cls");
					exit(0);
				}
				else if (input >= tmp)
				{
					printf("The guess is too high.\n");
					guesses[count] = input;
					count++;
				}
				else if (input <= tmp)
				{
					printf("The guess is too low.\n");
					guesses[count] = input;
					count++;
				}

			} //valid input check

			else {
				printf("Sorry, invalid input.\n");
				guesses[count] = -1;
				count++;
				continue;
			} //invalid input


	} //while loop
}