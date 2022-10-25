#include "main.h"

/**
  * rev_string - reverses a string
  *
  * @s: a string
  *
  * Return: Nothing
  */
void rev_string(char *s)
{
	int length;
	int i = 0;
	int j = 0;
	char rev[255];

	while (s[i] != 0)
	{
		i++;
	}
	length = i;

	for (i = length - 1; i >= 0; i--)
	{
		rev[j] = s[i];
		j++;
	}
	for (i = 0; i <= length - 1; i++)
	{
		s[i] = rev[i];
	}
}
