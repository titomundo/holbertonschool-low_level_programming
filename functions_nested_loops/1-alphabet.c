#include "main.h"

/**
 * print_alphabet - abc
 *
 * Return: void
 */
void print_alphabet(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; i <= 26; i++)
		_putchar(abc[i]);
}
