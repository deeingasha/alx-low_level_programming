#include "main.h"

/**
  * array_range - creates and array of integers ordered from min to max
  *
  * @min: smallest int
  * @max: largest int
  *
  * Return: pointer to the ordered array
  *           NULL --> malloc failed or min > max
  */
int *array_range(int min, int max)
{
	int i;
	int len;
	int *arr;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
