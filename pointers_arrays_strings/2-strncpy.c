#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: end string
 * @src: string to append
 * @n: number of bytes to copy
 *
 * Return: char*
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (src[len] != '\0')
		len++;

	for (i = 0; i < n; i++)
	{
		if (i > len)
			dest[i] = '\0';
		else
			dest[i] = src[i];
	}

	return (dest);
}
