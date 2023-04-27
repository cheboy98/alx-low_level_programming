#include <stdio.h>
#include "lists.h"

/**
 * list_len - print the number of elements in a linked list
 * @h: pointer to the first element of the list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
