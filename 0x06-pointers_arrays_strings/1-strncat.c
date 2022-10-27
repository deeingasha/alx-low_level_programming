#include "main.h"

/**
  * _strncat - concatenates two strings similar to strncat.
  *
  * @dest: string 1
  * @src: string to append
  * @n: max bytes of src to append
  *
  * Return: pointer to resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n) /* each char is 1 byte */
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
