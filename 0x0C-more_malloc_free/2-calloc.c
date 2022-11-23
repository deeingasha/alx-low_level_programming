#include "main.h"

/**
  * _calloc - allocates memory set to zero for an array using malloc
  *
  * @nmemb: number of elements in array
  * @size: size of each element in bytes
  *
  * Return: pointer to the allocated memory
  *         NULL --> malloc failed or nmemb/ size is 0
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*((char *)arr + i) = 0; /* got an error trying to use void*/
		arr = (void *)arr;
	}
	return (arr);
}
