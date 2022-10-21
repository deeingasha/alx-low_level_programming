#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal
  *
  * @n: number of time \ should be printed
  *
  * Return: 0
  */
void print_diagonal(int n)
{
	int i, it;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (it = 0; it < i; it++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
