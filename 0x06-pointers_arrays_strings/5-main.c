#include "main.h"
#include <stdio.h>

/**
  * main - check the code
  *
  * Return: Always 0.
  */
int main(void)
{
	char str[] = "Loop up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", ptr);
	return (0);
}
