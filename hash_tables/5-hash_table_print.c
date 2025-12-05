#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;

	printf("{");

	for (i = 0; i < ht->size; i++)
	{

		while (ht->array[i])
		{
			if (j == 0)
				j += 1;
			else
				printf(", ");


			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}

	printf("}\n");
}
