#include <stdio.h>

/**
  *main - Entry point
  *Prints all the single digits of base 10 starting from 0
  *
  *Return: 0 (Success)
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);

	printf("\n");
	return (0);
}
