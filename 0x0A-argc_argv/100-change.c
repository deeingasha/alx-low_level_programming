#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change for an amount of
  *          money.
  *
  * @argc: number of arguments passed in
  * @argv: array of argc elements
  *
  * Return:0 --> Success
  *        1 --> arguments passed not exactly 1
  */
int main(int argc, char *argv[])
{
	int cents;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);/*initialising while declaring throws sf error*/

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);
	return (0);
}
