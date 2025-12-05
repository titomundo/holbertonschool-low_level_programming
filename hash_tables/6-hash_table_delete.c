#include "hash_tables.h"

/**
* hash_table_delete - frees a hash table
* @ht: hash table
*
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			temp = ht->array[i];
			ht->array[i] = ht->array[i]->next;
			free(temp->value);
			free(temp->key);
		}
	}

	free(ht->array);
	free(ht);
}
