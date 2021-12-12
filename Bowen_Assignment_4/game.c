#include "game.h"

void game()
{
	int guesses[6], tmp, input = 0, count = 0;
	tmp = rand() % 1000 + 1;  //Generate a random number from 1 to 1000
	system("cls");

	inputCheck(guesses, count, input, tmp);

	if (guesses[5] != tmp) {
		printf("There have been now 6 guess! You lose!\n");
		printf("The game will exit in 3 seconds");
		Sleep(3000);
		exit(0);
	} //lose
}