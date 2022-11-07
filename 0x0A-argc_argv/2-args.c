#include <stdio.h>

/**
  * main - prints all arguments passed to the program
  *
  * @argc: number of arguments passed
  * @argv: array of argc elements
  *
  * Return: 0 --> Success
  */
int main(int argc, char *argv[])
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
