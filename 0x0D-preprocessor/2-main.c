#include <stdio.h>

/**
  * main - prints name of the file it's compiled from followed by \n
  *
  * Return: Success --> 0
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
