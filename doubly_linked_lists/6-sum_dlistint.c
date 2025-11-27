#include "lists.h"

/**
 * sum_dlistint - get the sum of the values of a list
 * @head: input list
 *
 * Return: int
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
