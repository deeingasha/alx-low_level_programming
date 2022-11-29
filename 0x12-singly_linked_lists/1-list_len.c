#include "lists.h"
#include <stdio.h>

/**
  * list_len - returns the number of elements in a linked list_t list
  *
  * @h: a linked list struct
  *
  * Return: the number of elements
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	for (; h; count++)
		h = h->next;

	return (count);
}
