#include "main.h"

/**
  * _pow_recursion - returns value of x raised to power of y
  *
  * @x:base
  * @y:exponent
  *
  * Return: if y > 0 --> power of x to y
  *         if y < 0 --> 1
  */
int _pow_recursion(int x, int y)
{
	int pow;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	pow = x;
	pow *= _pow_recursion(x, y - 1);
	return (pow);
}
