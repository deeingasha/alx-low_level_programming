#include <stdio.h>
#include <math.h>

/**
  * main - entry point
  * Prints the largest prime factor of the number 612852475143 followed by
  *    a new line.
  *
  * Return: 0 --> Success
  */
int main(void)
{
	int i;
	long num = 612852475143;

	for (i = (int) sqrt(num); i > 2; i++)
	{
		if (num % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}
	return (0);
}