#include "main.h"

/**
  * _realloc - allocates a block of memory using malloc and free
  *
  * @ptr: pointer to memory previously allocated by malloc
  * @old_size: size in bytes of space allocated for ptr
  * @new_size: new size to allocate
  *
  * Return: NULL --> new_size == 0 && ptr != NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < new_size && i < old_size; i++)
		p[i] = *((char *)ptr + i);/*can't use void pointer in arithmetic*/
	free(ptr);
	p = (void *)p;
	return (p);
}
