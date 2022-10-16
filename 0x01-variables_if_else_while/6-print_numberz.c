#include <stdio.h>

/**
  *main - Entry point
  *Prints all the single decimal digits from 0 using putchar
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	printf("\n");
	return (0);
}
