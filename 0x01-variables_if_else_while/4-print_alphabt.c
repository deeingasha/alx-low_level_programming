#include <stdio.h>

/**
  * main - Entry point
  * Print lowercase alphabet except q and e
  *
  * Return: 0 --> success
  */
int main(void)
{
	char l;

	for (l = 'a'; l <= 'z' ; l++)
		if (l != 'e' && l != 'q')
			putchar(l);
	putchar('\n');
	return (0);
}
