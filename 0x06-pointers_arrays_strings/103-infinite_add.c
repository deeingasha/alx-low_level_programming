#include "main.h"

/**
  * infinite_add - adds two numbers
  *
  * @n1: first number
  * @n2: second number
  * @r: buffer to store the result
  * @size_r: buffer size
  *
  * Return: if a can store the sum --> a pointer to the result.
  *         if r can't store the sum --> 0
  */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	int n1_length = 0;
	int n2_length = 0;

	for (i = 0; *(n1 + i); i++)
		n1_length++;
	for (i = 0; *(n2 + i); i++)
		n1_length++;

	if (size_r <= n1_length + 1 || size_r <= n2_length + 1)
		return (0);
	/**
	  * How to add strings ...maybe convert to int first?
	  * Also how to display it all
	  */
	return (r);
}
