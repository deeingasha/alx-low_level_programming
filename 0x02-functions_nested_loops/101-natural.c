#include <stdio.h>

/**
  *main - entry point
  *
  *Description:prints the sum of all multiples of 5 and 3 below 1024(excluded)
  *
  *Return: zero(success)
  */

int main(void)
{
	int i;
	int total_sum;

	total_sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total_sum = total_sum + i;
		}
	}
	printf("%d\n", total_sum);
	return (0);
}
