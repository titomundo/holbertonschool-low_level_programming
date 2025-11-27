#include "lists.h"

/**
 * insert_dnodeint_at_index - get the sum of the values of a list
 * @h: input list
 * @idx: slot number to add the new node
 * @n: data for new node
 *
 * Return: dlistint
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *temp = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->n = n;

	if (idx == 0)
	{
		new->next = *h;

		if (temp)
			temp->prev = new;

		*h = new;
		return (*h);
	}

	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
	{
		free(new);
		return (0);
	}

	new->prev = temp;
	new->next = temp->next;
	temp->next = new;

	if (new->next != NULL)
		new->next->prev = new;

	return (new);
}
