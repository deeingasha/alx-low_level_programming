#include "main.h"
#include <stdlib.h>

/**
  * strtow - splits a string into words
  *
  * @str: string to split
  *
  * Return: Success --> pointer to an array of null-terminated words
  *           Fail  --> NULL
  */
char **strtow(char *str)
{
	char **ptr;
/*	int i;*/

	if (str == NULL || *str == 0)
		return (NULL);

	/*
	 * count the  elements in the string
	 * count the number of words
	 *
	 * allocate space with malloc
	 * separate and store
	 *
	 */
	ptr = malloc(sizeof(char) * 4193); /* random to compile*/
	return (ptr);
}
