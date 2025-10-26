#include "main.h"

/**
 * leet - encodes a string to 1337
 * @s: string to encode 
 *
 * Return: char*
 */
char *leet(char *s)
{
	int i = 0;
	int j = 0;
	char *codes = "Aa4Ee3Oo0Tt7Ll1";

	while (s[i] != '\0')
	{
		for (j = 0; j < 15; j += 3)
		{
			if (s[i] == codes[j] || s[i] == codes[j + 1])
				s[i] = codes[j + 2];
		}

		i++;
	}

	return (s);
}
