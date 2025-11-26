#include "lists.h"

/**
 * add_dnodeint_end - adds a new node to the end of a doubly linked list
 * @head: input list
 * @n: data for new node
 *
 * Return: address to new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;


	if (!new)
		return (0);

	new->n = n;
	new->next = *head;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
		new->prev = temp;
		new->next = NULL;
	}
	else
		*head = new;

	return (*head);
}
