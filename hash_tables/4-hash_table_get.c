#include "hash_tables.h"
#include <stdio.h>

/**
* hash_table_get - returns the value associated with a key
* @ht: hash table
* @key: pair key
*
* Return: pair value of key, NULL if it was found
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (!key || (strlen(key) == 0) || !ht)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);

		temp = temp->next;
	}

	return (0);
}
