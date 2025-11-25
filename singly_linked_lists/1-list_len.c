#include "lists.h"
#include <stdio.h>

/**
 * list_len - gets the number of elements in a linked list
 * @h: input list
 *
 * Return: length of the linked list
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}

	return (n);
}
