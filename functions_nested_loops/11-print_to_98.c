#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers from n to 98
 * @n: int to start count
 *
 * Return: void
 */
void print_to_98(int n)
{
	int i;
	int diff = 98 - n;

	if (diff < 0)
		diff *= -1;

	for (i = 0; i <= diff ; i++)
	{
		if (n < 98)
			printf("%d", n + i);
		else if (n == 98)
			printf("%d", n);
		else
			printf("%d", n - i);

		if (i != diff)
		{
			putchar(',');
			putchar(' ');

		}
	}

	putchar('\n');
}
