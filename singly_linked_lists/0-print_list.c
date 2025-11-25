#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a singly linked list
 * @h: input list
 *
 * Return: length of the printed list
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (h->str)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		n++;
	}

	return (n);
}
