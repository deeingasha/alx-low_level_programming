#include "main.h"

/**
 *print_alphabet - prints a-z
 *Prints lowercase alphabet followed by newline
 *
 *Return: void
 */

void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
