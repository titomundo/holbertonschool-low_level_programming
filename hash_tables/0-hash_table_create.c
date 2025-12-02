#include "hash_tables.h"

/**
* hash_table_create - creates a hash table
* @size: size of the table
*
* Return: pointer to the table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	 hash_table_t *table;
	 hash_node_t **array;

	if (size < 1)
		return (0);

	table = malloc(sizeof(hash_table_t));

	if (!table)
		return (0);

	array = malloc(sizeof(hash_node_t) * size);

	if (!array)
		return (0);

	table->size = size;
	table->array = array;

	return (table);
}
