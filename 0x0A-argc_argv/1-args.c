#include <stdio.h>

/**
  * main - prints the number of arguments passed to the program
  *
  * @argc: number of arguments passed
  * @argv: array of argc elements
  *
  * Return: 0 --> Success
  */
int main(int argc, char *argv[])
{
	(void) **argv;
	printf("%d\n", argc - 1);
	return (0);
}
