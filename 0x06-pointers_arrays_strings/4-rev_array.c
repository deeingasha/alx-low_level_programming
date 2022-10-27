#include "main.h"

/**
  * reverse_array - reverses the contents of an array.
  *
  * @a: an array of integers
  * @n: number of elements of the array
  *
  * Return: Void
  */
void reverse_array(int *a, int n)
{
	int i;
	int j = 0;
	int tmp[500];

	for (i = n - 1; i >= 0; i--)  /* arrays start from index 0 */
	{
		tmp[j] = a[i];
		j++;
	}
	for (i = 0; i < n; i++)
	{
		a[i] = tmp[i];
	}
}
