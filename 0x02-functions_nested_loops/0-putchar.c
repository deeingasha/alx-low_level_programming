#include "main.h"

/**
 *main - Entry point
 *Prints _putchar without using standard library
 *
 *Return: Always 0
 */

int main(void)
{
	char *w = "_putchar";
	int i = 0;

	while (w[i] != '\0')
	{
		_putchar(w[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
