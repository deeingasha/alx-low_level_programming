#include "function_pointers.h"

/**
  * int_index - searches for an integer
  *
  * @array: array of integers
  * @size: size of array
  * @cmp: pointer to the function to be used to compare values
  *
  * Return: index of first element for which cmp doesn't return 0
  *         -1 --> no element matches or size <= 0
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
}
