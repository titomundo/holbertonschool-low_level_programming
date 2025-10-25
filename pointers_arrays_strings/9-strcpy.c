#include "main.h"

/**
 * _strcpy - copies a string to a pointer
 * @dest: copy string
 * @src: string to copy
 *
 * Return: char *
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}

	return (dest);
}
