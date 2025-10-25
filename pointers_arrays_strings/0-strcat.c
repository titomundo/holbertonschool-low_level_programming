#include "main.h"

/**
 * _strcat - appends a string to the end of another string
 * @dest: end string
 * @src: string to append
 *
 * Return: char*
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[len] != '\0')
		len++;

	while (src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}

	return (dest);
}
