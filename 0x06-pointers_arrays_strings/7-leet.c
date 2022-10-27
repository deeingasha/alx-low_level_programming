#include "main.h"

/**
  * leet - encodes a string into 1337(leetspeak)
  *
  * @s: string to encode
  *
  * Return: encoded string
  */
char *leet(char *s)
{
	int i;
	int j;
	char old[] = "aAeEoOtTlL";
	char new[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == old[j])
			{
				s[i] = new[j];
			}
		}
	}
	return (s);
}
