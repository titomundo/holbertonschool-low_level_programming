#include "hash_tables.h"

/**
 * free_list - frees the memory of a linked list
 * @head: input list
 *
 * Return: void
 */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}
}

/**
* hash_table_delete - frees a hash table
* @ht: hash table
*
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}
