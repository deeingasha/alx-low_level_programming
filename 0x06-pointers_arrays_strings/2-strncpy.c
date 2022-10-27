#include "main.h"

/**
  * _strncpy - copies a string, exactly like strncpy
  *
  * @dest: where string will be copied
  * @src: string to be copied
  * @n: max bytes of src to copy
  *
  * Return: pointer to dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
