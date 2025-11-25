#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds an element to the end of a linked list
 * @head: input list
 * @str: data for new node
 *
 * Return: address to new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new = malloc(sizeof(list_t));
	list_t *temp;

	if (!new)
		return (0);

	new->str = strdup(str);

	while (str[i] != '\0')
		i++;

	new->len = i;
	new->next = NULL;
	temp = *head;

	if (temp)
	{
		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}
	else
		*head = new;

	return (*head);
}
