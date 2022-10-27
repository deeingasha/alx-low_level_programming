#include "main.h"

/**
  * _strcmp - compares two strings
  *
  * @s1: 1st string
  * @s2: 2nd string
  *
  * Return: 0 --> s1 == s2,
  *      -int --> s1 < s2,
  *      +int --> s1 > s2
  */
int _strcmp(char *s1, char *s2)
{
	int result = 0;
	int i;

	for (i = 0; s1[i] != '\0' &&  s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break; /* no need to continue testing */
		}
	}
	return (result);
}
