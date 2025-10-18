#include "main.h"

/**
 * print_alphabet_x10 - abcx10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char abc[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 26; i++)
			_putchar(abc[i]);
	}
}
