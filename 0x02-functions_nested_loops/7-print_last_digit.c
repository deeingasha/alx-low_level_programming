#include "main.h"

/**
 *print_last_digit - returns the value of the last digit
 *
 *@n:input
 *
 *Return:returns last value
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n % 10;
	}
	else if (n < 0)
	{
		last = -(n % 10);
	}
	_putchar('0' + last);
	return (last);
}
