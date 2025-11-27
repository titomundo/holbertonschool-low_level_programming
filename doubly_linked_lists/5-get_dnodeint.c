#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of a list
* @head: input list
* @index: index to found
*
* Return: dlistint_t
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i != index)
			head = head->next;
		else
			return (head);

		i++;
	}

	return (0);
}
