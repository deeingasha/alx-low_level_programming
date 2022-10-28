#include "main.h"

/**
  * rot13 - encodes a string using rot13
  *
  * @s: string to encode
  *
  * Return: pointer to encoded string
  */
char *rot13(char *s)
{
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == abc[j])
			{
				s[i] = rot[j];
				break; /* needed to work properly */
			}
		}
		i++;
	}
	return (s);
}
