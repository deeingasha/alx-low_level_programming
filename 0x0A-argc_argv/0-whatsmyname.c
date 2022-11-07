#include "main.h"
#include <stdio.h>

/**
  * main - prints program name followed by a new line.
  *
  * @argc: number of arguments supplied
  * @argv: array of argc elements
  *
  * Return: 0 --> Success
  */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
