#include "main.h"
#include <stdlib.h>

/**
 * _len - returns the length of a string
 * @s: string to measure
 *
 * Return: int
 */
unsigned int _len(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _calloc - allocates an array filled with 0
 * @nmemb: number of elements
 * @size: size of elements
 *
 * Return: void*
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i, len;

	if (nmemb == 0 || size == 0)
		return (0);

	len = nmemb * size;

	a = malloc(len);

	if (a == NULL)
		return (0);

	for (i = 0; i < len; i++)
		a[i] = 0;

	return (a);
}
