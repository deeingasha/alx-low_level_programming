#include "function_pointers.h"

/**
  * array_iterator - function that executes a function given as a parameter
  *        on each element of an array
  *
  * @array: an array of integers
  * @size: size of the array
  * @action: function pointer to a function that takes an int
  *
  * Return: void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
