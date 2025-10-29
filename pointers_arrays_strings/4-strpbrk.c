#include "main.h"

/**
 * _strpbrk - returns the first occurrance of a byte of accept in s
 * @s: source
 * @accept: chars to search for
 *
 * Return: *char
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);

			j++;
		}

		i++;
	}

	return (0);
}
