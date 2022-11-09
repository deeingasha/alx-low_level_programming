#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars and initializes it with a specific
  *                 char.
  *
  * @size: size of the array
  * @c: char to print
  *
  * Return: success --> pointer to array
  *         NULL   --> fail
  */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i;

	if (size <= 0)
	{
		return (NULL);
	}
	s = malloc((size + 1) * sizeof(char));
	i = 0;
	while (i < (int) size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
