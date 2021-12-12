#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<windows.h>

void menu()
{
	printf("****************************\n");
	printf("*** Number Guessing game ***\n");
	printf("********** 1.START *********\n");
	printf("********** 0.EXIT **********\n");
	printf("****************************\n");
}

void game()
{
	int guesses[6], tmp, input = 0, count = 0;
	tmp = rand() % 1000 + 1;  //Generate a random number from 1 to 1000
	system("cls");
	while (count != 6)
	{
		fflush(stdin);
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
		if (scanf_s("%d", &input) != 0 && input >= 1 && input <= 1000) {
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

	if (guesses[5] != tmp) {
		printf("There have been now 6 guess! You lose!\n");
		printf("The game will exit in 3 seconds");
		Sleep(3000);
		exit(0);
	} //lose
}

int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));   //Generate random number
	do
	{
		menu();
		printf("Please select an option:");
		scanf_s("%d", &i);
		switch (i)
		{
		case 0:
			break;
		case 1:
			game();
			break;
		default:
			printf("Sorry, invalid input.");
		}
	} while (i);
	return 0;
}
