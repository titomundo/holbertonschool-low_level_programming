#include "main.h"

/**
 * _strchr - returns pointer to the first instance of c in s
 * @s: source
 * @c: char to search for
 *
 * Return: *char
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	char *v = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}

	if (c == '\0')
		return (&s[i + 1]);

	return (v);
}
