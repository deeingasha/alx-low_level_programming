#include "main.h"

/**
  * puts_half - prints half of a string, followed by a new line
  *
  * @str: a string
  *
  * Return: Nothing
  */
void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	length = i;

	if (length % 2 == 0)
	{
		for (i = length / 2; i <= length - 1; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = (length + 1) / 2; i <= length - 1; i++)
			_putchar(str[i]);
	}

	_putchar('\n');
}
