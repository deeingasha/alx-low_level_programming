#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * _strdup - returns a pointer to a newly allocated space in memory, which
  *           contains a copy of the argument string
  *
  * @str: string to copy
  *
  * Return: Success --> pointer to the duplicated string
  *         Null --> insufficient memory available
  */
char *_strdup(char *str)
{
	int i = 0;
	char *cp;
	int len = 0;

	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	len++;

	cp = malloc(sizeof(char) * (len));
	
	if (str == NULL || cp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		cp[i] = str[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}
