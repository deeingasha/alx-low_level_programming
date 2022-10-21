#include "main.h"

/**
  * more_numbers - prints 0 to 14 10 times
  *
  * Return: 0
  */
void more_numbers(void)
{
	int i, times;

	for (times = 1; times <= 10; times++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
