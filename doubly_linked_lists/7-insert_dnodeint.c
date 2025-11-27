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
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int i = 0;

	if (!new)
		return (0);

	new->n = n;
	new->next = *h;

	if (temp && idx != 0)
	{
		while (temp->next && ((i + 1) != idx))
		{
			if (i > idx)
			{
				free(new);
				return (0);
			}

			temp = temp->next;
			i++;
		}

		new->prev = temp;
		new->next = temp->next;
		temp->next = new;
	}
	else
		*h = new;

	return (*h);
}
