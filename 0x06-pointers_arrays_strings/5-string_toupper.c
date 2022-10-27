#include "main.h"

/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  *
  * @s: pointer to string
  *
  * Return: The string in all uppercase
  */
char *string_toupper(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] = s[j] - 32;
		}
	}
	return (s);
}
