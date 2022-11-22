#include "main.h"

/**
  * malloc_checked - allocates memory with malloc
  *
  * @b: size of memory to allocate
  *
  * Return:SUCCESS --> pointer to allocated memmory
  *         FAIL  --> exit with status value of 98
  */
void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);
	if (mem == NULL)
		exit(98);

	return (mem);
}
