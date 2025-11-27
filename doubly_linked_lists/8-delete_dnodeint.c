#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at the specified index
 * @head: input list
 * @index: slot number to delete
 *
 * Return: 1 if succeded, -1 if failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = *head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL)
		return (-1);

	if (temp->prev)
		temp->prev->next = temp->next;

	if (temp->next)
		temp->next->prev = temp->prev;

	if (*head == temp)
		*head = temp->next;

	free(temp);

	return (1);
}
