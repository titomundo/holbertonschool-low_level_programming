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

	while (1)
	{
		if ((s[i] == '\0' && c != '\0') || i > 9999)
			break;
		else if (s[i] == c)
			return (&s[i]);

		i++;
	}

	return (v);
}
