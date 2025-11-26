#include "lists.h"

/**
 * dlistint_len - prints a double linked list
 * @h: input double list
 *
 * Return: length of list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}

