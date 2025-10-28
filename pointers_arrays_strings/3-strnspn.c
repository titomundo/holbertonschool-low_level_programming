#include "main.h"

/**
 * _memcpy - writes n amount of bytes (b) from src to dest
 * @src: source
 * @dest: destination
 * @n: amount of bytes to copy
 *
 * Return: *char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
