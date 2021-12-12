#include "main.h"


int main()
{
	int i = 0;
	srand((unsigned int)time(NULL));   //Generate random number
	do
	{
		menu();
		printf("Please select an option:");
		scanf_s("%d", &i);
		CLEAR_BUF
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
