#include "lists.h"
#include <stdio.h>

/**
 * add_node - adds a new element to a linked list
 * @head: input list
 * @str: data for new node
 *
 * Return: address to head
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new = malloc(sizeof(list_t));

	if (!new)
		return (0);

	new->str = strdup(str);

	while (str[i] != '\0')
		i++;

	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
