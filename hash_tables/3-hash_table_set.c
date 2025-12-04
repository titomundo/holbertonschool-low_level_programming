#include "hash_tables.h"
#include <stdio.h>
#include <string.h>

/**
* hash_table_set - inserts an element to a hash table
* @ht: hash table
* @key: key to access value
* @value: value to store and hash
*
* Return: 1 on success, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	if (!key || (strlen(key) == 0) || !value || !ht)
		return (0);

	index = key_index((unsigned char *) key, ht->size);

	if (ht->array[index])
	{
		ht->array[index]->value = strdup(value);
		ht->array[index]->key = strdup(key);
		return (1);
	}

	new = malloc(sizeof(hash_node_t));

	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
