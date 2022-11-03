#include "main.h"

/**
  * factorial - prints the factorial of a given number
  *
  * @n: int to get factorial of
  *
  * Return: success --> factorial of n
  *         error   --> -1 (n is lower than 0)
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
