#include "main.h"
#include <stdlib.h>

/**
  * argstostr - concatenates all the arguments of your program
  *
  * @ac: number of arguments
  * @av: array of ac elements
  *
  * Return: Success --> pointer to a new string
  *           Fail  --> NULL
  */
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j;
	int len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}
	len++;

	s = malloc(sizeof(char) * len);
	if (s == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[i] = av[i][j];
		}
	/*	s[i] = '\n';*/
	}
	return (s);
}
