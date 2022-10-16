#include <stdio.h>

/**
  * main - Entry point
  * Prints the alphabet in lowercase, followed by a new line
  *
  * Return: 0 --> success
  */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);

	putchar('\n');
	return (0);
}
