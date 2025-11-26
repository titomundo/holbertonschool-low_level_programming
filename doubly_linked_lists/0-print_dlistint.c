#include "lists.h"

/**
 * print_dlistint - prints a double linked list
 * @h: input double list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}

