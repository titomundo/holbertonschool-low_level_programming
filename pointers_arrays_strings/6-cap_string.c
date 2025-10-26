#include "main.h"

/**
 * is_separator - returns true if is c is a valid separator
 * @c: char to evaluate
 *
 * Return: int
 */
int is_separator(char c)
{
	switch (c)
	{
	case '\n':
	case '\t':
	case 32:
	case 33:
	case 34:
	case 40:
	case 41:
	case 58:
	case 59:
	case 46:
	case 63:
	case 123:
	case 125:
		return (1);

	default:
		return (0);
	}
}

/**
 * cap_string - capitalizes all words in a string
 * @s: string to convert
 *
 * Return: char*
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap_next;

	while (s[i] != '\0')
	{
		if (is_separator(s[i]) && (s[i + 1] >= 97 && s[i + 1] <= 122))
			cap_next = 1;
		else if ((s[i] >= 97 && s[i] <= 122) && (cap_next || i == 0))
		{
			s[i] = s[i] - 32;
			cap_next = 0;
		}

		i++;
	}

	return (s);
}
