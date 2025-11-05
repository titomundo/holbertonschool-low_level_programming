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
 * string_nconcat - returns contents of s1 followed by n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concat
 *
 * Return: char*
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = _len(s1);
	unsigned int len2 = _len(s2);
	char *str;

	if (n > len2)
		n = len2;

	str = malloc(len1 + n + 1);

	if (str == NULL)
		return (0);

	for (i = 0; i < len1; i++)
		str[i] = s1[i];

	for (j = 0; j < n; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}
