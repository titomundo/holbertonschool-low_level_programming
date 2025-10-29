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
		return haystack;

	while (haystack[i] != '\0')
	{
		j = 0;

		while (needle[j] != '\0')
		{
			if (haystack[i] == needle[j])
				break;
			else if (needle[j + 1] == '\0') 
				return (&needle[i]);

			j++;
		}

		i++;
	}

	return (0);
}
