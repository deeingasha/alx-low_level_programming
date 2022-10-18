#include "main.h"

/**
  *print_alphabet_x10 - prints alphabet 10 times
  *Prints lowercase alphabet 10X
  *
  *Return: void
  */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char l;

		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
