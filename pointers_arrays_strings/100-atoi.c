#include "main.h"

/**
 * _atoi - converts a string to int
 * @s: string to convert
 *
 * Return: int
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int neg = 0;
	int pos = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 43)
			pos++;
		else if (s[i] == 45)
			neg++;

		if (s[i] >= 48 && s[i] <= 57)
		{
			n = n * 10 + (s[i] - '0');

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}

		i++;
	}

	if (neg > pos)
		n *= -1;

	return (n);
}
