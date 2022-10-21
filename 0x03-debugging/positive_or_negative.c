#include <stdio.h>

/**
  * main - Entry point
  * Program that will determine if an integer is -tive or +tive
  *
  * @i: integer
  *
  * Return: always 0 (Success)
  */

void positive_or_negative(int i)
{

	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

}
