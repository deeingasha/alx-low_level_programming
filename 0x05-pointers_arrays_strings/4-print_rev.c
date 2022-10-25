#include "main.h"

/**
  * print_rev - prints a string in reverse followed by a new line
  *
  * @s: a string
  *
  * Return: Nothing
  */
void print_rev(char *s)
{
	int length = 0;
	int i = 0;
	int j;

	while (s[i] != 0)
	{
		length++;
		i++;
	}

	for (j = length - 1; j >= 0; j--)
		_putchar(s[j]);

	_putchar('\n');
}
