#include "main.h"

/**
  * _strcpy - copies string pointed to by src, including the \0 to the buffer
  *     pointed to by dest
  *
  * @dest: destination to copy to
  * @src: string to copy
  *
  * Return: Pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}
