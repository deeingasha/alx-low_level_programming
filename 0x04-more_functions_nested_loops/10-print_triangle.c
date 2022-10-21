#include "main.h"

/**
  * print_triangle - prints a triangle followed by a new line
  *
  * @size: size of the triangle
  *
  * Return: 0
  */
void print_triangle(int size)
{
	int i, it;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (it = 1; it <= size; it++)
		{
			if (it <= (size - i))
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}
