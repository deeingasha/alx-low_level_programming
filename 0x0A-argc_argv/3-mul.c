#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers
  *
  * @argc: number of arguments passed
  * @argv: array of argc elements
  *
  * Return: 0 --> Success
  *         1 --> did not receive two arguments
  */
int main(int argc, char *argv[])
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
