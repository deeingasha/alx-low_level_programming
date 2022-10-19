#include <stdio.h>

/**
  * main - Prints the sum of even-valued Fibonacci sequence
  *        terms not exceeding 4000000.
  *
  * Return: Always 0.
  */

int main(void)
{
	unsigned long num1 = 0, num2 = 1, fibsum;
	float even_sum;

	while (1)
	{
		fibsum = num1 + num2;
		if (fibsum > 4000000)
			break;

		if ((fibsum % 2) == 0)
			even_sum += fibsum;

		num1 = num2;
		num2 = fibsum;
	}
	printf("%.0f\n", even_sum);
	return (0);
}
