#include <stdio.h>

/**
  * main - Entry point
  * Prints the alphabet in lowercase,
  * then in uppercase, followed by a new line
  *
  * Return: 0 --> Success
  */
int main(void)
{
	char l;
	char L;

	for (l = 'a'; l <= 'z'; l++)
		putchar(l);
	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);

	putchar('\n');
	return (0);
}
