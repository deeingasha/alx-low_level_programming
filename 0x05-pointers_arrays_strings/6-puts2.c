#include "main.h"

/**
  * puts2 - prints every other character of a string, starting with the first
  *   character followed by a new line.
  *
  * @str: a string
  *
  * Return: Nothing
  */
void puts2(char *str)
{
	int length = 0;
	int i = 0;

	while (str[i] != 0)
	{
		i++;
	}
	length = i;

	for (i = 0; i <= length - 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
