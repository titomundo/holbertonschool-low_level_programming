#include "main.h"

/**
 * _strncat - appends n bytes of a string to the end of another string
 * @dest: end string
 * @src: string to append
 * @n: number of bytes to copy
 *
 * Return: char*
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	return (dest);
}
