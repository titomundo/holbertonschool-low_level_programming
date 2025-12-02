#include "hash_tables.h"

/**
* key_index - gets the index of a key based on tables length
* @key: string to hash
* @size: size of the table
*
* Return: index of hashed value
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
