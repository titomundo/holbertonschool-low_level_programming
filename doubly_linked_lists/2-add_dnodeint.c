#include "lists.h"

/**
 * add_dnodeint - adds a new node to a doubly linked list
 * @head: input list
 * @n: data for new node
 *
 * Return: address to head
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (0);

	new->n = n;
	new->next = *head;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (*head);
}
