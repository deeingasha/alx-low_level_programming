#include "main.h"

/**
  * wildcmp - compares two strings
  *
  * @s1: string 1
  * @s2: string 2
  *
  * Return: 1 --> strings can be considered identical
  *         0 --> string cannot be considered identical
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
		return (1);
	return (0);
}
