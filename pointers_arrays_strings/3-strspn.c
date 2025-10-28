#include "main.h"

/**
 * _strchr - returns the length of a prefix substring
 * @s: source
 * @accept: chars to search for
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int size = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while(accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				i++;
				size++;
			}

			j++;
		}

		i++;
	}

	return (size);
}
