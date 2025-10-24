#include "main.h"

/**
 * puts_half - prints the second part of a string to stdout
 * @str: string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, n;
	int len = 0;

	while (str[len] != '\0')
		len++;

	n = len / 2;

	for (i = n; i < len; i++)
		_putchar(str[i]);


	_putchar('\n');
}
