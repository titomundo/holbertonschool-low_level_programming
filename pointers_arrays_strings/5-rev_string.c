#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0;
	char temp;
	char *l;
	char *r;

	while (s[len] != '\0')
		len++;

	l = s;
	r = s + (len - 1);
	len--;

	while (l < r)
	{
		temp = *l;
		*l = *r;
		*r = temp;

		l++;
		r--;
	}
}
