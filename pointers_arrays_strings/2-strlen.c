#include "main.h"

/**
 * _strlen - returns the len of a string
 * @s: string to measure
 *
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
