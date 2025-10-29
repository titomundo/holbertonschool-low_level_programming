#include "main.h"

/**
 * _strstr - returns the first occurrance of a substring in a string
 * @haystack: source
 * @needle: chars to search for
 *
 * Return: *char
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (*needle == '\0')
		return (haystack);

	while (haystack[i] != '\0')
	{
		j = 0;

		while (haystack[i + j] == needle[j])
		{
			j++;

			if (needle[j] == '\0')
				return (&haystack[i]);
		}

		i++;
	}

	return (0);
}
