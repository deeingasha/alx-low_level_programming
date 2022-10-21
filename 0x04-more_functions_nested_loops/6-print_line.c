#include "main.h"

/**
  * print_line - draws a straight line in the terminal
  *
  * @n: length of the line
  *
  * Return: 0
  */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}