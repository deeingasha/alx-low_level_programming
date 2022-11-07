#include <stdio.h>
#include <stdlib.h>

/**
  * main - sums positive numbers
  *
  * @argc: number of arguments passed
  * @argv: array of argc elements
  *
  * Return: 0 --> Success
  *         1 --> arguments contain non-digit symbols
  */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int digit;

	for (i = 1; i < argc; i++)
	{
		for (digit = 0; argv[i][digit]; digit++)
		{
			if (argv[i][digit] < '0' || argv[i][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
