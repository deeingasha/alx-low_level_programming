#include "lists.h"
#include <stdio.h>

/**
  * print_list - prints all the elements of a list_t list
  *
  * @h: a linked list struct
  *
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *tmp = h;

	for (count = 0; tmp; count++)
	{
		if (tmp->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", tmp->len, tmp->str);
		tmp = tmp->next;
	}
	return (count);
}
