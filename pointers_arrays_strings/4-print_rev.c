#include "main.h"

/**
 * print_rev - prints a string in reverse to stdout
 * @s: string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (s[i] != '\0')
	{
		_putchar(s[len - i]);
		i++;
	}

	_putchar('\n');
}
